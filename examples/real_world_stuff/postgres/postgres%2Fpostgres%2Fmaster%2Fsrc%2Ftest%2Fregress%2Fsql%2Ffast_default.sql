--
-- ALTER TABLE ADD COLUMN DEFAULT test
--

SET search_path = fast_default;
CREATE SCHEMA fast_default;
CREATE TABLE m(id OID);
INSERT INTO m VALUES (NULL::OID);

CREATE FUNCTION set(tabname name) RETURNS VOID
AS $$
BEGIN
  UPDATE m
  SET id = (SELECT c.relfilenode
            FROM pg_class AS c, pg_namespace AS s
            WHERE c.relname = tabname
                AND c.relnamespace = s.oid
                AND s.nspname = 'fast_default');
END;
$$ LANGUAGE 'plpgsql';

CREATE FUNCTION comp() RETURNS TEXT
AS $$
BEGIN
  RETURN (SELECT CASE
               WHEN m.id = c.relfilenode THEN 'Unchanged'
               ELSE 'Rewritten'
               END
           FROM m, pg_class AS c, pg_namespace AS s
           WHERE c.relname = 't'
               AND c.relnamespace = s.oid
               AND s.nspname = 'fast_default');
END;
$$ LANGUAGE 'plpgsql';

CREATE FUNCTION log_rewrite() RETURNS event_trigger
LANGUAGE plpgsql as
$func$

declare
   this_schema text;
begin
    select into this_schema relnamespace::regnamespace::text
    from pg_class
    where oid = pg_event_trigger_table_rewrite_oid();
    if this_schema = 'fast_default'
    then
        RAISE NOTICE 'rewriting table % for reason %',
          pg_event_trigger_table_rewrite_oid()::regclass,
          pg_event_trigger_table_rewrite_reason();
    end if;
end;
$func$;

CREATE TABLE has_volatile AS
SELECT * FROM generate_series(1,10) id;


CREATE EVENT TRIGGER has_volatile_rewrite
                  ON table_rewrite
   EXECUTE PROCEDURE log_rewrite();

-- only the last of these should trigger a rewrite
ALTER TABLE has_volatile ADD col1 int;
ALTER TABLE has_volatile ADD col2 int DEFAULT 1;
ALTER TABLE has_volatile ADD col3 timestamptz DEFAULT current_timestamp;
ALTER TABLE has_volatile ADD col4 int DEFAULT (random() * 10000)::int;



-- Test a large sample of different datatypes
CREATE TABLE T(pk INT NOT NULL PRIMARY KEY, c_int INT DEFAULT 1);

SELECT set('t');

INSERT INTO T VALUES (1), (2);

ALTER TABLE T ADD COLUMN c_bpchar BPCHAR(5) DEFAULT 'hello',
              ALTER COLUMN c_int SET DEFAULT 2;

INSERT INTO T VALUES (3), (4);


ALTER TABLE T ADD COLUMN c_text TEXT  DEFAULT 'world',
              ALTER COLUMN c_bpchar SET DEFAULT 'dog';

INSERT INTO T VALUES (5), (6);

ALTER TABLE T ADD COLUMN c_date DATE DEFAULT '2016-06-02',
              ALTER COLUMN c_text SET DEFAULT 'cat';

INSERT INTO T VALUES (7), (8);

ALTER TABLE T ADD COLUMN c_timestamp TIMESTAMP DEFAULT '2016-09-01 12:00:00',
              ADD COLUMN c_timestamp_null TIMESTAMP,
              ALTER COLUMN c_date SET DEFAULT '2010-01-01';

INSERT INTO T VALUES (9), (10);

ALTER TABLE T ADD COLUMN c_array TEXT[]
                  DEFAULT '{"This", "is", "the", "real", "world"}',
              ALTER COLUMN c_timestamp SET DEFAULT '1970-12-31 11:12:13',
              ALTER COLUMN c_timestamp_null SET DEFAULT '2016-09-29 12:00:00';

