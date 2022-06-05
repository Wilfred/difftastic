/* contrib/ltree/ltree--1.0--1.1.sql */

-- complain if script is sourced in psql, rather than via ALTER EXTENSION
\echo Use "ALTER EXTENSION ltree UPDATE TO '1.1'" to load this file. \quit

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
('ltree_consistent(internal,internal,int2,oid,internal)', '{internal,SCH.ltree,int2,oid,internal}'),
('ltree_same(internal,internal,internal)', '{SCH.ltree_gist,SCH.ltree_gist,internal}'),
('_ltree_consistent(internal,internal,int2,oid,internal)', '{internal,SCH._ltree,int2,oid,internal}'),
('_ltree_same(internal,internal,internal)', '{SCH.ltree_gist,SCH.ltree_gist,internal}')
) AS update_data (oldproc, newtypestext),
LATERAL (
  SELECT array_agg(replace(typ, 'SCH', my_schema)::regtype) as newtypes FROM unnest(newtypestext) typ
) ls
WHERE oid = to_regprocedure(my_schema || '.' || replace(oldproc, 'SCH', my_schema));

UPDATE pg_catalog.pg_proc SET
  prorettype = (my_schema || '.ltree_gist')::pg_catalog.regtype
WHERE oid = pg_catalog.to_regprocedure(my_schema || '.ltree_union(internal,internal)');

UPDATE pg_catalog.pg_proc SET
  prorettype = (my_schema || '.ltree_gist')::pg_catalog.regtype
WHERE oid = pg_catalog.to_regprocedure(my_schema || '._ltree_union(internal,internal)');

PERFORM pg_catalog.set_config('search_path', old_path, true);
END
$$;

ALTER FUNCTION ltree_in(cstring) PARALLEL SAFE;
ALTER FUNCTION ltree_out(ltree) PARALLEL SAFE;
ALTER FUNCTION ltree_cmp(ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION ltree_lt(ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION ltree_le(ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION ltree_eq(ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION ltree_ge(ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION ltree_gt(ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION ltree_ne(ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION subltree(ltree, int4, int4) PARALLEL SAFE;
ALTER FUNCTION subpath(ltree, int4, int4) PARALLEL SAFE;
ALTER FUNCTION subpath(ltree, int4) PARALLEL SAFE;
ALTER FUNCTION index(ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION index(ltree, ltree, int4) PARALLEL SAFE;
ALTER FUNCTION nlevel(ltree) PARALLEL SAFE;
ALTER FUNCTION ltree2text(ltree) PARALLEL SAFE;
ALTER FUNCTION text2ltree(text) PARALLEL SAFE;
ALTER FUNCTION lca(_ltree) PARALLEL SAFE;
ALTER FUNCTION lca(ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION lca(ltree, ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION lca(ltree, ltree, ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION lca(ltree, ltree, ltree, ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION lca(ltree, ltree, ltree, ltree, ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION lca(ltree, ltree, ltree, ltree, ltree, ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION lca(ltree, ltree, ltree, ltree, ltree, ltree, ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION ltree_isparent(ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION ltree_risparent(ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION ltree_addltree(ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION ltree_addtext(ltree, text) PARALLEL SAFE;
ALTER FUNCTION ltree_textadd(text, ltree) PARALLEL SAFE;
ALTER FUNCTION ltreeparentsel(internal, oid, internal, integer) PARALLEL SAFE;
ALTER FUNCTION lquery_in(cstring) PARALLEL SAFE;
ALTER FUNCTION lquery_out(lquery) PARALLEL SAFE;
ALTER FUNCTION ltq_regex(ltree, lquery) PARALLEL SAFE;
ALTER FUNCTION ltq_rregex(lquery, ltree) PARALLEL SAFE;
ALTER FUNCTION lt_q_regex(ltree, _lquery) PARALLEL SAFE;
ALTER FUNCTION lt_q_rregex(_lquery, ltree) PARALLEL SAFE;
ALTER FUNCTION ltxtq_in(cstring) PARALLEL SAFE;
ALTER FUNCTION ltxtq_out(ltxtquery) PARALLEL SAFE;
ALTER FUNCTION ltxtq_exec(ltree, ltxtquery) PARALLEL SAFE;
ALTER FUNCTION ltxtq_rexec(ltxtquery, ltree) PARALLEL SAFE;
ALTER FUNCTION ltree_gist_in(cstring) PARALLEL SAFE;
ALTER FUNCTION ltree_gist_out(ltree_gist) PARALLEL SAFE;
ALTER FUNCTION ltree_consistent(internal, ltree, int2, oid, internal) PARALLEL SAFE;
ALTER FUNCTION ltree_compress(internal) PARALLEL SAFE;
ALTER FUNCTION ltree_decompress(internal) PARALLEL SAFE;
ALTER FUNCTION ltree_penalty(internal, internal, internal) PARALLEL SAFE;
ALTER FUNCTION ltree_picksplit(internal, internal) PARALLEL SAFE;
ALTER FUNCTION ltree_union(internal, internal) PARALLEL SAFE;
ALTER FUNCTION ltree_same(ltree_gist, ltree_gist, internal) PARALLEL SAFE;
ALTER FUNCTION _ltree_isparent(_ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION _ltree_r_isparent(ltree, _ltree) PARALLEL SAFE;
ALTER FUNCTION _ltree_risparent(_ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION _ltree_r_risparent(ltree, _ltree) PARALLEL SAFE;
ALTER FUNCTION _ltq_regex(_ltree, lquery) PARALLEL SAFE;
ALTER FUNCTION _ltq_rregex(lquery, _ltree) PARALLEL SAFE;
ALTER FUNCTION _lt_q_regex(_ltree, _lquery) PARALLEL SAFE;
ALTER FUNCTION _lt_q_rregex(_lquery, _ltree) PARALLEL SAFE;
ALTER FUNCTION _ltxtq_exec(_ltree, ltxtquery) PARALLEL SAFE;
ALTER FUNCTION _ltxtq_rexec(ltxtquery, _ltree) PARALLEL SAFE;
ALTER FUNCTION _ltree_extract_isparent(_ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION _ltree_extract_risparent(_ltree, ltree) PARALLEL SAFE;
ALTER FUNCTION _ltq_extract_regex(_ltree, lquery) PARALLEL SAFE;
ALTER FUNCTION _ltxtq_extract_exec(_ltree, ltxtquery) PARALLEL SAFE;
ALTER FUNCTION _ltree_consistent(internal, _ltree, int2, oid, internal) PARALLEL SAFE;
ALTER FUNCTION _ltree_compress(internal) PARALLEL SAFE;
ALTER FUNCTION _ltree_penalty(internal, internal, internal) PARALLEL SAFE;
ALTER FUNCTION _ltree_picksplit(internal, internal) PARALLEL SAFE;
ALTER FUNCTION _ltree_union(internal, internal) PARALLEL SAFE;
ALTER FUNCTION _ltree_same(ltree_gist, ltree_gist, internal) PARALLEL SAFE;
