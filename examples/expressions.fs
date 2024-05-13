namespace test

module Json =
  [<Literal>]
  let MyPayload =
    """
    {
      "prop1": []
      "prop2": {
        "prop3": true,
        "prop4": 1,
      },
    }
    """
