-- create a table to use as a basis for views and materialized views in various combinations
CREATE TABLE mvtest_t (id int NOT NULL PRIMARY KEY, type text NOT NULL, amt numeric NOT NULL);
INSERT INTO mvtest_t VALUES
  (1, 'x', 2),
  (2, 'x', 3),
  (3, 'y', 5),
  (4, 'y', 7),
  (5, 'z', 11);

-- we want a view based on the table, too, since views present additional challenges
CREATE VIEW mvtest_tv AS SELECT type, sum(amt) AS totamt FROM mvtest_t GROUP BY type;
SELECT * FROM mvtest_tv ORDER BY type;

-- create a materialized view with no data, and confirm correct behavior
EXPLAIN (costs off)
  CREATE MATERIALIZED VIEW mvtest_tm AS SELECT type, sum(amt) AS totamt FROM mvtest_t GROUP BY type WITH NO DATA;
CREATE MATERIALIZED VIEW mvtest_tm AS SELECT type, sum(amt) AS totamt FROM mvtest_t GROUP BY type WITH NO DATA;
SELECT relispopulated FROM pg_class WHERE oid = 'mvtest_tm'::regclass;
SELECT * FROM mvtest_tm ORDER BY type;
REFRESH MATERIALIZED VIEW mvtest_tm;
SELECT relispopulated FROM pg_class WHERE oid = 'mvtest_tm'::regclass;
CREATE UNIQUE INDEX mvtest_tm_type ON mvtest_tm (type);
SELECT * FROM mvtest_tm ORDER BY type;

-- create various views
EXPLAIN (costs off)
  CREATE MATERIALIZED VIEW mvtest_tvm AS SELECT * FROM mvtest_tv ORDER BY type;
CREATE MATERIALIZED VIEW mvtest_tvm AS SELECT * FROM mvtest_tv ORDER BY type;
SELECT * FROM mvtest_tvm;
CREATE MATERIALIZED VIEW mvtest_tmm AS SELECT sum(totamt) AS grandtot FROM mvtest_tm;
CREATE MATERIALIZED VIEW mvtest_tvmm AS SELECT sum(totamt) AS grandtot FROM mvtest_tvm;
CREATE UNIQUE INDEX mvtest_tvmm_expr ON mvtest_tvmm ((grandtot > 0));
CREATE UNIQUE INDEX mvtest_tvmm_pred ON mvtest_tvmm (grandtot) WHERE grandtot < 0;
CREATE VIEW mvtest_tvv AS SELECT sum(totamt) AS grandtot FROM mvtest_tv;
EXPLAIN (costs off)
  CREATE MATERIALIZED VIEW mvtest_tvvm AS SELECT * FROM mvtest_tvv;
CREATE MATERIALIZED VIEW mvtest_tvvm AS SELECT * FROM mvtest_tvv;
CREATE VIEW mvtest_tvvmv AS SELECT * FROM mvtest_tvvm;
CREATE MATERIALIZED VIEW mvtest_bb AS SELECT * FROM mvtest_tvvmv;
CREATE INDEX mvtest_aa ON mvtest_bb (grandtot);

-- check that plans seem reasonable
\d+ mvtest_tvm
\d+ mvtest_tvm
\d+ mvtest_tvvm
\d+ mvtest_bb

-- test schema behavior
CREATE SCHEMA mvtest_mvschema;
ALTER MATERIALIZED VIEW mvtest_tvm SET SCHEMA mvtest_mvschema;
\d+ mvtest_tvm
\d+ mvtest_tvmm
SET search_path = mvtest_mvschema, public;
\d+ mvtest_tvm

-- modify the underlying table data
INSERT INTO mvtest_t VALUES (6, 'z', 13);

-- confirm pre- and post-refresh contents of fairly simple materialized views
SELECT * FROM mvtest_tm ORDER BY type;
SELECT * FROM mvtest_tvm ORDER BY type;
REFRESH MATERIALIZED VIEW CONCURRENTLY mvtest_tm;
REFRESH MATERIALIZED VIEW mvtest_tvm;
SELECT * FROM mvtest_tm ORDER BY type;
SELECT * FROM mvtest_tvm ORDER BY type;
RESET search_path;

-- confirm pre- and post-refresh contents of nested materialized views
EXPLAIN (costs off)
  SELECT * FROM mvtest_tmm;
EXPLAIN (costs off)
  SELECT * FROM mvtest_tvmm;
EXPLAIN (costs off)
  SELECT * FROM mvtest_tvvm;
