{
  description = "Tree-sitter grammar for PureScript";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";

    purescript-overlay = {
      url = "github:thomashoneyman/purescript-overlay";
      inputs.nixpkgs.follows = "nixpkgs";
    };
  };

  outputs = inputs@{ self, nixpkgs, ... }:

    let

      supportedSystems = [
        "x86_64-linux"
        "aarch64-linux"
        "x86_64-darwin"
        "aarch64-darwin"
      ];

      forAllSystems = inputs.nixpkgs.lib.genAttrs supportedSystems;

      nixpkgsFor = forAllSystems (system: import inputs.nixpkgs {
        inherit system;
        config = {};
        overlays = builtins.attrValues inputs.self.overlays;
      });

    in
      {
        overlays = {
          purescript = inputs.purescript-overlay.overlays.default;
        };

        devShells = forAllSystems (system:
          let
            pkgs = nixpkgsFor.${system};
          in
            {
              default = pkgs.mkShell {
                name = "tree-sitter-purescript devshell";
                buildInputs = [
                  # Tree-sitter tools
                  pkgs.nodejs
                  pkgs.tree-sitter

                  # For dev workflow automation
                  pkgs.watchexec

                  # Purescript tools
                  pkgs.purs
                  pkgs.purescript-language-server

                  # Formatters
                  pkgs.nodePackages.prettier
                  pkgs.clang-tools
                ];
              };
            }
          );

      };
}
