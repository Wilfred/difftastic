--
-- Test foreign-data wrapper file_fdw.
--

-- directory paths are passed to us in environment variables
\getenv abs_srcdir PG_ABS_SRCDIR

-- Clean up in case a prior regression run failed
SET client_min_messages TO 'warning';
DROP ROLE IF EXISTS regress_file_fdw_superuser, regress_file_fdw_user, regress_no_priv_user;
RESET client_min_messages;

CREATE ROLE regress_file_fdw_superuser LOGIN SUPERUSER; -- is a superuser
CREATE ROLE regress_file_fdw_user LOGIN;                -- has priv and user mapping
CREATE ROLE regress_no_priv_user LOGIN;                 -- has priv but no user mapping

-- Install file_fdw
CREATE EXTENSION file_fdw;

-- create function to filter unstable results of EXPLAIN
CREATE FUNCTION explain_filter(text) RETURNS setof text
LANGUAGE plpgsql AS
$$
declare
    ln text;
begin
    for ln in execute $1
    loop
        -- Remove the path portion of foreign file names
        ln := regexp_replace(ln, 'Foreign File: .*/([a-z.]+)$', 'Foreign File: .../\1');
        return next ln;
    end loop;
end;
$$;

-- regress_file_fdw_superuser owns fdw-related objects
SET ROLE regress_file_fdw_superuser;
CREATE SERVER file_server FOREIGN DATA WRAPPER file_fdw;

-- privilege tests
SET ROLE regress_file_fdw_user;
CREATE FOREIGN DATA WRAPPER file_fdw2 HANDLER file_fdw_handler VALIDATOR file_fdw_validator;   -- ERROR
CREATE SERVER file_server2 FOREIGN DATA WRAPPER file_fdw;   -- ERROR
CREATE USER MAPPING FOR regress_file_fdw_user SERVER file_server;   -- ERROR

SET ROLE regress_file_fdw_superuser;
GRANT USAGE ON FOREIGN SERVER file_server TO regress_file_fdw_user;

SET ROLE regress_file_fdw_user;
CREATE USER MAPPING FOR regress_file_fdw_user SERVER file_server;

-- create user mappings and grant privilege to test users
SET ROLE regress_file_fdw_superuser;
CREATE USER MAPPING FOR regress_file_fdw_superuser SERVER file_server;
CREATE USER MAPPING FOR regress_no_priv_user SERVER file_server;

-- validator tests
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'xml');  -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'text', quote ':');          -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'text', escape ':');         -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'binary', header 'true');    -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'binary', quote ':');        -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'binary', escape ':');       -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'text', delimiter 'a');      -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'text', escape '-');         -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'csv', quote '-', null '=-=');   -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'csv', delimiter '-', null '=-=');    -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'csv', delimiter '-', quote '-');    -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'csv', delimiter '---');     -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'csv', quote '---');         -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'csv', escape '---');        -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'text', delimiter '\');       -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'text', delimiter '.');       -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'text', delimiter '1');       -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'text', delimiter 'a');       -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'csv', delimiter '
');       -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (format 'csv', null '
');       -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server;  -- ERROR

\set filename :abs_srcdir '/data/agg.data'
CREATE FOREIGN TABLE agg_text (
	a	int2 CHECK (a >= 0),
	b	float4
) SERVER file_server
OPTIONS (format 'text', filename :'filename', delimiter '	', null '\N');
GRANT SELECT ON agg_text TO regress_file_fdw_user;

\set filename :abs_srcdir '/data/agg.csv'
CREATE FOREIGN TABLE agg_csv (
	a	int2,
	b	float4
) SERVER file_server
OPTIONS (format 'csv', filename :'filename', header 'true', delimiter ';', quote '@', escape '"', null '');
ALTER FOREIGN TABLE agg_csv ADD CHECK (a >= 0);

