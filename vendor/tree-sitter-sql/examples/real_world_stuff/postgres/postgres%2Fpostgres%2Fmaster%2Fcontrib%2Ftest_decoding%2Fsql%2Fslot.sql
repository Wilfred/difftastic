-- predictability
SET synchronous_commit = on;

SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot_p', 'test_decoding');
SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot_t', 'test_decoding', true);

SELECT pg_drop_replication_slot('regression_slot_p');
SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot_p', 'test_decoding', false);

SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot_t2', 'test_decoding', true);

SELECT pg_create_logical_replication_slot('foo', 'nonexistent');

-- here we want to start a new session and wait till old one is gone
select pg_backend_pid() as oldpid \gset
\c -
SET synchronous_commit = on;

do 'declare c int = 0;
begin
  while (select count(*) from pg_replication_slots where active_pid = '
    :'oldpid'
  ') > 0 loop c := c + 1; perform pg_sleep(0.01); end loop;
  raise log ''slot test looped % times'', c;
end';

-- should fail because the temporary slots were dropped automatically
SELECT pg_drop_replication_slot('regression_slot_t');
SELECT pg_drop_replication_slot('regression_slot_t2');

-- monitoring functions for slot directories
SELECT count(*) >= 0 AS ok FROM pg_ls_logicalmapdir();
SELECT count(*) >= 0 AS ok FROM pg_ls_logicalsnapdir();
SELECT count(*) >= 0 AS ok FROM pg_ls_replslotdir('regression_slot_p');
SELECT count(*) >= 0 AS ok FROM pg_ls_replslotdir('not_existing_slot'); -- fails

-- permanent slot has survived
SELECT pg_drop_replication_slot('regression_slot_p');

-- test switching between slots in a session
SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot1', 'test_decoding', true);

CREATE TABLE replication_example(id SERIAL PRIMARY KEY, somedata int, text varchar(120));
BEGIN;
INSERT INTO replication_example(somedata, text) VALUES (1, 1);
INSERT INTO replication_example(somedata, text) VALUES (1, 2);
COMMIT;

SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot2', 'test_decoding', true);

INSERT INTO replication_example(somedata, text) VALUES (1, 3);

SELECT data FROM pg_logical_slot_get_changes('regression_slot1', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');
SELECT data FROM pg_logical_slot_get_changes('regression_slot2', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

INSERT INTO replication_example(somedata, text) VALUES (1, 4);
INSERT INTO replication_example(somedata, text) VALUES (1, 5);

SELECT pg_current_wal_lsn() AS wal_lsn \gset

INSERT INTO replication_example(somedata, text) VALUES (1, 6);

SELECT end_lsn FROM pg_replication_slot_advance('regression_slot1', :'wal_lsn') \gset
SELECT slot_name FROM pg_replication_slot_advance('regression_slot2', pg_current_wal_lsn());

SELECT :'wal_lsn' = :'end_lsn';

SELECT data FROM pg_logical_slot_get_changes('regression_slot1', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');
SELECT data FROM pg_logical_slot_get_changes('regression_slot2', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

DROP TABLE replication_example;

-- error
SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot1', 'test_decoding', true);

-- both should error as they should be dropped on error
SELECT pg_drop_replication_slot('regression_slot1');
SELECT pg_drop_replication_slot('regression_slot2');

-- slot advance with physical slot, error with non-reserved slot
SELECT slot_name FROM pg_create_physical_replication_slot('regression_slot3');
SELECT pg_replication_slot_advance('regression_slot3', '0/0'); -- invalid LSN
SELECT pg_replication_slot_advance('regression_slot3', '0/1'); -- error
SELECT pg_drop_replication_slot('regression_slot3');

--
-- Test copy functions for logical replication slots
--

-- Create and copy logical slots
SELECT 'init' FROM pg_create_logical_replication_slot('orig_slot1', 'test_decoding', false);
SELECT 'copy' FROM pg_copy_logical_replication_slot('orig_slot1', 'copied_slot1_no_change');
SELECT 'copy' FROM pg_copy_logical_replication_slot('orig_slot1', 'copied_slot1_change_plugin', false, 'pgoutput');
SELECT 'copy' FROM pg_copy_logical_replication_slot('orig_slot1', 'copied_slot1_change_plugin_temp', true, 'pgoutput');

-- Check all copied slots status
SELECT
    o.slot_name, o.plugin, o.temporary, c.slot_name, c.plugin, c.temporary
FROM
    (SELECT * FROM pg_replication_slots WHERE slot_name LIKE 'orig%') as o
    LEFT JOIN pg_replication_slots as c ON o.restart_lsn = c.restart_lsn  AND o.confirmed_flush_lsn = c.confirmed_flush_lsn
WHERE
    o.slot_name != c.slot_name
ORDER BY o.slot_name, c.slot_name;

-- Now we have maximum 4 replication slots. Check slots are properly
-- released even when raise error during creating the target slot.
SELECT 'copy' FROM pg_copy_logical_replication_slot('orig_slot1', 'failed'); -- error

-- temporary slots were dropped automatically
SELECT pg_drop_replication_slot('orig_slot1');
SELECT pg_drop_replication_slot('copied_slot1_no_change');
SELECT pg_drop_replication_slot('copied_slot1_change_plugin');

-- Test based on the temporary logical slot
SELECT 'init' FROM pg_create_logical_replication_slot('orig_slot2', 'test_decoding', true);
SELECT 'copy' FROM pg_copy_logical_replication_slot('orig_slot2', 'copied_slot2_no_change');
SELECT 'copy' FROM pg_copy_logical_replication_slot('orig_slot2', 'copied_slot2_change_plugin', true, 'pgoutput');
SELECT 'copy' FROM pg_copy_logical_replication_slot('orig_slot2', 'copied_slot2_change_plugin_temp', false, 'pgoutput');

-- Check all copied slots status
SELECT
    o.slot_name, o.plugin, o.temporary, c.slot_name, c.plugin, c.temporary
FROM
    (SELECT * FROM pg_replication_slots WHERE slot_name LIKE 'orig%') as o
    LEFT JOIN pg_replication_slots as c ON o.restart_lsn = c.restart_lsn  AND o.confirmed_flush_lsn = c.confirmed_flush_lsn
WHERE
    o.slot_name != c.slot_name
ORDER BY o.slot_name, c.slot_name;

-- Cannot copy a logical slot to a physical slot
SELECT 'copy' FROM pg_copy_physical_replication_slot('orig_slot2', 'failed'); -- error

-- temporary slots were dropped automatically
SELECT pg_drop_replication_slot('copied_slot2_change_plugin_temp');

--
-- Test copy functions for physical replication slots
--

-- Create and copy physical slots
SELECT 'init' FROM pg_create_physical_replication_slot('orig_slot1', true);
SELECT 'init' FROM pg_create_physical_replication_slot('orig_slot2', false);
SELECT 'copy' FROM pg_copy_physical_replication_slot('orig_slot1', 'copied_slot1_no_change');
SELECT 'copy' FROM pg_copy_physical_replication_slot('orig_slot1', 'copied_slot1_temp', true);

-- Check all copied slots status. Since all slots don't reserve WAL we check only other fields.
SELECT slot_name, slot_type, temporary FROM pg_replication_slots;

-- Cannot copy a physical slot to a logical slot
SELECT 'copy' FROM pg_copy_logical_replication_slot('orig_slot1', 'failed'); -- error

-- Cannot copy a physical slot that doesn't reserve WAL
SELECT 'copy' FROM pg_copy_physical_replication_slot('orig_slot2', 'failed'); -- error

-- temporary slots were dropped automatically
SELECT pg_drop_replication_slot('orig_slot1');
SELECT pg_drop_replication_slot('orig_slot2');
SELECT pg_drop_replication_slot('copied_slot1_no_change');

-- Test based on the temporary physical slot
SELECT 'init' FROM pg_create_physical_replication_slot('orig_slot2', true, true);
SELECT 'copy' FROM pg_copy_physical_replication_slot('orig_slot2', 'copied_slot2_no_change');
SELECT 'copy' FROM pg_copy_physical_replication_slot('orig_slot2', 'copied_slot2_notemp', false);

-- Check all copied slots status
SELECT
    o.slot_name, o.temporary, c.slot_name, c.temporary
FROM
    (SELECT * FROM pg_replication_slots WHERE slot_name LIKE 'orig%') as o
    LEFT JOIN pg_replication_slots as c ON o.restart_lsn = c.restart_lsn
WHERE
    o.slot_name != c.slot_name
ORDER BY o.slot_name, c.slot_name;

SELECT pg_drop_replication_slot('orig_slot2');
SELECT pg_drop_replication_slot('copied_slot2_no_change');
SELECT pg_drop_replication_slot('copied_slot2_notemp');
