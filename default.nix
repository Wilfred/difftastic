{ nixpkgs ? import <nixpkgs> {  } }:
 
let
  pkgs = [
    nixpkgs.nodejs
  ];
 
in
  nixpkgs.stdenv.mkDerivation {
    name = "env";
    buildInputs = pkgs;
    shellHook = ''
        PATH=./node_modules/.bin:$PATH
        command -v tree-sitter >/dev/null 2>&1 || npm install tree-sitter-cli
    '';
  }
