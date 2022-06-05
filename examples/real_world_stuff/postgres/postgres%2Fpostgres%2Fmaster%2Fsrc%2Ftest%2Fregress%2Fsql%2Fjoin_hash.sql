--
-- exercises for the hash join code
--

begin;

set local min_parallel_table_scan_size = 0;
set local parallel_setup_cost = 0;
set local enable_hashjoin = on;

-- Extract bucket and batch counts from an explain analyze plan.  In
-- general we can't make assertions about how many batches (or
-- buckets) will be required because it can vary, but we can in some
-- special cases and we can check for growth.
create or replace function find_hash(node json)
returns json language plpgsql
as
$$
declare
  x json;
  child json;
begin
  if node->>'Node Type' = 'Hash' then
    return node;
  else
    for child in select json_array_elements(node->'Plans')
    loop
      x := find_hash(child);
      if x is not null then
        return x;
      end if;
    end loop;
    return null;
  end if;
end;
$$;
create or replace function hash_join_batches(query text)
returns table (original int, final int) language plpgsql
as
$$
declare
  whole_plan json;
  hash_node json;
begin
  for whole_plan in
    execute 'explain (analyze, format ''json'') ' || query
  loop
    hash_node := find_hash(json_extract_path(whole_plan, '0', 'Plan'));
    original := hash_node->>'Original Hash Batches';
    final := hash_node->>'Hash Batches';
    return next;
  end loop;
end;
$$;

-- Make a simple relation with well distributed keys and correctly
-- estimated size.
create table simple as
  select generate_series(1, 20000) AS id, 'aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa';
alter table simple set (parallel_workers = 2);
analyze simple;

-- Make a relation whose size we will under-estimate.  We want stats
-- to say 1000 rows, but actually there are 20,000 rows.
create table bigger_than_it_looks as
  select generate_series(1, 20000) as id, 'aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa';
alter table bigger_than_it_looks set (autovacuum_enabled = 'false');
alter table bigger_than_it_looks set (parallel_workers = 2);
analyze bigger_than_it_looks;
update pg_class set reltuples = 1000 where relname = 'bigger_than_it_looks';

-- Make a relation whose size we underestimate and that also has a
-- kind of skew that breaks our batching scheme.  We want stats to say
-- 2 rows, but actually there are 20,000 rows with the same key.
create table extremely_skewed (id int, t text);
alter table extremely_skewed set (autovacuum_enabled = 'false');
alter table extremely_skewed set (parallel_workers = 2);
analyze extremely_skewed;
insert into extremely_skewed
  select 42 as id, 'aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa'
  from generate_series(1, 20000);
update pg_class
  set reltuples = 2, relpages = pg_relation_size('extremely_skewed') / 8192
  where relname = 'extremely_skewed';

-- Make a relation with a couple of enormous tuples.
create table wide as select generate_series(1, 2) as id, rpad('', 320000, 'x') as t;
alter table wide set (parallel_workers = 2);

-- The "optimal" case: the hash table fits in memory; we plan for 1
-- batch, we stick to that number, and peak memory usage stays within
-- our work_mem budget

-- non-parallel
savepoint settings;
set local max_parallel_workers_per_gather = 0;
set local work_mem = '4MB';
set local hash_mem_multiplier = 1.0;
explain (costs off)
  select count(*) from simple r join simple s using (id);
select count(*) from simple r join simple s using (id);
select original > 1 as initially_multibatch, final > original as increased_batches
  from hash_join_batches(
$$
  select count(*) from simple r join simple s using (id);
$$);
rollback to settings;

-- parallel with parallel-oblivious hash join
savepoint settings;
set local max_parallel_workers_per_gather = 2;
set local work_mem = '4MB';
set local hash_mem_multiplier = 1.0;
set local enable_parallel_hash = off;
explain (costs off)
  select count(*) from simple r join simple s using (id);
select count(*) from simple r join simple s using (id);
select original > 1 as initially_multibatch, final > original as increased_batches
  from hash_join_batches(
$$
  select count(*) from simple r join simple s using (id);
$$);
rollback to settings;

-- parallel with parallel-aware hash join
savepoint settings;
set local max_parallel_workers_per_gather = 2;
set local work_mem = '4MB';
set local hash_mem_multiplier = 1.0;
set local enable_parallel_hash = on;
explain (costs off)
  select count(*) from simple r join simple s using (id);
