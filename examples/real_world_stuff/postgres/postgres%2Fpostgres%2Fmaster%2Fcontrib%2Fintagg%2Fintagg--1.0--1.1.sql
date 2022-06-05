/* contrib/intagg/intagg--1.0--1.1.sql */

-- complain if script is sourced in psql, rather than via ALTER EXTENSION
\echo Use "ALTER EXTENSION intagg UPDATE TO '1.1'" to load this file. \quit

ALTER FUNCTION int_agg_state(internal, int4) PARALLEL SAFE;
ALTER FUNCTION int_agg_final_array(internal) PARALLEL SAFE;
ALTER FUNCTION int_array_enum(int4[]) PARALLEL SAFE;
DO LANGUAGE plpgsql
$$
DECLARE
  my_schema pg_catalog.text := pg_catalog.quote_ident(pg_catalog.current_schema());
  old_path pg_catalog.text := pg_catalog.current_setting('search_path');
BEGIN
-- for safety, transiently set search_path to just pg_catalog+pg_temp
PERFORM pg_catalog.set_config('search_path', 'pg_catalog, pg_temp', true);

UPDATE pg_proc SET proparallel = 's'
WHERE oid = (my_schema || '.int_array_aggregate(int4)')::pg_catalog.regprocedure;

PERFORM pg_catalog.set_config('search_path', old_path, true);
END
$$;
