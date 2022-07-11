-- Generic extended statistics support

--
-- Note: tables for which we check estimated row counts should be created
-- with autovacuum_enabled = off, so that we don't have unstable results
-- from auto-analyze happening when we didn't expect it.
--

-- check the number of estimated/actual rows in the top node
create function check_estimated_rows(text) returns table (estimated int, actual int)
language plpgsql as
$$
declare
    ln text;
    tmp text[];
    first_row bool := true;
begin
    for ln in
        execute format('explain analyze %s', $1)
    loop
        if first_row then
            first_row := false;
            tmp := regexp_match(ln, 'rows=(\d*) .* rows=(\d*)');
            return query select tmp[1]::int, tmp[2]::int;
        end if;
    end loop;
end;
$$;

-- Verify failures
CREATE TABLE ext_stats_test (x text, y int, z int);
CREATE STATISTICS tst;
CREATE STATISTICS tst ON a, b;
CREATE STATISTICS tst FROM sometab;
CREATE STATISTICS tst ON a, b FROM nonexistent;
CREATE STATISTICS tst ON a, b FROM ext_stats_test;
CREATE STATISTICS tst ON x, x, y FROM ext_stats_test;
CREATE STATISTICS tst ON x, x, y, x, x, y, x, x, y FROM ext_stats_test;
CREATE STATISTICS tst ON x, x, y, x, x, (x || 'x'), (y + 1), (x || 'x'), (x || 'x'), (y + 1) FROM ext_stats_test;
CREATE STATISTICS tst ON (x || 'x'), (x || 'x'), (y + 1), (x || 'x'), (x || 'x'), (y + 1), (x || 'x'), (x || 'x'), (y + 1) FROM ext_stats_test;
CREATE STATISTICS tst ON (x || 'x'), (x || 'x'), y FROM ext_stats_test;
CREATE STATISTICS tst (unrecognized) ON x, y FROM ext_stats_test;
-- incorrect expressions
CREATE STATISTICS tst ON (y) FROM ext_stats_test; -- single column reference
CREATE STATISTICS tst ON y + z FROM ext_stats_test; -- missing parentheses
CREATE STATISTICS tst ON (x, y) FROM ext_stats_test; -- tuple expression
DROP TABLE ext_stats_test;

-- Ensure stats are dropped sanely, and test IF NOT EXISTS while at it
CREATE TABLE ab1 (a INTEGER, b INTEGER, c INTEGER);
CREATE STATISTICS IF NOT EXISTS ab1_a_b_stats ON a, b FROM ab1;
COMMENT ON STATISTICS ab1_a_b_stats IS 'new comment';
CREATE ROLE regress_stats_ext;
SET SESSION AUTHORIZATION regress_stats_ext;
COMMENT ON STATISTICS ab1_a_b_stats IS 'changed comment';
DROP STATISTICS ab1_a_b_stats;
ALTER STATISTICS ab1_a_b_stats RENAME TO ab1_a_b_stats_new;
RESET SESSION AUTHORIZATION;
DROP ROLE regress_stats_ext;

CREATE STATISTICS IF NOT EXISTS ab1_a_b_stats ON a, b FROM ab1;
DROP STATISTICS ab1_a_b_stats;

CREATE SCHEMA regress_schema_2;
CREATE STATISTICS regress_schema_2.ab1_a_b_stats ON a, b FROM ab1;

-- Let's also verify the pg_get_statisticsobjdef output looks sane.
SELECT pg_get_statisticsobjdef(oid) FROM pg_statistic_ext WHERE stxname = 'ab1_a_b_stats';

DROP STATISTICS regress_schema_2.ab1_a_b_stats;

-- Ensure statistics are dropped when columns are
CREATE STATISTICS ab1_b_c_stats ON b, c FROM ab1;
CREATE STATISTICS ab1_a_b_c_stats ON a, b, c FROM ab1;
CREATE STATISTICS ab1_b_a_stats ON b, a FROM ab1;
ALTER TABLE ab1 DROP COLUMN a;
\d ab1
-- Ensure statistics are dropped when table is
SELECT stxname FROM pg_statistic_ext WHERE stxname LIKE 'ab1%';
DROP TABLE ab1;
SELECT stxname FROM pg_statistic_ext WHERE stxname LIKE 'ab1%';

-- Ensure things work sanely with SET STATISTICS 0
CREATE TABLE ab1 (a INTEGER, b INTEGER);
ALTER TABLE ab1 ALTER a SET STATISTICS 0;
INSERT INTO ab1 SELECT a, a%23 FROM generate_series(1, 1000) a;
CREATE STATISTICS ab1_a_b_stats ON a, b FROM ab1;
ANALYZE ab1;
ALTER TABLE ab1 ALTER a SET STATISTICS -1;
-- setting statistics target 0 skips the statistics, without printing any message, so check catalog
ALTER STATISTICS ab1_a_b_stats SET STATISTICS 0;
\d ab1
ANALYZE ab1;
SELECT stxname, stxdndistinct, stxddependencies, stxdmcv, stxdinherit
  FROM pg_statistic_ext s LEFT JOIN pg_statistic_ext_data d ON (d.stxoid = s.oid)
 WHERE s.stxname = 'ab1_a_b_stats';
ALTER STATISTICS ab1_a_b_stats SET STATISTICS -1;
\d+ ab1
-- partial analyze doesn't build stats either
ANALYZE ab1 (a);
ANALYZE ab1;
DROP TABLE ab1;
ALTER STATISTICS ab1_a_b_stats SET STATISTICS 0;
ALTER STATISTICS IF EXISTS ab1_a_b_stats SET STATISTICS 0;

-- Ensure we can build statistics for tables with inheritance.
CREATE TABLE ab1 (a INTEGER, b INTEGER);
CREATE TABLE ab1c () INHERITS (ab1);
INSERT INTO ab1 VALUES (1,1);
CREATE STATISTICS ab1_a_b_stats ON a, b FROM ab1;
ANALYZE ab1;
DROP TABLE ab1 CASCADE;

-- Tests for stats with inheritance
CREATE TABLE stxdinh(a int, b int);
CREATE TABLE stxdinh1() INHERITS(stxdinh);
CREATE TABLE stxdinh2() INHERITS(stxdinh);
INSERT INTO stxdinh SELECT mod(a,50), mod(a,100) FROM generate_series(0, 1999) a;
INSERT INTO stxdinh1 SELECT mod(a,100), mod(a,100) FROM generate_series(0, 999) a;
INSERT INTO stxdinh2 SELECT mod(a,100), mod(a,100) FROM generate_series(0, 999) a;
VACUUM ANALYZE stxdinh, stxdinh1, stxdinh2;
-- Ensure non-inherited stats are not applied to inherited query
-- Without stats object, it looks like this
SELECT * FROM check_estimated_rows('SELECT a, b FROM stxdinh* GROUP BY 1, 2');
SELECT * FROM check_estimated_rows('SELECT a, b FROM stxdinh* WHERE a = 0 AND b = 0');
CREATE STATISTICS stxdinh ON a, b FROM stxdinh;
VACUUM ANALYZE stxdinh, stxdinh1, stxdinh2;
-- See if the extended stats affect the estimates
SELECT * FROM check_estimated_rows('SELECT a, b FROM stxdinh* GROUP BY 1, 2');
-- Dependencies are applied at individual relations (within append), so
-- this estimate changes a bit because we improve estimates for the parent
SELECT * FROM check_estimated_rows('SELECT a, b FROM stxdinh* WHERE a = 0 AND b = 0');
-- Ensure correct (non-inherited) stats are applied to inherited query
SELECT * FROM check_estimated_rows('SELECT a, b FROM ONLY stxdinh GROUP BY 1, 2');
SELECT * FROM check_estimated_rows('SELECT a, b FROM ONLY stxdinh WHERE a = 0 AND b = 0');
DROP TABLE stxdinh, stxdinh1, stxdinh2;

