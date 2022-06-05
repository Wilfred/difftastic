-- predictability
SET synchronous_commit = on;
SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot', 'test_decoding');

CREATE TABLE test_prepared1(id int);
CREATE TABLE test_prepared2(id int);

-- test simple successful use of a prepared xact
BEGIN;
INSERT INTO test_prepared1 VALUES (1);
PREPARE TRANSACTION 'test_prepared#1';
COMMIT PREPARED 'test_prepared#1';
INSERT INTO test_prepared1 VALUES (2);

-- test abort of a prepared xact
BEGIN;
INSERT INTO test_prepared1 VALUES (3);
PREPARE TRANSACTION 'test_prepared#2';
ROLLBACK PREPARED 'test_prepared#2';

INSERT INTO test_prepared1 VALUES (4);

-- test prepared xact containing ddl
BEGIN;
INSERT INTO test_prepared1 VALUES (5);
ALTER TABLE test_prepared1 ADD COLUMN data text;
INSERT INTO test_prepared1 VALUES (6, 'frakbar');
PREPARE TRANSACTION 'test_prepared#3';

-- test that we decode correctly while an uncommitted prepared xact
-- with ddl exists.

-- separate table because of the lock from the ALTER
-- this will come before the '5' row above, as this commits before it.
INSERT INTO test_prepared2 VALUES (7);

COMMIT PREPARED 'test_prepared#3';

-- make sure stuff still works
INSERT INTO test_prepared1 VALUES (8);
INSERT INTO test_prepared2 VALUES (9);

-- cleanup
DROP TABLE test_prepared1;
DROP TABLE test_prepared2;

-- show results
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

SELECT pg_drop_replication_slot('regression_slot');
