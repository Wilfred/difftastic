CREATE EXTENSION pg_stat_statements;

--
-- simple and compound statements
--
SET pg_stat_statements.track_utility = FALSE;
SET pg_stat_statements.track_planning = TRUE;
SELECT pg_stat_statements_reset();

SELECT 1 AS "int";

SELECT 'hello'
  -- multiline
  AS "text";

SELECT 'world' AS "text";

-- transaction
BEGIN;
SELECT 1 AS "int";
SELECT 'hello' AS "text";
COMMIT;

-- compound transaction
BEGIN \;
SELECT 2.0 AS "float" \;
SELECT 'world' AS "text" \;
COMMIT;

-- compound with empty statements and spurious leading spacing
\;\;   SELECT 3 + 3 \;\;\;   SELECT ' ' || ' !' \;\;   SELECT 1 + 4 \;;

-- non ;-terminated statements
SELECT 1 + 1 + 1 AS "add" \gset
SELECT :add + 1 + 1 AS "add" \;
SELECT :add + 1 + 1 AS "add" \gset

-- set operator
SELECT 1 AS i UNION SELECT 2 ORDER BY i;

-- ? operator
select '{"a":1, "b":2}'::jsonb ? 'b';

-- cte
WITH t(f) AS (
  VALUES (1.0), (2.0)
)
  SELECT f FROM t ORDER BY f;

-- prepared statement with parameter
PREPARE pgss_test (int) AS SELECT $1, 'test' LIMIT 1;
EXECUTE pgss_test(1);
DEALLOCATE pgss_test;

SELECT query, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- CRUD: INSERT SELECT UPDATE DELETE on test table
--
SELECT pg_stat_statements_reset();

-- utility "create table" should not be shown
CREATE TEMP TABLE test (a int, b char(20));

INSERT INTO test VALUES(generate_series(1, 10), 'aaa');
UPDATE test SET b = 'bbb' WHERE a > 7;
DELETE FROM test WHERE a > 9;

-- explicit transaction
BEGIN;
UPDATE test SET b = '111' WHERE a = 1 ;
COMMIT;

BEGIN \;
UPDATE test SET b = '222' WHERE a = 2 \;
COMMIT ;

UPDATE test SET b = '333' WHERE a = 3 \;
UPDATE test SET b = '444' WHERE a = 4 ;

BEGIN \;
UPDATE test SET b = '555' WHERE a = 5 \;
UPDATE test SET b = '666' WHERE a = 6 \;
COMMIT ;

-- many INSERT values
INSERT INTO test (a, b) VALUES (1, 'a'), (2, 'b'), (3, 'c');

-- SELECT with constants
SELECT * FROM test WHERE a > 5 ORDER BY a ;

SELECT *
  FROM test
  WHERE a > 9
  ORDER BY a ;

-- SELECT without constants
SELECT * FROM test ORDER BY a;

-- SELECT with IN clause
SELECT * FROM test WHERE a IN (1, 2, 3, 4, 5);

SELECT query, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- INSERT, UPDATE, DELETE on test table to validate WAL generation metrics
--
SELECT pg_stat_statements_reset();

-- utility "create table" should not be shown
CREATE TABLE pgss_test (a int, b char(20));

INSERT INTO pgss_test VALUES(generate_series(1, 10), 'aaa');
UPDATE pgss_test SET b = 'bbb' WHERE a > 7;
DELETE FROM pgss_test WHERE a > 9;
-- DROP test table
SET pg_stat_statements.track_utility = TRUE;
DROP TABLE pgss_test;
SET pg_stat_statements.track_utility = FALSE;

-- Check WAL is generated for the above statements
SELECT query, calls, rows,
wal_bytes > 0 as wal_bytes_generated,
wal_records > 0 as wal_records_generated,
wal_records = rows as wal_records_as_rows
FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- pg_stat_statements.track = none
--
SET pg_stat_statements.track = 'none';
SELECT pg_stat_statements_reset();

SELECT 1 AS "one";
SELECT 1 + 1 AS "two";

