-- Test prepared transactions. When two-phase-commit is enabled, transactions are
-- decoded at PREPARE time rather than at COMMIT PREPARED time.
SET synchronous_commit = on;
SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot', 'test_decoding', false, true);

CREATE TABLE test_prepared1(id integer primary key);
CREATE TABLE test_prepared2(id integer primary key);

-- Test that decoding happens at PREPARE time when two-phase-commit is enabled.
-- Decoding after COMMIT PREPARED must have all the commands in the transaction.
BEGIN;
INSERT INTO test_prepared1 VALUES (1);
INSERT INTO test_prepared1 VALUES (2);
-- should show nothing because the xact has not been prepared yet.
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');
PREPARE TRANSACTION 'test_prepared#1';
-- should show both the above inserts and the PREPARE TRANSACTION.
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');
COMMIT PREPARED 'test_prepared#1';
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- Test that rollback of a prepared xact is decoded.
BEGIN;
INSERT INTO test_prepared1 VALUES (3);
PREPARE TRANSACTION 'test_prepared#2';
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');
ROLLBACK PREPARED 'test_prepared#2';
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- Test prepare of a xact containing ddl. Leaving xact uncommitted for next test.
BEGIN;
ALTER TABLE test_prepared1 ADD COLUMN data text;
INSERT INTO test_prepared1 VALUES (4, 'frakbar');
PREPARE TRANSACTION 'test_prepared#3';
-- confirm that exclusive lock from the ALTER command is held on test_prepared1 table
SELECT 'test_prepared_1' AS relation, locktype, mode
FROM pg_locks
WHERE locktype = 'relation'
  AND relation = 'test_prepared1'::regclass;
-- The insert should show the newly altered column but not the DDL.
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- Test that we decode correctly while an uncommitted prepared xact
-- with ddl exists.
--
-- Use a separate table for the concurrent transaction because the lock from
-- the ALTER will stop us inserting into the other one.
--
INSERT INTO test_prepared2 VALUES (5);
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

COMMIT PREPARED 'test_prepared#3';
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');
-- make sure stuff still works
INSERT INTO test_prepared1 VALUES (6);
INSERT INTO test_prepared2 VALUES (7);
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- Check 'CLUSTER' (as operation that hold exclusive lock) doesn't block
-- logical decoding.
BEGIN;
INSERT INTO test_prepared1 VALUES (8, 'othercol');
CLUSTER test_prepared1 USING test_prepared1_pkey;
INSERT INTO test_prepared1 VALUES (9, 'othercol2');
PREPARE TRANSACTION 'test_prepared_lock';

SELECT 'test_prepared1' AS relation, locktype, mode
FROM pg_locks
WHERE locktype = 'relation'
  AND relation = 'test_prepared1'::regclass;
-- The above CLUSTER command shouldn't cause a timeout on 2pc decoding.
\set env_timeout ''
\getenv env_timeout PG_TEST_TIMEOUT_DEFAULT
SELECT COALESCE(NULLIF(:'env_timeout', ''), '180') || 's' AS timeout \gset
SET statement_timeout = :'timeout';
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');
RESET statement_timeout;
COMMIT PREPARED 'test_prepared_lock';
-- consume the commit
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- Test savepoints and sub-xacts. Creating savepoints will create
-- sub-xacts implicitly.
BEGIN;
CREATE TABLE test_prepared_savepoint (a int);
INSERT INTO test_prepared_savepoint VALUES (1);
SAVEPOINT test_savepoint;
INSERT INTO test_prepared_savepoint VALUES (2);
ROLLBACK TO SAVEPOINT test_savepoint;
PREPARE TRANSACTION 'test_prepared_savepoint';
-- should show only 1, not 2
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');
COMMIT PREPARED 'test_prepared_savepoint';
-- consume the commit
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- Test that a GID containing "_nodecode" gets decoded at commit prepared time.
BEGIN;
INSERT INTO test_prepared1 VALUES (20);
PREPARE TRANSACTION 'test_prepared_nodecode';
-- should show nothing
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');
COMMIT PREPARED 'test_prepared_nodecode';
-- should be decoded now
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- Test 8:
-- cleanup and make sure results are also empty
DROP TABLE test_prepared1;
DROP TABLE test_prepared2;
-- show results. There should be nothing to show
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

SELECT pg_drop_replication_slot('regression_slot');
