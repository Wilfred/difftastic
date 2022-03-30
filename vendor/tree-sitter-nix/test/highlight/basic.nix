{
  or = { or = 1; }.or or 42;
  # <- property
  #  ^ punctuation.delimiter
  #      ^ property
  #                 ^ property
  #                    ^ keyword
  the-question = if builtins.true then "to be" else "not to be";
  # <- property
  #  ^ property
  #    ^ property
  #               ^ keyword
  #                  ^ variable.builtin
  #                           ^ property
  #                                ^ keyword
  #                                      ^ string
  #                                             ^ keyword
  #                                                    ^ string
  null = if null then true else false;
  # <- property
  #          ^ variable.builtin
  #                    ^ variable.builtin
  #                              ^ variable.builtin
  pkgs' = { inherit (pkgs) stdenv lib; };
  # <- property
  #   ^ property
  #          ^ keyword
  #                   ^ variable
  #                         ^ property
  #                                ^ property
  thing' =
    # <- property
    let inherit (pkgs) stdenv lib;
    # <- keyword
    #    ^ keyword
    #             ^ variable
    #                   ^ property
    #                          ^ property
    in derivation rec {
    # <- keyword
      # ^ function.builtin
      #            ^ keyword
      pname = "thing";
      # <- property
      #         ^ string
      version = "v1.2.3";
      name = "${pname}-${version}";
      # <- property
      #      ^ string
      #       ^ punctuation.special
      #          ^ variable
      #              ^ punctuation.special
      #               ^ string
      #                   ^ variable
      #                          ^ string
      buildInputs = with pkgs; [ thing_a thing_b ];
      # <- property
      #              ^ keyword
      #                   ^ variable
      #                           ^ variable
      #                                    ^ variable
    };
  assert_bool = bool: assert lib.isBool bool; bool;
  # <- property
  #               ^ variable.parameter
  #                     ^ keyword
  #                            ^ variable
  #                                ^ function
  #                                       ^ variable
  #                                             ^ variable
  import = import ./overlays.nix { inherit pkgs; };
  # <- property
  #         ^ function.builtin
  #                 ^ string.special.path
  #                                 ^ keyword
  #                                         ^ property
  uri = https://github.com;
  #      ^ string.special.uri
  #                ^ string.special.uri
}
