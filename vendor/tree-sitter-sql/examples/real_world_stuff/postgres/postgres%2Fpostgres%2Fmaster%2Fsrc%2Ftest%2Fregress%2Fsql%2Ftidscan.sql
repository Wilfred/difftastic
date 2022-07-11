-- tests for tidscans

CREATE TABLE tidscan(id integer);

-- only insert a few rows, we don't want to spill onto a second table page
INSERT INTO tidscan VALUES (1), (2), (3);

-- show ctids
SELECT ctid, * FROM tidscan;

-- ctid equality - implemented as tidscan
EXPLAIN (COSTS OFF)
SELECT ctid, * FROM tidscan WHERE ctid = '(0,1)';
SELECT ctid, * FROM tidscan WHERE ctid = '(0,1)';

EXPLAIN (COSTS OFF)
SELECT ctid, * FROM tidscan WHERE '(0,1)' = ctid;
SELECT ctid, * FROM tidscan WHERE '(0,1)' = ctid;

-- OR'd clauses
EXPLAIN (COSTS OFF)
SELECT ctid, * FROM tidscan WHERE ctid = '(0,2)' OR '(0,1)' = ctid;
SELECT ctid, * FROM tidscan WHERE ctid = '(0,2)' OR '(0,1)' = ctid;

-- ctid = ScalarArrayOp - implemented as tidscan
EXPLAIN (COSTS OFF)
SELECT ctid, * FROM tidscan WHERE ctid = ANY(ARRAY['(0,1)', '(0,2)']::tid[]);
SELECT ctid, * FROM tidscan WHERE ctid = ANY(ARRAY['(0,1)', '(0,2)']::tid[]);

-- ctid != ScalarArrayOp - can't be implemented as tidscan
EXPLAIN (COSTS OFF)
SELECT ctid, * FROM tidscan WHERE ctid != ANY(ARRAY['(0,1)', '(0,2)']::tid[]);
SELECT ctid, * FROM tidscan WHERE ctid != ANY(ARRAY['(0,1)', '(0,2)']::tid[]);

-- tid equality extracted from sub-AND clauses
EXPLAIN (COSTS OFF)
SELECT ctid, * FROM tidscan
WHERE (id = 3 AND ctid IN ('(0,2)', '(0,3)')) OR (ctid = '(0,1)' AND id = 1);
SELECT ctid, * FROM tidscan
WHERE (id = 3 AND ctid IN ('(0,2)', '(0,3)')) OR (ctid = '(0,1)' AND id = 1);

-- nestloop-with-inner-tidscan joins on tid
SET enable_hashjoin TO off;  -- otherwise hash join might win
EXPLAIN (COSTS OFF)
SELECT t1.ctid, t1.*, t2.ctid, t2.*
FROM tidscan t1 JOIN tidscan t2 ON t1.ctid = t2.ctid WHERE t1.id = 1;
SELECT t1.ctid, t1.*, t2.ctid, t2.*
FROM tidscan t1 JOIN tidscan t2 ON t1.ctid = t2.ctid WHERE t1.id = 1;
EXPLAIN (COSTS OFF)
SELECT t1.ctid, t1.*, t2.ctid, t2.*
FROM tidscan t1 LEFT JOIN tidscan t2 ON t1.ctid = t2.ctid WHERE t1.id = 1;
SELECT t1.ctid, t1.*, t2.ctid, t2.*
FROM tidscan t1 LEFT JOIN tidscan t2 ON t1.ctid = t2.ctid WHERE t1.id = 1;
RESET enable_hashjoin;

-- exercise backward scan and rewind
BEGIN;
DECLARE c CURSOR FOR
SELECT ctid, * FROM tidscan WHERE ctid = ANY(ARRAY['(0,1)', '(0,2)']::tid[]);
FETCH ALL FROM c;
FETCH BACKWARD 1 FROM c;
FETCH FIRST FROM c;
ROLLBACK;

-- tidscan via CURRENT OF
BEGIN;
DECLARE c CURSOR FOR SELECT ctid, * FROM tidscan;
FETCH NEXT FROM c; -- skip one row
FETCH NEXT FROM c;
-- perform update
EXPLAIN (ANALYZE, COSTS OFF, SUMMARY OFF, TIMING OFF)
UPDATE tidscan SET id = -id WHERE CURRENT OF c RETURNING *;
FETCH NEXT FROM c;
-- perform update
EXPLAIN (ANALYZE, COSTS OFF, SUMMARY OFF, TIMING OFF)
UPDATE tidscan SET id = -id WHERE CURRENT OF c RETURNING *;
SELECT * FROM tidscan;
-- position cursor past any rows
FETCH NEXT FROM c;
-- should error out
EXPLAIN (ANALYZE, COSTS OFF, SUMMARY OFF, TIMING OFF)
UPDATE tidscan SET id = -id WHERE CURRENT OF c RETURNING *;
ROLLBACK;

-- bulk joins on CTID
-- (these plans don't use TID scans, but this still seems like an
-- appropriate place for these tests)
EXPLAIN (COSTS OFF)
SELECT count(*) FROM tenk1 t1 JOIN tenk1 t2 ON t1.ctid = t2.ctid;
SELECT count(*) FROM tenk1 t1 JOIN tenk1 t2 ON t1.ctid = t2.ctid;
SET enable_hashjoin TO off;
EXPLAIN (COSTS OFF)
SELECT count(*) FROM tenk1 t1 JOIN tenk1 t2 ON t1.ctid = t2.ctid;
SELECT count(*) FROM tenk1 t1 JOIN tenk1 t2 ON t1.ctid = t2.ctid;
RESET enable_hashjoin;

-- check predicate lock on CTID
BEGIN ISOLATION LEVEL SERIALIZABLE;
SELECT * FROM tidscan WHERE ctid = '(0,1)';
-- locktype should be 'tuple'
SELECT locktype, mode FROM pg_locks WHERE pid = pg_backend_pid() AND mode = 'SIReadLock';
ROLLBACK;

DROP TABLE tidscan;
