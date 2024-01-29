package pkg is
    generic (k:t);
    generic map (k);
    port (s:t);
 -- ^ error.illegal.clause.port
    port map (s);
 -- ^ error.illegal.map_aspect.port
end package;


package pkg is
    generic (k:t);
    generic (k:t);
 -- ^ error.repeated.clause.generic
end package;

package pkg is
    generic (k:t);
    generic map (k);
    generic map (k);
 -- ^ error.repeated.map_aspect.generic
end package;


package pkg is
    generic map (k);
 -- ^ error.missing.clause.generic
end package;


package pkg is
    generic map (k);
    generic (k:t);
 -- ^ error.order.clause_after_map_aspect
end package;


package pkg is
    generic (k:t)
             -- ^ error.missing.semicolon.after_clause
    generic map (k)
               -- ^ error.missing.semicolon.after_map_aspect
end package;
