-- relative tablespace locations are not allowed
CREATE TABLESPACE regress_tblspace LOCATION 'relative'; -- fail

-- empty tablespace locations are not usually allowed
CREATE TABLESPACE regress_tblspace LOCATION ''; -- fail

-- as a special developer-only option to allow us to use tablespaces
-- with streaming replication on the same server, an empty location
-- can be allowed as a way to say that the tablespace should be created
-- as a directory in pg_tblspc, rather than being a symlink
SET allow_in_place_tablespaces = true;

-- create a tablespace using WITH clause
CREATE TABLESPACE regress_tblspacewith LOCATION '' WITH (some_nonexistent_parameter = true); -- fail
CREATE TABLESPACE regress_tblspacewith LOCATION '' WITH (random_page_cost = 3.0); -- ok

-- check to see the parameter was used
SELECT spcoptions FROM pg_tablespace WHERE spcname = 'regress_tblspacewith';

-- drop the tablespace so we can re-use the location
DROP TABLESPACE regress_tblspacewith;

-- create a tablespace we can use
CREATE TABLESPACE regress_tblspace LOCATION '';
-- This returns a relative path as of an effect of allow_in_place_tablespaces,
-- masking the tablespace OID used in the path name.
SELECT regexp_replace(pg_tablespace_location(oid), '(pg_tblspc)/(\d+)', '\1/NNN')
  FROM pg_tablespace  WHERE spcname = 'regress_tblspace';

-- try setting and resetting some properties for the new tablespace
ALTER TABLESPACE regress_tblspace SET (random_page_cost = 1.0, seq_page_cost = 1.1);
ALTER TABLESPACE regress_tblspace SET (some_nonexistent_parameter = true);  -- fail
ALTER TABLESPACE regress_tblspace RESET (random_page_cost = 2.0); -- fail
ALTER TABLESPACE regress_tblspace RESET (random_page_cost, effective_io_concurrency); -- ok

-- REINDEX (TABLESPACE)
-- catalogs and system tablespaces
-- system catalog, fail
REINDEX (TABLESPACE regress_tblspace) TABLE pg_am;
REINDEX (TABLESPACE regress_tblspace) TABLE CONCURRENTLY pg_am;
-- shared catalog, fail
REINDEX (TABLESPACE regress_tblspace) TABLE pg_authid;
REINDEX (TABLESPACE regress_tblspace) TABLE CONCURRENTLY pg_authid;
-- toast relations, fail
REINDEX (TABLESPACE regress_tblspace) INDEX pg_toast.pg_toast_1260_index;
REINDEX (TABLESPACE regress_tblspace) INDEX CONCURRENTLY pg_toast.pg_toast_1260_index;
REINDEX (TABLESPACE regress_tblspace) TABLE pg_toast.pg_toast_1260;
REINDEX (TABLESPACE regress_tblspace) TABLE CONCURRENTLY pg_toast.pg_toast_1260;
-- system catalog, fail
REINDEX (TABLESPACE pg_global) TABLE pg_authid;
REINDEX (TABLESPACE pg_global) TABLE CONCURRENTLY pg_authid;

-- table with toast relation
CREATE TABLE regress_tblspace_test_tbl (num1 bigint, num2 double precision, t text);
INSERT INTO regress_tblspace_test_tbl (num1, num2, t)
  SELECT round(random()*100), random(), 'text'
  FROM generate_series(1, 10) s(i);
CREATE INDEX regress_tblspace_test_tbl_idx ON regress_tblspace_test_tbl (num1);
-- move to global tablespace, fail
REINDEX (TABLESPACE pg_global) INDEX regress_tblspace_test_tbl_idx;
REINDEX (TABLESPACE pg_global) INDEX CONCURRENTLY regress_tblspace_test_tbl_idx;

-- check transactional behavior of REINDEX (TABLESPACE)
BEGIN;
REINDEX (TABLESPACE regress_tblspace) INDEX regress_tblspace_test_tbl_idx;
REINDEX (TABLESPACE regress_tblspace) TABLE regress_tblspace_test_tbl;
ROLLBACK;
-- no relation moved to the new tablespace
SELECT c.relname FROM pg_class c, pg_tablespace s
  WHERE c.reltablespace = s.oid AND s.spcname = 'regress_tblspace';

