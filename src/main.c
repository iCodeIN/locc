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
  if(!dot) return NULL;
  return (dot==filename)?filename:dot + 1;
}


#define pexit(str, n)        \
  do{                        \
    fputs(LightRed, stderr);  \
    perror(str);             \
    exit(n);                 \
    /*fputs(End, stderr); */  \
  } while(0);

void die(const char *str, ...);






int main (int argc, char **argv)
{
  /* printf("%s", lang_to_str(typefromext(strext(argv[1])))); */

  language_t c = {.mtl_comment={"/*", "*/"}, .snl_comment="//"};

  struct stat filestat;
  int fd = open("main.c", O_RDONLY);
  if(fd==-1)
    pexit("Unable to open file", 2);
  if(fstat(fd, &filestat) !=0) {
    pexit("stat failed", 1);
  }

  char *data = mmap(NULL, filestat.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
  if(data == MAP_FAILED) {
    pexit("mmap failed", 2);
  }


  bool recent_newline=true;
  bool inComment=false;
  bool justClosedComment=false;
  bool inSmallComment=false;
  size_t i=0;
  

  while(i<=filestat.st_size){
    if(data[i]=='\n'){
      if(recent_newline) ++c.stats.blank;
      else {
        if(!(inComment||inSmallComment)){
          if(justClosedComment){
            ++c.stats.comment;
            justClosedComment=false;
          }
          else{
            ++c.stats.code;
            inSmallComment=false;
          }
        }
        else{
          ++c.stats.comment;
          inSmallComment=false;
        }
      }
      ++c.stats.line;
      recent_newline=true;
    }
    else {
      justClosedComment=false;

      if(data[i]==c.snl_comment[0]){
        if(strncmp(&data[i], c.snl_comment, strlen(c.snl_comment))==0){
          while(data[i+1]!='\n') i++;
          if(recent_newline) inSmallComment=true;
        } 
      } 
      if(!inComment){
        if(data[i]==c.mtl_comment[0][0]){
          if(strncmp(&data[i], c.mtl_comment[0], strlen(c.mtl_comment[0]) )==0){
            i+=strlen(c.mtl_comment[0])-1;
            inComment=true;
          }
        }
      } else{
        if(data[i]==c.mtl_comment[1][0]){
          if(strncmp(&data[i], c.mtl_comment[1], strlen(c.mtl_comment[1]) )==0){
            i+=strlen(c.mtl_comment[0])-1;
            inComment=false;
            justClosedComment=true;
          }
        }
      }

      if(data[i]!=' '&&data[i]!='\t')
        recent_newline=false;

    }
    ++i;
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
  exit(1);
}