select count(*) from simple r join simple s using (id);
select original > 1 as initially_multibatch, final > original as increased_batches
  from hash_join_batches(
$$
  select count(*) from simple r join simple s using (id);
$$);
rollback to settings;

-- The "good" case: batches required, but we plan the right number; we
-- plan for some number of batches, and we stick to that number, and
-- peak memory usage says within our work_mem budget

-- non-parallel
savepoint settings;
set local max_parallel_workers_per_gather = 0;
set local work_mem = '128kB';
set local hash_mem_multiplier = 1.0;
explain (costs off)
  select count(*) from simple r join simple s using (id);
select count(*) from simple r join simple s using (id);
select original > 1 as initially_multibatch, final > original as increased_batches
  from hash_join_batches(
$$
  select count(*) from simple r join simple s using (id);
$$);
rollback to settings;

-- parallel with parallel-oblivious hash join
savepoint settings;
set local max_parallel_workers_per_gather = 2;
set local work_mem = '128kB';
set local hash_mem_multiplier = 1.0;
set local enable_parallel_hash = off;
explain (costs off)
  select count(*) from simple r join simple s using (id);
select count(*) from simple r join simple s using (id);
select original > 1 as initially_multibatch, final > original as increased_batches
  from hash_join_batches(
$$
  select count(*) from simple r join simple s using (id);
$$);
rollback to settings;

-- parallel with parallel-aware hash join
savepoint settings;
set local max_parallel_workers_per_gather = 2;
set local work_mem = '192kB';
set local hash_mem_multiplier = 1.0;
set local enable_parallel_hash = on;
explain (costs off)
  select count(*) from simple r join simple s using (id);
select count(*) from simple r join simple s using (id);
select original > 1 as initially_multibatch, final > original as increased_batches
  from hash_join_batches(
$$
  select count(*) from simple r join simple s using (id);
$$);
rollback to settings;

-- The "bad" case: during execution we need to increase number of
-- batches; in this case we plan for 1 batch, and increase at least a
-- couple of times, and peak memory usage stays within our work_mem
-- budget

-- non-parallel
savepoint settings;
set local max_parallel_workers_per_gather = 0;
set local work_mem = '128kB';
set local hash_mem_multiplier = 1.0;
explain (costs off)
  select count(*) FROM simple r JOIN bigger_than_it_looks s USING (id);
select count(*) FROM simple r JOIN bigger_than_it_looks s USING (id);
select original > 1 as initially_multibatch, final > original as increased_batches
  from hash_join_batches(
$$
  select count(*) FROM simple r JOIN bigger_than_it_looks s USING (id);
$$);
rollback to settings;

-- parallel with parallel-oblivious hash join
savepoint settings;
set local max_parallel_workers_per_gather = 2;
set local work_mem = '128kB';
set local hash_mem_multiplier = 1.0;
set local enable_parallel_hash = off;
explain (costs off)
  select count(*) from simple r join bigger_than_it_looks s using (id);
select count(*) from simple r join bigger_than_it_looks s using (id);
select original > 1 as initially_multibatch, final > original as increased_batches
  from hash_join_batches(
$$
  select count(*) from simple r join bigger_than_it_looks s using (id);
$$);
rollback to settings;

-- parallel with parallel-aware hash join
savepoint settings;
set local max_parallel_workers_per_gather = 1;
set local work_mem = '192kB';
set local hash_mem_multiplier = 1.0;
set local enable_parallel_hash = on;
explain (costs off)
  select count(*) from simple r join bigger_than_it_looks s using (id);
select count(*) from simple r join bigger_than_it_looks s using (id);
select original > 1 as initially_multibatch, final > original as increased_batches
  from hash_join_batches(
$$
  select count(*) from simple r join bigger_than_it_looks s using (id);
$$);
rollback to settings;

-- The "ugly" case: increasing the number of batches during execution
-- doesn't help, so stop trying to fit in work_mem and hope for the
-- best; in this case we plan for 1 batch, increases just once and
-- then stop increasing because that didn't help at all, so we blow
-- right through the work_mem budget and hope for the best...

-- non-parallel
savepoint settings;
set local max_parallel_workers_per_gather = 0;
set local work_mem = '128kB';
set local hash_mem_multiplier = 1.0;
explain (costs off)
  select count(*) from simple r join extremely_skewed s using (id);
select count(*) from simple r join extremely_skewed s using (id);
select * from hash_join_batches(
$$
  select count(*) from simple r join extremely_skewed s using (id);
$$);
rollback to settings;