-- check that all indexes are moved to a new tablespace with different
-- relfilenode.
-- Save first the existing relfilenode for the toast and main relations.
SELECT relfilenode as main_filenode FROM pg_class
  WHERE relname = 'regress_tblspace_test_tbl_idx' \gset
SELECT relfilenode as toast_filenode FROM pg_class
  WHERE oid =
    (SELECT i.indexrelid
       FROM pg_class c,
            pg_index i
       WHERE i.indrelid = c.reltoastrelid AND
             c.relname = 'regress_tblspace_test_tbl') \gset
REINDEX (TABLESPACE regress_tblspace) TABLE regress_tblspace_test_tbl;
SELECT c.relname FROM pg_class c, pg_tablespace s
  WHERE c.reltablespace = s.oid AND s.spcname = 'regress_tblspace'
  ORDER BY c.relname;
ALTER TABLE regress_tblspace_test_tbl SET TABLESPACE regress_tblspace;
ALTER TABLE regress_tblspace_test_tbl SET TABLESPACE pg_default;
SELECT c.relname FROM pg_class c, pg_tablespace s
  WHERE c.reltablespace = s.oid AND s.spcname = 'regress_tblspace'
  ORDER BY c.relname;
-- Move back to the default tablespace.
ALTER INDEX regress_tblspace_test_tbl_idx SET TABLESPACE pg_default;
SELECT c.relname FROM pg_class c, pg_tablespace s
  WHERE c.reltablespace = s.oid AND s.spcname = 'regress_tblspace'
  ORDER BY c.relname;
REINDEX (TABLESPACE regress_tblspace, CONCURRENTLY) TABLE regress_tblspace_test_tbl;
SELECT c.relname FROM pg_class c, pg_tablespace s
  WHERE c.reltablespace = s.oid AND s.spcname = 'regress_tblspace'
  ORDER BY c.relname;
SELECT relfilenode = :main_filenode AS main_same FROM pg_class
  WHERE relname = 'regress_tblspace_test_tbl_idx';
SELECT relfilenode = :toast_filenode as toast_same FROM pg_class
  WHERE oid =
    (SELECT i.indexrelid
       FROM pg_class c,
            pg_index i
       WHERE i.indrelid = c.reltoastrelid AND
             c.relname = 'regress_tblspace_test_tbl');
DROP TABLE regress_tblspace_test_tbl;

-- REINDEX (TABLESPACE) with partitions
-- Create a partition tree and check the set of relations reindexed
-- with their new tablespace.
CREATE TABLE tbspace_reindex_part (c1 int, c2 int) PARTITION BY RANGE (c1);
CREATE TABLE tbspace_reindex_part_0 PARTITION OF tbspace_reindex_part
  FOR VALUES FROM (0) TO (10) PARTITION BY list (c2);
CREATE TABLE tbspace_reindex_part_0_1 PARTITION OF tbspace_reindex_part_0
  FOR VALUES IN (1);
CREATE TABLE tbspace_reindex_part_0_2 PARTITION OF tbspace_reindex_part_0
  FOR VALUES IN (2);
-- This partitioned table will have no partitions.
CREATE TABLE tbspace_reindex_part_10 PARTITION OF tbspace_reindex_part
   FOR VALUES FROM (10) TO (20) PARTITION BY list (c2);
-- Create some partitioned indexes
CREATE INDEX tbspace_reindex_part_index ON ONLY tbspace_reindex_part (c1);
CREATE INDEX tbspace_reindex_part_index_0 ON ONLY tbspace_reindex_part_0 (c1);
ALTER INDEX tbspace_reindex_part_index ATTACH PARTITION tbspace_reindex_part_index_0;
-- This partitioned index will have no partitions.
CREATE INDEX tbspace_reindex_part_index_10 ON ONLY tbspace_reindex_part_10 (c1);
ALTER INDEX tbspace_reindex_part_index ATTACH PARTITION tbspace_reindex_part_index_10;
CREATE INDEX tbspace_reindex_part_index_0_1 ON ONLY tbspace_reindex_part_0_1 (c1);
ALTER INDEX tbspace_reindex_part_index_0 ATTACH PARTITION tbspace_reindex_part_index_0_1;
CREATE INDEX tbspace_reindex_part_index_0_2 ON ONLY tbspace_reindex_part_0_2 (c1);
ALTER INDEX tbspace_reindex_part_index_0 ATTACH PARTITION tbspace_reindex_part_index_0_2;
SELECT relid, parentrelid, level FROM pg_partition_tree('tbspace_reindex_part_index')
  ORDER BY relid, level;
