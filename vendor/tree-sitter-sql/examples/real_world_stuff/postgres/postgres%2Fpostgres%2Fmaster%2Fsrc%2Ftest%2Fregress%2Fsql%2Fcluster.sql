--
--  CLUSTER
--

CREATE TABLE clstr_tst_s (rf_a SERIAL PRIMARY KEY,
	b INT);

CREATE TABLE clstr_tst (a SERIAL PRIMARY KEY,
	b INT,
	c TEXT,
	d TEXT,
	CONSTRAINT clstr_tst_con FOREIGN KEY (b) REFERENCES clstr_tst_s);

CREATE INDEX clstr_tst_b ON clstr_tst (b);
CREATE INDEX clstr_tst_c ON clstr_tst (c);
CREATE INDEX clstr_tst_c_b ON clstr_tst (c,b);
CREATE INDEX clstr_tst_b_c ON clstr_tst (b,c);

INSERT INTO clstr_tst_s (b) VALUES (0);
INSERT INTO clstr_tst_s (b) SELECT b FROM clstr_tst_s;
INSERT INTO clstr_tst_s (b) SELECT b FROM clstr_tst_s;
INSERT INTO clstr_tst_s (b) SELECT b FROM clstr_tst_s;
INSERT INTO clstr_tst_s (b) SELECT b FROM clstr_tst_s;
INSERT INTO clstr_tst_s (b) SELECT b FROM clstr_tst_s;

CREATE TABLE clstr_tst_inh () INHERITS (clstr_tst);

INSERT INTO clstr_tst (b, c) VALUES (11, 'once');
INSERT INTO clstr_tst (b, c) VALUES (10, 'diez');
INSERT INTO clstr_tst (b, c) VALUES (31, 'treinta y uno');
INSERT INTO clstr_tst (b, c) VALUES (22, 'veintidos');
INSERT INTO clstr_tst (b, c) VALUES (3, 'tres');
INSERT INTO clstr_tst (b, c) VALUES (20, 'veinte');
INSERT INTO clstr_tst (b, c) VALUES (23, 'veintitres');
INSERT INTO clstr_tst (b, c) VALUES (21, 'veintiuno');
INSERT INTO clstr_tst (b, c) VALUES (4, 'cuatro');
INSERT INTO clstr_tst (b, c) VALUES (14, 'catorce');
INSERT INTO clstr_tst (b, c) VALUES (2, 'dos');
INSERT INTO clstr_tst (b, c) VALUES (18, 'dieciocho');
INSERT INTO clstr_tst (b, c) VALUES (27, 'veintisiete');
INSERT INTO clstr_tst (b, c) VALUES (25, 'veinticinco');
INSERT INTO clstr_tst (b, c) VALUES (13, 'trece');
INSERT INTO clstr_tst (b, c) VALUES (28, 'veintiocho');
INSERT INTO clstr_tst (b, c) VALUES (32, 'treinta y dos');
INSERT INTO clstr_tst (b, c) VALUES (5, 'cinco');
INSERT INTO clstr_tst (b, c) VALUES (29, 'veintinueve');
INSERT INTO clstr_tst (b, c) VALUES (1, 'uno');
INSERT INTO clstr_tst (b, c) VALUES (24, 'veinticuatro');
INSERT INTO clstr_tst (b, c) VALUES (30, 'treinta');
INSERT INTO clstr_tst (b, c) VALUES (12, 'doce');
INSERT INTO clstr_tst (b, c) VALUES (17, 'diecisiete');
INSERT INTO clstr_tst (b, c) VALUES (9, 'nueve');
INSERT INTO clstr_tst (b, c) VALUES (19, 'diecinueve');
INSERT INTO clstr_tst (b, c) VALUES (26, 'veintiseis');
INSERT INTO clstr_tst (b, c) VALUES (15, 'quince');
INSERT INTO clstr_tst (b, c) VALUES (7, 'siete');
INSERT INTO clstr_tst (b, c) VALUES (16, 'dieciseis');
INSERT INTO clstr_tst (b, c) VALUES (8, 'ocho');
-- This entry is needed to test that TOASTED values are copied correctly.
INSERT INTO clstr_tst (b, c, d) VALUES (6, 'seis', repeat('xyzzy', 100000));

CLUSTER clstr_tst_c ON clstr_tst;