-- parallel with parallel-oblivious hash join
savepoint settings;
set local max_parallel_workers_per_gather = 2;
set local work_mem = '128kB';
set local hash_mem_multiplier = 1.0;
set local enable_parallel_hash = off;
explain (costs off)
  select count(*) from simple r join extremely_skewed s using (id);
select count(*) from simple r join extremely_skewed s using (id);
select * from hash_join_batches(
$$
  select count(*) from simple r join extremely_skewed s using (id);
$$);
rollback to settings;

-- parallel with parallel-aware hash join
savepoint settings;
set local max_parallel_workers_per_gather = 1;
set local work_mem = '128kB';
set local hash_mem_multiplier = 1.0;
set local enable_parallel_hash = on;
explain (costs off)
  select count(*) from simple r join extremely_skewed s using (id);
select count(*) from simple r join extremely_skewed s using (id);
select * from hash_join_batches(
$$
  select count(*) from simple r join extremely_skewed s using (id);
$$);
rollback to settings;

-- A couple of other hash join tests unrelated to work_mem management.

-- Check that EXPLAIN ANALYZE has data even if the leader doesn't participate
savepoint settings;
set local max_parallel_workers_per_gather = 2;
set local work_mem = '4MB';
set local hash_mem_multiplier = 1.0;
set local parallel_leader_participation = off;
select * from hash_join_batches(
$$
  select count(*) from simple r join simple s using (id);
$$);
rollback to settings;

-- Exercise rescans.  We'll turn off parallel_leader_participation so
-- that we can check that instrumentation comes back correctly.

create table join_foo as select generate_series(1, 3) as id, 'xxxxx'::text as t;
alter table join_foo set (parallel_workers = 0);
create table join_bar as select generate_series(1, 10000) as id, 'xxxxx'::text as t;
alter table join_bar set (parallel_workers = 2);

-- multi-batch with rescan, parallel-oblivious
savepoint settings;
set enable_parallel_hash = off;
set parallel_leader_participation = off;
set min_parallel_table_scan_size = 0;
set parallel_setup_cost = 0;
set parallel_tuple_cost = 0;
set max_parallel_workers_per_gather = 2;
set enable_material = off;
set enable_mergejoin = off;
set work_mem = '64kB';
set hash_mem_multiplier = 1.0;
explain (costs off)
  select count(*) from join_foo
    left join (select b1.id, b1.t from join_bar b1 join join_bar b2 using (id)) ss
    on join_foo.id < ss.id + 1 and join_foo.id > ss.id - 1;
select count(*) from join_foo
  left join (select b1.id, b1.t from join_bar b1 join join_bar b2 using (id)) ss
  on join_foo.id < ss.id + 1 and join_foo.id > ss.id - 1;
select final > 1 as multibatch
  from hash_join_batches(
$$
  select count(*) from join_foo
    left join (select b1.id, b1.t from join_bar b1 join join_bar b2 using (id)) ss
    on join_foo.id < ss.id + 1 and join_foo.id > ss.id - 1;
$$);
rollback to settings;

-- single-batch with rescan, parallel-oblivious
savepoint settings;
set enable_parallel_hash = off;
set parallel_leader_participation = off;
set min_parallel_table_scan_size = 0;
set parallel_setup_cost = 0;
set parallel_tuple_cost = 0;
set max_parallel_workers_per_gather = 2;
set enable_material = off;
set enable_mergejoin = off;
set work_mem = '4MB';
set hash_mem_multiplier = 1.0;
explain (costs off)
  select count(*) from join_foo
    left join (select b1.id, b1.t from join_bar b1 join join_bar b2 using (id)) ss
    on join_foo.id < ss.id + 1 and join_foo.id > ss.id - 1;
select count(*) from join_foo
  left join (select b1.id, b1.t from join_bar b1 join join_bar b2 using (id)) ss
  on join_foo.id < ss.id + 1 and join_foo.id > ss.id - 1;
select final > 1 as multibatch
  from hash_join_batches(
$$
  select count(*) from join_foo
    left join (select b1.id, b1.t from join_bar b1 join join_bar b2 using (id)) ss
    on join_foo.id < ss.id + 1 and join_foo.id > ss.id - 1;
$$);
rollback to settings;

