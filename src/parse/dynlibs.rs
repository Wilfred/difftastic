use std::{
    collections::{hash_map::Entry, HashMap},
    path::{Path, PathBuf},
};

use once_cell::sync::Lazy;
use tree_sitter as ts;

use crate::parse::guess_language as guess;

const PARSERS_PATH: &str = env!("TS_PARSERS_PATH");

const SHARED_LIB_EXT: &str = {
    #[cfg(target_family = "windows")]
    {
        "dll"
    }
    #[cfg(target_family = "unix")]
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
    let lang_name = ts_lang_name(language);

    let lib_name = format!("tree-sitter-{0}.{1}", &lang_name, SHARED_LIB_EXT);

    let mut abs_lib_path = PathBuf::from(parsers_dir);
    abs_lib_path.push(lib_name);

    match libs.entry(language) {
        Entry::Occupied(lang_fn) => Ok(lang_fn.get()()),

        Entry::Vacant(spot) => {
            let loaded = Box::new(libloading::Library::new(abs_lib_path)?);
            let lib = Box::leak(loaded);

            let lang_fn: libloading::Symbol<TSLanguageFn> =
                lib.get(format!("tree_sitter_{0}", &lang_name).as_bytes())?;

            spot.insert(*lang_fn);

            Ok(lang_fn())
        }
    }
}

pub fn ts_lang_name(language: guess::Language) -> &'static str {
    match language {
        guess::Language::Bash => "bash",
        guess::Language::C => "c",
        guess::Language::CPlusPlus => "cpp",
        guess::Language::Clojure => "clojure",
        guess::Language::CMake => "cmake",
        guess::Language::CommonLisp => "commonlisp",
        guess::Language::CSharp => "c_sharp",
        guess::Language::Css => "css",
        guess::Language::Dart => "dart",
        guess::Language::EmacsLisp => "elisp",
        guess::Language::Elixir => "elixir",
        guess::Language::Elm => "elm",
        guess::Language::Elvish => "elvish",
        guess::Language::Gleam => "gleam",
        guess::Language::Go => "go",
        guess::Language::Hack => "hack",
        guess::Language::Hare => "hare",
        guess::Language::Haskell => "haskell",
        guess::Language::Hcl => "hcl",
        guess::Language::Html => "html",
        guess::Language::Janet => "janet_simple",
        guess::Language::Java => "java",
        guess::Language::JavaScript | guess::Language::Jsx => "javascript",
        guess::Language::Json => "json",
        guess::Language::Julia => "julia",
        guess::Language::Kotlin => "kotlin",
        guess::Language::Lua => "lua",
        guess::Language::Make => "make",
        guess::Language::Nix => "nix",
        guess::Language::OCaml => "ocaml",
        guess::Language::OCamlInterface => "ocaml",
        guess::Language::Pascal => "pascal",
        guess::Language::Php => "php",
        guess::Language::Perl => "perl",
        guess::Language::Python => "python",
        guess::Language::Qml => "qmljs",
        guess::Language::Ruby => "ruby",
        guess::Language::Rust => "rust",
        guess::Language::Scala => "scala",
        guess::Language::Sql => "sql",
        guess::Language::Swift => "swift",
        guess::Language::Toml => "toml",
        guess::Language::Tsx => "tsx",
        guess::Language::TypeScript => "typescript",
        guess::Language::Yaml => "yaml",
        guess::Language::Zig => "zig",
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