-- Ensure inherited stats ARE applied to inherited query in partitioned table
CREATE TABLE stxdinp(i int, a int, b int) PARTITION BY RANGE (i);
CREATE TABLE stxdinp1 PARTITION OF stxdinp FOR VALUES FROM (1) TO (100);
INSERT INTO stxdinp SELECT 1, a/100, a/100 FROM generate_series(1, 999) a;
CREATE STATISTICS stxdinp ON a, b FROM stxdinp;
VACUUM ANALYZE stxdinp; -- partitions are processed recursively
SELECT 1 FROM pg_statistic_ext WHERE stxrelid = 'stxdinp'::regclass;
SELECT * FROM check_estimated_rows('SELECT a, b FROM stxdinp GROUP BY 1, 2');
DROP TABLE stxdinp;

-- basic test for statistics on expressions
CREATE TABLE ab1 (a INTEGER, b INTEGER, c TIMESTAMP, d TIMESTAMPTZ);

-- expression stats may be built on a single expression column
CREATE STATISTICS ab1_exprstat_1 ON (a+b) FROM ab1;

-- with a single expression, we only enable expression statistics
CREATE STATISTICS ab1_exprstat_2 ON (a+b) FROM ab1;
SELECT stxkind FROM pg_statistic_ext WHERE stxname = 'ab1_exprstat_2';

-- adding anything to the expression builds all statistics kinds
CREATE STATISTICS ab1_exprstat_3 ON (a+b), a FROM ab1;
SELECT stxkind FROM pg_statistic_ext WHERE stxname = 'ab1_exprstat_3';

-- date_trunc on timestamptz is not immutable, but that should not matter
CREATE STATISTICS ab1_exprstat_4 ON date_trunc('day', d) FROM ab1;

-- date_trunc on timestamp is immutable
CREATE STATISTICS ab1_exprstat_5 ON date_trunc('day', c) FROM ab1;

-- insert some data and run analyze, to test that these cases build properly
INSERT INTO ab1
SELECT
    generate_series(1,10),
    generate_series(1,10),
    generate_series('2020-10-01'::timestamp, '2020-10-10'::timestamp, interval '1 day'),
    generate_series('2020-10-01'::timestamptz, '2020-10-10'::timestamptz, interval '1 day');
ANALYZE ab1;
DROP TABLE ab1;

-- Verify supported object types for extended statistics
CREATE schema tststats;

CREATE TABLE tststats.t (a int, b int, c text);
CREATE INDEX ti ON tststats.t (a, b);
CREATE SEQUENCE tststats.s;
CREATE VIEW tststats.v AS SELECT * FROM tststats.t;
CREATE MATERIALIZED VIEW tststats.mv AS SELECT * FROM tststats.t;
CREATE TYPE tststats.ty AS (a int, b int, c text);
CREATE FOREIGN DATA WRAPPER extstats_dummy_fdw;
CREATE SERVER extstats_dummy_srv FOREIGN DATA WRAPPER extstats_dummy_fdw;
CREATE FOREIGN TABLE tststats.f (a int, b int, c text) SERVER extstats_dummy_srv;
CREATE TABLE tststats.pt (a int, b int, c text) PARTITION BY RANGE (a, b);
CREATE TABLE tststats.pt1 PARTITION OF tststats.pt FOR VALUES FROM (-10, -10) TO (10, 10);

CREATE STATISTICS tststats.s1 ON a, b FROM tststats.t;
CREATE STATISTICS tststats.s2 ON a, b FROM tststats.ti;
CREATE STATISTICS tststats.s3 ON a, b FROM tststats.s;
CREATE STATISTICS tststats.s4 ON a, b FROM tststats.v;
CREATE STATISTICS tststats.s5 ON a, b FROM tststats.mv;
CREATE STATISTICS tststats.s6 ON a, b FROM tststats.ty;
CREATE STATISTICS tststats.s7 ON a, b FROM tststats.f;
CREATE STATISTICS tststats.s8 ON a, b FROM tststats.pt;
CREATE STATISTICS tststats.s9 ON a, b FROM tststats.pt1;
DO $$
DECLARE
	relname text := reltoastrelid::regclass FROM pg_class WHERE oid = 'tststats.t'::regclass;
BEGIN
	EXECUTE 'CREATE STATISTICS tststats.s10 ON a, b FROM ' || relname;
EXCEPTION WHEN wrong_object_type THEN
	RAISE NOTICE 'stats on toast table not created';
END;
$$;

DROP SCHEMA tststats CASCADE;
DROP FOREIGN DATA WRAPPER extstats_dummy_fdw CASCADE;

-- n-distinct tests
CREATE TABLE ndistinct (
    filler1 TEXT,
    filler2 NUMERIC,
    a INT,
    b INT,
    filler3 DATE,
    c INT,
    d INT
)
WITH (autovacuum_enabled = off);

-- over-estimates when using only per-column statistics
INSERT INTO ndistinct (a, b, c, filler1)
     SELECT i/100, i/100, i/100, cash_words((i/100)::money)
       FROM generate_series(1,1000) s(i);

ANALYZE ndistinct;

-- Group Aggregate, due to over-estimate of the number of groups
SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY b, c');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, c');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, c, d');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY b, c, d');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, (a+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a+1), (b+100)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a+1), (b+100), (2*c)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (a+1), (b+100)');

-- correct command
CREATE STATISTICS s10 ON a, b, c FROM ndistinct;

ANALYZE ndistinct;

SELECT s.stxkind, d.stxdndistinct
  FROM pg_statistic_ext s, pg_statistic_ext_data d
 WHERE s.stxrelid = 'ndistinct'::regclass
   AND d.stxoid = s.oid;

-- minor improvement, make sure the ctid does not break the matching
SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY ctid, a, b');

-- Hash Aggregate, thanks to estimates improved by the statistic
SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY b, c');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, c');

-- partial improvement (match on attributes)
SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, (a+1)');

-- expressions - no improvement
SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a+1), (b+100)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a+1), (b+100), (2*c)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (a+1), (b+100)');

-- last two plans keep using Group Aggregate, because 'd' is not covered
-- by the statistic and while it's NULL-only we assume 200 values for it
SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, c, d');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY b, c, d');

TRUNCATE TABLE ndistinct;

-- under-estimates when using only per-column statistics
INSERT INTO ndistinct (a, b, c, filler1)
     SELECT mod(i,13), mod(i,17), mod(i,19),
            cash_words(mod(i,23)::int::money)
       FROM generate_series(1,1000) s(i);

ANALYZE ndistinct;

SELECT s.stxkind, d.stxdndistinct
  FROM pg_statistic_ext s, pg_statistic_ext_data d
 WHERE s.stxrelid = 'ndistinct'::regclass
   AND d.stxoid = s.oid;

-- correct estimates
SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, c');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, c, d');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY b, c, d');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, d');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, (a+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a+1), (b+100)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a+1), (b+100), (2*c)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (a+1), (b+100)');

DROP STATISTICS s10;

SELECT s.stxkind, d.stxdndistinct
  FROM pg_statistic_ext s, pg_statistic_ext_data d
 WHERE s.stxrelid = 'ndistinct'::regclass
   AND d.stxoid = s.oid;

-- dropping the statistics results in under-estimates
SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, c');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, c, d');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY b, c, d');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, d');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, (a+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a+1), (b+100)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a+1), (b+100), (2*c)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (a+1), (b+100)');

-- ndistinct estimates with statistics on expressions
SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a+1), (b+100)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a+1), (b+100), (2*c)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (a+1), (b+100)');

CREATE STATISTICS s10 (ndistinct) ON (a+1), (b+100), (2*c) FROM ndistinct;

ANALYZE ndistinct;

