use std::{
    collections::{hash_map::Entry, HashMap},
    path::{Path, PathBuf},
};

use once_cell::sync::Lazy;
use tree_sitter as ts;

use crate::parse::guess_language::{self as guess, Language};

const PARSERS_PATH: &str = env!("TS_PARSERS_PATH");

const SHARED_LIB_EXT: &str = {
    #[cfg(target_family = "windows")]
    {
        "dll"
    }
    #[cfg(target_os = "macos")]
    {
        "dylib"
    }
    #[cfg(all(not(target_os = "macos"), target_family = "unix"))]
    {
        "so"
    }
};

static mut LOADED_LIBS: Lazy<HashMap<guess::Language, TSLanguageFn>> = Lazy::new(|| HashMap::new());

type TSLanguageFn = unsafe extern "C" fn() -> ts::Language;

pub unsafe fn ts_language(
    language: guess::Language,
    libs: &mut HashMap<guess::Language, TSLanguageFn>,
    parsers_dir: &Path,
) -> Result<ts::Language, libloading::Error> {
    let library_name = format!("{0}.{1}", ts_library_name(language), SHARED_LIB_EXT);

    let abs_lib_path = PathBuf::from(parsers_dir).join(library_name);

    match libs.entry(language) {
        Entry::Occupied(lang_fn) => Ok(lang_fn.get()()),

        Entry::Vacant(spot) => {
            let loaded = Box::new(libloading::Library::new(abs_lib_path)?);
            let lib = Box::leak(loaded);

            let lang_fn: libloading::Symbol<TSLanguageFn> =
                lib.get(ts_function_name(language).as_bytes())?;

            spot.insert(*lang_fn);

            Ok(lang_fn())
        }
    }
}

pub fn ts_function_name(language: Language) -> &'static str {
    match language {
        Language::Bash => "tree_sitter_bash",
        Language::C => "tree_sitter_c",
        Language::Clojure => "tree_sitter_clojure",
        Language::CMake => "tree_sitter_cmake",
        Language::CommonLisp => "tree_sitter_commonlisp",
        Language::CPlusPlus => "tree_sitter_cpp",
        Language::CSharp => "tree_sitter_c_sharp",
        Language::Css => "tree_sitter_css",
        Language::Dart => "tree_sitter_dart",
        Language::Elixir => "tree_sitter_elixir",
        Language::Elm => "tree_sitter_elm",
        Language::Elvish => "tree_sitter_elvish",
        Language::EmacsLisp => "tree_sitter_elisp",
        Language::Gleam => "tree_sitter_gleam",
        Language::Go => "tree_sitter_go",
        Language::Hack => "tree_sitter_hack",
        Language::Hare => "tree_sitter_hare",
        Language::Haskell => "tree_sitter_haskell",
        Language::Hcl => "tree_sitter_hcl",
        Language::Html => "tree_sitter_html",
        Language::Janet => "tree_sitter_janet_simple",
        Language::Java => "tree_sitter_java",
        Language::JavaScript => "tree_sitter_javascript",
        Language::Jsx => "tree_sitter_javascript",
        Language::Json => "tree_sitter_json",
        Language::Julia => "tree_sitter_julia",
        Language::Kotlin => "tree_sitter_kotlin",
        Language::Lua => "tree_sitter_lua",
        Language::Make => "tree_sitter_make",
        Language::Nix => "tree_sitter_nix",
        Language::OCaml => "tree_sitter_ocaml",
        Language::OCamlInterface => "tree_sitter_ocaml_interface",
        Language::Pascal => "tree_sitter_pascal",
        Language::Perl => "tree_sitter_perl",
        Language::Php => "tree_sitter_php",
        Language::Python => "tree_sitter_python",
        Language::Qml => "tree_sitter_qmljs",
        Language::Ruby => "tree_sitter_ruby",
        Language::Rust => "tree_sitter_rust",
        Language::Scala => "tree_sitter_scala",
        Language::Sql => "tree_sitter_sql",
        Language::Swift => "tree_sitter_swift",
        Language::Toml => "tree_sitter_toml",
        Language::Tsx => "tree_sitter_tsx",
        Language::TypeScript => "tree_sitter_typescript",
        Language::Yaml => "tree_sitter_yaml",
        Language::Zig => "tree_sitter_zig",
    }
}

