/* contrib/pageinspect/pageinspect--1.5.sql */

-- complain if script is sourced in psql, rather than via CREATE EXTENSION
\echo Use "CREATE EXTENSION pageinspect" to load this file. \quit

--
-- get_raw_page()
--
CREATE FUNCTION get_raw_page(text, int4)
RETURNS bytea
AS 'MODULE_PATHNAME', 'get_raw_page'
LANGUAGE C STRICT PARALLEL SAFE;

CREATE FUNCTION get_raw_page(text, text, int4)
RETURNS bytea
AS 'MODULE_PATHNAME', 'get_raw_page_fork'
LANGUAGE C STRICT PARALLEL SAFE;

--
-- page_header()
--
CREATE FUNCTION page_header(IN page bytea,
    OUT lsn pg_lsn,
    OUT checksum smallint,
    OUT flags smallint,
    OUT lower smallint,
    OUT upper smallint,
    OUT special smallint,
    OUT pagesize smallint,
    OUT version smallint,
    OUT prune_xid xid)
AS 'MODULE_PATHNAME', 'page_header'
LANGUAGE C STRICT PARALLEL SAFE;

--
-- heap_page_items()
--
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
LANGUAGE C STRICT PARALLEL SAFE;

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
LANGUAGE C PARALLEL SAFE;

CREATE FUNCTION tuple_data_split(rel_oid oid,
    t_data bytea,
    t_infomask integer,
    t_infomask2 integer,
    t_bits text,
    do_detoast bool)
RETURNS bytea[]
AS 'MODULE_PATHNAME','tuple_data_split'
LANGUAGE C PARALLEL SAFE;

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
$$ LANGUAGE SQL PARALLEL SAFE;

CREATE FUNCTION heap_page_item_attrs(IN page bytea, IN rel_oid regclass,
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
$$ LANGUAGE SQL PARALLEL SAFE;

--
-- bt_metap()
--
CREATE FUNCTION bt_metap(IN relname text,
    OUT magic int4,
    OUT version int4,
    OUT root int4,
    OUT level int4,
    OUT fastroot int4,
    OUT fastlevel int4)
AS 'MODULE_PATHNAME', 'bt_metap'
LANGUAGE C STRICT PARALLEL SAFE;

--
-- bt_page_stats()
--
CREATE FUNCTION bt_page_stats(IN relname text, IN blkno int4,
    OUT blkno int4,
    OUT type "char",
    OUT live_items int4,
    OUT dead_items int4,
    OUT avg_item_size int4,
    OUT page_size int4,
    OUT free_size int4,
    OUT btpo_prev int4,
    OUT btpo_next int4,
    OUT btpo int4,
    OUT btpo_flags int4)
AS 'MODULE_PATHNAME', 'bt_page_stats'
LANGUAGE C STRICT PARALLEL SAFE;

--
-- bt_page_items()
--
CREATE FUNCTION bt_page_items(IN relname text, IN blkno int4,
    OUT itemoffset smallint,
    OUT ctid tid,
    OUT itemlen smallint,
    OUT nulls bool,
    OUT vars bool,
    OUT data text)
RETURNS SETOF record
AS 'MODULE_PATHNAME', 'bt_page_items'
LANGUAGE C STRICT PARALLEL SAFE;

--
-- brin_page_type()
--
CREATE FUNCTION brin_page_type(IN page bytea)
RETURNS text
AS 'MODULE_PATHNAME', 'brin_page_type'
LANGUAGE C STRICT PARALLEL SAFE;

--
-- brin_metapage_info()
--
CREATE FUNCTION brin_metapage_info(IN page bytea, OUT magic text,
	OUT version integer, OUT pagesperrange integer, OUT lastrevmappage bigint)
AS 'MODULE_PATHNAME', 'brin_metapage_info'
LANGUAGE C STRICT PARALLEL SAFE;

--
-- brin_revmap_data()
--
CREATE FUNCTION brin_revmap_data(IN page bytea,
	OUT pages tid)
RETURNS SETOF tid
AS 'MODULE_PATHNAME', 'brin_revmap_data'
LANGUAGE C STRICT PARALLEL SAFE;

--
-- brin_page_items()
--
CREATE FUNCTION brin_page_items(IN page bytea, IN index_oid regclass,
	OUT itemoffset int,
	OUT blknum int,
	OUT attnum int,
	OUT allnulls bool,
	OUT hasnulls bool,
	OUT placeholder bool,
	OUT value text)
RETURNS SETOF record
AS 'MODULE_PATHNAME', 'brin_page_items'
LANGUAGE C STRICT PARALLEL SAFE;

--
-- fsm_page_contents()
--
CREATE FUNCTION fsm_page_contents(IN page bytea)
RETURNS text
AS 'MODULE_PATHNAME', 'fsm_page_contents'
LANGUAGE C STRICT PARALLEL SAFE;

--
-- GIN functions
--

--
-- gin_metapage_info()
--
CREATE FUNCTION gin_metapage_info(IN page bytea,
    OUT pending_head bigint,
    OUT pending_tail bigint,
    OUT tail_free_size int4,
    OUT n_pending_pages bigint,
    OUT n_pending_tuples bigint,
    OUT n_total_pages bigint,
    OUT n_entry_pages bigint,
    OUT n_data_pages bigint,
    OUT n_entries bigint,
    OUT version int4)
AS 'MODULE_PATHNAME', 'gin_metapage_info'
LANGUAGE C STRICT PARALLEL SAFE;

--
-- gin_page_opaque_info()
--
CREATE FUNCTION gin_page_opaque_info(IN page bytea,
    OUT rightlink bigint,
    OUT maxoff int4,
    OUT flags text[])
AS 'MODULE_PATHNAME', 'gin_page_opaque_info'
LANGUAGE C STRICT PARALLEL SAFE;

--
-- gin_leafpage_items()
--
CREATE FUNCTION gin_leafpage_items(IN page bytea,
    OUT first_tid tid,
    OUT nbytes int2,
    OUT tids tid[])
RETURNS SETOF record
AS 'MODULE_PATHNAME', 'gin_leafpage_items'
LANGUAGE C STRICT PARALLEL SAFE;