-- Track the original tablespace, relfilenode and OID of each index
-- in the tree.
CREATE TEMP TABLE reindex_temp_before AS
  SELECT oid, relname, relfilenode, reltablespace
  FROM pg_class
    WHERE relname ~ 'tbspace_reindex_part_index';
REINDEX (TABLESPACE regress_tblspace, CONCURRENTLY) TABLE tbspace_reindex_part;
-- REINDEX CONCURRENTLY changes the OID of the old relation, hence a check
-- based on the relation name below.
SELECT b.relname,
       CASE WHEN a.relfilenode = b.relfilenode THEN 'relfilenode is unchanged'
       ELSE 'relfilenode has changed' END AS filenode,
       CASE WHEN a.reltablespace = b.reltablespace THEN 'reltablespace is unchanged'
       ELSE 'reltablespace has changed' END AS tbspace
  FROM reindex_temp_before b JOIN pg_class a ON b.relname = a.relname
  ORDER BY 1;
DROP TABLE tbspace_reindex_part;

-- create a schema we can use
CREATE SCHEMA testschema;

-- try a table
CREATE TABLE testschema.foo (i int) TABLESPACE regress_tblspace;
SELECT relname, spcname FROM pg_catalog.pg_tablespace t, pg_catalog.pg_class c
    where c.reltablespace = t.oid AND c.relname = 'foo';

INSERT INTO testschema.foo VALUES(1);
INSERT INTO testschema.foo VALUES(2);

-- tables from dynamic sources
CREATE TABLE testschema.asselect TABLESPACE regress_tblspace AS SELECT 1;
SELECT relname, spcname FROM pg_catalog.pg_tablespace t, pg_catalog.pg_class c
    where c.reltablespace = t.oid AND c.relname = 'asselect';

PREPARE selectsource(int) AS SELECT $1;
CREATE TABLE testschema.asexecute TABLESPACE regress_tblspace
    AS EXECUTE selectsource(2);
SELECT relname, spcname FROM pg_catalog.pg_tablespace t, pg_catalog.pg_class c
    where c.reltablespace = t.oid AND c.relname = 'asexecute';

-- index
CREATE INDEX foo_idx on testschema.foo(i) TABLESPACE regress_tblspace;
SELECT relname, spcname FROM pg_catalog.pg_tablespace t, pg_catalog.pg_class c
    where c.reltablespace = t.oid AND c.relname = 'foo_idx';

-- check \d output
\d testschema.foo
\d testschema.foo_idx

--
-- partitioned table
--
CREATE TABLE testschema.part (a int) PARTITION BY LIST (a);
SET default_tablespace TO pg_global;
CREATE TABLE testschema.part_1 PARTITION OF testschema.part FOR VALUES IN (1);
RESET default_tablespace;
CREATE TABLE testschema.part_1 PARTITION OF testschema.part FOR VALUES IN (1);
SET default_tablespace TO regress_tblspace;
CREATE TABLE testschema.part_2 PARTITION OF testschema.part FOR VALUES IN (2);
SET default_tablespace TO pg_global;
CREATE TABLE testschema.part_3 PARTITION OF testschema.part FOR VALUES IN (3);
ALTER TABLE testschema.part SET TABLESPACE regress_tblspace;
CREATE TABLE testschema.part_3 PARTITION OF testschema.part FOR VALUES IN (3);
CREATE TABLE testschema.part_4 PARTITION OF testschema.part FOR VALUES IN (4)
  TABLESPACE pg_default;
CREATE TABLE testschema.part_56 PARTITION OF testschema.part FOR VALUES IN (5, 6)
  PARTITION BY LIST (a);
