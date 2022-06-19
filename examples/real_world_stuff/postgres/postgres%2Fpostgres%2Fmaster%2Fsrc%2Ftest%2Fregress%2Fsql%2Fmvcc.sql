--
-- Verify that index scans encountering dead rows produced by an
-- aborted subtransaction of the current transaction can utilize the
-- kill_prio_tuple optimization
--
-- NB: The table size is currently *not* expected to stay the same, we
-- don't have logic to trigger opportunistic pruning in cases like
-- this.
BEGIN;

SET LOCAL enable_seqscan = false;
SET LOCAL enable_indexonlyscan = false;
SET LOCAL enable_bitmapscan = false;

-- Can't easily use a unique index, since dead tuples can be found
-- independent of the kill_prior_tuples optimization.
CREATE TABLE clean_aborted_self(key int, data text);
CREATE INDEX clean_aborted_self_key ON clean_aborted_self(key);
INSERT INTO clean_aborted_self (key, data) VALUES (-1, 'just to allocate metapage');

-- save index size from before the changes, for comparison
SELECT pg_relation_size('clean_aborted_self_key') AS clean_aborted_self_key_before \gset

DO $$
BEGIN
    -- iterate often enough to see index growth even on larger-than-default page sizes
    FOR i IN 1..100 LOOP
        BEGIN
	    -- perform index scan over all the inserted keys to get them to be seen as dead
            IF EXISTS(SELECT * FROM clean_aborted_self WHERE key > 0 AND key < 100) THEN
	        RAISE data_corrupted USING MESSAGE = 'these rows should not exist';
            END IF;
            INSERT INTO clean_aborted_self SELECT g.i, 'rolling back in a sec' FROM generate_series(1, 100) g(i);
	    -- just some error that's not normally thrown
	    RAISE reading_sql_data_not_permitted USING MESSAGE = 'round and round again';
	EXCEPTION WHEN reading_sql_data_not_permitted THEN END;
    END LOOP;
END;$$;

-- show sizes only if they differ
SELECT :clean_aborted_self_key_before AS size_before, pg_relation_size('clean_aborted_self_key') size_after
WHERE :clean_aborted_self_key_before != pg_relation_size('clean_aborted_self_key');

ROLLBACK;
