-- Test streaming of two-phase commits

SET synchronous_commit = on;
SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot', 'test_decoding', false, true);

CREATE TABLE stream_test(data text);

-- consume DDL
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- streaming test with sub-transaction and PREPARE/COMMIT PREPARED
BEGIN;
SAVEPOINT s1;
SELECT 'msg5' FROM pg_logical_emit_message(true, 'test', repeat('a', 50));
INSERT INTO stream_test SELECT repeat('a', 2000) || g.i FROM generate_series(1, 35) g(i);
TRUNCATE table stream_test;
ROLLBACK TO s1;
INSERT INTO stream_test SELECT repeat('a', 10) || g.i FROM generate_series(1, 20) g(i);
PREPARE TRANSACTION 'test1';
-- should show the inserts after a ROLLBACK
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL,NULL, 'include-xids', '0', 'skip-empty-xacts', '1', 'stream-changes', '1');

COMMIT PREPARED 'test1';
--should show the COMMIT PREPARED and the other changes in the transaction
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL,NULL, 'include-xids', '0', 'skip-empty-xacts', '1', 'stream-changes', '1');

-- streaming test with sub-transaction and PREPARE/COMMIT PREPARED but with
-- filtered gid. gids with '_nodecode' will not be decoded at prepare time.
BEGIN;
SAVEPOINT s1;
SELECT 'msg5' FROM pg_logical_emit_message(true, 'test', repeat('a', 50));
INSERT INTO stream_test SELECT repeat('a', 2000) || g.i FROM generate_series(1, 35) g(i);
TRUNCATE table stream_test;
ROLLBACK to s1;
INSERT INTO stream_test SELECT repeat('a', 10) || g.i FROM generate_series(1, 20) g(i);
PREPARE TRANSACTION 'test1_nodecode';
-- should NOT show inserts after a ROLLBACK
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL,NULL, 'include-xids', '0', 'skip-empty-xacts', '1', 'stream-changes', '1');

COMMIT PREPARED 'test1_nodecode';
-- should show the inserts but not show a COMMIT PREPARED but a COMMIT
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL,NULL, 'include-xids', '0', 'skip-empty-xacts', '1', 'stream-changes', '1');

DROP TABLE stream_test;
SELECT pg_drop_replication_slot('regression_slot');