\set filename :abs_srcdir '/data/agg.bad'
CREATE FOREIGN TABLE agg_bad (
	a	int2,
	b	float4
) SERVER file_server
OPTIONS (format 'csv', filename :'filename', header 'true', delimiter ';', quote '@', escape '"', null '');
ALTER FOREIGN TABLE agg_bad ADD CHECK (a >= 0);

-- test header matching
\set filename :abs_srcdir '/data/list1.csv'
CREATE FOREIGN TABLE header_match ("1" int, foo text) SERVER file_server
OPTIONS (format 'csv', filename :'filename', delimiter ',', header 'match');
SELECT * FROM header_match;
CREATE FOREIGN TABLE header_doesnt_match (a int, foo text) SERVER file_server
OPTIONS (format 'csv', filename :'filename', delimiter ',', header 'match');
SELECT * FROM header_doesnt_match; -- ERROR

-- per-column options tests
\set filename :abs_srcdir '/data/text.csv'
CREATE FOREIGN TABLE text_csv (
    word1 text OPTIONS (force_not_null 'true'),
    word2 text OPTIONS (force_not_null 'off'),
    word3 text OPTIONS (force_null 'true'),
    word4 text OPTIONS (force_null 'off')
) SERVER file_server
OPTIONS (format 'text', filename :'filename', null 'NULL');
SELECT * FROM text_csv; -- ERROR
ALTER FOREIGN TABLE text_csv OPTIONS (SET format 'csv');
\pset null _null_
SELECT * FROM text_csv;

-- force_not_null and force_null can be used together on the same column
ALTER FOREIGN TABLE text_csv ALTER COLUMN word1 OPTIONS (force_null 'true');
ALTER FOREIGN TABLE text_csv ALTER COLUMN word3 OPTIONS (force_not_null 'true');

-- force_not_null is not allowed to be specified at any foreign object level:
ALTER FOREIGN DATA WRAPPER file_fdw OPTIONS (ADD force_not_null '*'); -- ERROR
ALTER SERVER file_server OPTIONS (ADD force_not_null '*'); -- ERROR
CREATE USER MAPPING FOR public SERVER file_server OPTIONS (force_not_null '*'); -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (force_not_null '*'); -- ERROR

-- force_null is not allowed to be specified at any foreign object level:
ALTER FOREIGN DATA WRAPPER file_fdw OPTIONS (ADD force_null '*'); -- ERROR
ALTER SERVER file_server OPTIONS (ADD force_null '*'); -- ERROR
CREATE USER MAPPING FOR public SERVER file_server OPTIONS (force_null '*'); -- ERROR
CREATE FOREIGN TABLE tbl () SERVER file_server OPTIONS (force_null '*'); -- ERROR

-- basic query tests
SELECT * FROM agg_text WHERE b > 10.0 ORDER BY a;
SELECT * FROM agg_csv ORDER BY a;
SELECT * FROM agg_csv c JOIN agg_text t ON (t.a = c.a) ORDER BY c.a;

-- error context report tests
SELECT * FROM agg_bad;               -- ERROR

-- misc query tests
\t on
SELECT explain_filter('EXPLAIN (VERBOSE, COSTS FALSE) SELECT * FROM agg_csv');
\t off
PREPARE st(int) AS SELECT * FROM agg_csv WHERE a = $1;
EXECUTE st(100);
EXECUTE st(100);
DEALLOCATE st;

-- tableoid
SELECT tableoid::regclass, b FROM agg_csv;

-- updates aren't supported
INSERT INTO agg_csv VALUES(1,2.0);
UPDATE agg_csv SET a = 1;
DELETE FROM agg_csv WHERE a = 100;
-- but this should be allowed
SELECT * FROM agg_csv FOR UPDATE;

-- copy from isn't supported either
COPY agg_csv FROM STDIN;
12	3.4
\.

-- constraint exclusion tests
\t on
SELECT explain_filter('EXPLAIN (VERBOSE, COSTS FALSE) SELECT * FROM agg_csv WHERE a < 0');
\t off
SELECT * FROM agg_csv WHERE a < 0;
SET constraint_exclusion = 'on';
\t on
SELECT explain_filter('EXPLAIN (VERBOSE, COSTS FALSE) SELECT * FROM agg_csv WHERE a < 0');
\t off
SELECT * FROM agg_csv WHERE a < 0;
RESET constraint_exclusion;