SELECT s.stxkind, d.stxdndistinct
  FROM pg_statistic_ext s, pg_statistic_ext_data d
 WHERE s.stxrelid = 'ndistinct'::regclass
   AND d.stxoid = s.oid;

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a+1), (b+100)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a+1), (b+100), (2*c)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (a+1), (b+100)');

DROP STATISTICS s10;

-- a mix of attributes and expressions
SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (2*c)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, (2*c)');

CREATE STATISTICS s10 (ndistinct) ON a, b, (2*c) FROM ndistinct;

ANALYZE ndistinct;

SELECT s.stxkind, d.stxdndistinct
  FROM pg_statistic_ext s, pg_statistic_ext_data d
 WHERE s.stxrelid = 'ndistinct'::regclass
   AND d.stxoid = s.oid;

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (2*c)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, (2*c)');

DROP STATISTICS s10;

-- combination of multiple ndistinct statistics, with/without expressions
TRUNCATE ndistinct;

-- two mostly independent groups of columns
INSERT INTO ndistinct (a, b, c, d)
     SELECT mod(i,3), mod(i,9), mod(i,5), mod(i,20)
       FROM generate_series(1,1000) s(i);

ANALYZE ndistinct;

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (b+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), (b+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), (b+1), c');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, (c*10)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (b+1), c, (d - 1)');

-- basic statistics on both attributes (no expressions)
CREATE STATISTICS s11 (ndistinct) ON a, b FROM ndistinct;

CREATE STATISTICS s12 (ndistinct) ON c, d FROM ndistinct;

ANALYZE ndistinct;

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (b+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), (b+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), (b+1), c');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, (c*10)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (b+1), c, (d - 1)');


-- replace the second statistics by statistics on expressions

DROP STATISTICS s12;

CREATE STATISTICS s12 (ndistinct) ON (c * 10), (d - 1) FROM ndistinct;

ANALYZE ndistinct;

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (b+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), (b+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), (b+1), c');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, (c*10)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (b+1), c, (d - 1)');


-- replace the second statistics by statistics on both attributes and expressions

DROP STATISTICS s12;

CREATE STATISTICS s12 (ndistinct) ON c, d, (c * 10), (d - 1) FROM ndistinct;

ANALYZE ndistinct;

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (b+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), (b+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), (b+1), c');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, (c*10)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (b+1), c, (d - 1)');


-- replace the other statistics by statistics on both attributes and expressions

DROP STATISTICS s11;

CREATE STATISTICS s11 (ndistinct) ON a, b, (a*5), (b+1) FROM ndistinct;

ANALYZE ndistinct;

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (b+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), (b+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), (b+1), c');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, (c*10)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (b+1), c, (d - 1)');


-- replace statistics by somewhat overlapping ones (this expected to get worse estimate
-- because the first statistics shall be applied to 3 columns, and the second one can't
-- be really applied)

DROP STATISTICS s11;
DROP STATISTICS s12;

CREATE STATISTICS s11 (ndistinct) ON a, b, (a*5), (b+1) FROM ndistinct;
CREATE STATISTICS s12 (ndistinct) ON a, (b+1), (c * 10) FROM ndistinct;

ANALYZE ndistinct;

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (b+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), b');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), (b+1)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY (a*5), (b+1), c');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, b, (c*10)');

SELECT * FROM check_estimated_rows('SELECT COUNT(*) FROM ndistinct GROUP BY a, (b+1), c, (d - 1)');

DROP STATISTICS s11;
DROP STATISTICS s12;

-- functional dependencies tests
CREATE TABLE functional_dependencies (
    filler1 TEXT,
    filler2 NUMERIC,
    a INT,
    b TEXT,
    filler3 DATE,
    c INT,
    d TEXT
)
WITH (autovacuum_enabled = off);

CREATE INDEX fdeps_ab_idx ON functional_dependencies (a, b);
CREATE INDEX fdeps_abc_idx ON functional_dependencies (a, b, c);

-- random data (no functional dependencies)
INSERT INTO functional_dependencies (a, b, c, filler1)
     SELECT mod(i, 5), mod(i, 7), mod(i, 11), i FROM generate_series(1,1000) s(i);

ANALYZE functional_dependencies;

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = 1 AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = 1 AND b = ''1'' AND c = 1');

-- create statistics
CREATE STATISTICS func_deps_stat (dependencies) ON a, b, c FROM functional_dependencies;

ANALYZE functional_dependencies;

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = 1 AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = 1 AND b = ''1'' AND c = 1');

-- a => b, a => c, b => c
TRUNCATE functional_dependencies;
DROP STATISTICS func_deps_stat;

-- now do the same thing, but with expressions
INSERT INTO functional_dependencies (a, b, c, filler1)
     SELECT i, i, i, i FROM generate_series(1,5000) s(i);

ANALYZE functional_dependencies;

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE mod(a, 11) = 1 AND mod(b::int, 13) = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE mod(a, 11) = 1 AND mod(b::int, 13) = 1 AND mod(c, 7) = 1');

-- create statistics
CREATE STATISTICS func_deps_stat (dependencies) ON (mod(a,11)), (mod(b::int, 13)), (mod(c, 7)) FROM functional_dependencies;

ANALYZE functional_dependencies;

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE mod(a, 11) = 1 AND mod(b::int, 13) = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE mod(a, 11) = 1 AND mod(b::int, 13) = 1 AND mod(c, 7) = 1');

-- a => b, a => c, b => c
TRUNCATE functional_dependencies;
DROP STATISTICS func_deps_stat;

INSERT INTO functional_dependencies (a, b, c, filler1)
     SELECT mod(i,100), mod(i,50), mod(i,25), i FROM generate_series(1,5000) s(i);

ANALYZE functional_dependencies;

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = 1 AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = 1 AND b = ''1'' AND c = 1');

-- IN
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 51) AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 51) AND b IN (''1'', ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 2, 51, 52) AND b IN (''1'', ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 2, 51, 52) AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 26, 51, 76) AND b IN (''1'', ''26'') AND c = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 26, 51, 76) AND b IN (''1'', ''26'') AND c IN (1)');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 2, 26, 27, 51, 52, 76, 77) AND b IN (''1'', ''2'', ''26'', ''27'') AND c IN (1, 2)');

-- OR clauses referencing the same attribute
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a = 1 OR a = 51) AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a = 1 OR a = 51) AND (b = ''1'' OR b = ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a = 1 OR a = 2 OR a = 51 OR a = 52) AND (b = ''1'' OR b = ''2'')');

-- OR clauses referencing different attributes
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a = 1 OR b = ''1'') AND b = ''1''');

-- ANY
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = ANY (ARRAY[1, 51]) AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = ANY (ARRAY[1, 51]) AND b = ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = ANY (ARRAY[1, 2, 51, 52]) AND b = ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = ANY (ARRAY[1, 26, 51, 76]) AND b = ANY (ARRAY[''1'', ''26'']) AND c = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = ANY (ARRAY[1, 26, 51, 76]) AND b = ANY (ARRAY[''1'', ''26'']) AND c = ANY (ARRAY[1])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = ANY (ARRAY[1, 2, 26, 27, 51, 52, 76, 77]) AND b = ANY (ARRAY[''1'', ''2'', ''26'', ''27'']) AND c = ANY (ARRAY[1, 2])');

-- ANY with inequalities should not benefit from functional dependencies
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a < ANY (ARRAY[1, 51]) AND b > ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a >= ANY (ARRAY[1, 51]) AND b <= ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a <= ANY (ARRAY[1, 2, 51, 52]) AND b >= ANY (ARRAY[''1'', ''2''])');

-- ALL (should not benefit from functional dependencies)
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 51) AND b = ALL (ARRAY[''1''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 51) AND b = ALL (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 2, 51, 52) AND b = ALL (ARRAY[''1'', ''2''])');

-- create statistics
CREATE STATISTICS func_deps_stat (dependencies) ON a, b, c FROM functional_dependencies;

ANALYZE functional_dependencies;

-- print the detected dependencies
SELECT dependencies FROM pg_stats_ext WHERE statistics_name = 'func_deps_stat';

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = 1 AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = 1 AND b = ''1'' AND c = 1');

-- IN
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 51) AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 51) AND b IN (''1'', ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 2, 51, 52) AND b IN (''1'', ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 2, 51, 52) AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 26, 51, 76) AND b IN (''1'', ''26'') AND c = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 26, 51, 76) AND b IN (''1'', ''26'') AND c IN (1)');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 2, 26, 27, 51, 52, 76, 77) AND b IN (''1'', ''2'', ''26'', ''27'') AND c IN (1, 2)');

-- OR clauses referencing the same attribute
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a = 1 OR a = 51) AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a = 1 OR a = 51) AND (b = ''1'' OR b = ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a = 1 OR a = 2 OR a = 51 OR a = 52) AND (b = ''1'' OR b = ''2'')');

-- OR clauses referencing different attributes are incompatible
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a = 1 OR b = ''1'') AND b = ''1''');