INSERT INTO T VALUES (11), (12);

ALTER TABLE T ADD COLUMN c_small SMALLINT DEFAULT -5,
              ADD COLUMN c_small_null SMALLINT,
              ALTER COLUMN c_array
                  SET DEFAULT '{"This", "is", "no", "fantasy"}';

INSERT INTO T VALUES (13), (14);

ALTER TABLE T ADD COLUMN c_big BIGINT DEFAULT 180000000000018,
              ALTER COLUMN c_small SET DEFAULT 9,
              ALTER COLUMN c_small_null SET DEFAULT 13;

INSERT INTO T VALUES (15), (16);

ALTER TABLE T ADD COLUMN c_num NUMERIC DEFAULT 1.00000000001,
              ALTER COLUMN c_big SET DEFAULT -9999999999999999;

INSERT INTO T VALUES (17), (18);

ALTER TABLE T ADD COLUMN c_time TIME DEFAULT '12:00:00',
              ALTER COLUMN c_num SET DEFAULT 2.000000000000002;

INSERT INTO T VALUES (19), (20);

ALTER TABLE T ADD COLUMN c_interval INTERVAL DEFAULT '1 day',
              ALTER COLUMN c_time SET DEFAULT '23:59:59';

INSERT INTO T VALUES (21), (22);

ALTER TABLE T ADD COLUMN c_hugetext TEXT DEFAULT repeat('abcdefg',1000),
              ALTER COLUMN c_interval SET DEFAULT '3 hours';

INSERT INTO T VALUES (23), (24);

ALTER TABLE T ALTER COLUMN c_interval DROP DEFAULT,
              ALTER COLUMN c_hugetext SET DEFAULT repeat('poiuyt', 1000);

INSERT INTO T VALUES (25), (26);

ALTER TABLE T ALTER COLUMN c_bpchar    DROP DEFAULT,
              ALTER COLUMN c_date      DROP DEFAULT,
              ALTER COLUMN c_text      DROP DEFAULT,
              ALTER COLUMN c_timestamp DROP DEFAULT,
              ALTER COLUMN c_array     DROP DEFAULT,
              ALTER COLUMN c_small     DROP DEFAULT,
              ALTER COLUMN c_big       DROP DEFAULT,
              ALTER COLUMN c_num       DROP DEFAULT,
              ALTER COLUMN c_time      DROP DEFAULT,
              ALTER COLUMN c_hugetext  DROP DEFAULT;

INSERT INTO T VALUES (27), (28);

SELECT pk, c_int, c_bpchar, c_text, c_date, c_timestamp,
       c_timestamp_null, c_array, c_small, c_small_null,
       c_big, c_num, c_time, c_interval,
       c_hugetext = repeat('abcdefg',1000) as c_hugetext_origdef,
       c_hugetext = repeat('poiuyt', 1000) as c_hugetext_newdef
FROM T ORDER BY pk;

SELECT comp();

DROP TABLE T;

-- Test expressions in the defaults
CREATE OR REPLACE FUNCTION foo(a INT) RETURNS TEXT AS $$
DECLARE res TEXT := '';
        i INT;
BEGIN
  i := 0;
  WHILE (i < a) LOOP
    res := res || chr(ascii('a') + i);
    i := i + 1;
  END LOOP;
  RETURN res;
END; $$ LANGUAGE PLPGSQL STABLE;

CREATE TABLE T(pk INT NOT NULL PRIMARY KEY, c_int INT DEFAULT LENGTH(foo(6)));

SELECT set('t');

INSERT INTO T VALUES (1), (2);

ALTER TABLE T ADD COLUMN c_bpchar BPCHAR(5) DEFAULT foo(4),
              ALTER COLUMN c_int SET DEFAULT LENGTH(foo(8));

INSERT INTO T VALUES (3), (4);

