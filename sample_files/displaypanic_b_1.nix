{
  flake.darwinModules.communication = {
    homebrew.casks = [
      "signal"
      "vesktop"
      "whatsapp"
      "zulip"
    ];
  };

  flake.homeModules.communication =
    {
      osConfig,
      lib,
      pkgs,
      ...
    }:
    let
      inherit (lib.lists) optionals;
      isLinux = osConfig.nixpkgs.hostPlatform.isLinux;
    in
    {
      packages = [
        pkgs.cinny-desktop
        pkgs.thunderbird
      ]
      ++ optionals isLinux [
        pkgs.signal-desktop
        (
          pkgs.discord.overrideAttrs
          (old: {
            postFixup = ''
              wrapProgram $out/opt/Discord/Discord \
                --add-flags "x"
            '';
          })
        )
      ];
    };
}
