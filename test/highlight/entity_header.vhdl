entity e is
    generic (k:t);
    generic map (k);
 -- ^ error.illegal.map_aspect.generic
    port (s:t);
    port map (s);
 -- ^ error.illegal.map_aspect.port
end entity;


entity e is
    generic (k:t);
    generic (k:t);
 -- ^ error.repeated.clause.generic
end entity;

entity e is
    port (s:t);
    port (s:t);
 -- ^ error.repeated.clause.port
end entity;


entity e is
    port (s:t);
    generic (k:t);
 -- ^ error.order.generic_after_port
end entity;


entity e is
    generic (k:t)
             -- ^ error.missing.semicolon.after_clause
    port (s:t)
          -- ^ error.missing.semicolon.after_clause
end entity;
