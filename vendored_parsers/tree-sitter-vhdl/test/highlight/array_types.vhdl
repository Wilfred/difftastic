type foo_t is array (resolve_f foobar_t) of bar_t;
                  -- ^ error.unexpected.resolution_function

for k in foo_f bar_t
      -- ^ error.unexpected.resolution_function
    loop
    end loop;

type foo_t is array (3 downto 0) of foo_t;
                                 -- ^ error.repeated.type

type foo_t is array (integer range <>) of foo_t;
                                       -- ^ error.repeated.type


