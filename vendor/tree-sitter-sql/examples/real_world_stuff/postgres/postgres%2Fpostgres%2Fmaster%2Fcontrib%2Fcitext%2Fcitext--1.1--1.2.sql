/* contrib/citext/citext--1.1--1.2.sql */

-- complain if script is sourced in psql, rather than via ALTER EXTENSION
\echo Use "ALTER EXTENSION citext UPDATE TO '1.2'" to load this file. \quit

ALTER FUNCTION citextin(cstring) PARALLEL SAFE;
ALTER FUNCTION citextout(citext) PARALLEL SAFE;
ALTER FUNCTION citextrecv(internal) PARALLEL SAFE;
ALTER FUNCTION citextsend(citext) PARALLEL SAFE;
ALTER FUNCTION citext(bpchar) PARALLEL SAFE;
ALTER FUNCTION citext(boolean) PARALLEL SAFE;
ALTER FUNCTION citext(inet) PARALLEL SAFE;
ALTER FUNCTION citext_eq(citext, citext) PARALLEL SAFE;
ALTER FUNCTION citext_ne(citext, citext) PARALLEL SAFE;
ALTER FUNCTION citext_lt(citext, citext) PARALLEL SAFE;
ALTER FUNCTION citext_le(citext, citext) PARALLEL SAFE;
ALTER FUNCTION citext_gt(citext, citext) PARALLEL SAFE;
ALTER FUNCTION citext_ge(citext, citext) PARALLEL SAFE;
ALTER FUNCTION citext_cmp(citext, citext) PARALLEL SAFE;
ALTER FUNCTION citext_hash(citext) PARALLEL SAFE;
ALTER FUNCTION citext_smaller(citext, citext) PARALLEL SAFE;
ALTER FUNCTION citext_larger(citext, citext) PARALLEL SAFE;
ALTER FUNCTION texticlike(citext, citext) PARALLEL SAFE;
ALTER FUNCTION texticnlike(citext, citext) PARALLEL SAFE;
ALTER FUNCTION texticregexeq(citext, citext) PARALLEL SAFE;
ALTER FUNCTION texticregexne(citext, citext) PARALLEL SAFE;
ALTER FUNCTION texticlike(citext, text) PARALLEL SAFE;
ALTER FUNCTION texticnlike(citext, text) PARALLEL SAFE;
ALTER FUNCTION texticregexeq(citext, text) PARALLEL SAFE;
ALTER FUNCTION texticregexne(citext, text) PARALLEL SAFE;
ALTER FUNCTION regexp_matches(citext, citext) PARALLEL SAFE;
ALTER FUNCTION regexp_matches(citext, citext, text) PARALLEL SAFE;
ALTER FUNCTION regexp_replace(citext, citext, text) PARALLEL SAFE;
ALTER FUNCTION regexp_replace(citext, citext, text, text) PARALLEL SAFE;
ALTER FUNCTION regexp_split_to_array(citext, citext) PARALLEL SAFE;
ALTER FUNCTION regexp_split_to_array(citext, citext, text) PARALLEL SAFE;
ALTER FUNCTION regexp_split_to_table(citext, citext) PARALLEL SAFE;
ALTER FUNCTION regexp_split_to_table(citext, citext, text) PARALLEL SAFE;
ALTER FUNCTION strpos(citext, citext) PARALLEL SAFE;
ALTER FUNCTION replace(citext, citext, citext) PARALLEL SAFE;
ALTER FUNCTION split_part(citext, citext, int) PARALLEL SAFE;
ALTER FUNCTION translate(citext, citext, text) PARALLEL SAFE;

-- We have to update aggregates the hard way for lack of ALTER support
DO LANGUAGE plpgsql
$$
DECLARE
  my_schema pg_catalog.text := pg_catalog.quote_ident(pg_catalog.current_schema());
  old_path pg_catalog.text := pg_catalog.current_setting('search_path');
BEGIN
-- for safety, transiently set search_path to just pg_catalog+pg_temp
PERFORM pg_catalog.set_config('search_path', 'pg_catalog, pg_temp', true);

UPDATE pg_proc SET proparallel = 's'
WHERE oid = (my_schema || '.min(' || my_schema || '.citext)')::pg_catalog.regprocedure;

UPDATE pg_proc SET proparallel = 's'
WHERE oid = (my_schema || '.max(' || my_schema || '.citext)')::pg_catalog.regprocedure;

UPDATE pg_aggregate SET aggcombinefn = (my_schema || '.citext_smaller')::regproc
WHERE aggfnoid = (my_schema || '.max(' || my_schema || '.citext)')::pg_catalog.regprocedure;

UPDATE pg_aggregate SET aggcombinefn = (my_schema || '.citext_larger')::regproc
WHERE aggfnoid = (my_schema || '.max(' || my_schema || '.citext)')::pg_catalog.regprocedure;

PERFORM pg_catalog.set_config('search_path', old_path, true);
END
$$;
