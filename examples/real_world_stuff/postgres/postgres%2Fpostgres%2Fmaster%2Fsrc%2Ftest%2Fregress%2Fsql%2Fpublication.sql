--
-- PUBLICATION
--
CREATE ROLE regress_publication_user LOGIN SUPERUSER;
CREATE ROLE regress_publication_user2;
CREATE ROLE regress_publication_user_dummy LOGIN NOSUPERUSER;
SET SESSION AUTHORIZATION 'regress_publication_user';

-- suppress warning that depends on wal_level
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_default;
RESET client_min_messages;

COMMENT ON PUBLICATION testpub_default IS 'test publication';
SELECT obj_description(p.oid, 'pg_publication') FROM pg_publication p;

SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpib_ins_trunct WITH (publish = insert);
RESET client_min_messages;

ALTER PUBLICATION testpub_default SET (publish = update);

-- error cases
CREATE PUBLICATION testpub_xxx WITH (foo);
CREATE PUBLICATION testpub_xxx WITH (publish = 'cluster, vacuum');
CREATE PUBLICATION testpub_xxx WITH (publish_via_partition_root = 'true', publish_via_partition_root = '0');

\dRp

ALTER PUBLICATION testpub_default SET (publish = 'insert, update, delete');

\dRp

--- adding tables
CREATE SCHEMA pub_test;
CREATE TABLE testpub_tbl1 (id serial primary key, data text);
CREATE TABLE pub_test.testpub_nopk (foo int, bar int);
CREATE VIEW testpub_view AS SELECT 1;
CREATE TABLE testpub_parted (a int) PARTITION BY LIST (a);

SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_foralltables FOR ALL TABLES WITH (publish = 'insert');
RESET client_min_messages;
ALTER PUBLICATION testpub_foralltables SET (publish = 'insert, update');

CREATE TABLE testpub_tbl2 (id serial primary key, data text);
-- fail - can't add to for all tables publication
ALTER PUBLICATION testpub_foralltables ADD TABLE testpub_tbl2;
-- fail - can't drop from all tables publication
ALTER PUBLICATION testpub_foralltables DROP TABLE testpub_tbl2;
-- fail - can't add to for all tables publication
ALTER PUBLICATION testpub_foralltables SET TABLE pub_test.testpub_nopk;

-- fail - can't add schema to 'FOR ALL TABLES' publication
ALTER PUBLICATION testpub_foralltables ADD ALL TABLES IN SCHEMA pub_test;
-- fail - can't drop schema from 'FOR ALL TABLES' publication
ALTER PUBLICATION testpub_foralltables DROP ALL TABLES IN SCHEMA pub_test;
-- fail - can't set schema to 'FOR ALL TABLES' publication
ALTER PUBLICATION testpub_foralltables SET ALL TABLES IN SCHEMA pub_test;

SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_fortable FOR TABLE testpub_tbl1;
RESET client_min_messages;
-- should be able to add schema to 'FOR TABLE' publication
ALTER PUBLICATION testpub_fortable ADD ALL TABLES IN SCHEMA pub_test;
\dRp+ testpub_fortable
-- should be able to drop schema from 'FOR TABLE' publication
ALTER PUBLICATION testpub_fortable DROP ALL TABLES IN SCHEMA pub_test;
\dRp+ testpub_fortable
-- should be able to set schema to 'FOR TABLE' publication
ALTER PUBLICATION testpub_fortable SET ALL TABLES IN SCHEMA pub_test;
\dRp+ testpub_fortable

SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_forschema FOR ALL TABLES IN SCHEMA pub_test;
RESET client_min_messages;
-- fail - can't create publication with schema and table of the same schema
CREATE PUBLICATION testpub_for_tbl_schema FOR ALL TABLES IN SCHEMA pub_test, TABLE pub_test.testpub_nopk;
-- fail - can't add a table of the same schema to the schema publication
ALTER PUBLICATION testpub_forschema ADD TABLE pub_test.testpub_nopk;
-- fail - can't drop a table from the schema publication which isn't in the
-- publication
ALTER PUBLICATION testpub_forschema DROP TABLE pub_test.testpub_nopk;
-- should be able to set table to schema publication
ALTER PUBLICATION testpub_forschema SET TABLE pub_test.testpub_nopk;
\dRp+ testpub_forschema

SELECT pubname, puballtables FROM pg_publication WHERE pubname = 'testpub_foralltables';
\d+ testpub_tbl2
\dRp+ testpub_foralltables

DROP TABLE testpub_tbl2;
DROP PUBLICATION testpub_foralltables, testpub_fortable, testpub_forschema;

CREATE TABLE testpub_tbl3 (a int);
CREATE TABLE testpub_tbl3a (b text) INHERITS (testpub_tbl3);
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub3 FOR TABLE testpub_tbl3;
CREATE PUBLICATION testpub4 FOR TABLE ONLY testpub_tbl3;
RESET client_min_messages;
\dRp+ testpub3
\dRp+ testpub4

DROP TABLE testpub_tbl3, testpub_tbl3a;
DROP PUBLICATION testpub3, testpub4;

-- Tests for partitioned tables
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_forparted;
CREATE PUBLICATION testpub_forparted1;
RESET client_min_messages;
CREATE TABLE testpub_parted1 (LIKE testpub_parted);
CREATE TABLE testpub_parted2 (LIKE testpub_parted);
ALTER PUBLICATION testpub_forparted1 SET (publish='insert');
ALTER TABLE testpub_parted ATTACH PARTITION testpub_parted1 FOR VALUES IN (1);
ALTER TABLE testpub_parted ATTACH PARTITION testpub_parted2 FOR VALUES IN (2);
-- works despite missing REPLICA IDENTITY, because updates are not replicated
UPDATE testpub_parted1 SET a = 1;
-- only parent is listed as being in publication, not the partition
ALTER PUBLICATION testpub_forparted ADD TABLE testpub_parted;
\dRp+ testpub_forparted
-- should now fail, because parent's publication replicates updates
UPDATE testpub_parted1 SET a = 1;
ALTER TABLE testpub_parted DETACH PARTITION testpub_parted1;
-- works again, because parent's publication is no longer considered
UPDATE testpub_parted1 SET a = 1;
ALTER PUBLICATION testpub_forparted SET (publish_via_partition_root = true);
\dRp+ testpub_forparted
-- still fail, because parent's publication replicates updates
UPDATE testpub_parted2 SET a = 2;
ALTER PUBLICATION testpub_forparted DROP TABLE testpub_parted;
-- works again, because update is no longer replicated
UPDATE testpub_parted2 SET a = 2;
DROP TABLE testpub_parted1, testpub_parted2;
DROP PUBLICATION testpub_forparted, testpub_forparted1;

