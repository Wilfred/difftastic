{
  flake.darwinModules.discord = {
    homebrew.casks = [ "vesktop" ];
  };

  flake.darwinModules.signal-desktop = {
    homebrew.casks = [ "signal" ];
  };

  flake.darwinModules.whatsapp = {
    homebrew.casks = [ "whatsapp" ];
  };

  flake.darwinModules.zulip = {
    homebrew.casks = [ "zulip" ];
  };

  flake.homeModules.discord =
    {
      osConfig,
      lib,
      pkgs,
      ...
    }:
    let
      inherit (lib.lists) optional;
    in
    {
      packages = optional osConfig.nixpkgs.hostPlatform.isLinux (
        pkgs.discord.overrideAttrs
          (old: {
            postFixup = ''
              wrapProgram $out/opt/Discord/Discord \
                --add-flags "x"
            '';
          })
      );
    };
}
