#include "hash.h"
#include <stddef.h>
enum e_lang {
  ActionScript,
  Ada,
  Agda,
  AmbientTalk,
  Asp,
  AspNet,
  Assembly,
  Autoconf,
  Awk,
  Batch,
  BourneShell,
  C,
  CCppHeader,
  CMake,
  CSharp,
  CShell,
  Clojure,
  ClojureScript,
  ClojureC,
  CoffeeScript,
  ColdFusion,
  ColdFusionScript,
  Coq,
  Cpp,
  Crystal,
  Css,
  CUDA,
  CUDAHeader,
  D,
  Dart,
  Dhall,
  DeviceTree,
  Docker,
  Elixir,
  Elm,
  Erlang,
  Forth,
  FortranLegacy,
  FortranModern,
  FSharp,
  Gherkin,
  Glsl,
  Go,
  Groovy,
  Handlebars,
  Haskell,
  Hex,
  Html,
  INI,
  Idris,
  IntelHex,
  Isabelle,
  Jai,
  Java,
  JavaScript,
  Json,
  Jsx,
  Julia,
  Kotlin,
  Less,
  LinkerScript,
  Lean,
  Lisp,
  Lua,
  Make,
  Makefile,
  Markdown,
  Mustache,
  Nim,
  Nix,
  OCaml,
  ObjectiveC,
  ObjectiveCpp,
  OpenCl,
  Oz,
  Pascal,
  Perl,
  Php,
  Polly,
  PowerShell,
  Prolog,
  Protobuf,
  Puppet,
  PureScript,
  Pyret,
  Python,
  Qcl,
  Qml,
  R,
  Razor,
  Reason,
  Ron,
  ReStructuredText,
  Ruby,
  RubyHtml,
  Rust,
  SaltStack,
  Sass,
  Scala,
  Sml,
  Solidity,
  Sql,
  Stylus,
  Svelte,
  Swift,
  Tcl,
  Terraform,
  Tex,
  Text,
  Toml,
  TypeScript,
  Tsx,
  UnrealScript,
  VimScript,
  Vue,
  Wolfram,
  XML,
  Yacc,
  Yaml,
  Zig,
  Zsh,
  Haxe,
  Unrecognized,
};


typedef struct {
  size_t line, blank, comment, code, files;
} stat_t ;


typedef struct {
  char *mtl_comment[2];
  char *snl_comment;
  stat_t stats;
} language_t;

language_t languages[Unrecognized] = {
  {.snl_comment="//", .mtl_comment={"/*", "*/"}},
  {.snl_comment="--", .mtl_comment=NULL},
};


