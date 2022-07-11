/* contrib/citext/citext--1.2--1.3.sql */

-- complain if script is sourced in psql, rather than via ALTER EXTENSION
\echo Use "ALTER EXTENSION citext UPDATE TO '1.3'" to load this file. \quit

-- We have to update aggregates the hard way for lack of ALTER support
DO LANGUAGE plpgsql
$$
DECLARE
  my_schema pg_catalog.text := pg_catalog.quote_ident(pg_catalog.current_schema());
  old_path pg_catalog.text := pg_catalog.current_setting('search_path');
BEGIN
-- for safety, transiently set search_path to just pg_catalog+pg_temp
PERFORM pg_catalog.set_config('search_path', 'pg_catalog, pg_temp', true);

UPDATE pg_aggregate SET aggcombinefn = (my_schema || '.citext_smaller')::regproc
WHERE aggfnoid = (my_schema || '.min(' || my_schema || '.citext)')::pg_catalog.regprocedure;

PERFORM pg_catalog.set_config('search_path', old_path, true);
END
$$;