ALTER TABLE T ADD COLUMN c_text TEXT  DEFAULT foo(6),
              ALTER COLUMN c_bpchar SET DEFAULT foo(3);

INSERT INTO T VALUES (5), (6);

ALTER TABLE T ADD COLUMN c_date DATE
                  DEFAULT '2016-06-02'::DATE  + LENGTH(foo(10)),
              ALTER COLUMN c_text SET DEFAULT foo(12);

INSERT INTO T VALUES (7), (8);

ALTER TABLE T ADD COLUMN c_timestamp TIMESTAMP
                  DEFAULT '2016-09-01'::DATE + LENGTH(foo(10)),
              ALTER COLUMN c_date
                  SET DEFAULT '2010-01-01'::DATE - LENGTH(foo(4));

INSERT INTO T VALUES (9), (10);

ALTER TABLE T ADD COLUMN c_array TEXT[]
                  DEFAULT ('{"This", "is", "' || foo(4) ||
                           '","the", "real", "world"}')::TEXT[],
              ALTER COLUMN c_timestamp
                  SET DEFAULT '1970-12-31'::DATE + LENGTH(foo(30));

INSERT INTO T VALUES (11), (12);

ALTER TABLE T ALTER COLUMN c_int DROP DEFAULT,
              ALTER COLUMN c_array
                  SET DEFAULT ('{"This", "is", "' || foo(1) ||
                               '", "fantasy"}')::text[];

INSERT INTO T VALUES (13), (14);

ALTER TABLE T ALTER COLUMN c_bpchar    DROP DEFAULT,
              ALTER COLUMN c_date      DROP DEFAULT,
              ALTER COLUMN c_text      DROP DEFAULT,
              ALTER COLUMN c_timestamp DROP DEFAULT,
              ALTER COLUMN c_array     DROP DEFAULT;

INSERT INTO T VALUES (15), (16);

SELECT * FROM T;

SELECT comp();

DROP TABLE T;

DROP FUNCTION foo(INT);

-- Fall back to full rewrite for volatile expressions
CREATE TABLE T(pk INT NOT NULL PRIMARY KEY);

INSERT INTO T VALUES (1);

SELECT set('t');

-- now() is stable, because it returns the transaction timestamp
ALTER TABLE T ADD COLUMN c1 TIMESTAMP DEFAULT now();

SELECT comp();

-- clock_timestamp() is volatile
ALTER TABLE T ADD COLUMN c2 TIMESTAMP DEFAULT clock_timestamp();

SELECT comp();

DROP TABLE T;

-- Simple querie
CREATE TABLE T (pk INT NOT NULL PRIMARY KEY);

SELECT set('t');

INSERT INTO T SELECT * FROM generate_series(1, 10) a;

ALTER TABLE T ADD COLUMN c_bigint BIGINT NOT NULL DEFAULT -1;

INSERT INTO T SELECT b, b - 10 FROM generate_series(11, 20) a(b);

ALTER TABLE T ADD COLUMN c_text TEXT DEFAULT 'hello';

INSERT INTO T SELECT b, b - 10, (b + 10)::text FROM generate_series(21, 30) a(b);

-- WHERE clause
SELECT c_bigint, c_text FROM T WHERE c_bigint = -1 LIMIT 1;

EXPLAIN (VERBOSE TRUE, COSTS FALSE)
SELECT c_bigint, c_text FROM T WHERE c_bigint = -1 LIMIT 1;

SELECT c_bigint, c_text FROM T WHERE c_text = 'hello' LIMIT 1;

EXPLAIN (VERBOSE TRUE, COSTS FALSE) SELECT c_bigint, c_text FROM T WHERE c_text = 'hello' LIMIT 1;


-- COALESCE
SELECT COALESCE(c_bigint, pk), COALESCE(c_text, pk::text)
FROM T
ORDER BY pk LIMIT 10;