SELECT * FROM mvtest_tmm;
SELECT * FROM mvtest_tvmm;
SELECT * FROM mvtest_tvvm;
REFRESH MATERIALIZED VIEW mvtest_tmm;
REFRESH MATERIALIZED VIEW CONCURRENTLY mvtest_tvmm;
REFRESH MATERIALIZED VIEW mvtest_tvmm;
REFRESH MATERIALIZED VIEW mvtest_tvvm;
EXPLAIN (costs off)
  SELECT * FROM mvtest_tmm;
EXPLAIN (costs off)
  SELECT * FROM mvtest_tvmm;
EXPLAIN (costs off)
  SELECT * FROM mvtest_tvvm;
SELECT * FROM mvtest_tmm;
SELECT * FROM mvtest_tvmm;
SELECT * FROM mvtest_tvvm;

-- test diemv when the mv does not exist
DROP MATERIALIZED VIEW IF EXISTS no_such_mv;

-- make sure invalid combination of options is prohibited
REFRESH MATERIALIZED VIEW CONCURRENTLY mvtest_tvmm WITH NO DATA;

-- no tuple locks on materialized views
SELECT * FROM mvtest_tvvm FOR SHARE;

-- test join of mv and view
SELECT type, m.totamt AS mtot, v.totamt AS vtot FROM mvtest_tm m LEFT JOIN mvtest_tv v USING (type) ORDER BY type;

-- make sure that dependencies are reported properly when they block the drop
DROP TABLE mvtest_t;

-- make sure dependencies are dropped and reported
-- and make sure that transactional behavior is correct on rollback
-- incidentally leaving some interesting materialized views for pg_dump testing
BEGIN;
DROP TABLE mvtest_t CASCADE;
ROLLBACK;

-- some additional tests not using base tables
CREATE VIEW mvtest_vt1 AS SELECT 1 moo;
CREATE VIEW mvtest_vt2 AS SELECT moo, 2*moo FROM mvtest_vt1 UNION ALL SELECT moo, 3*moo FROM mvtest_vt1;
\d+ mvtest_vt2
CREATE MATERIALIZED VIEW mv_test2 AS SELECT moo, 2*moo FROM mvtest_vt2 UNION ALL SELECT moo, 3*moo FROM mvtest_vt2;
\d+ mv_test2
CREATE MATERIALIZED VIEW mv_test3 AS SELECT * FROM mv_test2 WHERE moo = 12345;
SELECT relispopulated FROM pg_class WHERE oid = 'mv_test3'::regclass;

DROP VIEW mvtest_vt1 CASCADE;

-- test that duplicate values on unique index prevent refresh
CREATE TABLE mvtest_foo(a, b) AS VALUES(1, 10);
CREATE MATERIALIZED VIEW mvtest_mv AS SELECT * FROM mvtest_foo;
CREATE UNIQUE INDEX ON mvtest_mv(a);
INSERT INTO mvtest_foo SELECT * FROM mvtest_foo;
REFRESH MATERIALIZED VIEW mvtest_mv;
REFRESH MATERIALIZED VIEW CONCURRENTLY mvtest_mv;
DROP TABLE mvtest_foo CASCADE;

-- make sure that all columns covered by unique indexes works
CREATE TABLE mvtest_foo(a, b, c) AS VALUES(1, 2, 3);
CREATE MATERIALIZED VIEW mvtest_mv AS SELECT * FROM mvtest_foo;
CREATE UNIQUE INDEX ON mvtest_mv (a);
CREATE UNIQUE INDEX ON mvtest_mv (b);
CREATE UNIQUE INDEX on mvtest_mv (c);
INSERT INTO mvtest_foo VALUES(2, 3, 4);
INSERT INTO mvtest_foo VALUES(3, 4, 5);
REFRESH MATERIALIZED VIEW mvtest_mv;
REFRESH MATERIALIZED VIEW CONCURRENTLY mvtest_mv;
DROP TABLE mvtest_foo CASCADE;

-- allow subquery to reference unpopulated matview if WITH NO DATA is specified
CREATE MATERIALIZED VIEW mvtest_mv1 AS SELECT 1 AS col1 WITH NO DATA;
CREATE MATERIALIZED VIEW mvtest_mv2 AS SELECT * FROM mvtest_mv1
  WHERE col1 = (SELECT LEAST(col1) FROM mvtest_mv1) WITH NO DATA;
DROP MATERIALIZED VIEW mvtest_mv1 CASCADE;

-- make sure that types with unusual equality tests work
CREATE TABLE mvtest_boxes (id serial primary key, b box);
INSERT INTO mvtest_boxes (b) VALUES
  ('(32,32),(31,31)'),
  ('(2.0000004,2.0000004),(1,1)'),
  ('(1.9999996,1.9999996),(1,1)');
