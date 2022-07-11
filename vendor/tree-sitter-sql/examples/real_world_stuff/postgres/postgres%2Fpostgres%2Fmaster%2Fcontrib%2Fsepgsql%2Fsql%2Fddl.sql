--
-- Regression Test for DDL of Object Permission Checks
--

-- clean-up in case a prior regression run failed
SET client_min_messages TO 'warning';
DROP DATABASE IF EXISTS sepgsql_test_regression;
DROP USER IF EXISTS regress_sepgsql_test_user;
RESET client_min_messages;

-- confirm required permissions using audit messages
-- @SECURITY-CONTEXT=unconfined_u:unconfined_r:sepgsql_regtest_superuser_t:s0
SET sepgsql.debug_audit = true;
SET client_min_messages = LOG;

--
-- CREATE Permission checks
--
CREATE DATABASE sepgsql_test_regression;

CREATE USER regress_sepgsql_test_user;

CREATE SCHEMA regtest_schema;

GRANT ALL ON SCHEMA regtest_schema TO regress_sepgsql_test_user;

SET search_path = regtest_schema, public;

CREATE TABLE regtest_table (x serial primary key, y text);

ALTER TABLE regtest_table ADD COLUMN z int;

CREATE TABLE regtest_table_2 (a int);

CREATE TABLE regtest_ptable (a int) PARTITION BY RANGE (a);
CREATE TABLE regtest_ptable_ones PARTITION OF regtest_ptable FOR VALUES FROM ('0') TO ('10');
CREATE TABLE regtest_ptable_tens PARTITION OF regtest_ptable FOR VALUES FROM ('10') TO ('100');

ALTER TABLE regtest_ptable ADD COLUMN q int;

-- corresponding toast table should not have label and permission checks
ALTER TABLE regtest_table_2 ADD COLUMN b text;

-- VACUUM FULL internally create a new table and swap them later.
VACUUM FULL regtest_table;
VACUUM FULL regtest_ptable;

CREATE VIEW regtest_view AS SELECT * FROM regtest_table WHERE x < 100;
CREATE VIEW regtest_pview AS SELECT * FROM regtest_ptable WHERE a < 99;

CREATE SEQUENCE regtest_seq;

CREATE TYPE regtest_comptype AS (a int, b text);

CREATE FUNCTION regtest_func(text,int[]) RETURNS bool LANGUAGE plpgsql
	   AS 'BEGIN RAISE NOTICE ''regtest_func => %'', $1; RETURN true; END';

CREATE AGGREGATE regtest_agg (
           sfunc1 = int4pl, basetype = int4, stype1 = int4, initcond1 = '0'
);

-- CREATE objects owned by others
SET SESSION AUTHORIZATION regress_sepgsql_test_user;

SET search_path = regtest_schema, public;

CREATE TABLE regtest_table_3 (x int, y serial);
CREATE TABLE regtest_ptable_3 (o int, p serial) PARTITION BY RANGE (o);
CREATE TABLE regtest_ptable_3_ones PARTITION OF regtest_ptable_3 FOR VALUES FROM ('0') to ('10');
CREATE TABLE regtest_ptable_3_tens PARTITION OF regtest_ptable_3 FOR VALUES FROM ('10') to ('100');

CREATE VIEW regtest_view_2 AS SELECT * FROM regtest_table_3 WHERE x < y;
CREATE VIEW regtest_pview_2 AS SELECT * FROM regtest_ptable_3 WHERE o < p;

CREATE FUNCTION regtest_func_2(int) RETURNS bool LANGUAGE plpgsql
           AS 'BEGIN RETURN $1 * $1 < 100; END';

RESET SESSION AUTHORIZATION;

--
-- ALTER and CREATE/DROP extra attribute permissions
--
CREATE TABLE regtest_table_4 (x int primary key, y int, z int);
CREATE INDEX regtest_index_tbl4_y ON regtest_table_4(y);
CREATE INDEX regtest_index_tbl4_z ON regtest_table_4(z);
ALTER TABLE regtest_table_4 ALTER COLUMN y TYPE float;
DROP INDEX regtest_index_tbl4_y;
ALTER TABLE regtest_table_4
      ADD CONSTRAINT regtest_tbl4_con EXCLUDE USING btree (z WITH =);
DROP TABLE regtest_table_4 CASCADE;

-- For partitioned tables
CREATE TABLE regtest_ptable_4 (x int, y int, z int) PARTITION BY RANGE (x);
CREATE TABLE regtest_ptable_4_ones PARTITION OF regtest_ptable_4 FOR VALUES FROM ('0') TO ('10');

CREATE INDEX regtest_pindex_tbl4_y ON regtest_ptable_4_ones(y);
CREATE INDEX regtest_pindex_tbl4_z ON regtest_ptable_4_ones(z);
ALTER TABLE regtest_ptable_4 ALTER COLUMN y TYPE float;
DROP INDEX regtest_pindex_tbl4_y;
ALTER TABLE regtest_ptable_4_ones
      ADD CONSTRAINT regtest_ptbl4_con EXCLUDE USING btree (z WITH =);
DROP TABLE regtest_ptable_4 CASCADE;

--
-- DROP Permission checks (with clean-up)
--

DROP FUNCTION regtest_func(text,int[]);
DROP AGGREGATE regtest_agg(int);

DROP SEQUENCE regtest_seq;
DROP VIEW regtest_view;

ALTER TABLE regtest_table DROP COLUMN y;

ALTER TABLE regtest_ptable DROP COLUMN q CASCADE;

DROP TABLE regtest_table;
DROP TABLE regtest_ptable CASCADE;

DROP OWNED BY regress_sepgsql_test_user;

DROP DATABASE sepgsql_test_regression;
DROP USER regress_sepgsql_test_user;
DROP SCHEMA IF EXISTS regtest_schema CASCADE;
