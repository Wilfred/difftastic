{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  buildInputs = [
    pkgs.cargo pkgs.rust-analyzer pkgs.rustc pkgs.rustfmt pkgs.clippy
    pkgs.nodejs pkgs.tree-sitter pkgs.emscripten
    pkgs.nodePackages.typescript pkgs.nodePackages.typescript-language-server
  ];
}