SELECT a,b,c,substring(d for 30), length(d) from clstr_tst;
SELECT a,b,c,substring(d for 30), length(d) from clstr_tst ORDER BY a;
SELECT a,b,c,substring(d for 30), length(d) from clstr_tst ORDER BY b;
SELECT a,b,c,substring(d for 30), length(d) from clstr_tst ORDER BY c;

-- Verify that inheritance link still works
INSERT INTO clstr_tst_inh VALUES (0, 100, 'in child table');
SELECT a,b,c,substring(d for 30), length(d) from clstr_tst;

-- Verify that foreign key link still works
INSERT INTO clstr_tst (b, c) VALUES (1111, 'this should fail');

SELECT conname FROM pg_constraint WHERE conrelid = 'clstr_tst'::regclass
ORDER BY 1;


SELECT relname, relkind,
    EXISTS(SELECT 1 FROM pg_class WHERE oid = c.reltoastrelid) AS hastoast
FROM pg_class c WHERE relname LIKE 'clstr_tst%' ORDER BY relname;

-- Verify that indisclustered is correctly set
SELECT pg_class.relname FROM pg_index, pg_class, pg_class AS pg_class_2
WHERE pg_class.oid=indexrelid
	AND indrelid=pg_class_2.oid
	AND pg_class_2.relname = 'clstr_tst'
	AND indisclustered;

-- Try changing indisclustered
ALTER TABLE clstr_tst CLUSTER ON clstr_tst_b_c;
SELECT pg_class.relname FROM pg_index, pg_class, pg_class AS pg_class_2
WHERE pg_class.oid=indexrelid
	AND indrelid=pg_class_2.oid
	AND pg_class_2.relname = 'clstr_tst'
	AND indisclustered;

-- Try turning off all clustering
ALTER TABLE clstr_tst SET WITHOUT CLUSTER;
SELECT pg_class.relname FROM pg_index, pg_class, pg_class AS pg_class_2
WHERE pg_class.oid=indexrelid
	AND indrelid=pg_class_2.oid
	AND pg_class_2.relname = 'clstr_tst'
	AND indisclustered;

-- Verify that toast tables are clusterable
CLUSTER pg_toast.pg_toast_826 USING pg_toast_826_index;

-- Verify that clustering all tables does in fact cluster the right ones
CREATE USER regress_clstr_user;
CREATE TABLE clstr_1 (a INT PRIMARY KEY);
CREATE TABLE clstr_2 (a INT PRIMARY KEY);
CREATE TABLE clstr_3 (a INT PRIMARY KEY);
ALTER TABLE clstr_1 OWNER TO regress_clstr_user;
ALTER TABLE clstr_3 OWNER TO regress_clstr_user;
GRANT SELECT ON clstr_2 TO regress_clstr_user;
INSERT INTO clstr_1 VALUES (2);
INSERT INTO clstr_1 VALUES (1);
INSERT INTO clstr_2 VALUES (2);
INSERT INTO clstr_2 VALUES (1);
INSERT INTO clstr_3 VALUES (2);
INSERT INTO clstr_3 VALUES (1);

-- "CLUSTER <tablename>" on a table that hasn't been clustered
CLUSTER clstr_2;

CLUSTER clstr_1_pkey ON clstr_1;
CLUSTER clstr_2 USING clstr_2_pkey;
SELECT * FROM clstr_1 UNION ALL
  SELECT * FROM clstr_2 UNION ALL
  SELECT * FROM clstr_3;

-- revert to the original state
DELETE FROM clstr_1;
DELETE FROM clstr_2;
DELETE FROM clstr_3;
INSERT INTO clstr_1 VALUES (2);
INSERT INTO clstr_1 VALUES (1);
INSERT INTO clstr_2 VALUES (2);
INSERT INTO clstr_2 VALUES (1);
INSERT INTO clstr_3 VALUES (2);
INSERT INTO clstr_3 VALUES (1);

-- this user can only cluster clstr_1 and clstr_3, but the latter
-- has not been clustered
SET SESSION AUTHORIZATION regress_clstr_user;
CLUSTER;
SELECT * FROM clstr_1 UNION ALL
  SELECT * FROM clstr_2 UNION ALL
  SELECT * FROM clstr_3;

-- cluster a single table using the indisclustered bit previously set
DELETE FROM clstr_1;
INSERT INTO clstr_1 VALUES (2);
INSERT INTO clstr_1 VALUES (1);
CLUSTER clstr_1;
SELECT * FROM clstr_1;

