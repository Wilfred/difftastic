-- Perform tests on the Memoize node.

-- The cache hits/misses/evictions from the Memoize node can vary between
-- machines.  Let's just replace the number with an 'N'.  In order to allow us
-- to perform validation when the measure was zero, we replace a zero value
-- with "Zero".  All other numbers are replaced with 'N'.
create function explain_memoize(query text, hide_hitmiss bool) returns setof text
language plpgsql as
$$
declare
    ln text;
begin
    for ln in
        execute format('explain (analyze, costs off, summary off, timing off) %s',
            query)
    loop
        if hide_hitmiss = true then
                ln := regexp_replace(ln, 'Hits: 0', 'Hits: Zero');
                ln := regexp_replace(ln, 'Hits: \d+', 'Hits: N');
                ln := regexp_replace(ln, 'Misses: 0', 'Misses: Zero');
                ln := regexp_replace(ln, 'Misses: \d+', 'Misses: N');
        end if;
        ln := regexp_replace(ln, 'Evictions: 0', 'Evictions: Zero');
        ln := regexp_replace(ln, 'Evictions: \d+', 'Evictions: N');
        ln := regexp_replace(ln, 'Memory Usage: \d+', 'Memory Usage: N');
	ln := regexp_replace(ln, 'Heap Fetches: \d+', 'Heap Fetches: N');
	ln := regexp_replace(ln, 'loops=\d+', 'loops=N');
        return next ln;
    end loop;
end;
$$;

-- Ensure we get a memoize node on the inner side of the nested loop
SET enable_hashjoin TO off;
SET enable_bitmapscan TO off;

SELECT explain_memoize('
SELECT COUNT(*),AVG(t1.unique1) FROM tenk1 t1
INNER JOIN tenk1 t2 ON t1.unique1 = t2.twenty
WHERE t2.unique1 < 1000;', false);

-- And check we get the expected results.
SELECT COUNT(*),AVG(t1.unique1) FROM tenk1 t1
INNER JOIN tenk1 t2 ON t1.unique1 = t2.twenty
WHERE t2.unique1 < 1000;

-- Try with LATERAL joins
SELECT explain_memoize('
SELECT COUNT(*),AVG(t2.unique1) FROM tenk1 t1,
LATERAL (SELECT t2.unique1 FROM tenk1 t2 WHERE t1.twenty = t2.unique1) t2
WHERE t1.unique1 < 1000;', false);

-- And check we get the expected results.
SELECT COUNT(*),AVG(t2.unique1) FROM tenk1 t1,
LATERAL (SELECT t2.unique1 FROM tenk1 t2 WHERE t1.twenty = t2.unique1) t2
WHERE t1.unique1 < 1000;

-- Reduce work_mem and hash_mem_multiplier so that we see some cache evictions
SET work_mem TO '64kB';
SET hash_mem_multiplier TO 1.0;
SET enable_mergejoin TO off;
-- Ensure we get some evictions.  We're unable to validate the hits and misses
-- here as the number of entries that fit in the cache at once will vary
-- between different machines.
SELECT explain_memoize('
SELECT COUNT(*),AVG(t1.unique1) FROM tenk1 t1
INNER JOIN tenk1 t2 ON t1.unique1 = t2.thousand
WHERE t2.unique1 < 1200;', true);

CREATE TABLE flt (f float);
CREATE INDEX flt_f_idx ON flt (f);
INSERT INTO flt VALUES('-0.0'::float),('+0.0'::float);
ANALYZE flt;

SET enable_seqscan TO off;

-- Ensure memoize operates in logical mode
SELECT explain_memoize('
SELECT * FROM flt f1 INNER JOIN flt f2 ON f1.f = f2.f;', false);

-- Ensure memoize operates in binary mode
SELECT explain_memoize('
SELECT * FROM flt f1 INNER JOIN flt f2 ON f1.f >= f2.f;', false);

DROP TABLE flt;

-- Exercise Memoize in binary mode with a large fixed width type and a
-- varlena type.
CREATE TABLE strtest (n name, t text);
CREATE INDEX strtest_n_idx ON strtest (n);
CREATE INDEX strtest_t_idx ON strtest (t);
INSERT INTO strtest VALUES('one','one'),('two','two'),('three',repeat(md5('three'),100));
-- duplicate rows so we get some cache hits
INSERT INTO strtest SELECT * FROM strtest;
ANALYZE strtest;

-- Ensure we get 3 hits and 3 misses
SELECT explain_memoize('
SELECT * FROM strtest s1 INNER JOIN strtest s2 ON s1.n >= s2.n;', false);

-- Ensure we get 3 hits and 3 misses
SELECT explain_memoize('
SELECT * FROM strtest s1 INNER JOIN strtest s2 ON s1.t >= s2.t;', false);

DROP TABLE strtest;

-- Exercise Memoize code that flushes the cache when a parameter changes which
-- is not part of the cache key.

-- Ensure we get a Memoize plan
EXPLAIN (COSTS OFF)
SELECT unique1 FROM tenk1 t0
WHERE unique1 < 3
  AND EXISTS (
	SELECT 1 FROM tenk1 t1
	INNER JOIN tenk1 t2 ON t1.unique1 = t2.hundred
	WHERE t0.ten = t1.twenty AND t0.two <> t2.four OFFSET 0);

-- Ensure the above query returns the correct result
SELECT unique1 FROM tenk1 t0
WHERE unique1 < 3
  AND EXISTS (
	SELECT 1 FROM tenk1 t1
	INNER JOIN tenk1 t2 ON t1.unique1 = t2.hundred
	WHERE t0.ten = t1.twenty AND t0.two <> t2.four OFFSET 0);

RESET enable_seqscan;
RESET enable_mergejoin;
RESET work_mem;
RESET hash_mem_multiplier;
RESET enable_bitmapscan;
RESET enable_hashjoin;

-- Test parallel plans with Memoize
SET min_parallel_table_scan_size TO 0;
SET parallel_setup_cost TO 0;
SET parallel_tuple_cost TO 0;
SET max_parallel_workers_per_gather TO 2;

-- Ensure we get a parallel plan.
EXPLAIN (COSTS OFF)
SELECT COUNT(*),AVG(t2.unique1) FROM tenk1 t1,
LATERAL (SELECT t2.unique1 FROM tenk1 t2 WHERE t1.twenty = t2.unique1) t2
WHERE t1.unique1 < 1000;

-- And ensure the parallel plan gives us the correct results.
SELECT COUNT(*),AVG(t2.unique1) FROM tenk1 t1,
LATERAL (SELECT t2.unique1 FROM tenk1 t2 WHERE t1.twenty = t2.unique1) t2
WHERE t1.unique1 < 1000;

RESET max_parallel_workers_per_gather;
RESET parallel_tuple_cost;
RESET parallel_setup_cost;
RESET min_parallel_table_scan_size;
