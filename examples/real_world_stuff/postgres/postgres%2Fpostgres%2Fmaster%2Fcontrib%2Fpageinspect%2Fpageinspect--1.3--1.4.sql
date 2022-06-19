/* contrib/pageinspect/pageinspect--1.3--1.4.sql */

-- complain if script is sourced in psql, rather than via ALTER EXTENSION
\echo Use "ALTER EXTENSION pageinspect UPDATE TO '1.4'" to load this file. \quit

--
-- heap_page_items()
--
DROP FUNCTION heap_page_items(bytea);
CREATE FUNCTION heap_page_items(IN page bytea,
    OUT lp smallint,
    OUT lp_off smallint,
    OUT lp_flags smallint,
    OUT lp_len smallint,
    OUT t_xmin xid,
    OUT t_xmax xid,
    OUT t_field3 int4,
    OUT t_ctid tid,
    OUT t_infomask2 integer,
    OUT t_infomask integer,
    OUT t_hoff smallint,
    OUT t_bits text,
    OUT t_oid oid,
    OUT t_data bytea)
RETURNS SETOF record
AS 'MODULE_PATHNAME', 'heap_page_items'
LANGUAGE C STRICT;

--
-- tuple_data_split()
--
CREATE FUNCTION tuple_data_split(rel_oid oid,
    t_data bytea,
    t_infomask integer,
    t_infomask2 integer,
    t_bits text)
RETURNS bytea[]
AS 'MODULE_PATHNAME','tuple_data_split'
LANGUAGE C;

CREATE FUNCTION tuple_data_split(rel_oid oid,
    t_data bytea,
    t_infomask integer,
    t_infomask2 integer,
    t_bits text,
    do_detoast bool)
RETURNS bytea[]
AS 'MODULE_PATHNAME','tuple_data_split'
LANGUAGE C;

--
-- heap_page_item_attrs()
--
CREATE FUNCTION heap_page_item_attrs(
    IN page bytea,
    IN rel_oid regclass,
    IN do_detoast bool,
    OUT lp smallint,
    OUT lp_off smallint,
    OUT lp_flags smallint,
    OUT lp_len smallint,
    OUT t_xmin xid,
    OUT t_xmax xid,
    OUT t_field3 int4,
    OUT t_ctid tid,
    OUT t_infomask2 integer,
    OUT t_infomask integer,
    OUT t_hoff smallint,
    OUT t_bits text,
    OUT t_oid oid,
    OUT t_attrs bytea[]
    )
RETURNS SETOF record AS $$
SELECT lp,
       lp_off,
       lp_flags,
       lp_len,
       t_xmin,
       t_xmax,
       t_field3,
       t_ctid,
       t_infomask2,
       t_infomask,
       t_hoff,
       t_bits,
       t_oid,
       tuple_data_split(
         rel_oid,
         t_data,
	 t_infomask,
	 t_infomask2,
	 t_bits,
	 do_detoast)
	 AS t_attrs
  FROM heap_page_items(page);
$$ LANGUAGE SQL;

CREATE FUNCTION heap_page_item_attrs(
    IN page bytea,
    IN rel_oid regclass,
    OUT lp smallint,
    OUT lp_off smallint,
    OUT lp_flags smallint,
    OUT lp_len smallint,
    OUT t_xmin xid,
    OUT t_xmax xid,
    OUT t_field3 int4,
    OUT t_ctid tid,
    OUT t_infomask2 integer,
    OUT t_infomask integer,
    OUT t_hoff smallint,
    OUT t_bits text,
    OUT t_oid oid,
    OUT t_attrs bytea[]
    )
RETURNS SETOF record AS $$
SELECT * from heap_page_item_attrs(page, rel_oid, false);
$$ LANGUAGE SQL;