pub fn ts_library_name(language: Language) -> &'static str {
    match language {
        Language::Bash => "libtree-sitter-bash",
        Language::C => "libtree-sitter-c",
        Language::Clojure => "libtree-sitter-clojure",
        Language::CMake => "libtree-sitter-cmake",
        Language::CommonLisp => "libtree-sitter-commonlisp",
        Language::CPlusPlus => "libtree-sitter-cpp",
        Language::CSharp => "libtree-sitter-c-sharp",
        Language::Css => "libtree-sitter-css",
        Language::Dart => "libtree-sitter-dart",
        Language::Elixir => "libtree-sitter-elixir",
        Language::Elm => "libtree-sitter-elm",
        Language::Elvish => "libtree-sitter-elvish",
        Language::EmacsLisp => "libtree-sitter-elisp",
        Language::Gleam => "libtree-sitter-gleam",
        Language::Go => "libtree-sitter-go",
        Language::Hack => "libtree-sitter-hack",
        Language::Hare => "libtree-sitter-hare",
        Language::Haskell => "libtree-sitter-haskell",
        Language::Hcl => "libtree-sitter-hcl",
        Language::Html => "libtree-sitter-html",
        Language::Janet => "libtree-sitter-janet-simple",
        Language::Java => "libtree-sitter-java",
        Language::JavaScript => "libtree-sitter-javascript",
        Language::Jsx => "libtree-sitter-javascript",
        Language::Json => "libtree-sitter-json",
        Language::Julia => "libtree-sitter-julia",
        Language::Kotlin => "libtree-sitter-kotlin",
        Language::Lua => "libtree-sitter-lua",
        Language::Make => "libtree-sitter-make",
        Language::Nix => "libtree-sitter-nix",
        Language::OCaml => "libtree-sitter-ocaml",
        Language::OCamlInterface => "libtree-sitter-ocaml-interface",
        Language::Pascal => "libtree-sitter-pascal",
        Language::Perl => "libtree-sitter-perl",
        Language::Php => "libtree-sitter-php",
        Language::Python => "libtree-sitter-python",
        Language::Qml => "libtree-sitter-qmljs",
        Language::Ruby => "libtree-sitter-ruby",
        Language::Rust => "libtree-sitter-rust",
        Language::Scala => "libtree-sitter-scala",
        Language::Sql => "libtree-sitter-sql",
        Language::Swift => "libtree-sitter-swift",
        Language::Toml => "libtree-sitter-toml",
        Language::Tsx => "libtree-sitter-tsx",
        Language::TypeScript => "libtree-sitter-typescript",
        Language::Yaml => "libtree-sitter-yaml",
        Language::Zig => "libtree-sitter-zig",
    }
}

pub mod functions {
    use std::path::Path;

    use super::{ts_language, LOADED_LIBS, PARSERS_PATH};
    use crate::parse::guess_language::Language::{self, *};
    use tree_sitter as ts;

    unsafe fn global_language(language: Language) -> ts::Language {
        ts_language(language, &mut *LOADED_LIBS, Path::new(PARSERS_PATH)).unwrap()
    }

