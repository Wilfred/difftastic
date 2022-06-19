BEGIN;

--
-- Create a function to purge from varnish cache
-- By default this adds the object to a local queue,
-- but this function can be replaced with a void one
-- when running a development version.
--

CREATE SCHEMA IF NOT EXISTS varnishqueue;
CREATE TABLE IF NOT EXISTS varnishqueue.queue (id bigserial primary key, mode char NOT NULL, consumerid int NOT NULL, expr text NOT NULL, added timestamptz NOT NULL DEFAULT CURRENT_TIMESTAMP, completed timestamptz NULL);
CREATE TABLE IF NOT EXISTS varnishqueue.consumers (consumerid serial PRIMARY KEY, consumer text NOT NULL);

DROP FUNCTION IF EXISTS varnish_purge(url text);
CREATE OR REPLACE FUNCTION varnish_purge(url text)
RETURNS void
AS $$
   INSERT INTO varnishqueue.queue (mode, consumerid, expr) SELECT 'P', consumerid, $1 FROM varnishqueue.consumers;
   NOTIFY varnishqueue;
$$ LANGUAGE 'sql';

DROP FUNCTION IF EXISTS varnish_purge_expr(expr text);
CREATE OR REPLACE FUNCTION varnish_purge_expr(expr text)
RETURNS void
AS $$
  INSERT INTO varnishqueue.queue (mode, consumerid, expr) SELECT 'X', consumerid, $1 FROM varnishqueue.consumers;
  NOTIFY varnishqueue;
$$ LANGUAGE 'sql';

DROP FUNCTION IF EXISTS varnish_purge_xkey(key text);
CREATE OR REPLACE FUNCTION varnish_purge_xkey(key text)
RETURNS void
AS $$
  INSERT INTO varnishqueue.queue (mode, consumerid, expr) SELECT 'K', consumerid, $1 FROM varnishqueue.consumers;
  NOTIFY varnishqueue;
$$ LANGUAGE 'sql';
COMMIT;
