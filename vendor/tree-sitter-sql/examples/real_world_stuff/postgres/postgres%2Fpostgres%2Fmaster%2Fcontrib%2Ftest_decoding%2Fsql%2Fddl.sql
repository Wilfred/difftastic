-- predictability
SET synchronous_commit = on;

SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot', 'test_decoding');
-- fail because of an already existing slot
SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot', 'test_decoding');
-- fail because of an invalid name
SELECT 'init' FROM pg_create_logical_replication_slot('Invalid Name', 'test_decoding');

-- fail twice because of an invalid parameter values
SELECT 'init' FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', 'frakbar');
SELECT 'init' FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'nonexistent-option', 'frakbar');
SELECT 'init' FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', 'frakbar');

-- succeed once
SELECT pg_drop_replication_slot('regression_slot');
-- fail
SELECT pg_drop_replication_slot('regression_slot');

-- check that we're detecting a streaming rep slot used for logical decoding
SELECT 'init' FROM pg_create_physical_replication_slot('repl');
SELECT data FROM pg_logical_slot_get_changes('repl', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');
SELECT pg_drop_replication_slot('repl');


SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot', 'test_decoding');

/* check whether status function reports us, only reproduceable columns */
SELECT slot_name, plugin, slot_type, active,
    NOT catalog_xmin IS NULL AS catalog_xmin_set,
    xmin IS NULl  AS data_xmin_not_set,
    pg_wal_lsn_diff(restart_lsn, '0/01000000') > 0 AS some_wal
FROM pg_replication_slots;

/*
 * Check that changes are handled correctly when interleaved with ddl
 */
CREATE TABLE replication_example(id SERIAL PRIMARY KEY, somedata int, text varchar(120));
BEGIN;
INSERT INTO replication_example(somedata, text) VALUES (1, 1);
INSERT INTO replication_example(somedata, text) VALUES (1, 2);
COMMIT;

ALTER TABLE replication_example ADD COLUMN bar int;

INSERT INTO replication_example(somedata, text, bar) VALUES (2, 1, 4);

BEGIN;
INSERT INTO replication_example(somedata, text, bar) VALUES (2, 2, 4);
INSERT INTO replication_example(somedata, text, bar) VALUES (2, 3, 4);
INSERT INTO replication_example(somedata, text, bar) VALUES (2, 4, NULL);
COMMIT;

ALTER TABLE replication_example DROP COLUMN bar;
INSERT INTO replication_example(somedata, text) VALUES (3, 1);

BEGIN;
INSERT INTO replication_example(somedata, text) VALUES (3, 2);
INSERT INTO replication_example(somedata, text) VALUES (3, 3);
COMMIT;

ALTER TABLE replication_example RENAME COLUMN text TO somenum;

INSERT INTO replication_example(somedata, somenum) VALUES (4, 1);

-- collect all changes
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

ALTER TABLE replication_example ALTER COLUMN somenum TYPE int4 USING (somenum::int4);
-- check that this doesn't produce any changes from the heap rewrite
SELECT count(data) FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

INSERT INTO replication_example(somedata, somenum) VALUES (5, 1);

BEGIN;
INSERT INTO replication_example(somedata, somenum) VALUES (6, 1);
ALTER TABLE replication_example ADD COLUMN zaphod1 int;
INSERT INTO replication_example(somedata, somenum, zaphod1) VALUES (6, 2, 1);
ALTER TABLE replication_example ADD COLUMN zaphod2 int;
INSERT INTO replication_example(somedata, somenum, zaphod2) VALUES (6, 3, 1);
INSERT INTO replication_example(somedata, somenum, zaphod1) VALUES (6, 4, 2);
COMMIT;

-- show changes
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- ON CONFLICT DO UPDATE support
BEGIN;
INSERT INTO replication_example(id, somedata, somenum) SELECT i, i, i FROM generate_series(-15, 15) i
  ON CONFLICT (id) DO UPDATE SET somenum = excluded.somenum + 1;
COMMIT;

/* display results */
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- MERGE support
BEGIN;
MERGE INTO replication_example t
	USING (SELECT i as id, i as data, i as num FROM generate_series(-20, 5) i) s
	ON t.id = s.id
	WHEN MATCHED AND t.id < 0 THEN
		UPDATE SET somenum = somenum + 1
	WHEN MATCHED AND t.id >= 0 THEN
		DELETE
	WHEN NOT MATCHED THEN
		INSERT VALUES (s.*);
COMMIT;

/* display results */
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

CREATE TABLE tr_unique(id2 serial unique NOT NULL, data int);
INSERT INTO tr_unique(data) VALUES(10);
ALTER TABLE tr_unique RENAME TO tr_pkey;
ALTER TABLE tr_pkey ADD COLUMN id serial primary key;
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1', 'include-rewrites', '1');

INSERT INTO tr_pkey(data) VALUES(1);
--show deletion with primary key
DELETE FROM tr_pkey;

/* display results */
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

/*
 * check that disk spooling works (also for logical messages)
 */
BEGIN;
CREATE TABLE tr_etoomuch (id serial primary key, data int);
INSERT INTO tr_etoomuch(data) SELECT g.i FROM generate_series(1, 10234) g(i);
SELECT 'tx logical msg' FROM pg_logical_emit_message(true, 'test', 'tx logical msg');
DELETE FROM tr_etoomuch WHERE id < 5000;
UPDATE tr_etoomuch SET data = - data WHERE id > 5000;
CREATE TABLE tr_oddlength (id text primary key, data text);
INSERT INTO tr_oddlength VALUES('ab', 'foo');
COMMIT;

/* display results, but hide most of the output */
SELECT count(*), min(data), max(data)
FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1')
GROUP BY substring(data, 1, 24)
ORDER BY 1,2;

-- check updates of primary keys work correctly
BEGIN;
CREATE TABLE spoolme AS SELECT g.i FROM generate_series(1, 5000) g(i);
UPDATE tr_etoomuch SET id = -id WHERE id = 5000;
UPDATE tr_oddlength SET id = 'x', data = 'quux';
UPDATE tr_oddlength SET id = 'yy', data = 'a';
DELETE FROM spoolme;
DROP TABLE spoolme;
COMMIT;

SELECT data
FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1')
WHERE data ~ 'UPDATE';

-- check that a large, spooled, upsert works
INSERT INTO tr_etoomuch (id, data)
SELECT g.i, -g.i FROM generate_series(8000, 12000) g(i)
ON CONFLICT(id) DO UPDATE SET data = EXCLUDED.data;

SELECT substring(data, 1, 29), count(*)
FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1') WITH ORDINALITY
GROUP BY 1
ORDER BY min(ordinality);

/*
 * check whether we decode subtransactions correctly in relation with each
 * other
 */
CREATE TABLE tr_sub (id serial primary key, path text);

-- toplevel, subtxn, toplevel, subtxn, subtxn
BEGIN;
INSERT INTO tr_sub(path) VALUES ('1-top-#1');

SAVEPOINT a;
INSERT INTO tr_sub(path) VALUES ('1-top-1-#1');
INSERT INTO tr_sub(path) VALUES ('1-top-1-#2');
RELEASE SAVEPOINT a;

SAVEPOINT b;
SAVEPOINT c;
INSERT INTO tr_sub(path) VALUES ('1-top-2-1-#1');
INSERT INTO tr_sub(path) VALUES ('1-top-2-1-#2');
RELEASE SAVEPOINT c;
INSERT INTO tr_sub(path) VALUES ('1-top-2-#1');
RELEASE SAVEPOINT b;
COMMIT;

SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- check that we handle xlog assignments correctly
BEGIN;
-- nest 80 subtxns
SAVEPOINT subtop;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;SAVEPOINT a;
-- assign xid by inserting
INSERT INTO tr_sub(path) VALUES ('2-top-1...--#1');
INSERT INTO tr_sub(path) VALUES ('2-top-1...--#2');
INSERT INTO tr_sub(path) VALUES ('2-top-1...--#3');
RELEASE SAVEPOINT subtop;
INSERT INTO tr_sub(path) VALUES ('2-top-#1');
COMMIT;

SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- make sure rollbacked subtransactions aren't decoded
BEGIN;
INSERT INTO tr_sub(path) VALUES ('3-top-2-#1');
SAVEPOINT a;
INSERT INTO tr_sub(path) VALUES ('3-top-2-1-#1');
SAVEPOINT b;
INSERT INTO tr_sub(path) VALUES ('3-top-2-2-#1');
ROLLBACK TO SAVEPOINT b;
INSERT INTO tr_sub(path) VALUES ('3-top-2-#2');
COMMIT;

SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- test whether a known, but not yet logged toplevel xact, followed by a
-- subxact commit is handled correctly
BEGIN;
SELECT pg_current_xact_id() != '0'; -- so no fixed xid apears in the outfile
SAVEPOINT a;
INSERT INTO tr_sub(path) VALUES ('4-top-1-#1');
RELEASE SAVEPOINT a;
COMMIT;

-- test whether a change in a subtransaction, in an unknown toplevel
-- xact is handled correctly.
BEGIN;
SAVEPOINT a;
INSERT INTO tr_sub(path) VALUES ('5-top-1-#1');
COMMIT;


SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- check that DDL in aborted subtransactions handled correctly
CREATE TABLE tr_sub_ddl(data int);
BEGIN;
SAVEPOINT a;
ALTER TABLE tr_sub_ddl ALTER COLUMN data TYPE text;
INSERT INTO tr_sub_ddl VALUES ('blah-blah');
ROLLBACK TO SAVEPOINT a;
ALTER TABLE tr_sub_ddl ALTER COLUMN data TYPE bigint;
INSERT INTO tr_sub_ddl VALUES(43);
COMMIT;

SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');


/*
 * Check whether treating a table as a catalog table works somewhat
 */
CREATE TABLE replication_metadata (
    id serial primary key,
    relation name NOT NULL,
    options text[]
)
WITH (user_catalog_table = true)
;
\d+ replication_metadata

INSERT INTO replication_metadata(relation, options)
VALUES ('foo', ARRAY['a', 'b']);

ALTER TABLE replication_metadata RESET (user_catalog_table);
\d+ replication_metadata

INSERT INTO replication_metadata(relation, options)
VALUES ('bar', ARRAY['a', 'b']);

ALTER TABLE replication_metadata SET (user_catalog_table = true);
\d+ replication_metadata

INSERT INTO replication_metadata(relation, options)
VALUES ('blub', NULL);

-- make sure rewrites don't work
ALTER TABLE replication_metadata ADD COLUMN rewritemeornot int;
ALTER TABLE replication_metadata ALTER COLUMN rewritemeornot TYPE text;

ALTER TABLE replication_metadata SET (user_catalog_table = false);
\d+ replication_metadata

INSERT INTO replication_metadata(relation, options)
VALUES ('zaphod', NULL);

SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

/*
 * check whether we handle updates/deletes correct with & without a pkey
 */

/* we should handle the case without a key at all more gracefully */
CREATE TABLE table_without_key(id serial, data int);
INSERT INTO table_without_key(data) VALUES(1),(2);
DELETE FROM table_without_key WHERE data = 1;
-- won't log old keys
UPDATE table_without_key SET data = 3 WHERE data = 2;
UPDATE table_without_key SET id = -id;
UPDATE table_without_key SET id = -id;
-- should log the full old row now
ALTER TABLE table_without_key REPLICA IDENTITY FULL;
UPDATE table_without_key SET data = 3 WHERE data = 2;
UPDATE table_without_key SET id = -id;
UPDATE table_without_key SET id = -id;
-- ensure that FULL correctly deals with new columns
ALTER TABLE table_without_key ADD COLUMN new_column text;
UPDATE table_without_key SET id = -id;
UPDATE table_without_key SET id = -id, new_column = 'someval';
DELETE FROM table_without_key WHERE data = 3;

CREATE TABLE table_with_pkey(id serial primary key, data int);
INSERT INTO table_with_pkey(data) VALUES(1), (2);
DELETE FROM table_with_pkey WHERE data = 1;
-- should log the old pkey
UPDATE table_with_pkey SET data = 3 WHERE data = 2;
UPDATE table_with_pkey SET id = -id;
UPDATE table_with_pkey SET id = -id;
-- check that we log nothing despite having a pkey
ALTER TABLE table_without_key REPLICA IDENTITY NOTHING;
UPDATE table_with_pkey SET id = -id;
-- check that we log everything despite having a pkey
ALTER TABLE table_without_key REPLICA IDENTITY FULL;
UPDATE table_with_pkey SET id = -id;
DELETE FROM table_with_pkey WHERE data = 3;

CREATE TABLE table_with_unique_not_null(id serial unique, data int);
ALTER TABLE table_with_unique_not_null ALTER COLUMN id SET NOT NULL; --already set
-- won't log anything, replica identity not setup
INSERT INTO table_with_unique_not_null(data) VALUES(1), (2);
DELETE FROM table_with_unique_not_null WHERE data = 1;
UPDATE table_with_unique_not_null SET data = 3 WHERE data = 2;
UPDATE table_with_unique_not_null SET id = -id;
UPDATE table_with_unique_not_null SET id = -id;
DELETE FROM table_with_unique_not_null WHERE data = 3;
-- should log old key
ALTER TABLE table_with_unique_not_null REPLICA IDENTITY USING INDEX table_with_unique_not_null_id_key;
INSERT INTO table_with_unique_not_null(data) VALUES(1), (2);
DELETE FROM table_with_unique_not_null WHERE data = 1;
UPDATE table_with_unique_not_null SET data = 3 WHERE data = 2;
UPDATE table_with_unique_not_null SET id = -id;
UPDATE table_with_unique_not_null SET id = -id;
DELETE FROM table_with_unique_not_null WHERE data = 3;

-- check tables with dropped indexes used in REPLICA IDENTITY
-- table with primary key
CREATE TABLE table_dropped_index_with_pk (a int PRIMARY KEY, b int, c int);
CREATE UNIQUE INDEX table_dropped_index_with_pk_idx
  ON table_dropped_index_with_pk(a);
ALTER TABLE table_dropped_index_with_pk REPLICA IDENTITY
  USING INDEX table_dropped_index_with_pk_idx;
DROP INDEX table_dropped_index_with_pk_idx;
INSERT INTO table_dropped_index_with_pk VALUES (1,1,1), (2,2,2), (3,3,3);
UPDATE table_dropped_index_with_pk SET a = 4 WHERE a = 1;
UPDATE table_dropped_index_with_pk SET b = 5 WHERE a = 2;
UPDATE table_dropped_index_with_pk SET b = 6, c = 7 WHERE a = 3;
DELETE FROM table_dropped_index_with_pk WHERE b = 1;
DELETE FROM table_dropped_index_with_pk WHERE a = 3;
DROP TABLE table_dropped_index_with_pk;

-- table without primary key
CREATE TABLE table_dropped_index_no_pk (a int NOT NULL, b int, c int);
CREATE UNIQUE INDEX table_dropped_index_no_pk_idx
  ON table_dropped_index_no_pk(a);
ALTER TABLE table_dropped_index_no_pk REPLICA IDENTITY
  USING INDEX table_dropped_index_no_pk_idx;
DROP INDEX table_dropped_index_no_pk_idx;
INSERT INTO table_dropped_index_no_pk VALUES (1,1,1), (2,2,2), (3,3,3);
UPDATE table_dropped_index_no_pk SET a = 4 WHERE a = 1;
UPDATE table_dropped_index_no_pk SET b = 5 WHERE a = 2;
UPDATE table_dropped_index_no_pk SET b = 6, c = 7 WHERE a = 3;
DELETE FROM table_dropped_index_no_pk WHERE b = 1;
DELETE FROM table_dropped_index_no_pk WHERE a = 3;
DROP TABLE table_dropped_index_no_pk;

-- check toast support
BEGIN;
CREATE SEQUENCE toasttable_rand_seq START 79 INCREMENT 1499; -- portable "random"
CREATE TABLE toasttable(
       id serial primary key,
       toasted_col1 text,
       rand1 float8 DEFAULT nextval('toasttable_rand_seq'),
       toasted_col2 text,
       rand2 float8 DEFAULT nextval('toasttable_rand_seq')
       );
COMMIT;
-- uncompressed external toast data
INSERT INTO toasttable(toasted_col1) SELECT string_agg(g.i::text, '') FROM generate_series(1, 2000) g(i);

-- compressed external toast data
INSERT INTO toasttable(toasted_col2) SELECT repeat(string_agg(to_char(g.i, 'FM0000'), ''), 50) FROM generate_series(1, 500) g(i);

-- update of existing column
UPDATE toasttable
    SET toasted_col1 = (SELECT string_agg(g.i::text, '') FROM generate_series(1, 2000) g(i))
WHERE id = 1;

SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

INSERT INTO toasttable(toasted_col1) SELECT string_agg(g.i::text, '') FROM generate_series(1, 2000) g(i);

-- update of second column, first column unchanged
UPDATE toasttable
    SET toasted_col2 = (SELECT string_agg(g.i::text, '') FROM generate_series(1, 2000) g(i))
WHERE id = 1;

-- make sure we decode correctly even if the toast table is gone
DROP TABLE toasttable;

SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- done, free logical replication slot
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

SELECT pg_drop_replication_slot('regression_slot');

/* check that the slot is gone */
\x
SELECT * FROM pg_replication_slots;
\x
