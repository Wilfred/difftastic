type int_t is range 0 to 255.0;
                 -- ^ error.illegal.range

type int_t is range 255 downto 0.0;
                 -- ^ error.illegal.range

type int_t is range 1.0 to 255;
                 -- ^ error.illegal.range

type int_t is range 255.0 downto 0;
                 -- ^ error.illegal.range