CREATE MATERIALIZED VIEW mvtest_boxmv AS SELECT * FROM mvtest_boxes;
CREATE UNIQUE INDEX mvtest_boxmv_id ON mvtest_boxmv (id);
UPDATE mvtest_boxes SET b = '(2,2),(1,1)' WHERE id = 2;
REFRESH MATERIALIZED VIEW CONCURRENTLY mvtest_boxmv;
SELECT * FROM mvtest_boxmv ORDER BY id;
DROP TABLE mvtest_boxes CASCADE;

-- make sure that column names are handled correctly
CREATE TABLE mvtest_v (i int, j int);
CREATE MATERIALIZED VIEW mvtest_mv_v (ii, jj, kk) AS SELECT i, j FROM mvtest_v; -- error
CREATE MATERIALIZED VIEW mvtest_mv_v (ii, jj) AS SELECT i, j FROM mvtest_v; -- ok
CREATE MATERIALIZED VIEW mvtest_mv_v_2 (ii) AS SELECT i, j FROM mvtest_v; -- ok
CREATE MATERIALIZED VIEW mvtest_mv_v_3 (ii, jj, kk) AS SELECT i, j FROM mvtest_v WITH NO DATA; -- error
CREATE MATERIALIZED VIEW mvtest_mv_v_3 (ii, jj) AS SELECT i, j FROM mvtest_v WITH NO DATA; -- ok
CREATE MATERIALIZED VIEW mvtest_mv_v_4 (ii) AS SELECT i, j FROM mvtest_v WITH NO DATA; -- ok
ALTER TABLE mvtest_v RENAME COLUMN i TO x;
INSERT INTO mvtest_v values (1, 2);
CREATE UNIQUE INDEX mvtest_mv_v_ii ON mvtest_mv_v (ii);
REFRESH MATERIALIZED VIEW mvtest_mv_v;
UPDATE mvtest_v SET j = 3 WHERE x = 1;
REFRESH MATERIALIZED VIEW CONCURRENTLY mvtest_mv_v;
REFRESH MATERIALIZED VIEW mvtest_mv_v_2;
REFRESH MATERIALIZED VIEW mvtest_mv_v_3;
REFRESH MATERIALIZED VIEW mvtest_mv_v_4;
SELECT * FROM mvtest_v;
SELECT * FROM mvtest_mv_v;
SELECT * FROM mvtest_mv_v_2;
SELECT * FROM mvtest_mv_v_3;
SELECT * FROM mvtest_mv_v_4;
DROP TABLE mvtest_v CASCADE;

-- Check that unknown literals are converted to "text" in CREATE MATVIEW,
-- so that we don't end up with unknown-type columns.
CREATE MATERIALIZED VIEW mv_unspecified_types AS
  SELECT 42 as i, 42.5 as num, 'foo' as u, 'foo'::unknown as u2, null as n;
\d+ mv_unspecified_types
SELECT * FROM mv_unspecified_types;
DROP MATERIALIZED VIEW mv_unspecified_types;