ALTER TABLE testschema.part SET TABLESPACE pg_default;
CREATE TABLE testschema.part_78 PARTITION OF testschema.part FOR VALUES IN (7, 8)
  PARTITION BY LIST (a);
CREATE TABLE testschema.part_910 PARTITION OF testschema.part FOR VALUES IN (9, 10)
  PARTITION BY LIST (a) TABLESPACE regress_tblspace;
RESET default_tablespace;
CREATE TABLE testschema.part_78 PARTITION OF testschema.part FOR VALUES IN (7, 8)
  PARTITION BY LIST (a);

SELECT relname, spcname FROM pg_catalog.pg_class c
    JOIN pg_catalog.pg_namespace n ON (c.relnamespace = n.oid)
    LEFT JOIN pg_catalog.pg_tablespace t ON c.reltablespace = t.oid
    where c.relname LIKE 'part%' AND n.nspname = 'testschema' order by relname;
RESET default_tablespace;
DROP TABLE testschema.part;

-- partitioned index
CREATE TABLE testschema.part (a int) PARTITION BY LIST (a);
CREATE TABLE testschema.part1 PARTITION OF testschema.part FOR VALUES IN (1);
CREATE INDEX part_a_idx ON testschema.part (a) TABLESPACE regress_tblspace;
CREATE TABLE testschema.part2 PARTITION OF testschema.part FOR VALUES IN (2);
SELECT relname, spcname FROM pg_catalog.pg_tablespace t, pg_catalog.pg_class c
    where c.reltablespace = t.oid AND c.relname LIKE 'part%_idx';
\d testschema.part
\d+ testschema.part
\d testschema.part1
\d+ testschema.part1
\d testschema.part_a_idx
\d+ testschema.part_a_idx

-- partitioned rels cannot specify the default tablespace.  These fail:
CREATE TABLE testschema.dflt (a int PRIMARY KEY) PARTITION BY LIST (a) TABLESPACE pg_default;
CREATE TABLE testschema.dflt (a int PRIMARY KEY USING INDEX TABLESPACE pg_default) PARTITION BY LIST (a);
SET default_tablespace TO 'pg_default';
CREATE TABLE testschema.dflt (a int PRIMARY KEY) PARTITION BY LIST (a) TABLESPACE regress_tblspace;
CREATE TABLE testschema.dflt (a int PRIMARY KEY USING INDEX TABLESPACE regress_tblspace) PARTITION BY LIST (a);
-- but these work:
CREATE TABLE testschema.dflt (a int PRIMARY KEY USING INDEX TABLESPACE regress_tblspace) PARTITION BY LIST (a) TABLESPACE regress_tblspace;
SET default_tablespace TO '';
CREATE TABLE testschema.dflt2 (a int PRIMARY KEY) PARTITION BY LIST (a);
DROP TABLE testschema.dflt, testschema.dflt2;

-- check that default_tablespace doesn't affect ALTER TABLE index rebuilds
CREATE TABLE testschema.test_default_tab(id bigint) TABLESPACE regress_tblspace;
INSERT INTO testschema.test_default_tab VALUES (1);
CREATE INDEX test_index1 on testschema.test_default_tab (id);
CREATE INDEX test_index2 on testschema.test_default_tab (id) TABLESPACE regress_tblspace;
ALTER TABLE testschema.test_default_tab ADD CONSTRAINT test_index3 PRIMARY KEY (id);
ALTER TABLE testschema.test_default_tab ADD CONSTRAINT test_index4 UNIQUE (id) USING INDEX TABLESPACE regress_tblspace;