-- Test MVCC-safety of cluster. There isn't much we can do to verify the
-- results with a single backend...

CREATE TABLE clustertest (key int PRIMARY KEY);

INSERT INTO clustertest VALUES (10);
INSERT INTO clustertest VALUES (20);
INSERT INTO clustertest VALUES (30);
INSERT INTO clustertest VALUES (40);
INSERT INTO clustertest VALUES (50);

-- Use a transaction so that updates are not committed when CLUSTER sees 'em
BEGIN;

-- Test update where the old row version is found first in the scan
UPDATE clustertest SET key = 100 WHERE key = 10;

-- Test update where the new row version is found first in the scan
UPDATE clustertest SET key = 35 WHERE key = 40;

-- Test longer update chain
UPDATE clustertest SET key = 60 WHERE key = 50;
UPDATE clustertest SET key = 70 WHERE key = 60;
UPDATE clustertest SET key = 80 WHERE key = 70;

SELECT * FROM clustertest;
CLUSTER clustertest_pkey ON clustertest;
SELECT * FROM clustertest;

COMMIT;

SELECT * FROM clustertest;

-- check that temp tables can be clustered
create temp table clstr_temp (col1 int primary key, col2 text);
insert into clstr_temp values (2, 'two'), (1, 'one');
cluster clstr_temp using clstr_temp_pkey;
select * from clstr_temp;
drop table clstr_temp;

RESET SESSION AUTHORIZATION;

-- check clustering an empty table
DROP TABLE clustertest;
CREATE TABLE clustertest (f1 int PRIMARY KEY);
CLUSTER clustertest USING clustertest_pkey;
CLUSTER clustertest;

-- Check that partitioned tables can be clustered
CREATE TABLE clstrpart (a int) PARTITION BY RANGE (a);
CREATE TABLE clstrpart1 PARTITION OF clstrpart FOR VALUES FROM (1) TO (10) PARTITION BY RANGE (a);
CREATE TABLE clstrpart11 PARTITION OF clstrpart1 FOR VALUES FROM (1) TO (5);
CREATE TABLE clstrpart12 PARTITION OF clstrpart1 FOR VALUES FROM (5) TO (10) PARTITION BY RANGE (a);
CREATE TABLE clstrpart2 PARTITION OF clstrpart FOR VALUES FROM (10) TO (20);
CREATE TABLE clstrpart3 PARTITION OF clstrpart DEFAULT PARTITION BY RANGE (a);
CREATE TABLE clstrpart33 PARTITION OF clstrpart3 DEFAULT;
CREATE INDEX clstrpart_only_idx ON ONLY clstrpart (a);
CLUSTER clstrpart USING clstrpart_only_idx; -- fails
DROP INDEX clstrpart_only_idx;
CREATE INDEX clstrpart_idx ON clstrpart (a);
-- Check that clustering sets new relfilenodes:
CREATE TEMP TABLE old_cluster_info AS SELECT relname, level, relfilenode, relkind FROM pg_partition_tree('clstrpart'::regclass) AS tree JOIN pg_class c ON c.oid=tree.relid ;
CLUSTER clstrpart USING clstrpart_idx;
CREATE TEMP TABLE new_cluster_info AS SELECT relname, level, relfilenode, relkind FROM pg_partition_tree('clstrpart'::regclass) AS tree JOIN pg_class c ON c.oid=tree.relid ;
SELECT relname, old.level, old.relkind, old.relfilenode = new.relfilenode FROM old_cluster_info AS old JOIN new_cluster_info AS new USING (relname) ORDER BY relname COLLATE "C";
-- Partitioned indexes aren't and can't be marked un/clustered:
\d clstrpart
CLUSTER clstrpart;
ALTER TABLE clstrpart SET WITHOUT CLUSTER;
ALTER TABLE clstrpart CLUSTER ON clstrpart_idx;
DROP TABLE clstrpart;

-- Ownership of partitions is checked
CREATE TABLE ptnowner(i int unique) PARTITION BY LIST (i);
CREATE INDEX ptnowner_i_idx ON ptnowner(i);
CREATE TABLE ptnowner1 PARTITION OF ptnowner FOR VALUES IN (1);
CREATE ROLE regress_ptnowner;
CREATE TABLE ptnowner2 PARTITION OF ptnowner FOR VALUES IN (2);
ALTER TABLE ptnowner1 OWNER TO regress_ptnowner;
ALTER TABLE ptnowner OWNER TO regress_ptnowner;
CREATE TEMP TABLE ptnowner_oldnodes AS
  SELECT oid, relname, relfilenode FROM pg_partition_tree('ptnowner') AS tree
  JOIN pg_class AS c ON c.oid=tree.relid;
