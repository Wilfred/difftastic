-- predictability
SET synchronous_commit = on;

DROP TABLE IF EXISTS replication_example;

-- Ensure there's tables with toast datums.  To do so, we dynamically
-- create a function returning a large textblob.  We want tables of
-- different kinds: mapped catalog table, unmapped catalog table,
-- shared catalog table and usertable.
CREATE FUNCTION exec(text) returns void language plpgsql volatile
  AS $f$
    BEGIN
      EXECUTE $1;
    END;
$f$;
CREATE ROLE regress_justforcomments NOLOGIN;

SELECT exec(
    format($outer$CREATE FUNCTION iamalongfunction() RETURNS TEXT IMMUTABLE LANGUAGE SQL AS $f$SELECT text %L$f$$outer$,
           (SELECT repeat(string_agg(to_char(g.i, 'FM0000'), ''), 50) FROM generate_series(1, 500) g(i))));
SELECT exec(
    format($outer$COMMENT ON FUNCTION iamalongfunction() IS %L$outer$,
           iamalongfunction()));
SELECT exec(
    format($outer$COMMENT ON ROLE REGRESS_JUSTFORCOMMENTS IS %L$outer$,
           iamalongfunction()));
CREATE TABLE iamalargetable AS SELECT iamalongfunction() longfunctionoutput;

-- verify toast usage
SELECT pg_relation_size((SELECT reltoastrelid FROM pg_class WHERE oid = 'pg_proc'::regclass)) > 0;
SELECT pg_relation_size((SELECT reltoastrelid FROM pg_class WHERE oid = 'pg_description'::regclass)) > 0;
SELECT pg_relation_size((SELECT reltoastrelid FROM pg_class WHERE oid = 'pg_shdescription'::regclass)) > 0;


SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot', 'test_decoding');
CREATE TABLE replication_example(id SERIAL PRIMARY KEY, somedata int, text varchar(120));
INSERT INTO replication_example(somedata) VALUES (1);
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

BEGIN;
INSERT INTO replication_example(somedata) VALUES (2);
ALTER TABLE replication_example ADD COLUMN testcolumn1 int;
INSERT INTO replication_example(somedata, testcolumn1) VALUES (3,  1);
COMMIT;

BEGIN;
INSERT INTO replication_example(somedata) VALUES (3);
ALTER TABLE replication_example ADD COLUMN testcolumn2 int;
INSERT INTO replication_example(somedata, testcolumn1, testcolumn2) VALUES (4,  2, 1);
COMMIT;

VACUUM FULL pg_am;
VACUUM FULL pg_amop;
VACUUM FULL pg_proc;
VACUUM FULL pg_opclass;
VACUUM FULL pg_type;
VACUUM FULL pg_index;
VACUUM FULL pg_database;

-- repeated rewrites that fail
BEGIN;
CLUSTER pg_class USING pg_class_oid_index;
CLUSTER pg_class USING pg_class_oid_index;
ROLLBACK;

-- repeated rewrites that succeed
BEGIN;
CLUSTER pg_class USING pg_class_oid_index;
CLUSTER pg_class USING pg_class_oid_index;
CLUSTER pg_class USING pg_class_oid_index;
COMMIT;

 -- repeated rewrites in different transactions
VACUUM FULL pg_class;
VACUUM FULL pg_class;

-- reindexing of important relations / indexes
REINDEX TABLE pg_class;
REINDEX INDEX pg_class_oid_index;
REINDEX INDEX pg_class_tblspc_relfilenode_index;

INSERT INTO replication_example(somedata, testcolumn1) VALUES (5, 3);

BEGIN;
INSERT INTO replication_example(somedata, testcolumn1) VALUES (6, 4);
ALTER TABLE replication_example ADD COLUMN testcolumn3 int;
INSERT INTO replication_example(somedata, testcolumn1, testcolumn3) VALUES (7, 5, 1);
COMMIT;

-- make old files go away
CHECKPOINT;

SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- trigger repeated rewrites of a system catalog with a toast table,
-- that previously was buggy: 20180914021046.oi7dm4ra3ot2g2kt@alap3.anarazel.de
VACUUM FULL pg_proc; VACUUM FULL pg_description; VACUUM FULL pg_shdescription; VACUUM FULL iamalargetable;
INSERT INTO replication_example(somedata, testcolumn1, testcolumn3) VALUES (8, 6, 1);
VACUUM FULL pg_proc; VACUUM FULL pg_description; VACUUM FULL pg_shdescription; VACUUM FULL iamalargetable;
INSERT INTO replication_example(somedata, testcolumn1, testcolumn3) VALUES (9, 7, 1);
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

SELECT pg_drop_replication_slot('regression_slot');
DROP TABLE IF EXISTS replication_example;
DROP FUNCTION iamalongfunction();
DROP FUNCTION exec(text);
DROP ROLE regress_justforcomments;