SELECT query, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- pg_stat_statements.track = top
--
SET pg_stat_statements.track = 'top';
SELECT pg_stat_statements_reset();

DO LANGUAGE plpgsql $$
BEGIN
  -- this is a SELECT
  PERFORM 'hello world'::TEXT;
END;
$$;

-- PL/pgSQL function
CREATE FUNCTION PLUS_TWO(i INTEGER) RETURNS INTEGER AS $$
DECLARE
  r INTEGER;
BEGIN
  SELECT (i + 1 + 1.0)::INTEGER INTO r;
  RETURN r;
END; $$ LANGUAGE plpgsql;

SELECT PLUS_TWO(3);
SELECT PLUS_TWO(7);

-- SQL function --- use LIMIT to keep it from being inlined
CREATE FUNCTION PLUS_ONE(i INTEGER) RETURNS INTEGER AS
$$ SELECT (i + 1.0)::INTEGER LIMIT 1 $$ LANGUAGE SQL;

SELECT PLUS_ONE(8);
SELECT PLUS_ONE(10);

SELECT query, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- pg_stat_statements.track = all
--
SET pg_stat_statements.track = 'all';
SELECT pg_stat_statements_reset();

-- we drop and recreate the functions to avoid any caching funnies
DROP FUNCTION PLUS_ONE(INTEGER);
DROP FUNCTION PLUS_TWO(INTEGER);

-- PL/pgSQL function
CREATE FUNCTION PLUS_TWO(i INTEGER) RETURNS INTEGER AS $$
DECLARE
  r INTEGER;
BEGIN
  SELECT (i + 1 + 1.0)::INTEGER INTO r;
  RETURN r;
END; $$ LANGUAGE plpgsql;

SELECT PLUS_TWO(-1);
SELECT PLUS_TWO(2);

-- SQL function --- use LIMIT to keep it from being inlined
CREATE FUNCTION PLUS_ONE(i INTEGER) RETURNS INTEGER AS
$$ SELECT (i + 1.0)::INTEGER LIMIT 1 $$ LANGUAGE SQL;

SELECT PLUS_ONE(3);
SELECT PLUS_ONE(1);

SELECT query, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- queries with locking clauses
--
CREATE TABLE pgss_a (id integer PRIMARY KEY);
CREATE TABLE pgss_b (id integer PRIMARY KEY, a_id integer REFERENCES pgss_a);

SELECT pg_stat_statements_reset();

-- control query
SELECT * FROM pgss_a JOIN pgss_b ON pgss_b.a_id = pgss_a.id;

-- test range tables
SELECT * FROM pgss_a JOIN pgss_b ON pgss_b.a_id = pgss_a.id FOR UPDATE;
SELECT * FROM pgss_a JOIN pgss_b ON pgss_b.a_id = pgss_a.id FOR UPDATE OF pgss_a;
SELECT * FROM pgss_a JOIN pgss_b ON pgss_b.a_id = pgss_a.id FOR UPDATE OF pgss_b;
SELECT * FROM pgss_a JOIN pgss_b ON pgss_b.a_id = pgss_a.id FOR UPDATE OF pgss_a, pgss_b; -- matches plain "FOR UPDATE"
SELECT * FROM pgss_a JOIN pgss_b ON pgss_b.a_id = pgss_a.id FOR UPDATE OF pgss_b, pgss_a;

-- test strengths
SELECT * FROM pgss_a JOIN pgss_b ON pgss_b.a_id = pgss_a.id FOR NO KEY UPDATE;
SELECT * FROM pgss_a JOIN pgss_b ON pgss_b.a_id = pgss_a.id FOR SHARE;
SELECT * FROM pgss_a JOIN pgss_b ON pgss_b.a_id = pgss_a.id FOR KEY SHARE;

-- test wait policies
SELECT * FROM pgss_a JOIN pgss_b ON pgss_b.a_id = pgss_a.id FOR UPDATE NOWAIT;
SELECT * FROM pgss_a JOIN pgss_b ON pgss_b.a_id = pgss_a.id FOR UPDATE SKIP LOCKED;

