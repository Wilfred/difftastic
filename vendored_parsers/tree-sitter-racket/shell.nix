{ pkgs ? import <nixpkgs> { } }:
pkgs.mkShell {
  nativeBuildInputs = with pkgs; [
    nodejs
    gcc
  ];
  shellHook = ''
  PATH=./node_modules/.bin:$PATH
  '';
}

