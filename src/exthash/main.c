#include <stdio.h>

unsigned long hash(char *str){
  unsigned long hash = 5381;
  int c;

  while ((c = *str++))
    hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

  return hash;
}

int main (int argc, char **argv){
  FILE *hfp = fopen("hash.h", "w");

  fprintf(hfp, "#define FORTH1  %zu\n", hash("4th"));
  fprintf(hfp, "#define FORTH2  %zu\n", hash("forth"));
  fprintf(hfp, "#define FORTH3  %zu\n", hash("fr"));
  fprintf(hfp, "#define FORTH4  %zu\n", hash("frt"));
  fprintf(hfp, "#define FORTH5  %zu\n", hash("fth"));
  fprintf(hfp, "#define FORTH6  %zu\n", hash("f83"));
  fprintf(hfp, "#define FORTH7  %zu\n", hash("fb"));
  fprintf(hfp, "#define FORTH8  %zu\n", hash("fpm"));
  fprintf(hfp, "#define FORTH9  %zu\n", hash("e4"));
  fprintf(hfp, "#define FORTH10 %zu\n", hash("rx"));
  fprintf(hfp, "#define FORTH11 %zu\n", hash("ft"));
  // Forth,


  fprintf(hfp, "#define ADA1 %zu\n", hash("ada"));
  fprintf(hfp, "#define ADA2 %zu\n", hash("adb"));
  fprintf(hfp, "#define ADA3 %zu\n", hash("ads"));
  fprintf(hfp, "#define ADA4 %zu\n", hash("pad"));
  // Ada,


  fprintf(hfp, "#define AGDA %zu\n", hash("agda"));
  // Agda,


  fprintf(hfp, "#define ACTIONSCRIPT %zu\n", hash("as"));
  // ActionScript,


  fprintf(hfp, "#define AMBIENTTALK %zu\n", hash("at"));
  // AmbientTalk,


  fprintf(hfp, "#define AWK %zu\n", hash("awk"));
  // Awk,


  fprintf(hfp, "#define BATCH1 %zu\n", hash("bat"));
  fprintf(hfp, "#define BATCH2 %zu\n", hash("btm"));
  fprintf(hfp, "#define BATCH3 %zu\n", hash("cmd"));
  // Batch,


  fprintf(hfp, "#define C1 %zu\n", hash("c"));
  fprintf(hfp, "#define C2 %zu\n", hash("ec"));
  fprintf(hfp, "#define C3 %zu\n", hash("pgc"));
  // C,


  fprintf(hfp, "#define CPP1 %zu\n", hash("cc"));
  fprintf(hfp, "#define CPP2 %zu\n", hash("cpp"));
  fprintf(hfp, "#define CPP3 %zu\n", hash("cxx"));
  fprintf(hfp, "#define CPP4 %zu\n", hash("c++"));
  fprintf(hfp, "#define CPP5 %zu\n", hash("pcc"));
  // Cpp,


  fprintf(hfp, "#define COLDFUSIONSCIPRT %zu\n", hash("cfc"));
  // ColdFusionScript,


  fprintf(hfp, "#define CMAKE %zu\n", hash("cmake"));
  // CMake,


  fprintf(hfp, "#define OPENCL %zu\n", hash("cl"));
  // OpenCl,


  fprintf(hfp, "#define COFFEESCIPRT %zu\n", hash("coffee"));
  // CoffeeScript,


  fprintf(hfp, "#define CRYSTAL %zu\n", hash("cr"));
  // Crystal,


  fprintf(hfp, "#define CSHARP %zu\n", hash("cs"));
  // CSharp,


  fprintf(hfp, "#define CSHELL %zu\n", hash("csh"));
  // CShell,


  fprintf(hfp, "#define CSS1 %zu\n", hash("css"));
  fprintf(hfp, "#define CSS2 %zu\n", hash("pcss"));
  fprintf(hfp, "#define CSS3 %zu\n", hash("sss"));
  fprintf(hfp, "#define CSS4 %zu\n", hash("postcss"));
  // Css,


  fprintf(hfp, "#define CUDAF %zu\n", hash("cu"));
  // CUDA,


  fprintf(hfp, "#define CUDAHEADERF %zu\n", hash("cuh"));
  // CUDAHeader,


  fprintf(hfp, "#define DF %zu\n", hash("d"));
  // D,


  fprintf(hfp, "#define DART %zu\n", hash("dart"));
  // Dart,


  fprintf(hfp, "#define DHALL %zu\n", hash("dhall"));
  // Dhall,


  fprintf(hfp, "#define DEVICETREE1 %zu\n", hash("dts"));
  fprintf(hfp, "#define DEVICETREE2 %zu\n", hash("dtsi"));
  // DeviceTree,


  fprintf(hfp, "#define DOCKER %zu\n", hash("docker"));
  // Docker,


  fprintf(hfp, "#define LISP1 %zu\n", hash("el"));
  fprintf(hfp, "#define LISP2 %zu\n", hash("lisp"));
  fprintf(hfp, "#define LISP3 %zu\n", hash("lsp"));
  fprintf(hfp, "#define LISP4 %zu\n", hash("scm"));
  fprintf(hfp, "#define LISP5 %zu\n", hash("ss"));
  fprintf(hfp, "#define LISP6 %zu\n", hash("rkt"));
  // Lisp,


  fprintf(hfp, "#define ELIXIR1 %zu\n", hash("ex"));
  fprintf(hfp, "#define ELIXIR2 %zu\n", hash("exs"));
  // Elixir,


  fprintf(hfp, "#define ELM %zu\n", hash("elm"));
  // Elm,


  fprintf(hfp, "#define ERLANG1 %zu\n", hash("erl"));
  fprintf(hfp, "#define ERLANG2 %zu\n", hash("hrl"));
  // Erlang,


  fprintf(hfp, "#define GHERKIN %zu\n", hash("feature"));
  // Gherkin,


  fprintf(hfp, "#define FSHARP1 %zu\n", hash("fs"));
  fprintf(hfp, "#define FSHARP2 %zu\n", hash("fsx"));
  // FSharp,


  fprintf(hfp, "#define GLSL1 %zu\n", hash("vert"));
  fprintf(hfp, "#define GLSL2 %zu\n", hash("tesc"));
  fprintf(hfp, "#define GLSL3 %zu\n", hash("tese"));
  fprintf(hfp, "#define GLSL4 %zu\n", hash("geom"));
  fprintf(hfp, "#define GLSL5 %zu\n", hash("frag"));
  fprintf(hfp, "#define GLSL6 %zu\n", hash("comp"));
  // Glsl,


  fprintf(hfp, "#define GO %zu\n", hash("go"));
  // Go,


  fprintf(hfp, "#define GROOVY %zu\n", hash("groovy"));
  // Groovy,


  fprintf(hfp, "#define CPPHEADER1 %zu\n", hash("h"));
  fprintf(hfp, "#define CPPHEADER2 %zu\n", hash("hh"));
  fprintf(hfp, "#define CPPHEADER3 %zu\n", hash("hpp"));
  fprintf(hfp, "#define CPPHEADER4 %zu\n", hash("hxx"));
  // CCppHeader,


  fprintf(hfp, "#define HANDLEBARS1 %zu\n", hash("hbs"));
  fprintf(hfp, "#define HANDLEBARS2 %zu\n", hash("handlebars"));
  // Handlebars,


  fprintf(hfp, "#define HASKELL %zu\n", hash("hs"));
  // Haskell,


  fprintf(hfp, "#define HTML %zu\n", hash("html"));
  // Html,


  fprintf(hfp, "#define IDRIS1 %zu\n", hash("idr"));
  fprintf(hfp, "#define IDRIS2 %zu\n", hash("lidr"));
  // Idris,


  fprintf(hfp, "#define INIH %zu\n", hash("ini"));
  // INI,


  fprintf(hfp, "#define JAI %zu\n", hash("jai"));
  // Jai,


  fprintf(hfp, "#define JAVA %zu\n", hash("java"));
  // Java,


  fprintf(hfp, "#define JULIA %zu\n", hash("jl"));
  // Julia,


  fprintf(hfp, "#define JAVASCIPRT1 %zu\n", hash("js"));
  fprintf(hfp, "#define JAVASCIPRT2 %zu\n", hash("mjs"));
  // JavaScript,


  fprintf(hfp, "#define JSX %zu\n", hash("jsx"));
  // Jsx,


  fprintf(hfp, "#define KOTLIN1 %zu\n", hash("kt"));
  fprintf(hfp, "#define KOTLIN2 %zu\n", hash("kts"));
  // Kotlin,


  fprintf(hfp, "#define LINKERSCIPRT %zu\n", hash("lds"));
  // LinkerScript,


  fprintf(hfp, "#define LEAN1 %zu\n", hash("lean"));
  fprintf(hfp, "#define LEAN2 %zu\n", hash("hlean"));
  // Lean,


  fprintf(hfp, "#define LESS %zu\n", hash("less"));
  // Less,


  fprintf(hfp, "#define LUA %zu\n", hash("lua"));
  // Lua,


  fprintf(hfp, "#define OBJC %zu\n", hash("m"));
  // ObjectiveC,


  fprintf(hfp, "#define OCAML1 %zu\n", hash("ml"));
  fprintf(hfp, "#define OCAML2 %zu\n", hash("mli"));
  // OCaml,


  fprintf(hfp, "#define WOLFRAM1 %zu\n", hash("nb"));
  fprintf(hfp, "#define WOLFRAM2 %zu\n", hash("wl"));
  // Wolfram,


  fprintf(hfp, "#define BASH %zu\n", hash("sh"));
  // BourneShell,


  fprintf(hfp, "#define ASP1 %zu\n", hash("asa"));
  fprintf(hfp, "#define ASP2 %zu\n", hash("asp"));
  // Asp,


  fprintf(hfp, "#define ASPNET1 %zu\n", hash("asax"));
  fprintf(hfp, "#define ASPNET2 %zu\n", hash("ascx"));
  fprintf(hfp, "#define ASPNET3 %zu\n", hash("asmx"));
  fprintf(hfp, "#define ASPNET4 %zu\n", hash("aspx"));
  fprintf(hfp, "#define ASPNET5 %zu\n", hash("master"));
  fprintf(hfp, "#define ASPNET6 %zu\n", hash("sitemap"));
  fprintf(hfp, "#define ASPNET7 %zu\n", hash("webinfo"));
  // AspNet,


  fprintf(hfp, "#define AUTOCONF %zu\n", hash("in"));
  // Autoconf,


  fprintf(hfp, "#define CLOJURE %zu\n", hash("clj"));
  // Clojure,


  fprintf(hfp, "#define CLOJURESCRIPT %zu\n", hash("cljs"));
  // ClojureScript,


  fprintf(hfp, "#define CLOJUREC %zu\n", hash("cljc"));
  // ClojureC,


  fprintf(hfp, "#define FORTRANLEG1 %zu\n", hash("f"));
  fprintf(hfp, "#define FORTRANLEG2 %zu\n", hash("for"));
  fprintf(hfp, "#define FORTRANLEG3 %zu\n", hash("ftn"));
  fprintf(hfp, "#define FORTRANLEG4 %zu\n", hash("f77"));
  fprintf(hfp, "#define FORTRANLEG5 %zu\n", hash("pfo"));
  // FortranLegacy,


  fprintf(hfp, "#define FORTANNEW1 %zu\n", hash("f03"));
  fprintf(hfp, "#define FORTANNEW2 %zu\n", hash("f08"));
  fprintf(hfp, "#define FORTANNEW3 %zu\n", hash("f90"));
  fprintf(hfp, "#define FORTANNEW4 %zu\n", hash("f95"));
  // FortranModern,


  fprintf(hfp, "#define MAKEFILE1 %zu\n", hash("makefile"));
  fprintf(hfp, "#define MAKEFILE2 %zu\n", hash("mk"));
  // Makefile,


  fprintf(hfp, "#define OBJCPP %zu\n", hash("mm"));
  // ObjectiveCpp,


  fprintf(hfp, "#define NIM %zu\n", hash("nim"));
  // Nim,


  fprintf(hfp, "#define NIX %zu\n", hash("nix"));
  // Nix,


  fprintf(hfp, "#define PHP %zu\n", hash("php"));
  // Php,


  fprintf(hfp, "#define PERL1 %zu\n", hash("pl"));
  fprintf(hfp, "#define PERL2 %zu\n", hash("pm"));
  // Perl,


  fprintf(hfp, "#define PUPPET %zu\n", hash("pp"));
  // Puppet,


  fprintf(hfp, "#define QCL %zu\n", hash("qcl"));
  // Qcl,


  fprintf(hfp, "#define QML %zu\n", hash("qml"));
  // Qml,


  fprintf(hfp, "#define RAZOR %zu\n", hash("cshtml"));
  // Razor,


  fprintf(hfp, "#define MUSTACHE %zu\n", hash("mustache"));
  // Mustache,


  fprintf(hfp, "#define OZ %zu\n", hash("oz"));
  // Oz,


  fprintf(hfp, "#define PROLOG1 %zu\n", hash("p"));
  fprintf(hfp, "#define PROLOG2 %zu\n", hash("pro"));
  // Prolog,


  fprintf(hfp, "#define PASCAL %zu\n", hash("pas"));
  // Pascal,


  fprintf(hfp, "#define HEX %zu\n", hash("hex"));
  // Hex,


  fprintf(hfp, "#define INTELHEX %zu\n", hash("ihex"));
  // IntelHex,


  fprintf(hfp, "#define JSON %zu\n", hash("json"));
  // Json,


  fprintf(hfp, "#define MARKDOWN1 %zu\n", hash("markdown"));
  fprintf(hfp, "#define MARKDOWN2 %zu\n", hash("md"));
  // Markdown,


  fprintf(hfp, "#define RST %zu\n", hash("rst"));
  // ReStructuredText,


  fprintf(hfp, "#define TEXT1 %zu\n", hash("text"));
  fprintf(hfp, "#define TEXT2 %zu\n", hash("txt"));
  // Text,


  fprintf(hfp, "#define POLLY %zu\n", hash("polly"));
  // Polly,


  fprintf(hfp, "#define PWSH1 %zu\n", hash("ps1"));
  fprintf(hfp, "#define PWSH2 %zu\n", hash("psd1"));
  fprintf(hfp, "#define PWSH3 %zu\n", hash("psm1"));
  // PowerShell,


  fprintf(hfp, "#define PROTOBUF %zu\n", hash("proto"));
  // Protobuf,


  fprintf(hfp, "#define PURESCIPT %zu\n", hash("purs"));
  // PureScript,


  fprintf(hfp, "#define PYRET %zu\n", hash("arr"));
  // Pyret,


  fprintf(hfp, "#define PYTHON %zu\n", hash("py"));
  // Python,


  fprintf(hfp, "#define RF %zu\n", hash("r"));
  // R,


  fprintf(hfp, "#define RUBY1 %zu\n", hash("rake"));
  fprintf(hfp, "#define RUBY2 %zu\n", hash("rb"));
  // Ruby,


  fprintf(hfp, "#define REASON1 %zu\n", hash("re"));
  fprintf(hfp, "#define REASON2 %zu\n", hash("rei"));
  // Reason,


  fprintf(hfp, "#define RUBYHTML1 %zu\n", hash("rhtml"));
  fprintf(hfp, "#define RUBYHTML2 %zu\n", hash("erb"));
  // RubyHtml,


  fprintf(hfp, "#define RON %zu\n", hash("ron"));
  // Ron,


  fprintf(hfp, "#define RUST %zu\n", hash("rs"));
  // Rust,


  fprintf(hfp, "#define ASM1 %zu\n", hash("s"));
  fprintf(hfp, "#define ASM2 %zu\n", hash("asm"));
  // Assembly,


  fprintf(hfp, "#define SASS1 %zu\n", hash("sass"));
  fprintf(hfp, "#define SASS2 %zu\n", hash("scss"));
  // Sass,


  fprintf(hfp, "#define SCALA1 %zu\n", hash("sc"));
  fprintf(hfp, "#define SCALA2 %zu\n", hash("scala"));
  // Scala,


  fprintf(hfp, "#define SALTSTACK %zu\n", hash("sls"));
  // SaltStack,


  fprintf(hfp, "#define SML %zu\n", hash("sml"));
  // Sml,


  fprintf(hfp, "#define SOLIDITY %zu\n", hash("sol"));
  // Solidity,


  fprintf(hfp, "#define SQL %zu\n", hash("sql"));
  // Sql,


  fprintf(hfp, "#define STYLUS %zu\n", hash("styl"));
  // Stylus,


  fprintf(hfp, "#define SVELTE %zu\n", hash("svelte"));
  // Svelte,


  fprintf(hfp, "#define SWIFT %zu\n", hash("swift"));
  // Swift,


  fprintf(hfp, "#define TCL %zu\n", hash("tcl"));
  // Tcl,


  fprintf(hfp, "#define TERRAFORM %zu\n", hash("tf"));
  // Terraform,


  fprintf(hfp, "#define TEX1 %zu\n", hash("tex"));
  fprintf(hfp, "#define TEX2 %zu\n", hash("sty"));
  // Tex,


  fprintf(hfp, "#define TOML %zu\n", hash("toml"));
  // Toml,


  fprintf(hfp, "#define TYPESCRIPT %zu\n", hash("ts"));
  // TypeScript,


  fprintf(hfp, "#define TSX %zu\n", hash("tsx"));
  // Tsx,


  fprintf(hfp, "#define ISABELLE %zu\n", hash("thy"));
  // Isabelle,


  fprintf(hfp, "#define UNREAL1 %zu\n", hash("uc"));
  fprintf(hfp, "#define UNREAL2 %zu\n", hash("uci"));
  fprintf(hfp, "#define UNREAL3 %zu\n", hash("upkg"));
  // UnrealScript,


  fprintf(hfp, "#define COQ %zu\n", hash("v"));
  // Coq,


  fprintf(hfp, "#define VIM %zu\n", hash("vim"));
  // VimScript,


  fprintf(hfp, "#define VUE %zu\n", hash("vue"));
  // Vue,


  fprintf(hfp, "#define XMLF %zu\n", hash("xml"));
  // XML,


  fprintf(hfp, "#define YAML1 %zu\n", hash("yaml"));
  fprintf(hfp, "#define YAML2 %zu\n", hash("yml"));
  // Yaml,


  fprintf(hfp, "#define YACC %zu\n", hash("y"));
  // Yacc,


  fprintf(hfp, "#define ZIG %zu\n", hash("zig"));
  // Zig,


  fprintf(hfp, "#define ZSH %zu\n", hash("zsh"));
  // Zsh,


  fprintf(hfp, "#define HAXE %zu\n", hash("hx"));
  // Haxe,


  return 0;
}
