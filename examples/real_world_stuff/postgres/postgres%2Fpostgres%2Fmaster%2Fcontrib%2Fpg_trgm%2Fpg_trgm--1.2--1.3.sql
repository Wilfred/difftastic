/* contrib/pg_trgm/pg_trgm--1.2--1.3.sql */

-- complain if script is sourced in psql, rather than via ALTER EXTENSION
\echo Use "ALTER EXTENSION pg_trgm UPDATE TO '1.3'" to load this file. \quit

-- Update procedure signatures the hard way.
-- We use to_regprocedure() so that query doesn't fail if run against 9.6beta1 definitions,
-- wherein the signatures have been updated already.  In that case to_regprocedure() will
-- return NULL and no updates will happen.
DO LANGUAGE plpgsql
$$
DECLARE
  my_schema pg_catalog.text := pg_catalog.quote_ident(pg_catalog.current_schema());
  old_path pg_catalog.text := pg_catalog.current_setting('search_path');
BEGIN
-- for safety, transiently set search_path to just pg_catalog+pg_temp
PERFORM pg_catalog.set_config('search_path', 'pg_catalog, pg_temp', true);

UPDATE pg_catalog.pg_proc SET
  proargtypes = pg_catalog.array_to_string(newtypes::pg_catalog.oid[], ' ')::pg_catalog.oidvector,
  pronargs = pg_catalog.array_length(newtypes, 1)
FROM (VALUES
(NULL::pg_catalog.text, NULL::pg_catalog.text[]), -- establish column types
('gtrgm_consistent(internal,text,int4,oid,internal)', '{internal,text,int2,oid,internal}'),
('gtrgm_distance(internal,text,int4,oid)', '{internal,text,int2,oid,internal}'),
('gtrgm_union(bytea,internal)', '{internal,internal}')
) AS update_data (oldproc, newtypestext),
LATERAL (
  SELECT array_agg(replace(typ, 'SCH', my_schema)::regtype) as newtypes FROM unnest(newtypestext) typ
) ls
WHERE oid = to_regprocedure(my_schema || '.' || replace(oldproc, 'SCH', my_schema));

UPDATE pg_catalog.pg_proc SET
  prorettype = (my_schema || '.gtrgm')::pg_catalog.regtype
WHERE oid = pg_catalog.to_regprocedure(my_schema || '.gtrgm_union(internal,internal)');

PERFORM pg_catalog.set_config('search_path', old_path, true);
END
$$;

ALTER FUNCTION set_limit(float4) PARALLEL UNSAFE;
ALTER FUNCTION show_limit() PARALLEL SAFE;
ALTER FUNCTION show_trgm(text) PARALLEL SAFE;
ALTER FUNCTION similarity(text, text) PARALLEL SAFE;
ALTER FUNCTION similarity_op(text, text) PARALLEL SAFE;
ALTER FUNCTION word_similarity(text, text) PARALLEL SAFE;
ALTER FUNCTION word_similarity_op(text, text) PARALLEL SAFE;
ALTER FUNCTION word_similarity_commutator_op(text, text) PARALLEL SAFE;
ALTER FUNCTION similarity_dist(text, text) PARALLEL SAFE;
ALTER FUNCTION word_similarity_dist_op(text, text) PARALLEL SAFE;
ALTER FUNCTION word_similarity_dist_commutator_op(text, text) PARALLEL SAFE;
ALTER FUNCTION gtrgm_in(cstring) PARALLEL SAFE;
ALTER FUNCTION gtrgm_out(gtrgm) PARALLEL SAFE;
ALTER FUNCTION gtrgm_consistent(internal, text, smallint, oid, internal) PARALLEL SAFE;
ALTER FUNCTION gtrgm_distance(internal, text, smallint, oid, internal) PARALLEL SAFE;
ALTER FUNCTION gtrgm_compress(internal) PARALLEL SAFE;
ALTER FUNCTION gtrgm_decompress(internal) PARALLEL SAFE;
ALTER FUNCTION gtrgm_penalty(internal, internal, internal) PARALLEL SAFE;
ALTER FUNCTION gtrgm_picksplit(internal, internal) PARALLEL SAFE;
ALTER FUNCTION gtrgm_union(internal, internal) PARALLEL SAFE;
ALTER FUNCTION gtrgm_same(gtrgm, gtrgm, internal) PARALLEL SAFE;
ALTER FUNCTION gin_extract_value_trgm(text, internal) PARALLEL SAFE;
ALTER FUNCTION gin_extract_query_trgm(text, internal, int2, internal, internal, internal, internal) PARALLEL SAFE;
ALTER FUNCTION gin_trgm_consistent(internal, int2, text, int4, internal, internal, internal, internal) PARALLEL SAFE;
ALTER FUNCTION gin_trgm_triconsistent(internal, int2, text, int4, internal, internal, internal) PARALLEL SAFE;