-- ANY
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = ANY (ARRAY[1, 51]) AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = ANY (ARRAY[1, 51]) AND b = ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = ANY (ARRAY[1, 2, 51, 52]) AND b = ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = ANY (ARRAY[1, 26, 51, 76]) AND b = ANY (ARRAY[''1'', ''26'']) AND c = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = ANY (ARRAY[1, 26, 51, 76]) AND b = ANY (ARRAY[''1'', ''26'']) AND c = ANY (ARRAY[1])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = ANY (ARRAY[1, 2, 26, 27, 51, 52, 76, 77]) AND b = ANY (ARRAY[''1'', ''2'', ''26'', ''27'']) AND c = ANY (ARRAY[1, 2])');

-- ANY with inequalities should not benefit from functional dependencies
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a < ANY (ARRAY[1, 51]) AND b > ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a >= ANY (ARRAY[1, 51]) AND b <= ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a <= ANY (ARRAY[1, 2, 51, 52]) AND b >= ANY (ARRAY[''1'', ''2''])');

-- ALL (should not benefit from functional dependencies)
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 51) AND b = ALL (ARRAY[''1''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 51) AND b = ALL (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a IN (1, 2, 51, 52) AND b = ALL (ARRAY[''1'', ''2''])');

-- changing the type of column c causes all its stats to be dropped, reverting
-- to default estimates without any statistics, i.e. 0.5% selectivity for each
-- condition
ALTER TABLE functional_dependencies ALTER COLUMN c TYPE numeric;

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = 1 AND b = ''1'' AND c = 1');

ANALYZE functional_dependencies;

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE a = 1 AND b = ''1'' AND c = 1');

DROP STATISTICS func_deps_stat;

-- now try functional dependencies with expressions

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = 2 AND upper(b) = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = 2 AND upper(b) = ''1'' AND (c + 1) = 2');

-- IN
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 102) AND upper(b) = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 102) AND upper(b) IN (''1'', ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 4, 102, 104) AND upper(b) IN (''1'', ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 4, 102, 104) AND upper(b) = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 52, 102, 152) AND upper(b) IN (''1'', ''26'') AND (c + 1) = 2');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 52, 102, 152) AND upper(b) IN (''1'', ''26'') AND (c + 1) IN (2)');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 4, 52, 54, 102, 104, 152, 154) AND upper(b) IN (''1'', ''2'', ''26'', ''27'') AND (c + 1) IN (2, 3)');

-- OR clauses referencing the same attribute
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE ((a * 2) = 2 OR (a * 2) = 102) AND upper(b) = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE ((a * 2) = 2 OR (a * 2) = 102) AND (upper(b) = ''1'' OR upper(b) = ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE ((a * 2) = 2 OR (a * 2) = 4 OR (a * 2) = 102 OR (a * 2) = 104) AND (upper(b) = ''1'' OR upper(b) = ''2'')');

-- OR clauses referencing different attributes
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE ((a * 2) = 2 OR upper(b) = ''1'') AND upper(b) = ''1''');

-- ANY
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = ANY (ARRAY[2, 102]) AND upper(b) = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = ANY (ARRAY[2, 102]) AND upper(b) = ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = ANY (ARRAY[2, 4, 102, 104]) AND upper(b) = ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = ANY (ARRAY[2, 52, 102, 152]) AND upper(b) = ANY (ARRAY[''1'', ''26'']) AND (c + 1) = 2');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = ANY (ARRAY[2, 52, 102, 152]) AND upper(b) = ANY (ARRAY[''1'', ''26'']) AND (c + 1) = ANY (ARRAY[2])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = ANY (ARRAY[2, 4, 52, 54, 102, 104, 152, 154]) AND upper(b) = ANY (ARRAY[''1'', ''2'', ''26'', ''27'']) AND (c + 1) = ANY (ARRAY[2, 3])');

-- ANY with inequalities should not benefit from functional dependencies
-- the estimates however improve thanks to having expression statistics
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) < ANY (ARRAY[2, 102]) AND upper(b) > ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) >= ANY (ARRAY[2, 102]) AND upper(b) <= ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) <= ANY (ARRAY[2, 4, 102, 104]) AND upper(b) >= ANY (ARRAY[''1'', ''2''])');

-- ALL (should not benefit from functional dependencies)
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 102) AND upper(b) = ALL (ARRAY[''1''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 102) AND upper(b) = ALL (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 4, 102, 104) AND upper(b) = ALL (ARRAY[''1'', ''2''])');

-- create statistics on expressions
CREATE STATISTICS func_deps_stat (dependencies) ON (a * 2), upper(b), (c + 1) FROM functional_dependencies;

ANALYZE functional_dependencies;

-- print the detected dependencies
SELECT dependencies FROM pg_stats_ext WHERE statistics_name = 'func_deps_stat';

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = 2 AND upper(b) = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = 2 AND upper(b) = ''1'' AND (c + 1) = 2');

-- IN
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 102) AND upper(b) = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 102) AND upper(b) IN (''1'', ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 4, 102, 104) AND upper(b) IN (''1'', ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 4, 102, 104) AND upper(b) = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 52, 102, 152) AND upper(b) IN (''1'', ''26'') AND (c + 1) = 2');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 52, 102, 152) AND upper(b) IN (''1'', ''26'') AND (c + 1) IN (2)');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 4, 52, 54, 102, 104, 152, 154) AND upper(b) IN (''1'', ''2'', ''26'', ''27'') AND (c + 1) IN (2, 3)');

-- OR clauses referencing the same attribute
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE ((a * 2) = 2 OR (a * 2) = 102) AND upper(b) = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE ((a * 2) = 2 OR (a * 2) = 102) AND (upper(b) = ''1'' OR upper(b) = ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE ((a * 2) = 2 OR (a * 2) = 4 OR (a * 2) = 102 OR (a * 2) = 104) AND (upper(b) = ''1'' OR upper(b) = ''2'')');

-- OR clauses referencing different attributes
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE ((a * 2) = 2 OR upper(b) = ''1'') AND upper(b) = ''1''');

-- ANY
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = ANY (ARRAY[2, 102]) AND upper(b) = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = ANY (ARRAY[2, 102]) AND upper(b) = ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = ANY (ARRAY[2, 4, 102, 104]) AND upper(b) = ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = ANY (ARRAY[2, 52, 102, 152]) AND upper(b) = ANY (ARRAY[''1'', ''26'']) AND (c + 1) = 2');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = ANY (ARRAY[2, 52, 102, 152]) AND upper(b) = ANY (ARRAY[''1'', ''26'']) AND (c + 1) = ANY (ARRAY[2])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) = ANY (ARRAY[2, 4, 52, 54, 102, 104, 152, 154]) AND upper(b) = ANY (ARRAY[''1'', ''2'', ''26'', ''27'']) AND (c + 1) = ANY (ARRAY[2, 3])');

