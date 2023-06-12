let
  nixpkgs = fetchTarball {
    name = "nixpkgs";
    url = "https://github.com/NixOS/nixpkgs/archive/refs/tags/22.11.tar.gz";
    sha256 = "11w3wn2yjhaa5pv20gbfbirvjq6i3m7pqrq2msf0g7cv44vijwgw";
  };
  pkgs = import nixpkgs { };
in
pkgs.mkShell {
  name = "env";
  buildInputs = with pkgs; [
    nodejs
    tree-sitter
  ];
}