-- Tests for row filters
CREATE TABLE testpub_rf_tbl1 (a integer, b text);
CREATE TABLE testpub_rf_tbl2 (c text, d integer);
CREATE TABLE testpub_rf_tbl3 (e integer);
CREATE TABLE testpub_rf_tbl4 (g text);
CREATE TABLE testpub_rf_tbl5 (a xml);
CREATE SCHEMA testpub_rf_schema1;
CREATE TABLE testpub_rf_schema1.testpub_rf_tbl5 (h integer);
CREATE SCHEMA testpub_rf_schema2;
CREATE TABLE testpub_rf_schema2.testpub_rf_tbl6 (i integer);
SET client_min_messages = 'ERROR';
-- Firstly, test using the option publish='insert' because the row filter
-- validation of referenced columns is less strict than for delete/update.
CREATE PUBLICATION testpub5 FOR TABLE testpub_rf_tbl1, testpub_rf_tbl2 WHERE (c <> 'test' AND d < 5) WITH (publish = 'insert');
RESET client_min_messages;
\dRp+ testpub5
\d testpub_rf_tbl3
ALTER PUBLICATION testpub5 ADD TABLE testpub_rf_tbl3 WHERE (e > 1000 AND e < 2000);
\dRp+ testpub5
\d testpub_rf_tbl3
ALTER PUBLICATION testpub5 DROP TABLE testpub_rf_tbl2;
\dRp+ testpub5
-- remove testpub_rf_tbl1 and add testpub_rf_tbl3 again (another WHERE expression)
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl3 WHERE (e > 300 AND e < 500);
\dRp+ testpub5
\d testpub_rf_tbl3
-- test \d <tablename> (now it displays filter information)
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_rf_yes FOR TABLE testpub_rf_tbl1 WHERE (a > 1) WITH (publish = 'insert');
CREATE PUBLICATION testpub_rf_no FOR TABLE testpub_rf_tbl1;
RESET client_min_messages;
\d testpub_rf_tbl1
DROP PUBLICATION testpub_rf_yes, testpub_rf_no;
-- some more syntax tests to exercise other parser pathways
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_syntax1 FOR TABLE testpub_rf_tbl1, ONLY testpub_rf_tbl3 WHERE (e < 999) WITH (publish = 'insert');
RESET client_min_messages;
\dRp+ testpub_syntax1
DROP PUBLICATION testpub_syntax1;
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_syntax2 FOR TABLE testpub_rf_tbl1, testpub_rf_schema1.testpub_rf_tbl5 WHERE (h < 999) WITH (publish = 'insert');
RESET client_min_messages;
\dRp+ testpub_syntax2
DROP PUBLICATION testpub_syntax2;
-- fail - schemas don't allow WHERE clause
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_syntax3 FOR ALL TABLES IN SCHEMA testpub_rf_schema1 WHERE (a = 123);
CREATE PUBLICATION testpub_syntax3 FOR ALL TABLES IN SCHEMA testpub_rf_schema1, testpub_rf_schema1 WHERE (a = 123);
RESET client_min_messages;
-- fail - duplicate tables are not allowed if that table has any WHERE clause
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_dups FOR TABLE testpub_rf_tbl1 WHERE (a = 1), testpub_rf_tbl1 WITH (publish = 'insert');
CREATE PUBLICATION testpub_dups FOR TABLE testpub_rf_tbl1, testpub_rf_tbl1 WHERE (a = 2) WITH (publish = 'insert');
RESET client_min_messages;
-- fail - publication WHERE clause must be boolean
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl3 WHERE (1234);
-- fail - aggregate functions not allowed in WHERE clause
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl3 WHERE (e < AVG(e));
-- fail - user-defined operators are not allowed
CREATE FUNCTION testpub_rf_func1(integer, integer) RETURNS boolean AS $$ SELECT hashint4($1) > $2 $$ LANGUAGE SQL;
CREATE OPERATOR =#> (PROCEDURE = testpub_rf_func1, LEFTARG = integer, RIGHTARG = integer);
CREATE PUBLICATION testpub6 FOR TABLE testpub_rf_tbl3 WHERE (e =#> 27);
-- fail - user-defined functions are not allowed
CREATE FUNCTION testpub_rf_func2() RETURNS integer AS $$ BEGIN RETURN 123; END; $$ LANGUAGE plpgsql;
ALTER PUBLICATION testpub5 ADD TABLE testpub_rf_tbl1 WHERE (a >= testpub_rf_func2());
-- fail - non-immutable functions are not allowed. random() is volatile.
ALTER PUBLICATION testpub5 ADD TABLE testpub_rf_tbl1 WHERE (a < random());
-- fail - user-defined collations are not allowed
CREATE COLLATION user_collation FROM "C";
ALTER PUBLICATION testpub5 ADD TABLE testpub_rf_tbl1 WHERE (b < '2' COLLATE user_collation);
-- ok - NULLIF is allowed
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE (NULLIF(1,2) = a);
-- ok - built-in operators are allowed
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE (a IS NULL);
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE ((a > 5) IS FALSE);
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE (a IS DISTINCT FROM 5);
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE ((a, a + 1) < (2, 3));
-- ok - built-in type coercions between two binary compatible datatypes are allowed
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE (b::varchar < '2');
-- ok - immutable built-in functions are allowed
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl4 WHERE (length(g) < 6);
-- fail - user-defined types are not allowed
CREATE TYPE rf_bug_status AS ENUM ('new', 'open', 'closed');
CREATE TABLE rf_bug (id serial, description text, status rf_bug_status);
CREATE PUBLICATION testpub6 FOR TABLE rf_bug WHERE (status = 'open') WITH (publish = 'insert');
DROP TABLE rf_bug;
DROP TYPE rf_bug_status;
-- fail - row filter expression is not simple
CREATE PUBLICATION testpub6 FOR TABLE testpub_rf_tbl1 WHERE (a IN (SELECT generate_series(1,5)));
-- fail - system columns are not allowed
CREATE PUBLICATION testpub6 FOR TABLE testpub_rf_tbl1 WHERE ('(0,1)'::tid = ctid);
-- ok - conditional expressions are allowed
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl5 WHERE (a IS DOCUMENT);
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl5 WHERE (xmlexists('//foo[text() = ''bar'']' PASSING BY VALUE a));
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE (NULLIF(1, 2) = a);
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE (CASE a WHEN 5 THEN true ELSE false END);
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE (COALESCE(b, 'foo') = 'foo');
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE (GREATEST(a, 10) > 10);
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE (a IN (2, 4, 6));
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE (ARRAY[a] <@ ARRAY[2, 4, 6]);
ALTER PUBLICATION testpub5 SET TABLE testpub_rf_tbl1 WHERE (ROW(a, 2) IS NULL);
-- fail - WHERE not allowed in DROP
ALTER PUBLICATION testpub5 DROP TABLE testpub_rf_tbl1 WHERE (e < 27);
-- fail - cannot ALTER SET table which is a member of a pre-existing schema
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub6 FOR ALL TABLES IN SCHEMA testpub_rf_schema2;
ALTER PUBLICATION testpub6 SET ALL TABLES IN SCHEMA testpub_rf_schema2, TABLE testpub_rf_schema2.testpub_rf_tbl6 WHERE (i < 99);
RESET client_min_messages;

DROP TABLE testpub_rf_tbl1;
DROP TABLE testpub_rf_tbl2;
DROP TABLE testpub_rf_tbl3;
DROP TABLE testpub_rf_tbl4;
DROP TABLE testpub_rf_tbl5;
DROP TABLE testpub_rf_schema1.testpub_rf_tbl5;
DROP TABLE testpub_rf_schema2.testpub_rf_tbl6;
DROP SCHEMA testpub_rf_schema1;
DROP SCHEMA testpub_rf_schema2;
DROP PUBLICATION testpub5;
DROP PUBLICATION testpub6;
DROP OPERATOR =#>(integer, integer);
DROP FUNCTION testpub_rf_func1(integer, integer);
DROP FUNCTION testpub_rf_func2();
DROP COLLATION user_collation;

-- ======================================================
-- More row filter tests for validating column references
CREATE TABLE rf_tbl_abcd_nopk(a int, b int, c int, d int);
CREATE TABLE rf_tbl_abcd_pk(a int, b int, c int, d int, PRIMARY KEY(a,b));
CREATE TABLE rf_tbl_abcd_part_pk (a int PRIMARY KEY, b int) PARTITION by RANGE (a);
CREATE TABLE rf_tbl_abcd_part_pk_1 (b int, a int PRIMARY KEY);
ALTER TABLE rf_tbl_abcd_part_pk ATTACH PARTITION rf_tbl_abcd_part_pk_1 FOR VALUES FROM (1) TO (10);

-- Case 1. REPLICA IDENTITY DEFAULT (means use primary key or nothing)
-- 1a. REPLICA IDENTITY is DEFAULT and table has a PK.
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub6 FOR TABLE rf_tbl_abcd_pk WHERE (a > 99);
RESET client_min_messages;
-- ok - "a" is a PK col
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk WHERE (b > 99);
-- ok - "b" is a PK col
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk WHERE (c > 99);
-- fail - "c" is not part of the PK
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk WHERE (d > 99);
-- fail - "d" is not part of the PK
UPDATE rf_tbl_abcd_pk SET a = 1;
-- 1b. REPLICA IDENTITY is DEFAULT and table has no PK
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_nopk WHERE (a > 99);
-- fail - "a" is not part of REPLICA IDENTITY
UPDATE rf_tbl_abcd_nopk SET a = 1;

-- Case 2. REPLICA IDENTITY FULL
ALTER TABLE rf_tbl_abcd_pk REPLICA IDENTITY FULL;
ALTER TABLE rf_tbl_abcd_nopk REPLICA IDENTITY FULL;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk WHERE (c > 99);
-- ok - "c" is in REPLICA IDENTITY now even though not in PK
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_nopk WHERE (a > 99);
-- ok - "a" is in REPLICA IDENTITY now
UPDATE rf_tbl_abcd_nopk SET a = 1;

-- Case 3. REPLICA IDENTITY NOTHING
ALTER TABLE rf_tbl_abcd_pk REPLICA IDENTITY NOTHING;
ALTER TABLE rf_tbl_abcd_nopk REPLICA IDENTITY NOTHING;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk WHERE (a > 99);
-- fail - "a" is in PK but it is not part of REPLICA IDENTITY NOTHING
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk WHERE (c > 99);
-- fail - "c" is not in PK and not in REPLICA IDENTITY NOTHING
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_nopk WHERE (a > 99);
-- fail - "a" is not in REPLICA IDENTITY NOTHING
UPDATE rf_tbl_abcd_nopk SET a = 1;

-- Case 4. REPLICA IDENTITY INDEX
ALTER TABLE rf_tbl_abcd_pk ALTER COLUMN c SET NOT NULL;
CREATE UNIQUE INDEX idx_abcd_pk_c ON rf_tbl_abcd_pk(c);
ALTER TABLE rf_tbl_abcd_pk REPLICA IDENTITY USING INDEX idx_abcd_pk_c;
ALTER TABLE rf_tbl_abcd_nopk ALTER COLUMN c SET NOT NULL;
CREATE UNIQUE INDEX idx_abcd_nopk_c ON rf_tbl_abcd_nopk(c);
ALTER TABLE rf_tbl_abcd_nopk REPLICA IDENTITY USING INDEX idx_abcd_nopk_c;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk WHERE (a > 99);
-- fail - "a" is in PK but it is not part of REPLICA IDENTITY INDEX
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk WHERE (c > 99);
-- ok - "c" is not in PK but it is part of REPLICA IDENTITY INDEX
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_nopk WHERE (a > 99);
-- fail - "a" is not in REPLICA IDENTITY INDEX
UPDATE rf_tbl_abcd_nopk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_nopk WHERE (c > 99);
-- ok - "c" is part of REPLICA IDENTITY INDEX
UPDATE rf_tbl_abcd_nopk SET a = 1;

-- Tests for partitioned table

-- set PUBLISH_VIA_PARTITION_ROOT to false and test row filter for partitioned
-- table
ALTER PUBLICATION testpub6 SET (PUBLISH_VIA_PARTITION_ROOT=0);
-- fail - cannot use row filter for partitioned table
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_part_pk WHERE (a > 99);
-- ok - can use row filter for partition
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_part_pk_1 WHERE (a > 99);
-- ok - "a" is a PK col
UPDATE rf_tbl_abcd_part_pk SET a = 1;
-- set PUBLISH_VIA_PARTITION_ROOT to true and test row filter for partitioned
-- table
ALTER PUBLICATION testpub6 SET (PUBLISH_VIA_PARTITION_ROOT=1);
-- ok - can use row filter for partitioned table
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_part_pk WHERE (a > 99);
-- ok - "a" is a PK col
UPDATE rf_tbl_abcd_part_pk SET a = 1;
-- fail - cannot set PUBLISH_VIA_PARTITION_ROOT to false if any row filter is
-- used for partitioned table
ALTER PUBLICATION testpub6 SET (PUBLISH_VIA_PARTITION_ROOT=0);
-- remove partitioned table's row filter
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_part_pk;
-- ok - we don't have row filter for partitioned table.
ALTER PUBLICATION testpub6 SET (PUBLISH_VIA_PARTITION_ROOT=0);
-- Now change the root filter to use a column "b"
-- (which is not in the replica identity)
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_part_pk_1 WHERE (b > 99);
-- ok - we don't have row filter for partitioned table.
ALTER PUBLICATION testpub6 SET (PUBLISH_VIA_PARTITION_ROOT=0);
-- fail - "b" is not in REPLICA IDENTITY INDEX
UPDATE rf_tbl_abcd_part_pk SET a = 1;
-- set PUBLISH_VIA_PARTITION_ROOT to true
-- can use row filter for partitioned table
ALTER PUBLICATION testpub6 SET (PUBLISH_VIA_PARTITION_ROOT=1);
-- ok - can use row filter for partitioned table
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_part_pk WHERE (b > 99);
-- fail - "b" is not in REPLICA IDENTITY INDEX
UPDATE rf_tbl_abcd_part_pk SET a = 1;

DROP PUBLICATION testpub6;
DROP TABLE rf_tbl_abcd_pk;
DROP TABLE rf_tbl_abcd_nopk;
DROP TABLE rf_tbl_abcd_part_pk;
-- ======================================================

-- fail - duplicate tables are not allowed if that table has any column lists
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_dups FOR TABLE testpub_tbl1 (a), testpub_tbl1 WITH (publish = 'insert');
CREATE PUBLICATION testpub_dups FOR TABLE testpub_tbl1, testpub_tbl1 (a) WITH (publish = 'insert');
RESET client_min_messages;

-- test for column lists
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_fortable FOR TABLE testpub_tbl1;
CREATE PUBLICATION testpub_fortable_insert WITH (publish = 'insert');
RESET client_min_messages;
CREATE TABLE testpub_tbl5 (a int PRIMARY KEY, b text, c text,
	d int generated always as (a + length(b)) stored);
-- error: column "x" does not exist
ALTER PUBLICATION testpub_fortable ADD TABLE testpub_tbl5 (a, x);
-- error: replica identity "a" not included in the column list
ALTER PUBLICATION testpub_fortable ADD TABLE testpub_tbl5 (b, c);
UPDATE testpub_tbl5 SET a = 1;
ALTER PUBLICATION testpub_fortable DROP TABLE testpub_tbl5;
-- error: generated column "d" can't be in list
ALTER PUBLICATION testpub_fortable ADD TABLE testpub_tbl5 (a, d);
-- error: system attributes "ctid" not allowed in column list
ALTER PUBLICATION testpub_fortable ADD TABLE testpub_tbl5 (a, ctid);
-- ok
ALTER PUBLICATION testpub_fortable ADD TABLE testpub_tbl5 (a, c);
ALTER TABLE testpub_tbl5 DROP COLUMN c;		-- no dice
-- ok: for insert-only publication, any column list is acceptable
ALTER PUBLICATION testpub_fortable_insert ADD TABLE testpub_tbl5 (b, c);

/* not all replica identities are good enough */
CREATE UNIQUE INDEX testpub_tbl5_b_key ON testpub_tbl5 (b, c);
ALTER TABLE testpub_tbl5 ALTER b SET NOT NULL, ALTER c SET NOT NULL;
ALTER TABLE testpub_tbl5 REPLICA IDENTITY USING INDEX testpub_tbl5_b_key;
-- error: replica identity (b,c) is not covered by column list (a, c)
UPDATE testpub_tbl5 SET a = 1;
ALTER PUBLICATION testpub_fortable DROP TABLE testpub_tbl5;

-- error: change the replica identity to "b", and column list to (a, c)
-- then update fails, because (a, c) does not cover replica identity
ALTER TABLE testpub_tbl5 REPLICA IDENTITY USING INDEX testpub_tbl5_b_key;
ALTER PUBLICATION testpub_fortable ADD TABLE testpub_tbl5 (a, c);
UPDATE testpub_tbl5 SET a = 1;

/* But if upd/del are not published, it works OK */
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_table_ins WITH (publish = 'insert, truncate');
RESET client_min_messages;
ALTER PUBLICATION testpub_table_ins ADD TABLE testpub_tbl5 (a);		-- ok
\dRp+ testpub_table_ins

-- tests with REPLICA IDENTITY FULL
CREATE TABLE testpub_tbl6 (a int, b text, c text);
ALTER TABLE testpub_tbl6 REPLICA IDENTITY FULL;

ALTER PUBLICATION testpub_fortable ADD TABLE testpub_tbl6 (a, b, c);
UPDATE testpub_tbl6 SET a = 1;
ALTER PUBLICATION testpub_fortable DROP TABLE testpub_tbl6;

ALTER PUBLICATION testpub_fortable ADD TABLE testpub_tbl6; -- ok
UPDATE testpub_tbl6 SET a = 1;

-- make sure changing the column list is propagated to the catalog
CREATE TABLE testpub_tbl7 (a int primary key, b text, c text);
ALTER PUBLICATION testpub_fortable ADD TABLE testpub_tbl7 (a, b);
\d+ testpub_tbl7
-- ok: the column list is the same, we should skip this table (or at least not fail)
ALTER PUBLICATION testpub_fortable SET TABLE testpub_tbl7 (a, b);
\d+ testpub_tbl7
-- ok: the column list changes, make sure the catalog gets updated
ALTER PUBLICATION testpub_fortable SET TABLE testpub_tbl7 (a, c);
\d+ testpub_tbl7

-- column list for partitioned tables has to cover replica identities for
-- all child relations
CREATE TABLE testpub_tbl8 (a int, b text, c text) PARTITION BY HASH (a);
-- first partition has replica identity "a"
CREATE TABLE testpub_tbl8_0 PARTITION OF testpub_tbl8 FOR VALUES WITH (modulus 2, remainder 0);
ALTER TABLE testpub_tbl8_0 ADD PRIMARY KEY (a);
ALTER TABLE testpub_tbl8_0 REPLICA IDENTITY USING INDEX testpub_tbl8_0_pkey;
-- second partition has replica identity "b"
CREATE TABLE testpub_tbl8_1 PARTITION OF testpub_tbl8 FOR VALUES WITH (modulus 2, remainder 1);
ALTER TABLE testpub_tbl8_1 ADD PRIMARY KEY (b);
ALTER TABLE testpub_tbl8_1 REPLICA IDENTITY USING INDEX testpub_tbl8_1_pkey;

-- ok: column list covers both "a" and "b"
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_col_list FOR TABLE testpub_tbl8 (a, b) WITH (publish_via_partition_root = 'true');
RESET client_min_messages;

-- ok: the same thing, but try plain ADD TABLE
ALTER PUBLICATION testpub_col_list DROP TABLE testpub_tbl8;
ALTER PUBLICATION testpub_col_list ADD TABLE testpub_tbl8 (a, b);
UPDATE testpub_tbl8 SET a = 1;

-- failure: column list does not cover replica identity for the second partition
ALTER PUBLICATION testpub_col_list DROP TABLE testpub_tbl8;
ALTER PUBLICATION testpub_col_list ADD TABLE testpub_tbl8 (a, c);
UPDATE testpub_tbl8 SET a = 1;
ALTER PUBLICATION testpub_col_list DROP TABLE testpub_tbl8;

-- failure: one of the partitions has REPLICA IDENTITY FULL
ALTER TABLE testpub_tbl8_1 REPLICA IDENTITY FULL;
ALTER PUBLICATION testpub_col_list ADD TABLE testpub_tbl8 (a, c);
UPDATE testpub_tbl8 SET a = 1;
ALTER PUBLICATION testpub_col_list DROP TABLE testpub_tbl8;

-- add table and then try changing replica identity
ALTER TABLE testpub_tbl8_1 REPLICA IDENTITY USING INDEX testpub_tbl8_1_pkey;
ALTER PUBLICATION testpub_col_list ADD TABLE testpub_tbl8 (a, b);

-- failure: replica identity full can't be used with a column list
ALTER TABLE testpub_tbl8_1 REPLICA IDENTITY FULL;
UPDATE testpub_tbl8 SET a = 1;

-- failure: replica identity has to be covered by the column list
ALTER TABLE testpub_tbl8_1 DROP CONSTRAINT testpub_tbl8_1_pkey;
ALTER TABLE testpub_tbl8_1 ADD PRIMARY KEY (c);
ALTER TABLE testpub_tbl8_1 REPLICA IDENTITY USING INDEX testpub_tbl8_1_pkey;
UPDATE testpub_tbl8 SET a = 1;

DROP TABLE testpub_tbl8;

-- column list for partitioned tables has to cover replica identities for
-- all child relations
CREATE TABLE testpub_tbl8 (a int, b text, c text) PARTITION BY HASH (a);
ALTER PUBLICATION testpub_col_list ADD TABLE testpub_tbl8 (a, b);
-- first partition has replica identity "a"
CREATE TABLE testpub_tbl8_0 (a int, b text, c text);
ALTER TABLE testpub_tbl8_0 ADD PRIMARY KEY (a);
ALTER TABLE testpub_tbl8_0 REPLICA IDENTITY USING INDEX testpub_tbl8_0_pkey;
-- second partition has replica identity "b"
CREATE TABLE testpub_tbl8_1 (a int, b text, c text);
ALTER TABLE testpub_tbl8_1 ADD PRIMARY KEY (c);
ALTER TABLE testpub_tbl8_1 REPLICA IDENTITY USING INDEX testpub_tbl8_1_pkey;

-- ok: attaching first partition works, because (a) is in column list
ALTER TABLE testpub_tbl8 ATTACH PARTITION testpub_tbl8_0 FOR VALUES WITH (modulus 2, remainder 0);
-- failure: second partition has replica identity (c), which si not in column list
ALTER TABLE testpub_tbl8 ATTACH PARTITION testpub_tbl8_1 FOR VALUES WITH (modulus 2, remainder 1);
UPDATE testpub_tbl8 SET a = 1;

-- failure: changing replica identity to FULL for partition fails, because
-- of the column list on the parent
ALTER TABLE testpub_tbl8_0 REPLICA IDENTITY FULL;
UPDATE testpub_tbl8 SET a = 1;

DROP TABLE testpub_tbl5, testpub_tbl6, testpub_tbl7, testpub_tbl8, testpub_tbl8_1;
DROP PUBLICATION testpub_table_ins, testpub_fortable, testpub_fortable_insert, testpub_col_list;
-- ======================================================

-- Test combination of column list and row filter
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_both_filters;
RESET client_min_messages;
CREATE TABLE testpub_tbl_both_filters (a int, b int, c int, PRIMARY KEY (a,c));
ALTER TABLE testpub_tbl_both_filters REPLICA IDENTITY USING INDEX testpub_tbl_both_filters_pkey;
ALTER PUBLICATION testpub_both_filters ADD TABLE testpub_tbl_both_filters (a,c) WHERE (c != 1);
\dRp+ testpub_both_filters
\d+ testpub_tbl_both_filters

DROP TABLE testpub_tbl_both_filters;
DROP PUBLICATION testpub_both_filters;
-- ======================================================

-- More column list tests for validating column references
CREATE TABLE rf_tbl_abcd_nopk(a int, b int, c int, d int);
CREATE TABLE rf_tbl_abcd_pk(a int, b int, c int, d int, PRIMARY KEY(a,b));
CREATE TABLE rf_tbl_abcd_part_pk (a int PRIMARY KEY, b int) PARTITION by RANGE (a);
CREATE TABLE rf_tbl_abcd_part_pk_1 (b int, a int PRIMARY KEY);
ALTER TABLE rf_tbl_abcd_part_pk ATTACH PARTITION rf_tbl_abcd_part_pk_1 FOR VALUES FROM (1) TO (10);

-- Case 1. REPLICA IDENTITY DEFAULT (means use primary key or nothing)

-- 1a. REPLICA IDENTITY is DEFAULT and table has a PK.
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub6 FOR TABLE rf_tbl_abcd_pk (a, b);
RESET client_min_messages;
-- ok - (a,b) coverts all PK cols
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk (a, b, c);
-- ok - (a,b,c) coverts all PK cols
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk (a);
-- fail - "b" is missing from the column list
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk (b);
-- fail - "a" is missing from the column list
UPDATE rf_tbl_abcd_pk SET a = 1;

-- 1b. REPLICA IDENTITY is DEFAULT and table has no PK
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_nopk (a);
-- ok - there's no replica identity, so any column list works
-- note: it fails anyway, just a bit later because UPDATE requires RI
UPDATE rf_tbl_abcd_nopk SET a = 1;

-- Case 2. REPLICA IDENTITY FULL
ALTER TABLE rf_tbl_abcd_pk REPLICA IDENTITY FULL;
ALTER TABLE rf_tbl_abcd_nopk REPLICA IDENTITY FULL;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk (c);
-- fail - with REPLICA IDENTITY FULL no column list is allowed
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_nopk (a, b, c, d);
-- fail - with REPLICA IDENTITY FULL no column list is allowed
UPDATE rf_tbl_abcd_nopk SET a = 1;

-- Case 3. REPLICA IDENTITY NOTHING
ALTER TABLE rf_tbl_abcd_pk REPLICA IDENTITY NOTHING;
ALTER TABLE rf_tbl_abcd_nopk REPLICA IDENTITY NOTHING;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk (a);
-- ok - REPLICA IDENTITY NOTHING means all column lists are valid
-- it still fails later because without RI we can't replicate updates
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk (a, b, c, d);
-- ok - REPLICA IDENTITY NOTHING means all column lists are valid
-- it still fails later because without RI we can't replicate updates
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_nopk (d);
-- ok - REPLICA IDENTITY NOTHING means all column lists are valid
-- it still fails later because without RI we can't replicate updates
UPDATE rf_tbl_abcd_nopk SET a = 1;

-- Case 4. REPLICA IDENTITY INDEX
ALTER TABLE rf_tbl_abcd_pk ALTER COLUMN c SET NOT NULL;
CREATE UNIQUE INDEX idx_abcd_pk_c ON rf_tbl_abcd_pk(c);
ALTER TABLE rf_tbl_abcd_pk REPLICA IDENTITY USING INDEX idx_abcd_pk_c;
ALTER TABLE rf_tbl_abcd_nopk ALTER COLUMN c SET NOT NULL;
CREATE UNIQUE INDEX idx_abcd_nopk_c ON rf_tbl_abcd_nopk(c);
ALTER TABLE rf_tbl_abcd_nopk REPLICA IDENTITY USING INDEX idx_abcd_nopk_c;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk (a);
-- fail - column list "a" does not cover the REPLICA IDENTITY INDEX on "c"
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_pk (c);
-- ok - column list "c" does cover the REPLICA IDENTITY INDEX on "c"
UPDATE rf_tbl_abcd_pk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_nopk (a);
-- fail - column list "a" does not cover the REPLICA IDENTITY INDEX on "c"
UPDATE rf_tbl_abcd_nopk SET a = 1;
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_nopk (c);
-- ok - column list "c" does cover the REPLICA IDENTITY INDEX on "c"
UPDATE rf_tbl_abcd_nopk SET a = 1;

-- Tests for partitioned table

-- set PUBLISH_VIA_PARTITION_ROOT to false and test column list for partitioned
-- table
ALTER PUBLICATION testpub6 SET (PUBLISH_VIA_PARTITION_ROOT=0);
-- fail - cannot use column list for partitioned table
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_part_pk (a);
-- ok - can use column list for partition
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_part_pk_1 (a);
-- ok - "a" is a PK col
UPDATE rf_tbl_abcd_part_pk SET a = 1;
-- set PUBLISH_VIA_PARTITION_ROOT to true and test column list for partitioned
-- table
ALTER PUBLICATION testpub6 SET (PUBLISH_VIA_PARTITION_ROOT=1);
-- ok - can use column list for partitioned table
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_part_pk (a);
-- ok - "a" is a PK col
UPDATE rf_tbl_abcd_part_pk SET a = 1;
-- fail - cannot set PUBLISH_VIA_PARTITION_ROOT to false if any column list is
-- used for partitioned table
ALTER PUBLICATION testpub6 SET (PUBLISH_VIA_PARTITION_ROOT=0);
-- remove partitioned table's column list
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_part_pk;
-- ok - we don't have column list for partitioned table.
ALTER PUBLICATION testpub6 SET (PUBLISH_VIA_PARTITION_ROOT=0);
-- Now change the root column list to use a column "b"
-- (which is not in the replica identity)
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_part_pk_1 (b);
-- ok - we don't have column list for partitioned table.
ALTER PUBLICATION testpub6 SET (PUBLISH_VIA_PARTITION_ROOT=0);
-- fail - "b" is not in REPLICA IDENTITY INDEX
UPDATE rf_tbl_abcd_part_pk SET a = 1;
-- set PUBLISH_VIA_PARTITION_ROOT to true
-- can use column list for partitioned table
ALTER PUBLICATION testpub6 SET (PUBLISH_VIA_PARTITION_ROOT=1);
-- ok - can use column list for partitioned table
ALTER PUBLICATION testpub6 SET TABLE rf_tbl_abcd_part_pk (b);
-- fail - "b" is not in REPLICA IDENTITY INDEX
UPDATE rf_tbl_abcd_part_pk SET a = 1;

DROP PUBLICATION testpub6;
DROP TABLE rf_tbl_abcd_pk;
DROP TABLE rf_tbl_abcd_nopk;
DROP TABLE rf_tbl_abcd_part_pk;
-- ======================================================

-- Test cache invalidation FOR ALL TABLES publication
SET client_min_messages = 'ERROR';
CREATE TABLE testpub_tbl4(a int);
INSERT INTO testpub_tbl4 values(1);
UPDATE testpub_tbl4 set a = 2;
CREATE PUBLICATION testpub_foralltables FOR ALL TABLES;
RESET client_min_messages;
-- fail missing REPLICA IDENTITY
UPDATE testpub_tbl4 set a = 3;
DROP PUBLICATION testpub_foralltables;
-- should pass after dropping the publication
UPDATE testpub_tbl4 set a = 3;
DROP TABLE testpub_tbl4;

-- fail - view
CREATE PUBLICATION testpub_fortbl FOR TABLE testpub_view;

CREATE TEMPORARY TABLE testpub_temptbl(a int);
-- fail - temporary table
CREATE PUBLICATION testpub_fortemptbl FOR TABLE testpub_temptbl;
DROP TABLE testpub_temptbl;

CREATE UNLOGGED TABLE testpub_unloggedtbl(a int);
-- fail - unlogged table
CREATE PUBLICATION testpub_forunloggedtbl FOR TABLE testpub_unloggedtbl;
DROP TABLE testpub_unloggedtbl;

-- fail - system table
CREATE PUBLICATION testpub_forsystemtbl FOR TABLE pg_publication;

SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_fortbl FOR TABLE testpub_tbl1, pub_test.testpub_nopk;
RESET client_min_messages;
-- fail - already added
ALTER PUBLICATION testpub_fortbl ADD TABLE testpub_tbl1;
-- fail - already added
CREATE PUBLICATION testpub_fortbl FOR TABLE testpub_tbl1;

\dRp+ testpub_fortbl

-- fail - view
ALTER PUBLICATION testpub_default ADD TABLE testpub_view;

ALTER PUBLICATION testpub_default ADD TABLE testpub_tbl1;
ALTER PUBLICATION testpub_default SET TABLE testpub_tbl1;
ALTER PUBLICATION testpub_default ADD TABLE pub_test.testpub_nopk;

ALTER PUBLICATION testpib_ins_trunct ADD TABLE pub_test.testpub_nopk, testpub_tbl1;

\d+ pub_test.testpub_nopk
\d+ testpub_tbl1
\dRp+ testpub_default

ALTER PUBLICATION testpub_default DROP TABLE testpub_tbl1, pub_test.testpub_nopk;
-- fail - nonexistent
ALTER PUBLICATION testpub_default DROP TABLE pub_test.testpub_nopk;

\d+ testpub_tbl1

-- verify relation cache invalidation when a primary key is added using
-- an existing index
CREATE TABLE pub_test.testpub_addpk (id int not null, data int);
ALTER PUBLICATION testpub_default ADD TABLE pub_test.testpub_addpk;
INSERT INTO pub_test.testpub_addpk VALUES(1, 11);
CREATE UNIQUE INDEX testpub_addpk_id_idx ON pub_test.testpub_addpk(id);
-- fail:
UPDATE pub_test.testpub_addpk SET id = 2;
ALTER TABLE pub_test.testpub_addpk ADD PRIMARY KEY USING INDEX testpub_addpk_id_idx;
-- now it should work:
UPDATE pub_test.testpub_addpk SET id = 2;
DROP TABLE pub_test.testpub_addpk;

-- permissions
SET ROLE regress_publication_user2;
CREATE PUBLICATION testpub2;  -- fail

SET ROLE regress_publication_user;
GRANT CREATE ON DATABASE regression TO regress_publication_user2;
SET ROLE regress_publication_user2;
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub2;  -- ok
CREATE PUBLICATION testpub3 FOR ALL TABLES IN SCHEMA pub_test;  -- fail
CREATE PUBLICATION testpub3;  -- ok
RESET client_min_messages;

ALTER PUBLICATION testpub2 ADD TABLE testpub_tbl1;  -- fail
ALTER PUBLICATION testpub3 ADD ALL TABLES IN SCHEMA pub_test;  -- fail

SET ROLE regress_publication_user;
GRANT regress_publication_user TO regress_publication_user2;
SET ROLE regress_publication_user2;
ALTER PUBLICATION testpub2 ADD TABLE testpub_tbl1;  -- ok

DROP PUBLICATION testpub2;
DROP PUBLICATION testpub3;

SET ROLE regress_publication_user;
CREATE ROLE regress_publication_user3;
GRANT regress_publication_user2 TO regress_publication_user3;
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub4 FOR ALL TABLES IN SCHEMA pub_test;
RESET client_min_messages;
ALTER PUBLICATION testpub4 OWNER TO regress_publication_user3;
SET ROLE regress_publication_user3;
-- fail - new owner must be superuser
ALTER PUBLICATION testpub4 owner to regress_publication_user2; -- fail
ALTER PUBLICATION testpub4 owner to regress_publication_user; -- ok

SET ROLE regress_publication_user;
DROP PUBLICATION testpub4;
DROP ROLE regress_publication_user3;

REVOKE CREATE ON DATABASE regression FROM regress_publication_user2;

DROP TABLE testpub_parted;
DROP TABLE testpub_tbl1;

\dRp+ testpub_default

-- fail - must be owner of publication
SET ROLE regress_publication_user_dummy;
ALTER PUBLICATION testpub_default RENAME TO testpub_dummy;
RESET ROLE;

ALTER PUBLICATION testpub_default RENAME TO testpub_foo;

\dRp testpub_foo

-- rename back to keep the rest simple
ALTER PUBLICATION testpub_foo RENAME TO testpub_default;

ALTER PUBLICATION testpub_default OWNER TO regress_publication_user2;

\dRp testpub_default

-- adding schemas and tables
CREATE SCHEMA pub_test1;
CREATE SCHEMA pub_test2;
CREATE SCHEMA pub_test3;
CREATE SCHEMA "CURRENT_SCHEMA";
CREATE TABLE pub_test1.tbl (id int, data text);
CREATE TABLE pub_test1.tbl1 (id serial primary key, data text);
CREATE TABLE pub_test2.tbl1 (id serial primary key, data text);
CREATE TABLE "CURRENT_SCHEMA"."CURRENT_SCHEMA"(id int);

-- suppress warning that depends on wal_level
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub1_forschema FOR ALL TABLES IN SCHEMA pub_test1;
\dRp+ testpub1_forschema

CREATE PUBLICATION testpub2_forschema FOR ALL TABLES IN SCHEMA pub_test1, pub_test2, pub_test3;
\dRp+ testpub2_forschema

-- check create publication on CURRENT_SCHEMA
CREATE PUBLICATION testpub3_forschema FOR ALL TABLES IN SCHEMA CURRENT_SCHEMA;
CREATE PUBLICATION testpub4_forschema FOR ALL TABLES IN SCHEMA "CURRENT_SCHEMA";
CREATE PUBLICATION testpub5_forschema FOR ALL TABLES IN SCHEMA CURRENT_SCHEMA, "CURRENT_SCHEMA";
CREATE PUBLICATION testpub6_forschema FOR ALL TABLES IN SCHEMA "CURRENT_SCHEMA", CURRENT_SCHEMA;
CREATE PUBLICATION testpub_fortable FOR TABLE "CURRENT_SCHEMA"."CURRENT_SCHEMA";

RESET client_min_messages;

\dRp+ testpub3_forschema
\dRp+ testpub4_forschema
\dRp+ testpub5_forschema
\dRp+ testpub6_forschema
\dRp+ testpub_fortable

-- check create publication on CURRENT_SCHEMA where search_path is not set
SET SEARCH_PATH='';
CREATE PUBLICATION testpub_forschema FOR ALL TABLES IN SCHEMA CURRENT_SCHEMA;
RESET SEARCH_PATH;

-- check create publication on CURRENT_SCHEMA where TABLE/ALL TABLES in SCHEMA
-- is not specified
CREATE PUBLICATION testpub_forschema1 FOR CURRENT_SCHEMA;

-- check create publication on CURRENT_SCHEMA along with FOR TABLE
CREATE PUBLICATION testpub_forschema1 FOR TABLE CURRENT_SCHEMA;

-- check create publication on a schema that does not exist
CREATE PUBLICATION testpub_forschema FOR ALL TABLES IN SCHEMA non_existent_schema;

-- check create publication on a system schema
CREATE PUBLICATION testpub_forschema FOR ALL TABLES IN SCHEMA pg_catalog;

-- check create publication on an object which is not schema
CREATE PUBLICATION testpub1_forschema1 FOR ALL TABLES IN SCHEMA testpub_view;

-- dropping the schema should reflect the change in publication
DROP SCHEMA pub_test3;
\dRp+ testpub2_forschema

-- renaming the schema should reflect the change in publication
ALTER SCHEMA pub_test1 RENAME to pub_test1_renamed;
\dRp+ testpub2_forschema

ALTER SCHEMA pub_test1_renamed RENAME to pub_test1;
\dRp+ testpub2_forschema

-- alter publication add schema
ALTER PUBLICATION testpub1_forschema ADD ALL TABLES IN SCHEMA pub_test2;
\dRp+ testpub1_forschema

-- add non existent schema
ALTER PUBLICATION testpub1_forschema ADD ALL TABLES IN SCHEMA non_existent_schema;
\dRp+ testpub1_forschema

-- add a schema which is already added to the publication
ALTER PUBLICATION testpub1_forschema ADD ALL TABLES IN SCHEMA pub_test1;
\dRp+ testpub1_forschema

-- alter publication drop schema
ALTER PUBLICATION testpub1_forschema DROP ALL TABLES IN SCHEMA pub_test2;
\dRp+ testpub1_forschema

-- drop schema that is not present in the publication
ALTER PUBLICATION testpub1_forschema DROP ALL TABLES IN SCHEMA pub_test2;
\dRp+ testpub1_forschema

-- drop a schema that does not exist in the system
ALTER PUBLICATION testpub1_forschema DROP ALL TABLES IN SCHEMA non_existent_schema;
\dRp+ testpub1_forschema

-- drop all schemas
ALTER PUBLICATION testpub1_forschema DROP ALL TABLES IN SCHEMA pub_test1;
\dRp+ testpub1_forschema

-- alter publication set multiple schema
ALTER PUBLICATION testpub1_forschema SET ALL TABLES IN SCHEMA pub_test1, pub_test2;
\dRp+ testpub1_forschema

-- alter publication set non-existent schema
ALTER PUBLICATION testpub1_forschema SET ALL TABLES IN SCHEMA non_existent_schema;
\dRp+ testpub1_forschema

-- alter publication set it duplicate schemas should set the schemas after
-- removing the duplicate schemas
ALTER PUBLICATION testpub1_forschema SET ALL TABLES IN SCHEMA pub_test1, pub_test1;
\dRp+ testpub1_forschema

-- Verify that it fails to add a schema with a column specification
ALTER PUBLICATION testpub1_forschema ADD ALL TABLES IN SCHEMA foo (a, b);
ALTER PUBLICATION testpub1_forschema ADD ALL TABLES IN SCHEMA foo, bar (a, b);

-- cleanup pub_test1 schema for invalidation tests
ALTER PUBLICATION testpub2_forschema DROP ALL TABLES IN SCHEMA pub_test1;
DROP PUBLICATION testpub3_forschema, testpub4_forschema, testpub5_forschema, testpub6_forschema, testpub_fortable;
DROP SCHEMA "CURRENT_SCHEMA" CASCADE;

-- verify relation cache invalidations through update statement for the
-- default REPLICA IDENTITY on the relation, if schema is part of the
-- publication then update will fail because relation's relreplident
-- option will be set, if schema is not part of the publication then update
-- will be successful.
INSERT INTO pub_test1.tbl VALUES(1, 'test');

-- fail
UPDATE pub_test1.tbl SET id = 2;
ALTER PUBLICATION testpub1_forschema DROP ALL TABLES IN SCHEMA pub_test1;

-- success
UPDATE pub_test1.tbl SET id = 2;
ALTER PUBLICATION testpub1_forschema SET ALL TABLES IN SCHEMA pub_test1;

-- fail
UPDATE pub_test1.tbl SET id = 2;

-- verify invalidation of partition table having parent and child tables in
-- different schema
CREATE SCHEMA pub_testpart1;
CREATE SCHEMA pub_testpart2;

CREATE TABLE pub_testpart1.parent1 (a int) partition by list (a);
CREATE TABLE pub_testpart2.child_parent1 partition of pub_testpart1.parent1 for values in (1);
INSERT INTO pub_testpart2.child_parent1 values(1);
UPDATE pub_testpart2.child_parent1 set a = 1;
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpubpart_forschema FOR ALL TABLES IN SCHEMA pub_testpart1;
RESET client_min_messages;

-- fail
UPDATE pub_testpart1.parent1 set a = 1;
UPDATE pub_testpart2.child_parent1 set a = 1;

DROP PUBLICATION testpubpart_forschema;

-- verify invalidation of partition tables for schema publication that has
-- parent and child tables of different partition hierarchies
CREATE TABLE pub_testpart2.parent2 (a int) partition by list (a);
CREATE TABLE pub_testpart1.child_parent2 partition of pub_testpart2.parent2 for values in (1);
INSERT INTO pub_testpart1.child_parent2 values(1);
UPDATE pub_testpart1.child_parent2 set a = 1;
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpubpart_forschema FOR ALL TABLES IN SCHEMA pub_testpart2;
RESET client_min_messages;

-- fail
UPDATE pub_testpart2.child_parent1 set a = 1;
UPDATE pub_testpart2.parent2 set a = 1;
UPDATE pub_testpart1.child_parent2 set a = 1;

-- alter publication set 'ALL TABLES IN SCHEMA' on an empty publication.
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub3_forschema;
RESET client_min_messages;
\dRp+ testpub3_forschema
ALTER PUBLICATION testpub3_forschema SET ALL TABLES IN SCHEMA pub_test1;
\dRp+ testpub3_forschema

-- create publication including both 'FOR TABLE' and 'FOR ALL TABLES IN SCHEMA'
SET client_min_messages = 'ERROR';
CREATE PUBLICATION testpub_forschema_fortable FOR ALL TABLES IN SCHEMA pub_test1, TABLE pub_test2.tbl1;
CREATE PUBLICATION testpub_fortable_forschema FOR TABLE pub_test2.tbl1, ALL TABLES IN SCHEMA pub_test1;
RESET client_min_messages;

\dRp+ testpub_forschema_fortable
\dRp+ testpub_fortable_forschema

-- fail specifying table without any of 'FOR ALL TABLES IN SCHEMA' or
--'FOR TABLE' or 'FOR ALL TABLES'
CREATE PUBLICATION testpub_error FOR pub_test2.tbl1;

DROP VIEW testpub_view;

DROP PUBLICATION testpub_default;
DROP PUBLICATION testpib_ins_trunct;
DROP PUBLICATION testpub_fortbl;
DROP PUBLICATION testpub1_forschema;
DROP PUBLICATION testpub2_forschema;
DROP PUBLICATION testpub3_forschema;
DROP PUBLICATION testpub_forschema_fortable;
DROP PUBLICATION testpub_fortable_forschema;
DROP PUBLICATION testpubpart_forschema;

DROP SCHEMA pub_test CASCADE;
DROP SCHEMA pub_test1 CASCADE;
DROP SCHEMA pub_test2 CASCADE;
DROP SCHEMA pub_testpart1 CASCADE;
DROP SCHEMA pub_testpart2 CASCADE;

-- Test the list of partitions published with or without
-- 'PUBLISH_VIA_PARTITION_ROOT' parameter
SET client_min_messages = 'ERROR';
CREATE SCHEMA sch1;
CREATE SCHEMA sch2;
CREATE TABLE sch1.tbl1 (a int) PARTITION BY RANGE(a);
CREATE TABLE sch2.tbl1_part1 PARTITION OF sch1.tbl1 FOR VALUES FROM (1) to (10);
-- Schema publication that does not include the schema that has the parent table
CREATE PUBLICATION pub FOR ALL TABLES IN SCHEMA sch2 WITH (PUBLISH_VIA_PARTITION_ROOT=1);
SELECT * FROM pg_publication_tables;

DROP PUBLICATION pub;
-- Table publication that does not include the parent table
CREATE PUBLICATION pub FOR TABLE sch2.tbl1_part1 WITH (PUBLISH_VIA_PARTITION_ROOT=1);
SELECT * FROM pg_publication_tables;

-- Table publication that includes both the parent table and the child table
ALTER PUBLICATION pub ADD TABLE sch1.tbl1;
SELECT * FROM pg_publication_tables;

DROP PUBLICATION pub;
-- Schema publication that does not include the schema that has the parent table
CREATE PUBLICATION pub FOR ALL TABLES IN SCHEMA sch2 WITH (PUBLISH_VIA_PARTITION_ROOT=0);
SELECT * FROM pg_publication_tables;

DROP PUBLICATION pub;
-- Table publication that does not include the parent table
CREATE PUBLICATION pub FOR TABLE sch2.tbl1_part1 WITH (PUBLISH_VIA_PARTITION_ROOT=0);
SELECT * FROM pg_publication_tables;

-- Table publication that includes both the parent table and the child table
ALTER PUBLICATION pub ADD TABLE sch1.tbl1;
SELECT * FROM pg_publication_tables;

DROP PUBLICATION pub;
DROP TABLE sch2.tbl1_part1;
DROP TABLE sch1.tbl1;

CREATE TABLE sch1.tbl1 (a int) PARTITION BY RANGE(a);
CREATE TABLE sch1.tbl1_part1 PARTITION OF sch1.tbl1 FOR VALUES FROM (1) to (10);
CREATE TABLE sch1.tbl1_part2 PARTITION OF sch1.tbl1 FOR VALUES FROM (10) to (20);
CREATE TABLE sch1.tbl1_part3 (a int) PARTITION BY RANGE(a);
ALTER TABLE sch1.tbl1 ATTACH PARTITION sch1.tbl1_part3 FOR VALUES FROM (20) to (30);
CREATE PUBLICATION pub FOR ALL TABLES IN SCHEMA sch1 WITH (PUBLISH_VIA_PARTITION_ROOT=1);
SELECT * FROM pg_publication_tables;

RESET client_min_messages;
DROP PUBLICATION pub;
DROP TABLE sch1.tbl1;
DROP SCHEMA sch1 cascade;
DROP SCHEMA sch2 cascade;

RESET SESSION AUTHORIZATION;
DROP ROLE regress_publication_user, regress_publication_user2;
DROP ROLE regress_publication_user_dummy;