\d testschema.test_index1
\d testschema.test_index2
\d testschema.test_index3
\d testschema.test_index4
-- use a custom tablespace for default_tablespace
SET default_tablespace TO regress_tblspace;
-- tablespace should not change if no rewrite
ALTER TABLE testschema.test_default_tab ALTER id TYPE bigint;
\d testschema.test_index1
\d testschema.test_index2
\d testschema.test_index3
\d testschema.test_index4
SELECT * FROM testschema.test_default_tab;
-- tablespace should not change even if there is an index rewrite
ALTER TABLE testschema.test_default_tab ALTER id TYPE int;
\d testschema.test_index1
\d testschema.test_index2
\d testschema.test_index3
\d testschema.test_index4
SELECT * FROM testschema.test_default_tab;
-- now use the default tablespace for default_tablespace
SET default_tablespace TO '';
-- tablespace should not change if no rewrite
ALTER TABLE testschema.test_default_tab ALTER id TYPE int;
\d testschema.test_index1
\d testschema.test_index2
\d testschema.test_index3
\d testschema.test_index4
-- tablespace should not change even if there is an index rewrite
ALTER TABLE testschema.test_default_tab ALTER id TYPE bigint;
\d testschema.test_index1
\d testschema.test_index2
\d testschema.test_index3
\d testschema.test_index4
DROP TABLE testschema.test_default_tab;

-- check that default_tablespace doesn't affect ALTER TABLE index rebuilds
-- (this time with a partitioned table)
CREATE TABLE testschema.test_default_tab_p(id bigint, val bigint)
    PARTITION BY LIST (id) TABLESPACE regress_tblspace;
CREATE TABLE testschema.test_default_tab_p1 PARTITION OF testschema.test_default_tab_p
    FOR VALUES IN (1);
INSERT INTO testschema.test_default_tab_p VALUES (1);
CREATE INDEX test_index1 on testschema.test_default_tab_p (val);
CREATE INDEX test_index2 on testschema.test_default_tab_p (val) TABLESPACE regress_tblspace;
ALTER TABLE testschema.test_default_tab_p ADD CONSTRAINT test_index3 PRIMARY KEY (id);
ALTER TABLE testschema.test_default_tab_p ADD CONSTRAINT test_index4 UNIQUE (id) USING INDEX TABLESPACE regress_tblspace;

\d testschema.test_index1
\d testschema.test_index2
\d testschema.test_index3
\d testschema.test_index4
-- use a custom tablespace for default_tablespace
SET default_tablespace TO regress_tblspace;
-- tablespace should not change if no rewrite
ALTER TABLE testschema.test_default_tab_p ALTER val TYPE bigint;
\d testschema.test_index1
\d testschema.test_index2
\d testschema.test_index3
\d testschema.test_index4
SELECT * FROM testschema.test_default_tab_p;
-- tablespace should not change even if there is an index rewrite
ALTER TABLE testschema.test_default_tab_p ALTER val TYPE int;
\d testschema.test_index1
\d testschema.test_index2
\d testschema.test_index3
\d testschema.test_index4
SELECT * FROM testschema.test_default_tab_p;
-- now use the default tablespace for default_tablespace
SET default_tablespace TO '';
-- tablespace should not change if no rewrite
ALTER TABLE testschema.test_default_tab_p ALTER val TYPE int;
\d testschema.test_index1
\d testschema.test_index2
\d testschema.test_index3
\d testschema.test_index4
-- tablespace should not change even if there is an index rewrite
ALTER TABLE testschema.test_default_tab_p ALTER val TYPE bigint;
\d testschema.test_index1
\d testschema.test_index2
\d testschema.test_index3
\d testschema.test_index4
DROP TABLE testschema.test_default_tab_p;

-- check that default_tablespace affects index additions in ALTER TABLE
CREATE TABLE testschema.test_tab(id int) TABLESPACE regress_tblspace;
INSERT INTO testschema.test_tab VALUES (1);
SET default_tablespace TO regress_tblspace;
ALTER TABLE testschema.test_tab ADD CONSTRAINT test_tab_unique UNIQUE (id);
SET default_tablespace TO '';
ALTER TABLE testschema.test_tab ADD CONSTRAINT test_tab_pkey PRIMARY KEY (id);
\d testschema.test_tab_unique
\d testschema.test_tab_pkey
SELECT * FROM testschema.test_tab;
DROP TABLE testschema.test_tab;