-- table inheritance tests
CREATE TABLE agg (a int2, b float4);
ALTER FOREIGN TABLE agg_csv INHERIT agg;
SELECT tableoid::regclass, * FROM agg;
SELECT tableoid::regclass, * FROM agg_csv;
SELECT tableoid::regclass, * FROM ONLY agg;
-- updates aren't supported
UPDATE agg SET a = 1;
DELETE FROM agg WHERE a = 100;
-- but this should be allowed
SELECT tableoid::regclass, * FROM agg FOR UPDATE;
ALTER FOREIGN TABLE agg_csv NO INHERIT agg;
DROP TABLE agg;

-- declarative partitioning tests
SET ROLE regress_file_fdw_superuser;
CREATE TABLE pt (a int, b text) partition by list (a);
\set filename :abs_srcdir '/data/list1.csv'
CREATE FOREIGN TABLE p1 partition of pt for values in (1) SERVER file_server
OPTIONS (format 'csv', filename :'filename', delimiter ',');
CREATE TABLE p2 partition of pt for values in (2);
SELECT tableoid::regclass, * FROM pt;
SELECT tableoid::regclass, * FROM p1;
SELECT tableoid::regclass, * FROM p2;
\set filename :abs_srcdir '/data/list2.bad'
COPY pt FROM :'filename' with (format 'csv', delimiter ','); -- ERROR
\set filename :abs_srcdir '/data/list2.csv'
COPY pt FROM :'filename' with (format 'csv', delimiter ',');
SELECT tableoid::regclass, * FROM pt;
SELECT tableoid::regclass, * FROM p1;
SELECT tableoid::regclass, * FROM p2;
INSERT INTO pt VALUES (1, 'xyzzy'); -- ERROR
INSERT INTO pt VALUES (2, 'xyzzy');
UPDATE pt set a = 1 where a = 2; -- ERROR
SELECT tableoid::regclass, * FROM pt;
SELECT tableoid::regclass, * FROM p1;
SELECT tableoid::regclass, * FROM p2;
DROP TABLE pt;

-- generated column tests
\set filename :abs_srcdir '/data/list1.csv'
CREATE FOREIGN TABLE gft1 (a int, b text, c text GENERATED ALWAYS AS ('foo') STORED) SERVER file_server
OPTIONS (format 'csv', filename :'filename', delimiter ',');
SELECT a, c FROM gft1;
DROP FOREIGN TABLE gft1;

-- privilege tests
SET ROLE regress_file_fdw_superuser;
SELECT * FROM agg_text ORDER BY a;
SET ROLE regress_file_fdw_user;
SELECT * FROM agg_text ORDER BY a;
SET ROLE regress_no_priv_user;
SELECT * FROM agg_text ORDER BY a;   -- ERROR
SET ROLE regress_file_fdw_user;
\t on
SELECT explain_filter('EXPLAIN (VERBOSE, COSTS FALSE) SELECT * FROM agg_text WHERE a > 0');
\t off
-- file FDW allows foreign tables to be accessed without user mapping
DROP USER MAPPING FOR regress_file_fdw_user SERVER file_server;
SELECT * FROM agg_text ORDER BY a;

-- privilege tests for object
SET ROLE regress_file_fdw_superuser;
ALTER FOREIGN TABLE agg_text OWNER TO regress_file_fdw_user;
ALTER FOREIGN TABLE agg_text OPTIONS (SET format 'text');
SET ROLE regress_file_fdw_user;
ALTER FOREIGN TABLE agg_text OPTIONS (SET format 'text');
SET ROLE regress_file_fdw_superuser;

-- cleanup
RESET ROLE;
DROP EXTENSION file_fdw CASCADE;
DROP ROLE regress_file_fdw_superuser, regress_file_fdw_user, regress_no_priv_user;