char *lang_to_str(enum e_lang e){
  switch(e){
    case ActionScript:     return "ActionScript";
    case Ada:              return "Ada";
    case Agda:             return "Agda";
    case AmbientTalk:      return "AmbientTalk";
    case Asp:              return "ASP";
    case AspNet:           return "ASP.NET";
    case Assembly:         return "Assembly";
    case Autoconf:         return "Autoconf";
    case Awk:              return "Awk";
    case Batch:            return "Batch";
    case BourneShell:      return "Bourne Shell";
    case C:                return "C";
    case CCppHeader:       return "C/C++ Header";
    case CMake:            return "CMake";
    case CSharp:           return "C#";
    case CShell:           return "C Shell";
    case Clojure:          return "Clojure";
    case ClojureScript:    return "ClojureScript";
    case ClojureC:         return "ClojureC";
    case CoffeeScript:     return "CoffeeScript";
    case ColdFusion:       return "ColdFusion";
    case ColdFusionScript: return "ColdFusionScript";
    case Coq:              return "Coq";
    case Cpp:              return "C++";
    case Crystal:          return "Crystal";
    case Css:              return "CSS";
    case CUDA:             return "CUDA";
    case CUDAHeader:       return "CUDA Header";
    case D:                return "D";
    case Dart:             return "Dart";
    case Dhall:            return "Dhall";
    case DeviceTree:       return "DeviceTree";
    case Docker:           return "Docker";
    case Elixir:           return "Elixir";
    case Elm:              return "Elm";
    case Erlang:           return "Erlang";
    case Forth:            return "Forth";
    case FortranLegacy:    return "FORTRAN Legacy";
    case FortranModern:    return "FORTRAN Modern";
    case FSharp:           return "F#";
    case Gherkin:          return "Gherkin";
    case Glsl:             return "GLSL";
    case Go:               return "Go";
    case Groovy:           return "Groovy";
    case Handlebars:       return "Handlebars";
    case Haskell:          return "Haskell";
    case Hex:              return "Hex";
    case Html:             return "HTML";
    case INI:              return "INI";
    case Idris:            return "Idris";
    case IntelHex:         return "Intel Hex";
    case Isabelle:         return "Isabelle";
    case Jai:              return "Jai";
    case Java:             return "Java";
    case JavaScript:       return "JavaScript";
    case Json:             return "JSON";
    case Jsx:              return "Jsx";
    case Julia:            return "Julia";
    case Kotlin:           return "Kotlin";
    case Less:             return "Less";
    case LinkerScript:     return "LinkerScript";
    case Lean:             return "Lean";
    case Lisp:             return "Lisp";
    case Lua:              return "Lua";
    case Make:             return "Make";
    case Makefile:         return "Makefile";
    case Markdown:         return "Markdown";
    case Mustache:         return "Mustache";
    case Nim:              return "Nim";
    case Nix:              return "Nix";
    case OCaml:            return "OCaml";
    case ObjectiveC:       return "Objective-C";
    case ObjectiveCpp:     return "Objective-C++";
    case OpenCl:           return "OpenCL";
    case Oz:               return "Oz";
    case Pascal:           return "Pascal";
    case Perl:             return "Perl";
    case Php:              return "PHP";
    case Polly:            return "Polly";
    case PowerShell:       return "PowerShell";
    case Prolog:           return "Prolog";
    case Protobuf:         return "Protobuf";
    case Puppet:           return "Puppet";
    case PureScript:       return "PureScript";
    case Pyret:            return "Pyret";
    case Python:           return "Python";
    case Qcl:              return "Qcl";
    case Qml:              return "Qml";
    case R:                return "R";
    case Razor:            return "Razor";
    case Reason:           return "Reason";
    case Ron:              return "RON";
    case ReStructuredText: return "reStructuredText";
    case Ruby:             return "Ruby";
    case RubyHtml:         return "RubyHtml";
    case Rust:             return "Rust";
    case SaltStack:        return "SaltStack";
    case Sass:             return "Sass";
    case Scala:            return "Scala";
    case Sml:              return "SML";
    case Solidity:         return "Solidity";
    case Sql:              return "SQL";
    case Stylus:           return "Stylus";
    case Svelte:           return "Svelte";
    case Swift:            return "Swift";
    case Tcl:              return "Tcl";
    case Terraform:        return "Terraform";
    case Tex:              return "TeX";
    case Text:             return "Plain Text";
    case Toml:             return "Toml";
    case TypeScript:       return "TypeScript";
    case Tsx:              return "Typescript JSX";
    case UnrealScript:     return "UnrealScript";
    case VimScript:        return "VimL";
    case Vue:              return "Vue";
    case Wolfram:          return "Wolfram";
    case XML:              return "XML";
    case Yacc:             return "Yacc";
    case Yaml:             return "YAML";
    case Zig:              return "Zig";
    case Zsh:              return "Z Shell";
    case Haxe:             return "Haxe";
    case Unrecognized:     return "Unrecognized";
  }
}


unsigned long hash(char *str){
  unsigned long hash = 5381;
  int c;

  while ((c = *str++))
    hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

  return hash;
}

