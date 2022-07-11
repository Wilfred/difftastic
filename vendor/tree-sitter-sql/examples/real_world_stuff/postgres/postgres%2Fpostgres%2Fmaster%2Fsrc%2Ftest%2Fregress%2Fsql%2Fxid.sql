-- xid and xid8

-- values in range, in octal, decimal, hex
select '010'::xid,
       '42'::xid,
       '0xffffffff'::xid,
       '-1'::xid,
	   '010'::xid8,
	   '42'::xid8,
	   '0xffffffffffffffff'::xid8,
	   '-1'::xid8;

-- garbage values are not yet rejected (perhaps they should be)
select ''::xid;
select 'asdf'::xid;
select ''::xid8;
select 'asdf'::xid8;

-- equality
select '1'::xid = '1'::xid;
select '1'::xid != '1'::xid;
select '1'::xid8 = '1'::xid8;
select '1'::xid8 != '1'::xid8;

-- conversion
select '1'::xid = '1'::xid8::xid;
select '1'::xid != '1'::xid8::xid;

-- we don't want relational operators for xid, due to use of modular arithmetic
select '1'::xid < '2'::xid;
select '1'::xid <= '2'::xid;
select '1'::xid > '2'::xid;
select '1'::xid >= '2'::xid;

-- we want them for xid8 though
select '1'::xid8 < '2'::xid8, '2'::xid8 < '2'::xid8, '2'::xid8 < '1'::xid8;
select '1'::xid8 <= '2'::xid8, '2'::xid8 <= '2'::xid8, '2'::xid8 <= '1'::xid8;
select '1'::xid8 > '2'::xid8, '2'::xid8 > '2'::xid8, '2'::xid8 > '1'::xid8;
select '1'::xid8 >= '2'::xid8, '2'::xid8 >= '2'::xid8, '2'::xid8 >= '1'::xid8;

-- we also have a 3way compare for btrees
select xid8cmp('1', '2'), xid8cmp('2', '2'), xid8cmp('2', '1');

-- min() and max() for xid8
create table xid8_t1 (x xid8);
insert into xid8_t1 values ('0'), ('010'), ('42'), ('0xffffffffffffffff'), ('-1');
select min(x), max(x) from xid8_t1;

-- xid8 has btree and hash opclasses
create index on xid8_t1 using btree(x);
create index on xid8_t1 using hash(x);
drop table xid8_t1;


-- pg_snapshot data type and related functions

-- Note: another set of tests similar to this exists in txid.sql, for a limited
-- time (the relevant functions share C code)

-- i/o
select '12:13:'::pg_snapshot;
select '12:18:14,16'::pg_snapshot;
select '12:16:14,14'::pg_snapshot;

-- errors
select '31:12:'::pg_snapshot;
select '0:1:'::pg_snapshot;
select '12:13:0'::pg_snapshot;
select '12:16:14,13'::pg_snapshot;

create temp table snapshot_test (
	nr	integer,
	snap	pg_snapshot
);

insert into snapshot_test values (1, '12:13:');
insert into snapshot_test values (2, '12:20:13,15,18');
insert into snapshot_test values (3, '100001:100009:100005,100007,100008');
insert into snapshot_test values (4, '100:150:101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131');
select snap from snapshot_test order by nr;

select  pg_snapshot_xmin(snap),
	pg_snapshot_xmax(snap),
	pg_snapshot_xip(snap)
from snapshot_test order by nr;

select id, pg_visible_in_snapshot(id::text::xid8, snap)
from snapshot_test, generate_series(11, 21) id
where nr = 2;

-- test bsearch
select id, pg_visible_in_snapshot(id::text::xid8, snap)
from snapshot_test, generate_series(90, 160) id
where nr = 4;

-- test current values also
select pg_current_xact_id() >= pg_snapshot_xmin(pg_current_snapshot());

-- we can't assume current is always less than xmax, however

select pg_visible_in_snapshot(pg_current_xact_id(), pg_current_snapshot());

-- test 64bitness

select pg_snapshot '1000100010001000:1000100010001100:1000100010001012,1000100010001013';
select pg_visible_in_snapshot('1000100010001012', '1000100010001000:1000100010001100:1000100010001012,1000100010001013');
select pg_visible_in_snapshot('1000100010001015', '1000100010001000:1000100010001100:1000100010001012,1000100010001013');

-- test 64bit overflow
SELECT pg_snapshot '1:9223372036854775807:3';
SELECT pg_snapshot '1:9223372036854775808:3';

-- test pg_current_xact_id_if_assigned
BEGIN;
SELECT pg_current_xact_id_if_assigned() IS NULL;
SELECT pg_current_xact_id() \gset
SELECT pg_current_xact_id_if_assigned() IS NOT DISTINCT FROM xid8 :'pg_current_xact_id';
COMMIT;

-- test xid status functions
BEGIN;
SELECT pg_current_xact_id() AS committed \gset
COMMIT;

BEGIN;
SELECT pg_current_xact_id() AS rolledback \gset
ROLLBACK;

BEGIN;
SELECT pg_current_xact_id() AS inprogress \gset

SELECT pg_xact_status(:committed::text::xid8) AS committed;
SELECT pg_xact_status(:rolledback::text::xid8) AS rolledback;
SELECT pg_xact_status(:inprogress::text::xid8) AS inprogress;
SELECT pg_xact_status('1'::xid8); -- BootstrapTransactionId is always committed
SELECT pg_xact_status('2'::xid8); -- FrozenTransactionId is always committed
SELECT pg_xact_status('3'::xid8); -- in regress testing FirstNormalTransactionId will always be behind oldestXmin

COMMIT;

BEGIN;
CREATE FUNCTION test_future_xid_status(xid8)
RETURNS void
LANGUAGE plpgsql
AS
$$
BEGIN
  PERFORM pg_xact_status($1);
  RAISE EXCEPTION 'didn''t ERROR at xid in the future as expected';
EXCEPTION
  WHEN invalid_parameter_value THEN
    RAISE NOTICE 'Got expected error for xid in the future';
END;
$$;
SELECT test_future_xid_status((:inprogress + 10000)::text::xid8);
ROLLBACK;
