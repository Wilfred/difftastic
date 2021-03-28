entity e is
    generic (k:t);
    generic map (k);
 -- ^ error.illegal.header.map_aspect.generic
    port (s:t);
    port map (s);
 -- ^ error.illegal.header.map_aspect.port
end entity;


entity e is
    generic (k:t);
    generic (k:t);
 -- ^ error.repeated.header.clause.generic
end entity;


entity e is
    port (s:t);
    port (s:t);
 -- ^ error.repeated.header.clause.port
end entity;


entity e is
    port (s:t);
 -- ^ error.order.header.clause
    generic (k:t);
 -- ^ error.order.header.clause
end entity;


entity e is
    generic (k:t)
             -- ^ error.missing.semicolon
    port (s:t)
          -- ^ error.missing.semicolon
end entity;