SET SESSION AUTHORIZATION regress_ptnowner;
CLUSTER ptnowner USING ptnowner_i_idx;
RESET SESSION AUTHORIZATION;
SELECT a.relname, a.relfilenode=b.relfilenode FROM pg_class a
  JOIN ptnowner_oldnodes b USING (oid) ORDER BY a.relname COLLATE "C";
DROP TABLE ptnowner;
DROP ROLE regress_ptnowner;

-- Test CLUSTER with external tuplesorting

create table clstr_4 as select * from tenk1;
create index cluster_sort on clstr_4 (hundred, thousand, tenthous);
-- ensure we don't use the index in CLUSTER nor the checking SELECTs
set enable_indexscan = off;

-- Use external sort:
set maintenance_work_mem = '1MB';
cluster clstr_4 using cluster_sort;
select * from
(select hundred, lag(hundred) over () as lhundred,
        thousand, lag(thousand) over () as lthousand,
        tenthous, lag(tenthous) over () as ltenthous from clstr_4) ss
where row(hundred, thousand, tenthous) <= row(lhundred, lthousand, ltenthous);

reset enable_indexscan;
reset maintenance_work_mem;

-- test CLUSTER on expression index
CREATE TABLE clstr_expression(id serial primary key, a int, b text COLLATE "C");
INSERT INTO clstr_expression(a, b) SELECT g.i % 42, 'prefix'||g.i FROM generate_series(1, 133) g(i);
CREATE INDEX clstr_expression_minus_a ON clstr_expression ((-a), b);
CREATE INDEX clstr_expression_upper_b ON clstr_expression ((upper(b)));

-- verify indexes work before cluster
BEGIN;
SET LOCAL enable_seqscan = false;
EXPLAIN (COSTS OFF) SELECT * FROM clstr_expression WHERE upper(b) = 'PREFIX3';
SELECT * FROM clstr_expression WHERE upper(b) = 'PREFIX3';
EXPLAIN (COSTS OFF) SELECT * FROM clstr_expression WHERE -a = -3 ORDER BY -a, b;
SELECT * FROM clstr_expression WHERE -a = -3 ORDER BY -a, b;
COMMIT;

-- and after clustering on clstr_expression_minus_a
CLUSTER clstr_expression USING clstr_expression_minus_a;
WITH rows AS
  (SELECT ctid, lag(a) OVER (ORDER BY ctid) AS la, a FROM clstr_expression)
SELECT * FROM rows WHERE la < a;
BEGIN;
SET LOCAL enable_seqscan = false;
EXPLAIN (COSTS OFF) SELECT * FROM clstr_expression WHERE upper(b) = 'PREFIX3';
SELECT * FROM clstr_expression WHERE upper(b) = 'PREFIX3';
EXPLAIN (COSTS OFF) SELECT * FROM clstr_expression WHERE -a = -3 ORDER BY -a, b;
SELECT * FROM clstr_expression WHERE -a = -3 ORDER BY -a, b;
COMMIT;

-- and after clustering on clstr_expression_upper_b
CLUSTER clstr_expression USING clstr_expression_upper_b;
WITH rows AS
  (SELECT ctid, lag(b) OVER (ORDER BY ctid) AS lb, b FROM clstr_expression)
SELECT * FROM rows WHERE upper(lb) > upper(b);
BEGIN;
SET LOCAL enable_seqscan = false;
EXPLAIN (COSTS OFF) SELECT * FROM clstr_expression WHERE upper(b) = 'PREFIX3';
SELECT * FROM clstr_expression WHERE upper(b) = 'PREFIX3';
EXPLAIN (COSTS OFF) SELECT * FROM clstr_expression WHERE -a = -3 ORDER BY -a, b;
SELECT * FROM clstr_expression WHERE -a = -3 ORDER BY -a, b;
COMMIT;

-- clean up
DROP TABLE clustertest;
DROP TABLE clstr_1;
DROP TABLE clstr_2;
DROP TABLE clstr_3;
DROP TABLE clstr_4;
DROP TABLE clstr_expression;

DROP USER regress_clstr_user;