-- ANY with inequalities should not benefit from functional dependencies
-- the estimates however improve thanks to having expression statistics
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) < ANY (ARRAY[2, 102]) AND upper(b) > ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) >= ANY (ARRAY[2, 102]) AND upper(b) <= ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) <= ANY (ARRAY[2, 4, 102, 104]) AND upper(b) >= ANY (ARRAY[''1'', ''2''])');

-- ALL (should not benefit from functional dependencies)
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 102) AND upper(b) = ALL (ARRAY[''1''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 102) AND upper(b) = ALL (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies WHERE (a * 2) IN (2, 4, 102, 104) AND upper(b) = ALL (ARRAY[''1'', ''2''])');

-- check the ability to use multiple functional dependencies
CREATE TABLE functional_dependencies_multi (
	a INTEGER,
	b INTEGER,
	c INTEGER,
	d INTEGER
)
WITH (autovacuum_enabled = off);

INSERT INTO functional_dependencies_multi (a, b, c, d)
    SELECT
         mod(i,7),
         mod(i,7),
         mod(i,11),
         mod(i,11)
    FROM generate_series(1,5000) s(i);

ANALYZE functional_dependencies_multi;

-- estimates without any functional dependencies
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies_multi WHERE a = 0 AND b = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies_multi WHERE 0 = a AND 0 = b');
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies_multi WHERE c = 0 AND d = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies_multi WHERE a = 0 AND b = 0 AND c = 0 AND d = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies_multi WHERE 0 = a AND b = 0 AND 0 = c AND d = 0');

-- create separate functional dependencies
CREATE STATISTICS functional_dependencies_multi_1 (dependencies) ON a, b FROM functional_dependencies_multi;
CREATE STATISTICS functional_dependencies_multi_2 (dependencies) ON c, d FROM functional_dependencies_multi;

ANALYZE functional_dependencies_multi;

SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies_multi WHERE a = 0 AND b = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies_multi WHERE 0 = a AND 0 = b');
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies_multi WHERE c = 0 AND d = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies_multi WHERE a = 0 AND b = 0 AND c = 0 AND d = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM functional_dependencies_multi WHERE 0 = a AND b = 0 AND 0 = c AND d = 0');

DROP TABLE functional_dependencies_multi;

-- MCV lists
CREATE TABLE mcv_lists (
    filler1 TEXT,
    filler2 NUMERIC,
    a INT,
    b VARCHAR,
    filler3 DATE,
    c INT,
    d TEXT
)
WITH (autovacuum_enabled = off);

-- random data (no MCV list)
INSERT INTO mcv_lists (a, b, c, filler1)
     SELECT mod(i,37), mod(i,41), mod(i,43), mod(i,47) FROM generate_series(1,5000) s(i);

ANALYZE mcv_lists;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 AND b = ''1'' AND c = 1');

-- create statistics
CREATE STATISTICS mcv_lists_stats (mcv) ON a, b, c FROM mcv_lists;

ANALYZE mcv_lists;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 AND b = ''1'' AND c = 1');

TRUNCATE mcv_lists;
DROP STATISTICS mcv_lists_stats;

-- random data (no MCV list), but with expression
INSERT INTO mcv_lists (a, b, c, filler1)
     SELECT i, i, i, i FROM generate_series(1,1000) s(i);

ANALYZE mcv_lists;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,7) = 1 AND mod(b::int,11) = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,7) = 1 AND mod(b::int,11) = 1 AND mod(c,13) = 1');

-- create statistics
CREATE STATISTICS mcv_lists_stats (mcv) ON (mod(a,7)), (mod(b::int,11)), (mod(c,13)) FROM mcv_lists;

ANALYZE mcv_lists;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,7) = 1 AND mod(b::int,11) = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,7) = 1 AND mod(b::int,11) = 1 AND mod(c,13) = 1');

-- 100 distinct combinations, all in the MCV list
TRUNCATE mcv_lists;
DROP STATISTICS mcv_lists_stats;

INSERT INTO mcv_lists (a, b, c, filler1)
     SELECT mod(i,100), mod(i,50), mod(i,25), i FROM generate_series(1,5000) s(i);

ANALYZE mcv_lists;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 1 = a AND ''1'' = b');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < 1 AND b < ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 1 > a AND ''1'' > b');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a <= 0 AND b <= ''0''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 0 >= a AND ''0'' >= b');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 AND b = ''1'' AND c = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < 5 AND b < ''1'' AND c < 5');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < 5 AND ''1'' > b AND 5 > c');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a <= 4 AND b <= ''0'' AND c <= 4');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 4 >= a AND ''0'' >= b AND 4 >= c');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 OR b = ''1'' OR c = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 OR b = ''1'' OR c = 1 OR d IS NOT NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IN (1, 2, 51, 52) AND b IN ( ''1'', ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IN (1, 2, 51, 52, NULL) AND b IN ( ''1'', ''2'', NULL)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = ANY (ARRAY[1, 2, 51, 52]) AND b = ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = ANY (ARRAY[NULL, 1, 2, 51, 52]) AND b = ANY (ARRAY[''1'', ''2'', NULL])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a <= ANY (ARRAY[1, 2, 3]) AND b IN (''1'', ''2'', ''3'')');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a <= ANY (ARRAY[1, NULL, 2, 3]) AND b IN (''1'', ''2'', NULL, ''3'')');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < ALL (ARRAY[4, 5]) AND c > ANY (ARRAY[1, 2, 3])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < ALL (ARRAY[4, 5]) AND c > ANY (ARRAY[1, 2, 3, NULL])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < ALL (ARRAY[4, 5]) AND b IN (''1'', ''2'', ''3'') AND c > ANY (ARRAY[1, 2, 3])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < ALL (ARRAY[4, 5]) AND b IN (''1'', ''2'', NULL, ''3'') AND c > ANY (ARRAY[1, 2, NULL, 3])');

-- create statistics
CREATE STATISTICS mcv_lists_stats (mcv) ON a, b, c FROM mcv_lists;

ANALYZE mcv_lists;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 AND b = ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 1 = a AND ''1'' = b');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < 1 AND b < ''1''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 1 > a AND ''1'' > b');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a <= 0 AND b <= ''0''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 0 >= a AND ''0'' >= b');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 AND b = ''1'' AND c = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < 5 AND b < ''1'' AND c < 5');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < 5 AND ''1'' > b AND 5 > c');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a <= 4 AND b <= ''0'' AND c <= 4');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 4 >= a AND ''0'' >= b AND 4 >= c');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 OR b = ''1'' OR c = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 OR b = ''1'' OR c = 1 OR d IS NOT NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 OR b = ''1'' OR c = 1 OR d IS NOT NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IN (1, 2, 51, 52) AND b IN ( ''1'', ''2'')');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IN (1, 2, 51, 52, NULL) AND b IN ( ''1'', ''2'', NULL)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = ANY (ARRAY[1, 2, 51, 52]) AND b = ANY (ARRAY[''1'', ''2''])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = ANY (ARRAY[NULL, 1, 2, 51, 52]) AND b = ANY (ARRAY[''1'', ''2'', NULL])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a <= ANY (ARRAY[1, 2, 3]) AND b IN (''1'', ''2'', ''3'')');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a <= ANY (ARRAY[1, NULL, 2, 3]) AND b IN (''1'', ''2'', NULL, ''3'')');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < ALL (ARRAY[4, 5]) AND c > ANY (ARRAY[1, 2, 3])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < ALL (ARRAY[4, 5]) AND c > ANY (ARRAY[1, 2, 3, NULL])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < ALL (ARRAY[4, 5]) AND b IN (''1'', ''2'', ''3'') AND c > ANY (ARRAY[1, 2, 3])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a < ALL (ARRAY[4, 5]) AND b IN (''1'', ''2'', NULL, ''3'') AND c > ANY (ARRAY[1, 2, NULL, 3])');

