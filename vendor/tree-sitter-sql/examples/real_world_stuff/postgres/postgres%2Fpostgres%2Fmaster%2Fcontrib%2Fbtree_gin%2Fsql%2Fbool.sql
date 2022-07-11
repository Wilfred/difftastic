set enable_seqscan=off;

CREATE TABLE test_bool (
	i boolean
);

INSERT INTO test_bool VALUES (false),(true),(null);

CREATE INDEX idx_bool ON test_bool USING gin (i);

SELECT * FROM test_bool WHERE i<true ORDER BY i;
SELECT * FROM test_bool WHERE i<=true ORDER BY i;
SELECT * FROM test_bool WHERE i=true ORDER BY i;
SELECT * FROM test_bool WHERE i>=true ORDER BY i;
SELECT * FROM test_bool WHERE i>true ORDER BY i;

SELECT * FROM test_bool WHERE i<false ORDER BY i;
SELECT * FROM test_bool WHERE i<=false ORDER BY i;
SELECT * FROM test_bool WHERE i=false ORDER BY i;
SELECT * FROM test_bool WHERE i>=false ORDER BY i;
SELECT * FROM test_bool WHERE i>false ORDER BY i;

EXPLAIN (COSTS OFF) SELECT * FROM test_bool WHERE i<true ORDER BY i;
EXPLAIN (COSTS OFF) SELECT * FROM test_bool WHERE i<=true ORDER BY i;
EXPLAIN (COSTS OFF) SELECT * FROM test_bool WHERE i=true ORDER BY i;
EXPLAIN (COSTS OFF) SELECT * FROM test_bool WHERE i>=true ORDER BY i;
EXPLAIN (COSTS OFF) SELECT * FROM test_bool WHERE i>true ORDER BY i;
