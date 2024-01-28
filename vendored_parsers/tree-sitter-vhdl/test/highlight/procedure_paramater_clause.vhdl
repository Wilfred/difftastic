procedure p
    parameter (
        signal s : buffer  t;
                -- ^ error.illegal.mode
        signal s : linkage t
                -- ^ error.illegal.mode
    );

procedure p
    parameter (signal s : t := expr);
                            -- ^ error.illegal.default_expression

procedure p
    parameter (
        variable v : buffer  t;
                  -- ^ error.illegal.mode
        variable v : linkage t
                  -- ^ error.illegal.mode
    );


procedure p
    parameter (
        type t;
     -- ^ error.illegal.interface.type
        procedure p;
     -- ^ error.illegal.interface.procedure
        function  f return f;
     -- ^ error.illegal.interface.function
        package  pkg is new l.pkg
     -- ^ error.illegal.interface.package
    );
