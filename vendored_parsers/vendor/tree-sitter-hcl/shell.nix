let
  nixpkgs = fetchTarball {
    name = "nixpkgs";
    url = "https://github.com/NixOS/nixpkgs/archive/refs/tags/21.05.tar.gz";
    sha256 = "1ckzhh24mgz6jd1xhfgx0i9mijk6xjqxwsshnvq789xsavrmsc36";
  };
  pkgs = import nixpkgs {};
in
  pkgs.mkShell {
    name = "env";
    buildInputs = with pkgs; [
      nodejs
    ];
    shellHook = ''
PATH=./node_modules/.bin:$PATH
command -v tree-sitter >/dev/null 2>&1 || npm install tree-sitter-cli@0.20.6
    '';
  }