-- check that default_tablespace is handled correctly by multi-command
-- ALTER TABLE that includes a tablespace-preserving rewrite
CREATE TABLE testschema.test_tab(a int, b int, c int);
SET default_tablespace TO regress_tblspace;
ALTER TABLE testschema.test_tab ADD CONSTRAINT test_tab_unique UNIQUE (a);
CREATE INDEX test_tab_a_idx ON testschema.test_tab (a);
SET default_tablespace TO '';
CREATE INDEX test_tab_b_idx ON testschema.test_tab (b);
\d testschema.test_tab_unique
\d testschema.test_tab_a_idx
\d testschema.test_tab_b_idx
ALTER TABLE testschema.test_tab ALTER b TYPE bigint, ADD UNIQUE (c);
\d testschema.test_tab_unique
\d testschema.test_tab_a_idx
\d testschema.test_tab_b_idx
DROP TABLE testschema.test_tab;

-- let's try moving a table from one place to another
CREATE TABLE testschema.atable AS VALUES (1), (2);
CREATE UNIQUE INDEX anindex ON testschema.atable(column1);

ALTER TABLE testschema.atable SET TABLESPACE regress_tblspace;
ALTER INDEX testschema.anindex SET TABLESPACE regress_tblspace;
ALTER INDEX testschema.part_a_idx SET TABLESPACE pg_global;
ALTER INDEX testschema.part_a_idx SET TABLESPACE pg_default;
ALTER INDEX testschema.part_a_idx SET TABLESPACE regress_tblspace;

INSERT INTO testschema.atable VALUES(3);	-- ok
INSERT INTO testschema.atable VALUES(1);	-- fail (checks index)
SELECT COUNT(*) FROM testschema.atable;		-- checks heap

-- let's try moving a materialized view from one place to another
CREATE MATERIALIZED VIEW testschema.amv AS SELECT * FROM testschema.atable;
ALTER MATERIALIZED VIEW testschema.amv SET TABLESPACE regress_tblspace;
REFRESH MATERIALIZED VIEW testschema.amv;
SELECT COUNT(*) FROM testschema.amv;

-- Will fail with bad path
CREATE TABLESPACE regress_badspace LOCATION '/no/such/location';

-- No such tablespace
CREATE TABLE bar (i int) TABLESPACE regress_nosuchspace;

-- Fail, in use for some partitioned object
DROP TABLESPACE regress_tblspace;
ALTER INDEX testschema.part_a_idx SET TABLESPACE pg_default;
-- Fail, not empty
DROP TABLESPACE regress_tblspace;

CREATE ROLE regress_tablespace_user1 login;
CREATE ROLE regress_tablespace_user2 login;
GRANT USAGE ON SCHEMA testschema TO regress_tablespace_user2;

ALTER TABLESPACE regress_tblspace OWNER TO regress_tablespace_user1;

CREATE TABLE testschema.tablespace_acl (c int);
-- new owner lacks permission to create this index from scratch
CREATE INDEX k ON testschema.tablespace_acl (c) TABLESPACE regress_tblspace;
ALTER TABLE testschema.tablespace_acl OWNER TO regress_tablespace_user2;

SET SESSION ROLE regress_tablespace_user2;
CREATE TABLE tablespace_table (i int) TABLESPACE regress_tblspace; -- fail
ALTER TABLE testschema.tablespace_acl ALTER c TYPE bigint;
REINDEX (TABLESPACE regress_tblspace) TABLE tablespace_table; -- fail
REINDEX (TABLESPACE regress_tblspace, CONCURRENTLY) TABLE tablespace_table; -- fail
RESET ROLE;

ALTER TABLESPACE regress_tblspace RENAME TO regress_tblspace_renamed;

ALTER TABLE ALL IN TABLESPACE regress_tblspace_renamed SET TABLESPACE pg_default;
ALTER INDEX ALL IN TABLESPACE regress_tblspace_renamed SET TABLESPACE pg_default;
ALTER MATERIALIZED VIEW ALL IN TABLESPACE regress_tblspace_renamed SET TABLESPACE pg_default;

-- Should show notice that nothing was done
ALTER TABLE ALL IN TABLESPACE regress_tblspace_renamed SET TABLESPACE pg_default;
ALTER MATERIALIZED VIEW ALL IN TABLESPACE regress_tblspace_renamed SET TABLESPACE pg_default;

-- Should succeed
DROP TABLESPACE regress_tblspace_renamed;

DROP SCHEMA testschema CASCADE;

DROP ROLE regress_tablespace_user1;
DROP ROLE regress_tablespace_user2;