-- make sure that create WITH NO DATA does not plan the query (bug #13907)
create materialized view mvtest_error as select 1/0 as x;  -- fail
create materialized view mvtest_error as select 1/0 as x with no data;
refresh materialized view mvtest_error;  -- fail here
drop materialized view mvtest_error;

-- make sure that matview rows can be referenced as source rows (bug #9398)
CREATE TABLE mvtest_v AS SELECT generate_series(1,10) AS a;
CREATE MATERIALIZED VIEW mvtest_mv_v AS SELECT a FROM mvtest_v WHERE a <= 5;
DELETE FROM mvtest_v WHERE EXISTS ( SELECT * FROM mvtest_mv_v WHERE mvtest_mv_v.a = mvtest_v.a );
SELECT * FROM mvtest_v;
SELECT * FROM mvtest_mv_v;
DROP TABLE mvtest_v CASCADE;

-- make sure running as superuser works when MV owned by another role (bug #11208)
CREATE ROLE regress_user_mvtest;
SET ROLE regress_user_mvtest;
-- this test case also checks for ambiguity in the queries issued by
-- refresh_by_match_merge(), by choosing column names that intentionally
-- duplicate all the aliases used in those queries
CREATE TABLE mvtest_foo_data AS SELECT i,
  i+1 AS tid,
  md5(random()::text) AS mv,
  md5(random()::text) AS newdata,
  md5(random()::text) AS newdata2,
  md5(random()::text) AS diff
  FROM generate_series(1, 10) i;
CREATE MATERIALIZED VIEW mvtest_mv_foo AS SELECT * FROM mvtest_foo_data;
CREATE MATERIALIZED VIEW mvtest_mv_foo AS SELECT * FROM mvtest_foo_data;
CREATE MATERIALIZED VIEW IF NOT EXISTS mvtest_mv_foo AS SELECT * FROM mvtest_foo_data;
CREATE UNIQUE INDEX ON mvtest_mv_foo (i);
RESET ROLE;
REFRESH MATERIALIZED VIEW mvtest_mv_foo;
REFRESH MATERIALIZED VIEW CONCURRENTLY mvtest_mv_foo;
DROP OWNED BY regress_user_mvtest CASCADE;
DROP ROLE regress_user_mvtest;

-- make sure that create WITH NO DATA works via SPI
BEGIN;
CREATE FUNCTION mvtest_func()
  RETURNS void AS $$
BEGIN
  CREATE MATERIALIZED VIEW mvtest1 AS SELECT 1 AS x;
  CREATE MATERIALIZED VIEW mvtest2 AS SELECT 1 AS x WITH NO DATA;
END;
$$ LANGUAGE plpgsql;
SELECT mvtest_func();
SELECT * FROM mvtest1;
SELECT * FROM mvtest2;
ROLLBACK;

-- INSERT privileges if relation owner is not allowed to insert.
CREATE SCHEMA matview_schema;
CREATE USER regress_matview_user;
ALTER DEFAULT PRIVILEGES FOR ROLE regress_matview_user
  REVOKE INSERT ON TABLES FROM regress_matview_user;
GRANT ALL ON SCHEMA matview_schema TO public;

SET SESSION AUTHORIZATION regress_matview_user;
CREATE MATERIALIZED VIEW matview_schema.mv_withdata1 (a) AS
  SELECT generate_series(1, 10) WITH DATA;
EXPLAIN (ANALYZE, COSTS OFF, SUMMARY OFF, TIMING OFF)
  CREATE MATERIALIZED VIEW matview_schema.mv_withdata2 (a) AS
  SELECT generate_series(1, 10) WITH DATA;
REFRESH MATERIALIZED VIEW matview_schema.mv_withdata2;
CREATE MATERIALIZED VIEW matview_schema.mv_nodata1 (a) AS
  SELECT generate_series(1, 10) WITH NO DATA;
EXPLAIN (ANALYZE, COSTS OFF, SUMMARY OFF, TIMING OFF)
  CREATE MATERIALIZED VIEW matview_schema.mv_nodata2 (a) AS
  SELECT generate_series(1, 10) WITH NO DATA;
REFRESH MATERIALIZED VIEW matview_schema.mv_nodata2;
RESET SESSION AUTHORIZATION;

ALTER DEFAULT PRIVILEGES FOR ROLE regress_matview_user
  GRANT INSERT ON TABLES TO regress_matview_user;

DROP SCHEMA matview_schema CASCADE;
DROP USER regress_matview_user;

-- CREATE MATERIALIZED VIEW ... IF NOT EXISTS
CREATE MATERIALIZED VIEW matview_ine_tab AS SELECT 1;
CREATE MATERIALIZED VIEW matview_ine_tab AS SELECT 1 / 0; -- error
CREATE MATERIALIZED VIEW IF NOT EXISTS matview_ine_tab AS
  SELECT 1 / 0; -- ok
CREATE MATERIALIZED VIEW matview_ine_tab AS
  SELECT 1 / 0 WITH NO DATA; -- error
CREATE MATERIALIZED VIEW IF NOT EXISTS matview_ine_tab AS
  SELECT 1 / 0 WITH NO DATA; -- ok
EXPLAIN (ANALYZE, COSTS OFF, SUMMARY OFF, TIMING OFF)
  CREATE MATERIALIZED VIEW matview_ine_tab AS
    SELECT 1 / 0; -- error
EXPLAIN (ANALYZE, COSTS OFF, SUMMARY OFF, TIMING OFF)
  CREATE MATERIALIZED VIEW IF NOT EXISTS matview_ine_tab AS
    SELECT 1 / 0; -- ok
EXPLAIN (ANALYZE, COSTS OFF, SUMMARY OFF, TIMING OFF)
  CREATE MATERIALIZED VIEW matview_ine_tab AS
    SELECT 1 / 0 WITH NO DATA; -- error
EXPLAIN (ANALYZE, COSTS OFF, SUMMARY OFF, TIMING OFF)
  CREATE MATERIALIZED VIEW IF NOT EXISTS matview_ine_tab AS
    SELECT 1 / 0 WITH NO DATA; -- ok
DROP MATERIALIZED VIEW matview_ine_tab;
