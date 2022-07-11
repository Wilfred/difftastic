-- predictability
SET synchronous_commit = on;

-- superuser required by default
CREATE ROLE regress_origin_replication REPLICATION;
SET ROLE regress_origin_replication;
SELECT pg_replication_origin_advance('regress_test_decoding: perm', '0/1');
SELECT pg_replication_origin_create('regress_test_decoding: perm');
SELECT pg_replication_origin_drop('regress_test_decoding: perm');
SELECT pg_replication_origin_oid('regress_test_decoding: perm');
SELECT pg_replication_origin_progress('regress_test_decoding: perm', false);
SELECT pg_replication_origin_session_is_setup();
SELECT pg_replication_origin_session_progress(false);
SELECT pg_replication_origin_session_reset();
SELECT pg_replication_origin_session_setup('regress_test_decoding: perm');
SELECT pg_replication_origin_xact_reset();
SELECT pg_replication_origin_xact_setup('0/1', '2013-01-01 00:00');
SELECT pg_show_replication_origin_status();
RESET ROLE;
DROP ROLE regress_origin_replication;

CREATE TABLE origin_tbl(id serial primary key, data text);
CREATE TABLE target_tbl(id serial primary key, data text);

SELECT pg_replication_origin_create('regress_test_decoding: regression_slot');
-- ensure duplicate creations fail
SELECT pg_replication_origin_create('regress_test_decoding: regression_slot');

--ensure deletions work (once)
SELECT pg_replication_origin_create('regress_test_decoding: temp');
SELECT pg_replication_origin_drop('regress_test_decoding: temp');
SELECT pg_replication_origin_drop('regress_test_decoding: temp');

-- various failure checks for undefined slots
select pg_replication_origin_advance('regress_test_decoding: temp', '0/1');
select pg_replication_origin_session_setup('regress_test_decoding: temp');
select pg_replication_origin_progress('regress_test_decoding: temp', true);

SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot', 'test_decoding');

-- origin tx
INSERT INTO origin_tbl(data) VALUES ('will be replicated and decoded and decoded again');
INSERT INTO target_tbl(data)
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- as is normal, the insert into target_tbl shows up
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

INSERT INTO origin_tbl(data) VALUES ('will be replicated, but not decoded again');

-- mark session as replaying
SELECT pg_replication_origin_session_setup('regress_test_decoding: regression_slot');

-- ensure we prevent duplicate setup
SELECT pg_replication_origin_session_setup('regress_test_decoding: regression_slot');

SELECT '' FROM pg_logical_emit_message(false, 'test', 'this message will not be decoded');

BEGIN;
-- setup transaction origin
SELECT pg_replication_origin_xact_setup('0/aabbccdd', '2013-01-01 00:00');
INSERT INTO target_tbl(data)
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1', 'only-local', '1');
COMMIT;

-- check replication progress for the session is correct
SELECT pg_replication_origin_session_progress(false);
SELECT pg_replication_origin_session_progress(true);

SELECT pg_replication_origin_session_reset();

SELECT local_id, external_id, remote_lsn, local_lsn <> '0/0' FROM pg_replication_origin_status;

-- check replication progress identified by name is correct
SELECT pg_replication_origin_progress('regress_test_decoding: regression_slot', false);
SELECT pg_replication_origin_progress('regress_test_decoding: regression_slot', true);

-- ensure reset requires previously setup state
SELECT pg_replication_origin_session_reset();

-- and magically the replayed xact will be filtered!
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1', 'only-local', '1');

--but new original changes still show up
INSERT INTO origin_tbl(data) VALUES ('will be replicated');
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1',  'only-local', '1');

SELECT pg_drop_replication_slot('regression_slot');
SELECT pg_replication_origin_drop('regress_test_decoding: regression_slot');

-- Set of transactions with no origin LSNs and commit timestamps set for
-- this session.
SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot_no_lsn', 'test_decoding');
SELECT pg_replication_origin_create('regress_test_decoding: regression_slot_no_lsn');
-- mark session as replaying
SELECT pg_replication_origin_session_setup('regress_test_decoding: regression_slot_no_lsn');
-- Simple transactions
BEGIN;
INSERT INTO origin_tbl(data) VALUES ('no_lsn, commit');
COMMIT;
BEGIN;
INSERT INTO origin_tbl(data) VALUES ('no_lsn, rollback');
ROLLBACK;
-- 2PC transactions
BEGIN;
INSERT INTO origin_tbl(data) VALUES ('no_lsn, commit prepared');
PREPARE TRANSACTION 'replorigin_prepared';
COMMIT PREPARED 'replorigin_prepared';
BEGIN;
INSERT INTO origin_tbl(data) VALUES ('no_lsn, rollback prepared');
PREPARE TRANSACTION 'replorigin_prepared';
ROLLBACK PREPARED 'replorigin_prepared';
SELECT local_id, external_id,
       remote_lsn <> '0/0' AS valid_remote_lsn,
       local_lsn <> '0/0' AS valid_local_lsn
       FROM pg_replication_origin_status;
SELECT data FROM pg_logical_slot_get_changes('regression_slot_no_lsn', NULL, NULL, 'skip-empty-xacts', '1', 'include-xids', '0');
-- Clean up
SELECT pg_replication_origin_session_reset();
SELECT pg_drop_replication_slot('regression_slot_no_lsn');
SELECT pg_replication_origin_drop('regress_test_decoding: regression_slot_no_lsn');