-- Aggregate function
SELECT SUM(c_bigint), MAX(c_text COLLATE "C" ), MIN(c_text COLLATE "C") FROM T;

-- ORDER BY
SELECT * FROM T ORDER BY c_bigint, c_text, pk LIMIT 10;

EXPLAIN (VERBOSE TRUE, COSTS FALSE)
SELECT * FROM T ORDER BY c_bigint, c_text, pk LIMIT 10;

-- LIMIT
SELECT * FROM T WHERE c_bigint > -1 ORDER BY c_bigint, c_text, pk LIMIT 10;

EXPLAIN (VERBOSE TRUE, COSTS FALSE)
SELECT * FROM T WHERE c_bigint > -1 ORDER BY c_bigint, c_text, pk LIMIT 10;

--  DELETE with RETURNING
DELETE FROM T WHERE pk BETWEEN 10 AND 20 RETURNING *;
EXPLAIN (VERBOSE TRUE, COSTS FALSE)
DELETE FROM T WHERE pk BETWEEN 10 AND 20 RETURNING *;

-- UPDATE
UPDATE T SET c_text = '"' || c_text || '"'  WHERE pk < 10;
SELECT * FROM T WHERE c_text LIKE '"%"' ORDER BY PK;

SELECT comp();

DROP TABLE T;


-- Combine with other DDL
CREATE TABLE T(pk INT NOT NULL PRIMARY KEY);

SELECT set('t');

INSERT INTO T VALUES (1), (2);

ALTER TABLE T ADD COLUMN c_int INT NOT NULL DEFAULT -1;

INSERT INTO T VALUES (3), (4);

ALTER TABLE T ADD COLUMN c_text TEXT DEFAULT 'Hello';

INSERT INTO T VALUES (5), (6);

ALTER TABLE T ALTER COLUMN c_text SET DEFAULT 'world',
              ALTER COLUMN c_int  SET DEFAULT 1;

INSERT INTO T VALUES (7), (8);

SELECT * FROM T ORDER BY pk;

-- Add an index
CREATE INDEX i ON T(c_int, c_text);

SELECT c_text FROM T WHERE c_int = -1;

SELECT comp();

-- query to exercise expand_tuple function
CREATE TABLE t1 AS
SELECT 1::int AS a , 2::int AS b
FROM generate_series(1,20) q;

ALTER TABLE t1 ADD COLUMN c text;

SELECT a,
       stddev(cast((SELECT sum(1) FROM generate_series(1,20) x) AS float4))
          OVER (PARTITION BY a,b,c ORDER BY b)
       AS z
FROM t1;

DROP TABLE T;

-- test that we account for missing columns without defaults correctly
-- in expand_tuple, and that rows are correctly expanded for triggers

CREATE FUNCTION test_trigger()
RETURNS trigger
LANGUAGE plpgsql
AS $$

begin
    raise notice 'old tuple: %', to_json(OLD)::text;
    if TG_OP = 'DELETE'
    then
       return OLD;
    else
       return NEW;
    end if;
end;

$$;

-- 2 new columns, both have defaults
CREATE TABLE t (id serial PRIMARY KEY, a int, b int, c int);
INSERT INTO t (a,b,c) VALUES (1,2,3);
ALTER TABLE t ADD COLUMN x int NOT NULL DEFAULT 4;
ALTER TABLE t ADD COLUMN y int NOT NULL DEFAULT 5;
CREATE TRIGGER a BEFORE UPDATE ON t FOR EACH ROW EXECUTE PROCEDURE test_trigger();
SELECT * FROM t;
UPDATE t SET y = 2;
SELECT * FROM t;
DROP TABLE t;

