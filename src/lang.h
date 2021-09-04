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


const char *lang_to_str(enum e_lang e){
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

