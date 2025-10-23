match x:
    1: pass
    _: pass
    TYPE_ARRAY: pass
    var new_var: pass

    []: pass
    [1, 3, "test", null]: pass
    [var start, _]: pass
    [42, ..]: pass

    {}: pass
    {"name": "Dennis"}: pass
    {"name": "Dennis", "age": var age}: pass
    {"key": "godotisawesome", ..}: pass

    1, 2, 3: pass