SELECT calls, query FROM pg_stat_statements ORDER BY query COLLATE "C";

DROP TABLE pgss_a, pgss_b CASCADE;

--
-- utility commands
--
SET pg_stat_statements.track_utility = TRUE;
SELECT pg_stat_statements_reset();

SELECT 1;
CREATE INDEX test_b ON test(b);
DROP TABLE test \;
DROP TABLE IF EXISTS test \;
DROP FUNCTION PLUS_ONE(INTEGER);
DROP TABLE IF EXISTS test \;
DROP TABLE IF EXISTS test \;
DROP FUNCTION IF EXISTS PLUS_ONE(INTEGER);
DROP FUNCTION PLUS_TWO(INTEGER);

SELECT query, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- Track the total number of rows retrieved or affected by the utility
-- commands of COPY, FETCH, CREATE TABLE AS, CREATE MATERIALIZED VIEW,
-- REFRESH MATERIALIZED VIEW and SELECT INTO
--
SELECT pg_stat_statements_reset();

CREATE TABLE pgss_ctas AS SELECT a, 'ctas' b FROM generate_series(1, 10) a;
SELECT generate_series(1, 10) c INTO pgss_select_into;
COPY pgss_ctas (a, b) FROM STDIN;
11	copy
12	copy
13	copy
\.
CREATE MATERIALIZED VIEW pgss_matv AS SELECT * FROM pgss_ctas;
REFRESH MATERIALIZED VIEW pgss_matv;
BEGIN;
DECLARE pgss_cursor CURSOR FOR SELECT * FROM pgss_matv;
FETCH NEXT pgss_cursor;
FETCH FORWARD 5 pgss_cursor;
FETCH FORWARD ALL pgss_cursor;
COMMIT;

SELECT query, plans, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- Track user activity and reset them
--
SELECT pg_stat_statements_reset();
CREATE ROLE regress_stats_user1;
CREATE ROLE regress_stats_user2;

SET ROLE regress_stats_user1;

SELECT 1 AS "ONE";
SELECT 1+1 AS "TWO";

RESET ROLE;
SET ROLE regress_stats_user2;

SELECT 1 AS "ONE";
SELECT 1+1 AS "TWO";

RESET ROLE;
SELECT query, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- Don't reset anything if any of the parameter is NULL
--
SELECT pg_stat_statements_reset(NULL);
SELECT query, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- remove query ('SELECT $1+$2 AS "TWO"') executed by regress_stats_user2
-- in the current_database
--
SELECT pg_stat_statements_reset(
	(SELECT r.oid FROM pg_roles AS r WHERE r.rolname = 'regress_stats_user2'),
	(SELECT d.oid FROM pg_database As d where datname = current_database()),
	(SELECT s.queryid FROM pg_stat_statements AS s
				WHERE s.query = 'SELECT $1+$2 AS "TWO"' LIMIT 1));
SELECT query, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- remove query ('SELECT $1 AS "ONE"') executed by two users
--
SELECT pg_stat_statements_reset(0,0,s.queryid)
	FROM pg_stat_statements AS s WHERE s.query = 'SELECT $1 AS "ONE"';
SELECT query, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- remove query of a user (regress_stats_user1)
--
SELECT pg_stat_statements_reset(r.oid)
		FROM pg_roles AS r WHERE r.rolname = 'regress_stats_user1';
SELECT query, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- reset all
--
SELECT pg_stat_statements_reset(0,0,0);
SELECT query, calls, rows FROM pg_stat_statements ORDER BY query COLLATE "C";

--
-- cleanup
--
DROP ROLE regress_stats_user1;
DROP ROLE regress_stats_user2;
DROP MATERIALIZED VIEW pgss_matv;
DROP TABLE pgss_ctas;
DROP TABLE pgss_select_into;