-- check change of unrelated column type does not reset the MCV statistics
ALTER TABLE mcv_lists ALTER COLUMN d TYPE VARCHAR(64);

SELECT d.stxdmcv IS NOT NULL
  FROM pg_statistic_ext s, pg_statistic_ext_data d
 WHERE s.stxname = 'mcv_lists_stats'
   AND d.stxoid = s.oid;

-- check change of column type resets the MCV statistics
ALTER TABLE mcv_lists ALTER COLUMN c TYPE numeric;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 AND b = ''1''');

ANALYZE mcv_lists;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 AND b = ''1''');


-- 100 distinct combinations, all in the MCV list, but with expressions
TRUNCATE mcv_lists;
DROP STATISTICS mcv_lists_stats;

INSERT INTO mcv_lists (a, b, c, filler1)
     SELECT i, i, i, i FROM generate_series(1,1000) s(i);

ANALYZE mcv_lists;

-- without any stats on the expressions, we have to use default selectivities, which
-- is why the estimates here are different from the pre-computed case above

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = 1 AND mod(b::int,10) = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 1 = mod(a,20) AND 1 = mod(b::int,10)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) < 1 AND mod(b::int,10) < 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 1 > mod(a,20) AND 1 > mod(b::int,10)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = 1 AND mod(b::int,10) = 1 AND mod(c,5) = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = 1 OR mod(b::int,10) = 1 OR mod(c,25) = 1 OR d IS NOT NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) IN (1, 2, 51, 52, NULL) AND mod(b::int,10) IN ( 1, 2, NULL)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = ANY (ARRAY[1, 2, 51, 52]) AND mod(b::int,10) = ANY (ARRAY[1, 2])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) <= ANY (ARRAY[1, NULL, 2, 3]) AND mod(b::int,10) IN (1, 2, NULL, 3)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) < ALL (ARRAY[4, 5]) AND mod(b::int,10) IN (1, 2, 3) AND mod(c,5) > ANY (ARRAY[1, 2, 3])');

-- create statistics with expressions only (we create three separate stats, in order not to build more complex extended stats)
CREATE STATISTICS mcv_lists_stats_1 ON (mod(a,20)) FROM mcv_lists;
CREATE STATISTICS mcv_lists_stats_2 ON (mod(b::int,10)) FROM mcv_lists;
CREATE STATISTICS mcv_lists_stats_3 ON (mod(c,5)) FROM mcv_lists;

ANALYZE mcv_lists;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = 1 AND mod(b::int,10) = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 1 = mod(a,20) AND 1 = mod(b::int,10)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) < 1 AND mod(b::int,10) < 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 1 > mod(a,20) AND 1 > mod(b::int,10)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = 1 AND mod(b::int,10) = 1 AND mod(c,5) = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = 1 OR mod(b::int,10) = 1 OR mod(c,25) = 1 OR d IS NOT NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) IN (1, 2, 51, 52, NULL) AND mod(b::int,10) IN ( 1, 2, NULL)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = ANY (ARRAY[1, 2, 51, 52]) AND mod(b::int,10) = ANY (ARRAY[1, 2])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) <= ANY (ARRAY[1, NULL, 2, 3]) AND mod(b::int,10) IN (1, 2, NULL, 3)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) < ALL (ARRAY[4, 5]) AND mod(b::int,10) IN (1, 2, 3) AND mod(c,5) > ANY (ARRAY[1, 2, 3])');

DROP STATISTICS mcv_lists_stats_1;
DROP STATISTICS mcv_lists_stats_2;
DROP STATISTICS mcv_lists_stats_3;

-- create statistics with both MCV and expressions
CREATE STATISTICS mcv_lists_stats (mcv) ON (mod(a,20)), (mod(b::int,10)), (mod(c,5)) FROM mcv_lists;

ANALYZE mcv_lists;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = 1 AND mod(b::int,10) = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 1 = mod(a,20) AND 1 = mod(b::int,10)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) < 1 AND mod(b::int,10) < 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE 1 > mod(a,20) AND 1 > mod(b::int,10)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = 1 AND mod(b::int,10) = 1 AND mod(c,5) = 1');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = 1 OR mod(b::int,10) = 1 OR mod(c,25) = 1 OR d IS NOT NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) IN (1, 2, 51, 52, NULL) AND mod(b::int,10) IN ( 1, 2, NULL)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = ANY (ARRAY[1, 2, 51, 52]) AND mod(b::int,10) = ANY (ARRAY[1, 2])');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) <= ANY (ARRAY[1, NULL, 2, 3]) AND mod(b::int,10) IN (1, 2, NULL, 3)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) < ALL (ARRAY[4, 5]) AND mod(b::int,10) IN (1, 2, 3) AND mod(c,5) > ANY (ARRAY[1, 2, 3])');

-- we can't use the statistic for OR clauses that are not fully covered (missing 'd' attribute)
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE mod(a,20) = 1 OR mod(b::int,10) = 1 OR mod(c,5) = 1 OR d IS NOT NULL');

-- 100 distinct combinations with NULL values, all in the MCV list
TRUNCATE mcv_lists;
DROP STATISTICS mcv_lists_stats;

INSERT INTO mcv_lists (a, b, c, filler1)
     SELECT
         (CASE WHEN mod(i,100) = 1 THEN NULL ELSE mod(i,100) END),
         (CASE WHEN mod(i,50) = 1  THEN NULL ELSE mod(i,50) END),
         (CASE WHEN mod(i,25) = 1  THEN NULL ELSE mod(i,25) END),
         i
     FROM generate_series(1,5000) s(i);

ANALYZE mcv_lists;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IS NULL AND b IS NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IS NULL AND b IS NULL AND c IS NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IS NULL AND b IS NOT NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IS NOT NULL AND b IS NULL AND c IS NOT NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IN (0, 1) AND b IN (''0'', ''1'')');

-- create statistics
CREATE STATISTICS mcv_lists_stats (mcv) ON a, b, c FROM mcv_lists;

ANALYZE mcv_lists;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IS NULL AND b IS NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IS NULL AND b IS NULL AND c IS NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IS NULL AND b IS NOT NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IS NOT NULL AND b IS NULL AND c IS NOT NULL');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IN (0, 1) AND b IN (''0'', ''1'')');

-- test pg_mcv_list_items with a very simple (single item) MCV list
TRUNCATE mcv_lists;
INSERT INTO mcv_lists (a, b, c) SELECT 1, 2, 3 FROM generate_series(1,1000) s(i);
ANALYZE mcv_lists;

SELECT m.*
  FROM pg_statistic_ext s, pg_statistic_ext_data d,
       pg_mcv_list_items(d.stxdmcv) m
 WHERE s.stxname = 'mcv_lists_stats'
   AND d.stxoid = s.oid;

-- 2 distinct combinations with NULL values, all in the MCV list
TRUNCATE mcv_lists;
DROP STATISTICS mcv_lists_stats;

INSERT INTO mcv_lists (a, b, c, d)
     SELECT
         NULL, -- always NULL
         (CASE WHEN mod(i,2) = 0 THEN NULL ELSE 'x' END),
         (CASE WHEN mod(i,2) = 0 THEN NULL ELSE 0 END),
         (CASE WHEN mod(i,2) = 0 THEN NULL ELSE 'x' END)
     FROM generate_series(1,5000) s(i);

ANALYZE mcv_lists;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE b = ''x'' OR d = ''x''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 OR b = ''x'' OR d = ''x''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IS NULL AND (b = ''x'' OR d = ''x'')');

-- create statistics
CREATE STATISTICS mcv_lists_stats (mcv) ON a, b, d FROM mcv_lists;

ANALYZE mcv_lists;