-- multi-batch with rescan, parallel-aware
savepoint settings;
set enable_parallel_hash = on;
set parallel_leader_participation = off;
set min_parallel_table_scan_size = 0;
set parallel_setup_cost = 0;
set parallel_tuple_cost = 0;
set max_parallel_workers_per_gather = 2;
set enable_material = off;
set enable_mergejoin = off;
set work_mem = '64kB';
set hash_mem_multiplier = 1.0;
explain (costs off)
  select count(*) from join_foo
    left join (select b1.id, b1.t from join_bar b1 join join_bar b2 using (id)) ss
    on join_foo.id < ss.id + 1 and join_foo.id > ss.id - 1;
select count(*) from join_foo
  left join (select b1.id, b1.t from join_bar b1 join join_bar b2 using (id)) ss
  on join_foo.id < ss.id + 1 and join_foo.id > ss.id - 1;
select final > 1 as multibatch
  from hash_join_batches(
$$
  select count(*) from join_foo
    left join (select b1.id, b1.t from join_bar b1 join join_bar b2 using (id)) ss
    on join_foo.id < ss.id + 1 and join_foo.id > ss.id - 1;
$$);
rollback to settings;

-- single-batch with rescan, parallel-aware
savepoint settings;
set enable_parallel_hash = on;
set parallel_leader_participation = off;
set min_parallel_table_scan_size = 0;
set parallel_setup_cost = 0;
set parallel_tuple_cost = 0;
set max_parallel_workers_per_gather = 2;
set enable_material = off;
set enable_mergejoin = off;
set work_mem = '4MB';
set hash_mem_multiplier = 1.0;
explain (costs off)
  select count(*) from join_foo
    left join (select b1.id, b1.t from join_bar b1 join join_bar b2 using (id)) ss
    on join_foo.id < ss.id + 1 and join_foo.id > ss.id - 1;
select count(*) from join_foo
  left join (select b1.id, b1.t from join_bar b1 join join_bar b2 using (id)) ss
  on join_foo.id < ss.id + 1 and join_foo.id > ss.id - 1;
select final > 1 as multibatch
  from hash_join_batches(
$$
  select count(*) from join_foo
    left join (select b1.id, b1.t from join_bar b1 join join_bar b2 using (id)) ss
    on join_foo.id < ss.id + 1 and join_foo.id > ss.id - 1;
$$);
rollback to settings;

-- A full outer join where every record is matched.

-- non-parallel
savepoint settings;
set local max_parallel_workers_per_gather = 0;
explain (costs off)
     select  count(*) from simple r full outer join simple s using (id);
select  count(*) from simple r full outer join simple s using (id);
rollback to settings;

-- parallelism not possible with parallel-oblivious outer hash join
savepoint settings;
set local max_parallel_workers_per_gather = 2;
explain (costs off)
     select  count(*) from simple r full outer join simple s using (id);
select  count(*) from simple r full outer join simple s using (id);
rollback to settings;

-- An full outer join where every record is not matched.

-- non-parallel
savepoint settings;
set local max_parallel_workers_per_gather = 0;
explain (costs off)
     select  count(*) from simple r full outer join simple s on (r.id = 0 - s.id);
select  count(*) from simple r full outer join simple s on (r.id = 0 - s.id);
rollback to settings;

-- parallelism not possible with parallel-oblivious outer hash join
savepoint settings;
set local max_parallel_workers_per_gather = 2;
explain (costs off)
     select  count(*) from simple r full outer join simple s on (r.id = 0 - s.id);
select  count(*) from simple r full outer join simple s on (r.id = 0 - s.id);
rollback to settings;

-- exercise special code paths for huge tuples (note use of non-strict
-- expression and left join required to get the detoasted tuple into
-- the hash table)

