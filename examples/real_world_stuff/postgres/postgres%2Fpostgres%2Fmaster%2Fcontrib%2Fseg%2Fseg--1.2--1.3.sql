/* contrib/seg/seg--1.2--1.3.sql */

-- complain if script is sourced in psql, rather than via ALTER EXTENSION
\echo Use "ALTER EXTENSION seg UPDATE TO '1.3'" to load this file. \quit

--
-- Get rid of unnecessary compress and decompress support functions.
--
-- To be allowed to drop the opclass entry for a support function,
-- we must change the entry's dependency type from 'internal' to 'auto',
-- as though it were a loose member of the opfamily rather than being
-- bound into a particular opclass.  There's no SQL command for that,
-- so fake it with a manual update on pg_depend.
--
DO LANGUAGE plpgsql
$$
DECLARE
  my_schema pg_catalog.text := pg_catalog.quote_ident(pg_catalog.current_schema());
  old_path pg_catalog.text := pg_catalog.current_setting('search_path');
BEGIN
-- for safety, transiently set search_path to just pg_catalog+pg_temp
PERFORM pg_catalog.set_config('search_path', 'pg_catalog, pg_temp', true);

UPDATE pg_catalog.pg_depend
SET deptype = 'a'
WHERE classid = 'pg_catalog.pg_amproc'::pg_catalog.regclass
  AND objid =
    (SELECT objid
     FROM pg_catalog.pg_depend
     WHERE classid = 'pg_catalog.pg_amproc'::pg_catalog.regclass
       AND refclassid = 'pg_catalog.pg_proc'::pg_catalog.regclass
       AND (refobjid = (my_schema || '.gseg_compress(internal)')::pg_catalog.regprocedure))
  AND refclassid = 'pg_catalog.pg_opclass'::pg_catalog.regclass
  AND deptype = 'i';

UPDATE pg_catalog.pg_depend
SET deptype = 'a'
WHERE classid = 'pg_catalog.pg_amproc'::pg_catalog.regclass
  AND objid =
    (SELECT objid
     FROM pg_catalog.pg_depend
     WHERE classid = 'pg_catalog.pg_amproc'::pg_catalog.regclass
       AND refclassid = 'pg_catalog.pg_proc'::pg_catalog.regclass
       AND (refobjid = (my_schema || '.gseg_decompress(internal)')::pg_catalog.regprocedure))
  AND refclassid = 'pg_catalog.pg_opclass'::pg_catalog.regclass
  AND deptype = 'i';

PERFORM pg_catalog.set_config('search_path', old_path, true);
END
$$;

ALTER OPERATOR FAMILY gist_seg_ops USING gist drop function 3 (seg);
ALTER EXTENSION seg DROP function gseg_compress(pg_catalog.internal);
DROP function gseg_compress(pg_catalog.internal);

ALTER OPERATOR FAMILY gist_seg_ops USING gist drop function 4 (seg);
ALTER EXTENSION seg DROP function gseg_decompress(pg_catalog.internal);
DROP function gseg_decompress(pg_catalog.internal);