-- test pg_mcv_list_items with MCV list containing variable-length data and NULLs
SELECT m.*
  FROM pg_statistic_ext s, pg_statistic_ext_data d,
       pg_mcv_list_items(d.stxdmcv) m
 WHERE s.stxname = 'mcv_lists_stats'
   AND d.stxoid = s.oid;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE b = ''x'' OR d = ''x''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a = 1 OR b = ''x'' OR d = ''x''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists WHERE a IS NULL AND (b = ''x'' OR d = ''x'')');

-- mcv with pass-by-ref fixlen types, e.g. uuid
CREATE TABLE mcv_lists_uuid (
    a UUID,
    b UUID,
    c UUID
)
WITH (autovacuum_enabled = off);

INSERT INTO mcv_lists_uuid (a, b, c)
     SELECT
         md5(mod(i,100)::text)::uuid,
         md5(mod(i,50)::text)::uuid,
         md5(mod(i,25)::text)::uuid
     FROM generate_series(1,5000) s(i);

ANALYZE mcv_lists_uuid;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_uuid WHERE a = ''1679091c-5a88-0faf-6fb5-e6087eb1b2dc'' AND b = ''1679091c-5a88-0faf-6fb5-e6087eb1b2dc''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_uuid WHERE a = ''1679091c-5a88-0faf-6fb5-e6087eb1b2dc'' AND b = ''1679091c-5a88-0faf-6fb5-e6087eb1b2dc'' AND c = ''1679091c-5a88-0faf-6fb5-e6087eb1b2dc''');

CREATE STATISTICS mcv_lists_uuid_stats (mcv) ON a, b, c
  FROM mcv_lists_uuid;

ANALYZE mcv_lists_uuid;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_uuid WHERE a = ''1679091c-5a88-0faf-6fb5-e6087eb1b2dc'' AND b = ''1679091c-5a88-0faf-6fb5-e6087eb1b2dc''');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_uuid WHERE a = ''1679091c-5a88-0faf-6fb5-e6087eb1b2dc'' AND b = ''1679091c-5a88-0faf-6fb5-e6087eb1b2dc'' AND c = ''1679091c-5a88-0faf-6fb5-e6087eb1b2dc''');

DROP TABLE mcv_lists_uuid;

-- mcv with arrays
CREATE TABLE mcv_lists_arrays (
    a TEXT[],
    b NUMERIC[],
    c INT[]
)
WITH (autovacuum_enabled = off);

INSERT INTO mcv_lists_arrays (a, b, c)
     SELECT
         ARRAY[md5((i/100)::text), md5((i/100-1)::text), md5((i/100+1)::text)],
         ARRAY[(i/100-1)::numeric/1000, (i/100)::numeric/1000, (i/100+1)::numeric/1000],
         ARRAY[(i/100-1), i/100, (i/100+1)]
     FROM generate_series(1,5000) s(i);

CREATE STATISTICS mcv_lists_arrays_stats (mcv) ON a, b, c
  FROM mcv_lists_arrays;

ANALYZE mcv_lists_arrays;

-- mcv with bool
CREATE TABLE mcv_lists_bool (
    a BOOL,
    b BOOL,
    c BOOL
)
WITH (autovacuum_enabled = off);

INSERT INTO mcv_lists_bool (a, b, c)
     SELECT
         (mod(i,2) = 0), (mod(i,4) = 0), (mod(i,8) = 0)
     FROM generate_series(1,10000) s(i);

ANALYZE mcv_lists_bool;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_bool WHERE a AND b AND c');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_bool WHERE NOT a AND b AND c');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_bool WHERE NOT a AND NOT b AND c');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_bool WHERE NOT a AND b AND NOT c');

CREATE STATISTICS mcv_lists_bool_stats (mcv) ON a, b, c
  FROM mcv_lists_bool;

ANALYZE mcv_lists_bool;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_bool WHERE a AND b AND c');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_bool WHERE NOT a AND b AND c');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_bool WHERE NOT a AND NOT b AND c');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_bool WHERE NOT a AND b AND NOT c');

-- mcv covering just a small fraction of data
CREATE TABLE mcv_lists_partial (
    a INT,
    b INT,
    c INT
);

-- 10 frequent groups, each with 100 elements
INSERT INTO mcv_lists_partial (a, b, c)
     SELECT
         mod(i,10),
         mod(i,10),
         mod(i,10)
     FROM generate_series(0,999) s(i);

-- 100 groups that will make it to the MCV list (includes the 10 frequent ones)
INSERT INTO mcv_lists_partial (a, b, c)
     SELECT
         i,
         i,
         i
     FROM generate_series(0,99) s(i);

-- 4000 groups in total, most of which won't make it (just a single item)
INSERT INTO mcv_lists_partial (a, b, c)
     SELECT
         i,
         i,
         i
     FROM generate_series(0,3999) s(i);

ANALYZE mcv_lists_partial;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE a = 0 AND b = 0 AND c = 0');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE a = 0 OR b = 0 OR c = 0');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE a = 10 AND b = 10 AND c = 10');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE a = 10 OR b = 10 OR c = 10');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE a = 0 AND b = 0 AND c = 10');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE a = 0 OR b = 0 OR c = 10');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE (a = 0 AND b = 0 AND c = 0) OR (a = 1 AND b = 1 AND c = 1) OR (a = 2 AND b = 2 AND c = 2)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE (a = 0 AND b = 0) OR (a = 0 AND c = 0) OR (b = 0 AND c = 0)');

CREATE STATISTICS mcv_lists_partial_stats (mcv) ON a, b, c
  FROM mcv_lists_partial;

ANALYZE mcv_lists_partial;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE a = 0 AND b = 0 AND c = 0');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE a = 0 OR b = 0 OR c = 0');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE a = 10 AND b = 10 AND c = 10');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE a = 10 OR b = 10 OR c = 10');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE a = 0 AND b = 0 AND c = 10');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE a = 0 OR b = 0 OR c = 10');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE (a = 0 AND b = 0 AND c = 0) OR (a = 1 AND b = 1 AND c = 1) OR (a = 2 AND b = 2 AND c = 2)');

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_partial WHERE (a = 0 AND b = 0) OR (a = 0 AND c = 0) OR (b = 0 AND c = 0)');

DROP TABLE mcv_lists_partial;

-- check the ability to use multiple MCV lists
CREATE TABLE mcv_lists_multi (
	a INTEGER,
	b INTEGER,
	c INTEGER,
	d INTEGER
)
WITH (autovacuum_enabled = off);

INSERT INTO mcv_lists_multi (a, b, c, d)
    SELECT
         mod(i,5),
         mod(i,5),
         mod(i,7),
         mod(i,7)
    FROM generate_series(1,5000) s(i);

ANALYZE mcv_lists_multi;

-- estimates without any mcv statistics
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE a = 0 AND b = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE c = 0 AND d = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE b = 0 AND c = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE b = 0 OR c = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE a = 0 AND b = 0 AND c = 0 AND d = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE (a = 0 AND b = 0) OR (c = 0 AND d = 0)');
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE a = 0 OR b = 0 OR c = 0 OR d = 0');

-- create separate MCV statistics
CREATE STATISTICS mcv_lists_multi_1 (mcv) ON a, b FROM mcv_lists_multi;
CREATE STATISTICS mcv_lists_multi_2 (mcv) ON c, d FROM mcv_lists_multi;

ANALYZE mcv_lists_multi;

SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE a = 0 AND b = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE c = 0 AND d = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE b = 0 AND c = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE b = 0 OR c = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE a = 0 AND b = 0 AND c = 0 AND d = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE (a = 0 AND b = 0) OR (c = 0 AND d = 0)');
SELECT * FROM check_estimated_rows('SELECT * FROM mcv_lists_multi WHERE a = 0 OR b = 0 OR c = 0 OR d = 0');

DROP TABLE mcv_lists_multi;


-- statistics on integer expressions
CREATE TABLE expr_stats (a int, b int, c int);
INSERT INTO expr_stats SELECT mod(i,10), mod(i,10), mod(i,10) FROM generate_series(1,1000) s(i);
ANALYZE expr_stats;

SELECT * FROM check_estimated_rows('SELECT * FROM expr_stats WHERE (2*a) = 0 AND (3*b) = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM expr_stats WHERE (a+b) = 0 AND (a-b) = 0');

CREATE STATISTICS expr_stats_1 (mcv) ON (a+b), (a-b), (2*a), (3*b) FROM expr_stats;
ANALYZE expr_stats;

SELECT * FROM check_estimated_rows('SELECT * FROM expr_stats WHERE (2*a) = 0 AND (3*b) = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM expr_stats WHERE (a+b) = 0 AND (a-b) = 0');

DROP STATISTICS expr_stats_1;
DROP TABLE expr_stats;

-- statistics on a mix columns and expressions
CREATE TABLE expr_stats (a int, b int, c int);
INSERT INTO expr_stats SELECT mod(i,10), mod(i,10), mod(i,10) FROM generate_series(1,1000) s(i);
ANALYZE expr_stats;

SELECT * FROM check_estimated_rows('SELECT * FROM expr_stats WHERE a = 0 AND (2*a) = 0 AND (3*b) = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM expr_stats WHERE a = 3 AND b = 3 AND (a-b) = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM expr_stats WHERE a = 0 AND b = 1 AND (a-b) = 0');

CREATE STATISTICS expr_stats_1 (mcv) ON a, b, (2*a), (3*b), (a+b), (a-b) FROM expr_stats;
ANALYZE expr_stats;

SELECT * FROM check_estimated_rows('SELECT * FROM expr_stats WHERE a = 0 AND (2*a) = 0 AND (3*b) = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM expr_stats WHERE a = 3 AND b = 3 AND (a-b) = 0');
SELECT * FROM check_estimated_rows('SELECT * FROM expr_stats WHERE a = 0 AND b = 1 AND (a-b) = 0');

DROP TABLE expr_stats;

-- statistics on expressions with different data types
CREATE TABLE expr_stats (a int, b name, c text);
INSERT INTO expr_stats SELECT mod(i,10), md5(mod(i,10)::text), md5(mod(i,10)::text) FROM generate_series(1,1000) s(i);
ANALYZE expr_stats;

SELECT * FROM check_estimated_rows('SELECT * FROM expr_stats WHERE a = 0 AND (b || c) <= ''z'' AND (c || b) >= ''0''');