-- 2 new columns, first has default
CREATE TABLE t (id serial PRIMARY KEY, a int, b int, c int);
INSERT INTO t (a,b,c) VALUES (1,2,3);
ALTER TABLE t ADD COLUMN x int NOT NULL DEFAULT 4;
ALTER TABLE t ADD COLUMN y int;
CREATE TRIGGER a BEFORE UPDATE ON t FOR EACH ROW EXECUTE PROCEDURE test_trigger();
SELECT * FROM t;
UPDATE t SET y = 2;
SELECT * FROM t;
DROP TABLE t;

-- 2 new columns, second has default
CREATE TABLE t (id serial PRIMARY KEY, a int, b int, c int);
INSERT INTO t (a,b,c) VALUES (1,2,3);
ALTER TABLE t ADD COLUMN x int;
ALTER TABLE t ADD COLUMN y int NOT NULL DEFAULT 5;
CREATE TRIGGER a BEFORE UPDATE ON t FOR EACH ROW EXECUTE PROCEDURE test_trigger();
SELECT * FROM t;
UPDATE t SET y = 2;
SELECT * FROM t;
DROP TABLE t;

-- 2 new columns, neither has default
CREATE TABLE t (id serial PRIMARY KEY, a int, b int, c int);
INSERT INTO t (a,b,c) VALUES (1,2,3);
ALTER TABLE t ADD COLUMN x int;
ALTER TABLE t ADD COLUMN y int;
CREATE TRIGGER a BEFORE UPDATE ON t FOR EACH ROW EXECUTE PROCEDURE test_trigger();
SELECT * FROM t;
UPDATE t SET y = 2;
SELECT * FROM t;
DROP TABLE t;

-- same as last 4 tests but here the last original column has a NULL value
-- 2 new columns, both have defaults
CREATE TABLE t (id serial PRIMARY KEY, a int, b int, c int);
INSERT INTO t (a,b,c) VALUES (1,2,NULL);
ALTER TABLE t ADD COLUMN x int NOT NULL DEFAULT 4;
ALTER TABLE t ADD COLUMN y int NOT NULL DEFAULT 5;
CREATE TRIGGER a BEFORE UPDATE ON t FOR EACH ROW EXECUTE PROCEDURE test_trigger();
SELECT * FROM t;
UPDATE t SET y = 2;
SELECT * FROM t;
DROP TABLE t;

-- 2 new columns, first has default
CREATE TABLE t (id serial PRIMARY KEY, a int, b int, c int);
INSERT INTO t (a,b,c) VALUES (1,2,NULL);
ALTER TABLE t ADD COLUMN x int NOT NULL DEFAULT 4;
ALTER TABLE t ADD COLUMN y int;
CREATE TRIGGER a BEFORE UPDATE ON t FOR EACH ROW EXECUTE PROCEDURE test_trigger();
SELECT * FROM t;
UPDATE t SET y = 2;
SELECT * FROM t;
DROP TABLE t;

-- 2 new columns, second has default
CREATE TABLE t (id serial PRIMARY KEY, a int, b int, c int);
INSERT INTO t (a,b,c) VALUES (1,2,NULL);
ALTER TABLE t ADD COLUMN x int;
ALTER TABLE t ADD COLUMN y int NOT NULL DEFAULT 5;
CREATE TRIGGER a BEFORE UPDATE ON t FOR EACH ROW EXECUTE PROCEDURE test_trigger();
SELECT * FROM t;
UPDATE t SET y = 2;
SELECT * FROM t;
DROP TABLE t;

-- 2 new columns, neither has default
CREATE TABLE t (id serial PRIMARY KEY, a int, b int, c int);
INSERT INTO t (a,b,c) VALUES (1,2,NULL);
ALTER TABLE t ADD COLUMN x int;
ALTER TABLE t ADD COLUMN y int;
CREATE TRIGGER a BEFORE UPDATE ON t FOR EACH ROW EXECUTE PROCEDURE test_trigger();
SELECT * FROM t;
UPDATE t SET y = 2;
SELECT * FROM t;
DROP TABLE t;

