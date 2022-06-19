-- predictability
SET synchronous_commit = on;

SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot', 'test_decoding');

SELECT 'msg1' FROM pg_logical_emit_message(true, 'test', 'msg1');
SELECT 'msg2' FROM pg_logical_emit_message(false, 'test', 'msg2');

BEGIN;
SELECT 'msg3' FROM pg_logical_emit_message(true, 'test', 'msg3');
SELECT 'msg4' FROM pg_logical_emit_message(false, 'test', 'msg4');
ROLLBACK;

BEGIN;
SELECT 'msg5' FROM pg_logical_emit_message(true, 'test', 'msg5');
SELECT 'msg6' FROM pg_logical_emit_message(false, 'test', 'msg6');
SELECT 'msg7' FROM pg_logical_emit_message(true, 'test', 'msg7');
COMMIT;

SELECT 'ignorethis' FROM pg_logical_emit_message(true, 'test', 'czechtastic');

SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'force-binary', '0', 'skip-empty-xacts', '1');

-- test db filtering
\set prevdb :DBNAME
\c template1

SELECT 'otherdb1' FROM pg_logical_emit_message(false, 'test', 'otherdb1');
SELECT 'otherdb2' FROM pg_logical_emit_message(true, 'test', 'otherdb2');

\c :prevdb
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'force-binary', '0', 'skip-empty-xacts', '1');

SELECT 'cleanup' FROM pg_drop_replication_slot('regression_slot');