CREATE STATISTICS expr_stats_1 (mcv) ON a, b, (b || c), (c || b) FROM expr_stats;
ANALYZE expr_stats;

SELECT * FROM check_estimated_rows('SELECT * FROM expr_stats WHERE a = 0 AND (b || c) <= ''z'' AND (c || b) >= ''0''');

DROP TABLE expr_stats;

-- test handling of a mix of compatible and incompatible expressions
CREATE TABLE expr_stats_incompatible_test (
    c0 double precision,
    c1 boolean NOT NULL
);

CREATE STATISTICS expr_stat_comp_1 ON c0, c1 FROM expr_stats_incompatible_test;

INSERT INTO expr_stats_incompatible_test VALUES (1234,false), (5678,true);
ANALYZE expr_stats_incompatible_test;

SELECT c0 FROM ONLY expr_stats_incompatible_test WHERE
(
  upper('x') LIKE ('x'||('[0,1]'::int4range))
  AND
  (c0 IN (0, 1) OR c1)
);

DROP TABLE expr_stats_incompatible_test;

-- Permission tests. Users should not be able to see specific data values in
-- the extended statistics, if they lack permission to see those values in
-- the underlying table.
--
-- Currently this is only relevant for MCV stats.
CREATE SCHEMA tststats;

CREATE TABLE tststats.priv_test_tbl (
    a int,
    b int
);

INSERT INTO tststats.priv_test_tbl
     SELECT mod(i,5), mod(i,10) FROM generate_series(1,100) s(i);

CREATE STATISTICS tststats.priv_test_stats (mcv) ON a, b
  FROM tststats.priv_test_tbl;

ANALYZE tststats.priv_test_tbl;

-- Check printing info about extended statistics by \dX
create table stts_t1 (a int, b int);
create statistics stts_1 (ndistinct) on a, b from stts_t1;
create statistics stts_2 (ndistinct, dependencies) on a, b from stts_t1;
create statistics stts_3 (ndistinct, dependencies, mcv) on a, b from stts_t1;

create table stts_t2 (a int, b int, c int);
create statistics stts_4 on b, c from stts_t2;

create table stts_t3 (col1 int, col2 int, col3 int);
create statistics stts_hoge on col1, col2, col3 from stts_t3;

create schema stts_s1;
create schema stts_s2;
create statistics stts_s1.stts_foo on col1, col2 from stts_t3;
create statistics stts_s2.stts_yama (dependencies, mcv) on col1, col3 from stts_t3;

insert into stts_t1 select i,i from generate_series(1,100) i;
analyze stts_t1;
set search_path to public, stts_s1, stts_s2, tststats;

\dX
\dX stts_?
\dX *stts_hoge
\dX+
\dX+ stts_?
\dX+ *stts_hoge
\dX+ stts_s2.stts_yama

set search_path to public, stts_s1;
\dX

create role regress_stats_ext nosuperuser;
set role regress_stats_ext;
\dX
reset role;

drop table stts_t1, stts_t2, stts_t3;
drop schema stts_s1, stts_s2 cascade;
drop user regress_stats_ext;
reset search_path;

-- User with no access
CREATE USER regress_stats_user1;
GRANT USAGE ON SCHEMA tststats TO regress_stats_user1;
SET SESSION AUTHORIZATION regress_stats_user1;
SELECT * FROM tststats.priv_test_tbl; -- Permission denied

-- Attempt to gain access using a leaky operator
CREATE FUNCTION op_leak(int, int) RETURNS bool
    AS 'BEGIN RAISE NOTICE ''op_leak => %, %'', $1, $2; RETURN $1 < $2; END'
    LANGUAGE plpgsql;
CREATE OPERATOR <<< (procedure = op_leak, leftarg = int, rightarg = int,
                     restrict = scalarltsel);
SELECT * FROM tststats.priv_test_tbl WHERE a <<< 0 AND b <<< 0; -- Permission denied
DELETE FROM tststats.priv_test_tbl WHERE a <<< 0 AND b <<< 0; -- Permission denied

-- Grant access via a security barrier view, but hide all data
RESET SESSION AUTHORIZATION;
CREATE VIEW tststats.priv_test_view WITH (security_barrier=true)
    AS SELECT * FROM tststats.priv_test_tbl WHERE false;
GRANT SELECT, DELETE ON tststats.priv_test_view TO regress_stats_user1;

-- Should now have access via the view, but see nothing and leak nothing
SET SESSION AUTHORIZATION regress_stats_user1;
SELECT * FROM tststats.priv_test_view WHERE a <<< 0 AND b <<< 0; -- Should not leak
DELETE FROM tststats.priv_test_view WHERE a <<< 0 AND b <<< 0; -- Should not leak

-- Grant table access, but hide all data with RLS
RESET SESSION AUTHORIZATION;
ALTER TABLE tststats.priv_test_tbl ENABLE ROW LEVEL SECURITY;
GRANT SELECT, DELETE ON tststats.priv_test_tbl TO regress_stats_user1;

-- Should now have direct table access, but see nothing and leak nothing
SET SESSION AUTHORIZATION regress_stats_user1;
SELECT * FROM tststats.priv_test_tbl WHERE a <<< 0 AND b <<< 0; -- Should not leak
DELETE FROM tststats.priv_test_tbl WHERE a <<< 0 AND b <<< 0; -- Should not leak

-- Tidy up
DROP OPERATOR <<< (int, int);
DROP FUNCTION op_leak(int, int);
RESET SESSION AUTHORIZATION;
DROP SCHEMA tststats CASCADE;
DROP USER regress_stats_user1;
