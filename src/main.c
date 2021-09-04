#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <errno.h>
#include "lang.h"


#define End          "\033[0;0m"
#define Bold         "\033[1m"
#define Dull         "\033[2m"
#define Italic       "\033[3m"
#define Underline    "\033[4m"
#define Inverted     "\033[7m"

#define DarkBlack    "\033[30m"
#define DarkRed      "\033[31m"
#define DarkGreen    "\033[32m"
#define DarkYellow   "\033[33m"
#define DarkBlue     "\033[34m"
#define DarkMagenta  "\033[35m"
#define DarkCyan     "\033[36m"
#define DarkWhite    "\033[37m"
#define LightBlack   "\033[90m"
#define LightRed     "\033[91m"
#define LightGreen   "\033[92m"
#define LightYellow  "\033[93m"
#define LightBlue    "\033[94m"
#define LightMagenta "\033[95m"
#define LightCyan    "\033[96m"
#define LightWhite   "\033[97m"

const char *strext(const char *filename) {
  const char *dot = strrchr(filename, '.');
  if(!dot || dot == filename) return NULL;
  return dot + 1;
}


#define pexit(str, n)        \
  do{                        \
    fputs(LightRed, stderr);  \
    perror(str);             \
    exit(n);                 \
    /*fputs(End, stderr); */  \
  } while(0);

void die(const char *str, ...);



typedef struct {
  size_t line, blank, comment, code, files;
} stat_t ;


typedef struct {
  char *mtl_comment[2];
  char *snl_comment;
  stat_t stats;
} language_t;



int main (int argc, char **argv)
{
  language_t c = {.mtl_comment={"/*", "*/"}, .snl_comment="//"};

  struct stat filestat;
  int fd = open("main.c", O_RDONLY);
  if(fd==-1)
    pexit("Unable to open file", 2);
  if(fstat(fd, &filestat) !=0) {
    perror("stat failed");
    exit(1);
  }

  char *data = mmap(NULL, filestat.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
  if(data == MAP_FAILED) {
    perror("mmap failed");
    exit(2);
  }


  bool recent_newline=false;
  bool inComment=false;
  bool inSmallComment=false;
  size_t i=0;
  while(i<=filestat.st_size){
    ++i;
    if(data[i]=='\n'){
      if(recent_newline) ++c.stats.blank;
      else {
        if(!(inComment||inSmallComment)){
          ++c.stats.code;
          inSmallComment=false;
        }
        else ++c.stats.comment;
      }
      ++c.stats.line;
      recent_newline=true;
    }
    else {
      if(data[i]==c.snl_comment[0]){
        if(strncmp(&data[i], c.snl_comment, strlen(c.snl_comment))==0){
          while(data[i+1]!='\n') i++;
          if(recent_newline) {
            ++c.stats.comment;
            inSmallComment=true;
          }
        } 
      } 
      if(!inComment){
        if(data[i]==c.mtl_comment[0][0]){
          if(strncmp(&data[i], c.mtl_comment[0], strlen(c.mtl_comment[0]) )==0){
            inComment=true;
          }
        }
      } else{
        if(data[i]==c.mtl_comment[1][0]){
          if(strncmp(&data[i], c.mtl_comment[1], strlen(c.mtl_comment[1]) )==0){
            inComment=false;
          }
        }
      }
      recent_newline=false;
    }
  }
  puts("Language:\tTotal Lines\tBlank Lines\tComment lines\tCode Lines");
  printf("c:\t\t%zu\t\t%zu\t\t%zu\t\t%zu\n", c.stats.line, c.stats.blank, c.stats.comment, c.stats.code);
  return 0;
}


void die(const char *str, ...){
  fputs(LightRed, stderr);
  va_list vp;
  va_start(vp, str);
  vfprintf(stderr, str, vp);
  va_end(vp);
  /* fputs(End, stderr); */
  exit(1);
}

