subtype f_t is integer range 10 to 0;

subtype st is string(-1 to 7);
                  -- ^ error.illegal.index.negative

subtype st is string(0 to 7, 1 to 7);
                  -- ^ error.illegal.index.zero
                          -- ^ error.illegal.discrete_range

subtype st is boolean_vector(-1 to 7, 0 to 7);
                          -- ^ error.illegal.index.negative
                                   -- ^ error.illegal.discrete_range

subtype st is bit_vector(-1 to 7, 0 to 7);
                      -- ^ error.illegal.index.negative
                               -- ^ error.illegal.discrete_range

subtype st is integer_vector(-1 to 7, 0 to 7);
                          -- ^ error.illegal.index.negative
                                   -- ^ error.illegal.discrete_range

subtype st is real_vector(-1 to 7, 0 to 7);
                       -- ^ error.illegal.index.negative
                                -- ^ error.illegal.discrete_range

subtype st is time_vector(-1 to 7, 0 to 7);
                       -- ^ error.illegal.index.negative
                                -- ^ error.illegal.discrete_range
