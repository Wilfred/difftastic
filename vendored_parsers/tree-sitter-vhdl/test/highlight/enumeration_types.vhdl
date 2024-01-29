type enum_t is (foo, foo);
                  -- ^ error.repeated.enumerator

type enum_t is ('0', '0');
                  -- ^ error.repeated.enumerator

type enum_t is (foo, '1', foo);
                       -- ^ error.repeated.enumerator

type enum_t is ('0', foo, '0');
                       -- ^ error.repeated.enumerator