enum e_lang typefromext(char *ext){
  switch(hash(ext)){
    case FORTH1:
    case FORTH2:
    case FORTH3:
    case FORTH4:
    case FORTH5:
    case FORTH6:
    case FORTH7:
    case FORTH8:
    case FORTH9:
    case FORTH10:
    case FORTH11:
      return Forth;
    case ADA1:
    case ADA2:
    case ADA3:
    case ADA4:
      return Ada;
    case AGDA: return Agda;
    case ACTIONSCRIPT: return ActionScript;
    case AMBIENTTALK: return AmbientTalk;
    case AWK: return Awk;
    case BATCH1:
    case BATCH2:
    case BATCH3:
              return Batch;
    case C1:
    case C2:
    case C3:
              return C;
    case CPP1:
    case CPP2:
    case CPP3:
    case CPP4:
    case CPP5:
              return Cpp;
    case COLDFUSIONSCIPRT: return ColdFusionScript;
    case CMAKE: return CMake;
    case OPENCL: return OpenCl;
    case COFFEESCIPRT: return CoffeeScript;
    case CRYSTAL: return Crystal;
    case CSHARP: return CSharp;
    case CSHELL: return CShell;
    case CSS1:
    case CSS2:
    case CSS3:
    case CSS4:
                 return Css;
    case CUDAF: return CUDA;
    case CUDAHEADERF: return CUDAHeader;
    case DF: return D;
    case DART: return Dart;
    case DHALL: return Dhall;
    case DEVICETREE1: 
    case DEVICETREE2: 
                return DeviceTree;
    case DOCKER: return Docker;
    case LISP1:
    case LISP2:
    case LISP3:
    case LISP4:
    case LISP5:
    case LISP6:
                 return Lisp;
    case ELIXIR1:
    case ELIXIR2:
                 return Elixir;
    case ELM: return Elm;
    case ERLANG1:
    case ERLANG2:
              return Erlang;
    case GHERKIN: return Gherkin;
    case FSHARP1:
    case FSHARP2:
                  return FSharp;
    case GLSL1:
    case GLSL2:
    case GLSL3:
    case GLSL4:
    case GLSL5:
    case GLSL6:
                  return Glsl;
    case GO: return Go;
    case CPPHEADER1:
    case CPPHEADER2:
    case CPPHEADER3:
    case CPPHEADER4:
             return CCppHeader;
    case HANDLEBARS1:
    case HANDLEBARS2:
             return Handlebars;
    case HASKELL: return Haskell;
    case HTML: return Html;
    case IDRIS1:
    case IDRIS2:
               return Idris;
    case INIH: return INI;
    case JAI: return Jai;
    case JAVA: return Java;
    case JULIA: return Julia;
    case JAVASCIPRT1:
    case JAVASCIPRT2:
                return JavaScript;
    case JSX: return Jsx;
    case KOTLIN1:
    case KOTLIN2:
              return Kotlin;
    case LINKERSCIPRT: return LinkerScript;
    case LEAN1:
    case LEAN2:
                       return Lean;
    case LESS: return Less;
    case LUA: return Lua;
    case OBJC: return ObjectiveC;
    case OCAML1:
    case OCAML2:
               return OCaml;
    case WOLFRAM1:
    case WOLFRAM2:
               return Wolfram;
    case BASH: return BourneShell;
    case ASP1:
    case ASP2:
               return Asp;
    case ASPNET1:
    case ASPNET2:
    case ASPNET3:
    case ASPNET4:
    case ASPNET5:
    case ASPNET6:
    case ASPNET7:
               return AspNet;
    case AUTOCONF: return Autoconf;
    case CLOJURE: return Clojure;
    case CLOJURESCRIPT: return ClojureScript;
    case CLOJUREC: return ClojureC;
    case FORTRANLEG1:
    case FORTRANLEG2:
    case FORTRANLEG3:
    case FORTRANLEG4:
    case FORTRANLEG5:
                   return FortranLegacy;
    case FORTANNEW1:
    case FORTANNEW2:
    case FORTANNEW3:
    case FORTANNEW4:
                   return FortranModern;
    case MAKEFILE1:
    case MAKEFILE2:
                   return Makefile;
    case OBJCPP: return ObjectiveCpp;
    case NIM: return Nim;
    case NIX: return Nix;
    case PHP: return Php;
    case PERL1:
    case PERL2:
              return Perl;
    case PUPPET: return Puppet;
    case QCL: return Qcl;
    case QML: return Qml;
    case RAZOR: return Razor;
    case MUSTACHE: return Mustache;
    case OZ: return Oz;
    case PROLOG1: case PROLOG2: return Prolog;
    case PASCAL: return Pascal;
    case HEX: return Hex;
    case INTELHEX: return IntelHex;
    case JSON: return Json;
    case MARKDOWN1:
    case MARKDOWN2:
               return Markdown;

    case RST: return ReStructuredText;
    case TEXT1:
    case TEXT2:
              return Text;
    case POLLY: return Polly;
    case PWSH1:
    case PWSH2:
    case PWSH3:
                return PowerShell;
    case PROTOBUF: return Protobuf;
    case PURESCIPT: return PureScript;
    case PYRET: return Pyret;
    case PYTHON: return Python;
    case RF: return R;
    case RUBY1:
    case RUBY2:
             return Ruby;
    case REASON1:
    case REASON2:
             return Reason;
    case RUBYHTML1:
    case RUBYHTML2:
             return RubyHtml;
    case RON: return Ron;
    case RUST: return Rust;
    case ASM1:
    case ASM2:
               return Assembly;
    case SASS1:
    case SASS2:
               return Sass;
    case SCALA1:
    case SCALA2:
               return Scala;
    case SALTSTACK: return SaltStack;
    case SML: return Sml;
    case SOLIDITY: return Solidity;
    case SQL: return Sql;
    case STYLUS: return Stylus;
    case SVELTE: return Svelte; 
    case SWIFT: return Swift;
    case TCL: return Tcl;
    case TERRAFORM: return Terraform;
    case TEX1:
    case TEX2:
                    return Tex;
    case TOML: return Toml;
    case TYPESCRIPT: return TypeScript;
    case ISABELLE: return Isabelle;
    case UNREAL1:
    case UNREAL2:
    case UNREAL3:
                   return UnrealScript;
    case COQ: return Coq;
    case VIM: return VimScript;
    case VUE: return Vue;
    case XMLF: return XML;
    case YAML1:
    case YAML2:
               return Yaml;
    case YACC: return Yacc;
    case ZIG: return Zig;
    case ZSH: return Zsh;
    case HAXE: return Haxe;





    default: 
               return Unrecognized;
  }

}
