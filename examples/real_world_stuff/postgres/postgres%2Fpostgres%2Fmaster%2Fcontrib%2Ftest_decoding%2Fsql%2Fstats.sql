-- predictability
SET synchronous_commit = on;

SELECT 'init' FROM
    pg_create_logical_replication_slot('regression_slot_stats1', 'test_decoding') s1,
    pg_create_logical_replication_slot('regression_slot_stats2', 'test_decoding') s2,
    pg_create_logical_replication_slot('regression_slot_stats3', 'test_decoding') s3;

CREATE TABLE stats_test(data text);

-- non-spilled xact
SET logical_decoding_work_mem to '64MB';
INSERT INTO stats_test values(1);
SELECT count(*) FROM pg_logical_slot_get_changes('regression_slot_stats1', NULL, NULL, 'skip-empty-xacts', '1');
SELECT count(*) FROM pg_logical_slot_get_changes('regression_slot_stats2', NULL, NULL, 'skip-empty-xacts', '1');
SELECT count(*) FROM pg_logical_slot_get_changes('regression_slot_stats3', NULL, NULL, 'skip-empty-xacts', '1');
SELECT pg_stat_force_next_flush();
SELECT slot_name, spill_txns = 0 AS spill_txns, spill_count = 0 AS spill_count, total_txns > 0 AS total_txns, total_bytes > 0 AS total_bytes FROM pg_stat_replication_slots ORDER BY slot_name;
RESET logical_decoding_work_mem;

-- reset stats for one slot, others should be unaffected
SELECT pg_stat_reset_replication_slot('regression_slot_stats1');
SELECT slot_name, spill_txns = 0 AS spill_txns, spill_count = 0 AS spill_count, total_txns > 0 AS total_txns, total_bytes > 0 AS total_bytes FROM pg_stat_replication_slots ORDER BY slot_name;

-- reset stats for all slots
SELECT pg_stat_reset_replication_slot(NULL);
SELECT slot_name, spill_txns = 0 AS spill_txns, spill_count = 0 AS spill_count, total_txns > 0 AS total_txns, total_bytes > 0 AS total_bytes FROM pg_stat_replication_slots ORDER BY slot_name;

-- verify accessing/resetting stats for non-existent slot does something reasonable
SELECT * FROM pg_stat_get_replication_slot('do-not-exist');
SELECT pg_stat_reset_replication_slot('do-not-exist');
SELECT * FROM pg_stat_get_replication_slot('do-not-exist');

-- spilling the xact
BEGIN;
INSERT INTO stats_test SELECT 'serialize-topbig--1:'||g.i FROM generate_series(1, 5000) g(i);
COMMIT;
SELECT count(*) FROM pg_logical_slot_peek_changes('regression_slot_stats1', NULL, NULL, 'skip-empty-xacts', '1');

-- Check stats. We can't test the exact stats count as that can vary if any
-- background transaction (say by autovacuum) happens in parallel to the main
-- transaction.
SELECT pg_stat_force_next_flush();
SELECT slot_name, spill_txns > 0 AS spill_txns, spill_count > 0 AS spill_count FROM pg_stat_replication_slots;

-- Ensure stats can be repeatedly accessed using the same stats snapshot. See
-- https://postgr.es/m/20210317230447.c7uc4g3vbs4wi32i%40alap3.anarazel.de
BEGIN;
SELECT slot_name FROM pg_stat_replication_slots;
SELECT slot_name FROM pg_stat_replication_slots;
COMMIT;

DROP TABLE stats_test;
SELECT pg_drop_replication_slot('regression_slot_stats1'),
    pg_drop_replication_slot('regression_slot_stats2'),
    pg_drop_replication_slot('regression_slot_stats3');