-- make sure expanded tuple has correct self pointer
-- it will be required by the RI trigger doing the cascading delete

CREATE TABLE leader (a int PRIMARY KEY, b int);
CREATE TABLE follower (a int REFERENCES leader ON DELETE CASCADE, b int);
INSERT INTO leader VALUES (1, 1), (2, 2);
ALTER TABLE leader ADD c int;
ALTER TABLE leader DROP c;
DELETE FROM leader;

-- check that ALTER TABLE ... ALTER TYPE does the right thing

CREATE TABLE vtype( a integer);
INSERT INTO vtype VALUES (1);
ALTER TABLE vtype ADD COLUMN b DOUBLE PRECISION DEFAULT 0.2;
ALTER TABLE vtype ADD COLUMN c BOOLEAN DEFAULT true;
SELECT * FROM vtype;
ALTER TABLE vtype
      ALTER b TYPE text USING b::text,
      ALTER c TYPE text USING c::text;
SELECT * FROM vtype;

-- also check the case that doesn't rewrite the table

CREATE TABLE vtype2 (a int);
INSERT INTO vtype2 VALUES (1);
ALTER TABLE vtype2 ADD COLUMN b varchar(10) DEFAULT 'xxx';
ALTER TABLE vtype2 ALTER COLUMN b SET DEFAULT 'yyy';
INSERT INTO vtype2 VALUES (2);

ALTER TABLE vtype2 ALTER COLUMN b TYPE varchar(20) USING b::varchar(20);
SELECT * FROM vtype2;


-- Ensure that defaults are checked when evaluating whether HOT update
-- is possible, this was broken for a while:
-- https://postgr.es/m/20190202133521.ylauh3ckqa7colzj%40alap3.anarazel.de
BEGIN;
CREATE TABLE t();
INSERT INTO t DEFAULT VALUES;
ALTER TABLE t ADD COLUMN a int DEFAULT 1;
CREATE INDEX ON t(a);
-- set column with a default 1 to NULL, due to a bug that wasn't
-- noticed has heap_getattr buggily returned NULL for default columns
UPDATE t SET a = NULL;

-- verify that index and non-index scans show the same result
SET LOCAL enable_seqscan = true;
SELECT * FROM t WHERE a IS NULL;
SET LOCAL enable_seqscan = false;
SELECT * FROM t WHERE a IS NULL;
ROLLBACK;

-- verify that a default set on a non-plain table doesn't set a missing
-- value on the attribute
CREATE FOREIGN DATA WRAPPER dummy;
CREATE SERVER s0 FOREIGN DATA WRAPPER dummy;
CREATE FOREIGN TABLE ft1 (c1 integer NOT NULL) SERVER s0;
ALTER FOREIGN TABLE ft1 ADD COLUMN c8 integer DEFAULT 0;
ALTER FOREIGN TABLE ft1 ALTER COLUMN c8 TYPE char(10);
SELECT count(*)
  FROM pg_attribute
  WHERE attrelid = 'ft1'::regclass AND
    (attmissingval IS NOT NULL OR atthasmissing);

-- cleanup
DROP FOREIGN TABLE ft1;
DROP SERVER s0;
DROP FOREIGN DATA WRAPPER dummy;
DROP TABLE vtype;
DROP TABLE vtype2;
DROP TABLE follower;
DROP TABLE leader;
DROP FUNCTION test_trigger();
DROP TABLE t1;
DROP FUNCTION set(name);
DROP FUNCTION comp();
DROP TABLE m;
DROP TABLE has_volatile;
DROP EVENT TRIGGER has_volatile_rewrite;
DROP FUNCTION log_rewrite;
DROP SCHEMA fast_default;

-- Leave a table with an active fast default in place, for pg_upgrade testing
set search_path = public;
create table has_fast_default(f1 int);
insert into has_fast_default values(1);
alter table has_fast_default add column f2 int default 42;
table has_fast_default;
