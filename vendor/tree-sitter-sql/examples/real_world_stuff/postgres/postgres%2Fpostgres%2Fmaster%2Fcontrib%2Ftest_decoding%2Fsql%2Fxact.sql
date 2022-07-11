-- predictability
SET synchronous_commit = on;

SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot', 'test_decoding');

CREATE TABLE xact_test(data text);
INSERT INTO xact_test VALUES ('before-test');

-- bug #13844, xids in non-decoded records need to be inspected
BEGIN;
-- perform operation in xact that creates and logs xid, but isn't decoded
SELECT * FROM xact_test FOR UPDATE;
SAVEPOINT foo;
-- and now actually insert in subxact, xid is expected to be known
INSERT INTO xact_test VALUES ('after-assignment');
COMMIT;
-- and now show those changes
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- bug #14279, do not propagate null snapshot from subtransaction
BEGIN;
-- first insert
INSERT INTO xact_test VALUES ('main-txn');
SAVEPOINT foo;
-- now perform operation in subxact that creates and logs xid, but isn't decoded
SELECT 1 FROM xact_test FOR UPDATE LIMIT 1;
COMMIT;
-- and now show those changes
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

DROP TABLE xact_test;

SELECT pg_drop_replication_slot('regression_slot');