    pub unsafe fn tree_sitter_bash() -> ts::Language {
        global_language(Bash)
    }
    pub unsafe fn tree_sitter_c() -> ts::Language {
        global_language(C)
    }
    pub unsafe fn tree_sitter_c_sharp() -> ts::Language {
        global_language(CSharp)
    }
    pub unsafe fn tree_sitter_clojure() -> ts::Language {
        global_language(Clojure)
    }
    pub unsafe fn tree_sitter_cmake() -> ts::Language {
        global_language(CMake)
    }
    pub unsafe fn tree_sitter_cpp() -> ts::Language {
        global_language(CPlusPlus)
    }
    pub unsafe fn tree_sitter_commonlisp() -> ts::Language {
        global_language(CommonLisp)
    }
    pub unsafe fn tree_sitter_css() -> ts::Language {
        global_language(Css)
    }
    pub unsafe fn tree_sitter_dart() -> ts::Language {
        global_language(Dart)
    }
    pub unsafe fn tree_sitter_elisp() -> ts::Language {
        global_language(EmacsLisp)
    }
    pub unsafe fn tree_sitter_elixir() -> ts::Language {
        global_language(Elixir)
    }
    pub unsafe fn tree_sitter_elm() -> ts::Language {
        global_language(Elm)
    }
    pub unsafe fn tree_sitter_elvish() -> ts::Language {
        global_language(Elvish)
    }
    pub unsafe fn tree_sitter_gleam() -> ts::Language {
        global_language(Gleam)
    }
    pub unsafe fn tree_sitter_go() -> ts::Language {
        global_language(Go)
    }
    pub unsafe fn tree_sitter_hack() -> ts::Language {
        global_language(Hack)
    }
    pub unsafe fn tree_sitter_hare() -> ts::Language {
        global_language(Hare)
    }
    pub unsafe fn tree_sitter_haskell() -> ts::Language {
        global_language(Haskell)
    }
    pub unsafe fn tree_sitter_hcl() -> ts::Language {
        global_language(Hcl)
    }
    pub unsafe fn tree_sitter_html() -> ts::Language {
        global_language(Html)
    }
    pub unsafe fn tree_sitter_janet_simple() -> ts::Language {
        global_language(Janet)
    }
    pub unsafe fn tree_sitter_java() -> ts::Language {
        global_language(Java)
    }
    pub unsafe fn tree_sitter_javascript() -> ts::Language {
        global_language(JavaScript)
    }
    pub unsafe fn tree_sitter_json() -> ts::Language {
        global_language(Json)
    }
    pub unsafe fn tree_sitter_julia() -> ts::Language {
        global_language(Julia)
    }
    pub unsafe fn tree_sitter_kotlin() -> ts::Language {
        global_language(Kotlin)
    }
    pub unsafe fn tree_sitter_lua() -> ts::Language {
        global_language(Lua)
    }
    pub unsafe fn tree_sitter_make() -> ts::Language {
        global_language(Make)
    }
    pub unsafe fn tree_sitter_nix() -> ts::Language {
        global_language(Nix)
    }
    pub unsafe fn tree_sitter_ocaml() -> ts::Language {
        global_language(OCaml)
    }
    pub unsafe fn tree_sitter_ocaml_interface() -> ts::Language {
        global_language(OCamlInterface)
    }
    pub unsafe fn tree_sitter_pascal() -> ts::Language {
        global_language(Pascal)
    }
    pub unsafe fn tree_sitter_php() -> ts::Language {
        global_language(Php)
    }
    pub unsafe fn tree_sitter_perl() -> ts::Language {
        global_language(Perl)
    }
    pub unsafe fn tree_sitter_python() -> ts::Language {
        global_language(Python)
    }
    pub unsafe fn tree_sitter_qmljs() -> ts::Language {
        global_language(Qml)
    }
    pub unsafe fn tree_sitter_ruby() -> ts::Language {
        global_language(Ruby)
    }
    pub unsafe fn tree_sitter_rust() -> ts::Language {
        global_language(Rust)
    }
    pub unsafe fn tree_sitter_scala() -> ts::Language {
        global_language(Scala)
    }
    pub unsafe fn tree_sitter_sql() -> ts::Language {
        global_language(Sql)
    }
    pub unsafe fn tree_sitter_swift() -> ts::Language {
        global_language(Swift)
    }
    pub unsafe fn tree_sitter_toml() -> ts::Language {
        global_language(Toml)
    }
    pub unsafe fn tree_sitter_tsx() -> ts::Language {
        global_language(Tsx)
    }
    pub unsafe fn tree_sitter_typescript() -> ts::Language {
        global_language(TypeScript)
    }
    pub unsafe fn tree_sitter_yaml() -> ts::Language {
        global_language(Yaml)
    }
    pub unsafe fn tree_sitter_zig() -> ts::Language {
        global_language(Zig)
    }
}
