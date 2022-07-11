-- tests for tidrangescans

SET enable_seqscan TO off;
CREATE TABLE tidrangescan(id integer, data text);

-- empty table
EXPLAIN (COSTS OFF)
SELECT ctid FROM tidrangescan WHERE ctid < '(1, 0)';
SELECT ctid FROM tidrangescan WHERE ctid < '(1, 0)';

EXPLAIN (COSTS OFF)
SELECT ctid FROM tidrangescan WHERE ctid > '(9, 0)';
SELECT ctid FROM tidrangescan WHERE ctid > '(9, 0)';

-- insert enough tuples to fill at least two pages
INSERT INTO tidrangescan SELECT i,repeat('x', 100) FROM generate_series(1,200) AS s(i);

-- remove all tuples after the 10th tuple on each page.  Trying to ensure
-- we get the same layout with all CPU architectures and smaller than standard
-- page sizes.
DELETE FROM tidrangescan
WHERE substring(ctid::text FROM ',(\d+)\)')::integer > 10 OR substring(ctid::text FROM '\((\d+),')::integer > 2;
VACUUM tidrangescan;

-- range scans with upper bound
EXPLAIN (COSTS OFF)
SELECT ctid FROM tidrangescan WHERE ctid < '(1,0)';
SELECT ctid FROM tidrangescan WHERE ctid < '(1,0)';

EXPLAIN (COSTS OFF)
SELECT ctid FROM tidrangescan WHERE ctid <= '(1,5)';
SELECT ctid FROM tidrangescan WHERE ctid <= '(1,5)';

EXPLAIN (COSTS OFF)
SELECT ctid FROM tidrangescan WHERE ctid < '(0,0)';
SELECT ctid FROM tidrangescan WHERE ctid < '(0,0)';

-- range scans with lower bound
EXPLAIN (COSTS OFF)
SELECT ctid FROM tidrangescan WHERE ctid > '(2,8)';
SELECT ctid FROM tidrangescan WHERE ctid > '(2,8)';

EXPLAIN (COSTS OFF)
SELECT ctid FROM tidrangescan WHERE '(2,8)' < ctid;
SELECT ctid FROM tidrangescan WHERE '(2,8)' < ctid;

EXPLAIN (COSTS OFF)
SELECT ctid FROM tidrangescan WHERE ctid >= '(2,8)';
SELECT ctid FROM tidrangescan WHERE ctid >= '(2,8)';

EXPLAIN (COSTS OFF)
SELECT ctid FROM tidrangescan WHERE ctid >= '(100,0)';
SELECT ctid FROM tidrangescan WHERE ctid >= '(100,0)';

-- range scans with both bounds
EXPLAIN (COSTS OFF)
SELECT ctid FROM tidrangescan WHERE ctid > '(1,4)' AND '(1,7)' >= ctid;
SELECT ctid FROM tidrangescan WHERE ctid > '(1,4)' AND '(1,7)' >= ctid;

EXPLAIN (COSTS OFF)
SELECT ctid FROM tidrangescan WHERE '(1,7)' >= ctid AND ctid > '(1,4)';
SELECT ctid FROM tidrangescan WHERE '(1,7)' >= ctid AND ctid > '(1,4)';

-- extreme offsets
SELECT ctid FROM tidrangescan WHERE ctid > '(0,65535)' AND ctid < '(1,0)' LIMIT 1;
SELECT ctid FROM tidrangescan WHERE ctid < '(0,0)' LIMIT 1;

SELECT ctid FROM tidrangescan WHERE ctid > '(4294967295,65535)';
SELECT ctid FROM tidrangescan WHERE ctid < '(0,0)';

-- NULLs in the range cannot return tuples
SELECT ctid FROM tidrangescan WHERE ctid >= (SELECT NULL::tid);

-- rescans
EXPLAIN (COSTS OFF)
SELECT t.ctid,t2.c FROM tidrangescan t,
LATERAL (SELECT count(*) c FROM tidrangescan t2 WHERE t2.ctid <= t.ctid) t2
WHERE t.ctid < '(1,0)';

SELECT t.ctid,t2.c FROM tidrangescan t,
LATERAL (SELECT count(*) c FROM tidrangescan t2 WHERE t2.ctid <= t.ctid) t2
WHERE t.ctid < '(1,0)';

-- cursors

-- Ensure we get a TID Range scan without a Materialize node.
EXPLAIN (COSTS OFF)
DECLARE c SCROLL CURSOR FOR SELECT ctid FROM tidrangescan WHERE ctid < '(1,0)';

BEGIN;
DECLARE c SCROLL CURSOR FOR SELECT ctid FROM tidrangescan WHERE ctid < '(1,0)';
FETCH NEXT c;
FETCH NEXT c;
FETCH PRIOR c;
FETCH FIRST c;
FETCH LAST c;
COMMIT;

DROP TABLE tidrangescan;

RESET enable_seqscan;
