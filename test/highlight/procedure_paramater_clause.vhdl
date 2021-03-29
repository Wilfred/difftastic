procedure p
    parameter (
        signal s : buffer  t;
                -- ^ error.illegal.mode
        signal s : linkage t
                -- ^ error.illegal.mode
    );


procedure p
    parameter (
        variable v : buffer  t;
                  -- ^ error.illegal.mode
        variable v : linkage t
                  -- ^ error.illegal.mode
    );


procedure p
    parameter (
        procedure p;
     -- ^ error.illegal.interface.procedure
        function  f return f;
     -- ^ error.illegal.interface.function
        package  pkg is new f.pkg
     -- ^ error.illegal.interface.package
    );
