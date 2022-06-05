/* contrib/seg/seg--1.0--1.1.sql */

-- complain if script is sourced in psql, rather than via ALTER EXTENSION
\echo Use "ALTER EXTENSION seg UPDATE TO '1.1'" to load this file. \quit

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
('gseg_consistent(internal,SCH.seg,int4,oid,internal)', '{internal,SCH.seg,int2,oid,internal}')
) AS update_data (oldproc, newtypestext),
LATERAL (
  SELECT array_agg(replace(typ, 'SCH', my_schema)::regtype) as newtypes FROM unnest(newtypestext) typ
) ls
WHERE oid = to_regprocedure(my_schema || '.' || replace(oldproc, 'SCH', my_schema));

PERFORM pg_catalog.set_config('search_path', old_path, true);
END
$$;

ALTER FUNCTION seg_in(cstring) PARALLEL SAFE;
ALTER FUNCTION seg_out(seg) PARALLEL SAFE;
ALTER FUNCTION seg_over_left(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_over_right(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_left(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_right(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_lt(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_le(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_gt(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_ge(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_contains(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_contained(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_overlap(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_same(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_different(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_cmp(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_union(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_inter(seg, seg) PARALLEL SAFE;
ALTER FUNCTION seg_size(seg) PARALLEL SAFE;
ALTER FUNCTION seg_center(seg) PARALLEL SAFE;
ALTER FUNCTION seg_upper(seg) PARALLEL SAFE;
ALTER FUNCTION seg_lower(seg) PARALLEL SAFE;
ALTER FUNCTION gseg_consistent(internal, seg, smallint, oid, internal) PARALLEL SAFE;
ALTER FUNCTION gseg_compress(internal) PARALLEL SAFE;
ALTER FUNCTION gseg_decompress(internal) PARALLEL SAFE;
ALTER FUNCTION gseg_penalty(internal, internal, internal) PARALLEL SAFE;
ALTER FUNCTION gseg_picksplit(internal, internal) PARALLEL SAFE;
ALTER FUNCTION gseg_union(internal, internal) PARALLEL SAFE;
ALTER FUNCTION gseg_same(seg, seg, internal) PARALLEL SAFE;
