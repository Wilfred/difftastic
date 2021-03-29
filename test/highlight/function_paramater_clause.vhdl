function p
    parameter (
        signal s : out     t;
                -- ^ error.illegal.mode
        signal s : inout   t;
                -- ^ error.illegal.mode
        signal s : buffer  t;
                -- ^ error.illegal.mode
        signal s : linkage t
                -- ^ error.illegal.mode
    ) return t;


function p
    parameter (variable v : t) return t;
            -- ^ error.illegal.interface.variable

function p
    parameter (
        procedure p;
     -- ^ error.illegal.interface.procedure
        function  f return f;
     -- ^ error.illegal.interface.function
        package  pkg is new l.pkg
     -- ^ error.illegal.interface.package
    ) return t;
