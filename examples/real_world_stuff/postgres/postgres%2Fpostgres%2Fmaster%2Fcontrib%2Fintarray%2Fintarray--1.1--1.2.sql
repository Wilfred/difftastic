/* contrib/intarray/intarray--1.1--1.2.sql */

-- complain if script is sourced in psql, rather than via ALTER EXTENSION
\echo Use "ALTER EXTENSION intarray UPDATE TO '1.2'" to load this file. \quit

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
('g_int_consistent(internal,_int4,int4,oid,internal)', '{internal,_int4,int2,oid,internal}'),
('g_intbig_consistent(internal,internal,int4,oid,internal)', '{internal,_int4,int2,oid,internal}'),
('g_intbig_same(internal,internal,internal)', '{SCH.intbig_gkey,SCH.intbig_gkey,internal}'),
('ginint4_queryextract(internal,internal,int2,internal,internal,internal,internal)', '{_int4,internal,int2,internal,internal,internal,internal}'),
('ginint4_consistent(internal,int2,internal,int4,internal,internal,internal,internal)', '{internal,int2,_int4,int4,internal,internal,internal,internal}')
) AS update_data (oldproc, newtypestext),
LATERAL (
  SELECT array_agg(replace(typ, 'SCH', my_schema)::regtype) as newtypes FROM unnest(newtypestext) typ
) ls
WHERE oid = to_regprocedure(my_schema || '.' || replace(oldproc, 'SCH', my_schema));

UPDATE pg_catalog.pg_proc SET
  prorettype = (my_schema || '.intbig_gkey')::pg_catalog.regtype
WHERE oid = pg_catalog.to_regprocedure(my_schema || '.g_intbig_union(internal,internal)');

PERFORM pg_catalog.set_config('search_path', old_path, true);
END
$$;

ALTER FUNCTION bqarr_in(cstring) PARALLEL SAFE;
ALTER FUNCTION bqarr_out(query_int) PARALLEL SAFE;
ALTER FUNCTION querytree(query_int) PARALLEL SAFE;
ALTER FUNCTION boolop(_int4, query_int) PARALLEL SAFE;
ALTER FUNCTION rboolop(query_int, _int4) PARALLEL SAFE;
ALTER FUNCTION _int_matchsel(internal, oid, internal, integer) PARALLEL SAFE;
ALTER FUNCTION _int_contains(_int4, _int4) PARALLEL SAFE;
ALTER FUNCTION _int_contained(_int4, _int4) PARALLEL SAFE;
ALTER FUNCTION _int_overlap(_int4, _int4) PARALLEL SAFE;
ALTER FUNCTION _int_same(_int4, _int4) PARALLEL SAFE;
ALTER FUNCTION _int_different(_int4, _int4) PARALLEL SAFE;
ALTER FUNCTION _int_union(_int4, _int4) PARALLEL SAFE;
ALTER FUNCTION _int_inter(_int4, _int4) PARALLEL SAFE;
ALTER FUNCTION _int_overlap_sel(internal, oid, internal, integer) PARALLEL SAFE;
ALTER FUNCTION _int_contains_sel(internal, oid, internal, integer) PARALLEL SAFE;
ALTER FUNCTION _int_contained_sel(internal, oid, internal, integer) PARALLEL SAFE;
ALTER FUNCTION _int_overlap_joinsel(internal, oid, internal, smallint, internal) PARALLEL SAFE;
ALTER FUNCTION _int_contains_joinsel(internal, oid, internal, smallint, internal) PARALLEL SAFE;
ALTER FUNCTION _int_contained_joinsel(internal, oid, internal, smallint, internal) PARALLEL SAFE;
ALTER FUNCTION intset(int4) PARALLEL SAFE;
ALTER FUNCTION icount(_int4) PARALLEL SAFE;
ALTER FUNCTION sort(_int4, text) PARALLEL SAFE;
ALTER FUNCTION sort(_int4) PARALLEL SAFE;
ALTER FUNCTION sort_asc(_int4) PARALLEL SAFE;
ALTER FUNCTION sort_desc(_int4) PARALLEL SAFE;
ALTER FUNCTION uniq(_int4) PARALLEL SAFE;
ALTER FUNCTION idx(_int4, int4) PARALLEL SAFE;
ALTER FUNCTION subarray(_int4, int4, int4) PARALLEL SAFE;
ALTER FUNCTION subarray(_int4, int4) PARALLEL SAFE;
ALTER FUNCTION intarray_push_elem(_int4, int4) PARALLEL SAFE;
ALTER FUNCTION intarray_push_array(_int4, _int4) PARALLEL SAFE;
ALTER FUNCTION intarray_del_elem(_int4, int4) PARALLEL SAFE;
ALTER FUNCTION intset_union_elem(_int4, int4) PARALLEL SAFE;
ALTER FUNCTION intset_subtract(_int4, _int4) PARALLEL SAFE;
ALTER FUNCTION g_int_consistent(internal, _int4, smallint, oid, internal) PARALLEL SAFE;
ALTER FUNCTION g_int_compress(internal) PARALLEL SAFE;
ALTER FUNCTION g_int_decompress(internal) PARALLEL SAFE;
ALTER FUNCTION g_int_penalty(internal, internal, internal) PARALLEL SAFE;
ALTER FUNCTION g_int_picksplit(internal, internal) PARALLEL SAFE;
ALTER FUNCTION g_int_union(internal, internal) PARALLEL SAFE;
ALTER FUNCTION g_int_same(_int4, _int4, internal) PARALLEL SAFE;
ALTER FUNCTION _intbig_in(cstring) PARALLEL SAFE;
ALTER FUNCTION _intbig_out(intbig_gkey) PARALLEL SAFE;
ALTER FUNCTION g_intbig_consistent(internal, _int4, smallint, oid, internal) PARALLEL SAFE;
ALTER FUNCTION g_intbig_compress(internal) PARALLEL SAFE;
ALTER FUNCTION g_intbig_decompress(internal) PARALLEL SAFE;
ALTER FUNCTION g_intbig_penalty(internal, internal, internal) PARALLEL SAFE;
ALTER FUNCTION g_intbig_picksplit(internal, internal) PARALLEL SAFE;
ALTER FUNCTION g_intbig_union(internal, internal) PARALLEL SAFE;
ALTER FUNCTION g_intbig_same(intbig_gkey, intbig_gkey, internal) PARALLEL SAFE;
ALTER FUNCTION ginint4_queryextract(_int4, internal, int2, internal, internal, internal, internal) PARALLEL SAFE;
ALTER FUNCTION ginint4_consistent(internal, int2, _int4, int4, internal, internal, internal, internal) PARALLEL SAFE;
