procedure p
    generic (k:t)
    generic map (k)
    port (s:t)
 -- ^ error.illegal.clause.port
    port map (s);
 -- ^ error.illegal.map_aspect.port


procedure p
    generic (k:t)
    generic (k:t);
 -- ^ error.repeated.clause.generic

procedure p
    generic (k:t)
    generic map (k)
    generic map (k);
 -- ^ error.repeated.map_aspect.generic


procedure p
    generic map (k);
 -- ^ error.missing.clause.generic


procedure p
    generic map (k)
    generic (k:t);
 -- ^ error.order.clause_after_map_aspect


architecture a of e is
    function p
        generic (k:t);
                  -- ^ error.unexpected.semicolon.after_clause
        generic map (k); return t;
                    -- ^ error.unexpected.semicolon.after_map_aspect
begin
end;

