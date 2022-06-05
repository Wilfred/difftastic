BEGIN;

--
-- "cheating" version of the varnish_purge() function
-- that can be used on a local installation that doesn't
-- have any frontends.
--

CREATE OR REPLACE FUNCTION varnish_purge(url text)
RETURNS void
AS $$
$$ LANGUAGE 'sql';

CREATE OR REPLACE FUNCTION varnish_purge_expr(expr text)
RETURNS void
AS $$
$$ LANGUAGE 'sql';

CREATE OR REPLACE FUNCTION varnish_purge_xkey(key text)
RETURNS void
AS $$
$$ LANGUAGE 'sql';

COMMIT;