--
-- [re]plan counting
--
SELECT pg_stat_statements_reset();
CREATE TABLE test ();
PREPARE prep1 AS SELECT COUNT(*) FROM test;
EXECUTE prep1;
EXECUTE prep1;
EXECUTE prep1;
ALTER TABLE test ADD COLUMN x int;
EXECUTE prep1;
SELECT 42;
SELECT 42;
SELECT 42;
SELECT query, plans, calls, rows FROM pg_stat_statements
  WHERE query NOT LIKE 'PREPARE%' ORDER BY query COLLATE "C";
-- for the prepared statement we expect at least one replan, but cache
-- invalidations could force more
SELECT query, plans >= 2 AND plans <= calls AS plans_ok, calls, rows FROM pg_stat_statements
  WHERE query LIKE 'PREPARE%' ORDER BY query COLLATE "C";

--
-- access to pg_stat_statements_info view
--
SELECT pg_stat_statements_reset();
SELECT dealloc FROM pg_stat_statements_info;

--
-- top level handling
--
SET pg_stat_statements.track = 'top';
DELETE FROM test;
DO $$
BEGIN
    DELETE FROM test;
END;
$$ LANGUAGE plpgsql;
SELECT query, toplevel, plans, calls FROM pg_stat_statements WHERE query LIKE '%DELETE%' ORDER BY query COLLATE "C", toplevel;

SET pg_stat_statements.track = 'all';
DELETE FROM test;
DO $$
BEGIN
    DELETE FROM test;
END;
$$ LANGUAGE plpgsql;
SELECT query, toplevel, plans, calls FROM pg_stat_statements WHERE query LIKE '%DELETE%' ORDER BY query COLLATE "C", toplevel;

-- FROM [ONLY]
CREATE TABLE tbl_inh(id integer);
CREATE TABLE tbl_inh_1() INHERITS (tbl_inh);
INSERT INTO tbl_inh_1 SELECT 1;

SELECT * FROM tbl_inh;
SELECT * FROM ONLY tbl_inh;

SELECT COUNT(*) FROM pg_stat_statements WHERE query LIKE '%FROM%tbl_inh%';

-- WITH TIES
CREATE TABLE limitoption AS SELECT 0 AS val FROM generate_series(1, 10);
SELECT *
FROM limitoption
WHERE val < 2
ORDER BY val
FETCH FIRST 2 ROWS WITH TIES;

SELECT *
FROM limitoption
WHERE val < 2
ORDER BY val
FETCH FIRST 2 ROW ONLY;

SELECT COUNT(*) FROM pg_stat_statements WHERE query LIKE '%FETCH FIRST%';

-- GROUP BY [DISTINCT]
SELECT a, b, c
FROM (VALUES (1, 2, 3), (4, NULL, 6), (7, 8, 9)) AS t (a, b, c)
GROUP BY ROLLUP(a, b), rollup(a, c)
ORDER BY a, b, c;
SELECT a, b, c
FROM (VALUES (1, 2, 3), (4, NULL, 6), (7, 8, 9)) AS t (a, b, c)
GROUP BY DISTINCT ROLLUP(a, b), rollup(a, c)
ORDER BY a, b, c;

SELECT COUNT(*) FROM pg_stat_statements WHERE query LIKE '%GROUP BY%ROLLUP%';

-- GROUPING SET agglevelsup
SELECT (
  SELECT (
    SELECT GROUPING(a,b) FROM (VALUES (1)) v2(c)
  ) FROM (VALUES (1,2)) v1(a,b) GROUP BY (a,b)
) FROM (VALUES(6,7)) v3(e,f) GROUP BY ROLLUP(e,f);
SELECT (
  SELECT (
    SELECT GROUPING(e,f) FROM (VALUES (1)) v2(c)
  ) FROM (VALUES (1,2)) v1(a,b) GROUP BY (a,b)
) FROM (VALUES(6,7)) v3(e,f) GROUP BY ROLLUP(e,f);

SELECT COUNT(*) FROM pg_stat_statements WHERE query LIKE '%SELECT GROUPING%';

DROP EXTENSION pg_stat_statements;