-- parallel with parallel-aware hash join (hits ExecParallelHashLoadTuple and
-- sts_puttuple oversized tuple cases because it's multi-batch)
savepoint settings;
set max_parallel_workers_per_gather = 2;
set enable_parallel_hash = on;
set work_mem = '128kB';
set hash_mem_multiplier = 1.0;
explain (costs off)
  select length(max(s.t))
  from wide left join (select id, coalesce(t, '') || '' as t from wide) s using (id);
select length(max(s.t))
from wide left join (select id, coalesce(t, '') || '' as t from wide) s using (id);
select final > 1 as multibatch
  from hash_join_batches(
$$
  select length(max(s.t))
  from wide left join (select id, coalesce(t, '') || '' as t from wide) s using (id);
$$);
rollback to settings;

rollback;


-- Verify that hash key expressions reference the correct
-- nodes. Hashjoin's hashkeys need to reference its outer plan, Hash's
-- need to reference Hash's outer plan (which is below HashJoin's
-- inner plan). It's not trivial to verify that the references are
-- correct (we don't display the hashkeys themselves), but if the
-- hashkeys contain subplan references, those will be displayed. Force
-- subplans to appear just about everywhere.
--
-- Bug report:
-- https://www.postgresql.org/message-id/CAPpHfdvGVegF_TKKRiBrSmatJL2dR9uwFCuR%2BteQ_8tEXU8mxg%40mail.gmail.com
--
BEGIN;
SET LOCAL enable_sort = OFF; -- avoid mergejoins
SET LOCAL from_collapse_limit = 1; -- allows easy changing of join order

CREATE TABLE hjtest_1 (a text, b int, id int, c bool);
CREATE TABLE hjtest_2 (a bool, id int, b text, c int);

INSERT INTO hjtest_1(a, b, id, c) VALUES ('text', 2, 1, false); -- matches
INSERT INTO hjtest_1(a, b, id, c) VALUES ('text', 1, 2, false); -- fails id join condition
INSERT INTO hjtest_1(a, b, id, c) VALUES ('text', 20, 1, false); -- fails < 50
INSERT INTO hjtest_1(a, b, id, c) VALUES ('text', 1, 1, false); -- fails (SELECT hjtest_1.b * 5) = (SELECT hjtest_2.c*5)

INSERT INTO hjtest_2(a, id, b, c) VALUES (true, 1, 'another', 2); -- matches
INSERT INTO hjtest_2(a, id, b, c) VALUES (true, 3, 'another', 7); -- fails id join condition
INSERT INTO hjtest_2(a, id, b, c) VALUES (true, 1, 'another', 90);  -- fails < 55
INSERT INTO hjtest_2(a, id, b, c) VALUES (true, 1, 'another', 3); -- fails (SELECT hjtest_1.b * 5) = (SELECT hjtest_2.c*5)
INSERT INTO hjtest_2(a, id, b, c) VALUES (true, 1, 'text', 1); --  fails hjtest_1.a <> hjtest_2.b;

EXPLAIN (COSTS OFF, VERBOSE)
SELECT hjtest_1.a a1, hjtest_2.a a2,hjtest_1.tableoid::regclass t1, hjtest_2.tableoid::regclass t2
FROM hjtest_1, hjtest_2
WHERE
    hjtest_1.id = (SELECT 1 WHERE hjtest_2.id = 1)
    AND (SELECT hjtest_1.b * 5) = (SELECT hjtest_2.c*5)
    AND (SELECT hjtest_1.b * 5) < 50
    AND (SELECT hjtest_2.c * 5) < 55
    AND hjtest_1.a <> hjtest_2.b;

SELECT hjtest_1.a a1, hjtest_2.a a2,hjtest_1.tableoid::regclass t1, hjtest_2.tableoid::regclass t2
FROM hjtest_1, hjtest_2
WHERE
    hjtest_1.id = (SELECT 1 WHERE hjtest_2.id = 1)
    AND (SELECT hjtest_1.b * 5) = (SELECT hjtest_2.c*5)
    AND (SELECT hjtest_1.b * 5) < 50
    AND (SELECT hjtest_2.c * 5) < 55
    AND hjtest_1.a <> hjtest_2.b;

EXPLAIN (COSTS OFF, VERBOSE)
SELECT hjtest_1.a a1, hjtest_2.a a2,hjtest_1.tableoid::regclass t1, hjtest_2.tableoid::regclass t2
FROM hjtest_2, hjtest_1
WHERE
    hjtest_1.id = (SELECT 1 WHERE hjtest_2.id = 1)
    AND (SELECT hjtest_1.b * 5) = (SELECT hjtest_2.c*5)
    AND (SELECT hjtest_1.b * 5) < 50
    AND (SELECT hjtest_2.c * 5) < 55
    AND hjtest_1.a <> hjtest_2.b;

SELECT hjtest_1.a a1, hjtest_2.a a2,hjtest_1.tableoid::regclass t1, hjtest_2.tableoid::regclass t2
FROM hjtest_2, hjtest_1
WHERE
    hjtest_1.id = (SELECT 1 WHERE hjtest_2.id = 1)
    AND (SELECT hjtest_1.b * 5) = (SELECT hjtest_2.c*5)
    AND (SELECT hjtest_1.b * 5) < 50
    AND (SELECT hjtest_2.c * 5) < 55
    AND hjtest_1.a <> hjtest_2.b;

ROLLBACK;
