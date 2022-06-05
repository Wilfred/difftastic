-- When we have to sort the entire table, incremental sort will
-- be slower than plain sort, so it should not be used.
explain (costs off)
select * from (select * from tenk1 order by four) t order by four, ten;

-- When there is a LIMIT clause, incremental sort is beneficial because
-- it only has to sort some of the groups, and not the entire table.
explain (costs off)
select * from (select * from tenk1 order by four) t order by four, ten
limit 1;

-- When work_mem is not enough to sort the entire table, incremental sort
-- may be faster if individual groups still fit into work_mem.
set work_mem to '2MB';
explain (costs off)
select * from (select * from tenk1 order by four) t order by four, ten;
reset work_mem;

create table t(a integer, b integer);

create or replace function explain_analyze_without_memory(query text)
returns table (out_line text) language plpgsql
as
$$
declare
  line text;
begin
  for line in
    execute 'explain (analyze, costs off, summary off, timing off) ' || query
  loop
    out_line := regexp_replace(line, '\d+kB', 'NNkB', 'g');
    return next;
  end loop;
end;
$$;

create or replace function explain_analyze_inc_sort_nodes(query text)
returns jsonb language plpgsql
as
$$
declare
  elements jsonb;
  element jsonb;
  matching_nodes jsonb := '[]'::jsonb;
begin
  execute 'explain (analyze, costs off, summary off, timing off, format ''json'') ' || query into strict elements;
  while jsonb_array_length(elements) > 0 loop
    element := elements->0;
    elements := elements - 0;
    case jsonb_typeof(element)
    when 'array' then
      if jsonb_array_length(element) > 0 then
        elements := elements || element;
      end if;
    when 'object' then
      if element ? 'Plan' then
        elements := elements || jsonb_build_array(element->'Plan');
        element := element - 'Plan';
      else
        if element ? 'Plans' then
          elements := elements || jsonb_build_array(element->'Plans');
          element := element - 'Plans';
        end if;
        if (element->>'Node Type')::text = 'Incremental Sort' then
          matching_nodes := matching_nodes || element;
        end if;
      end if;
    end case;
  end loop;
  return matching_nodes;
end;
$$;

create or replace function explain_analyze_inc_sort_nodes_without_memory(query text)
returns jsonb language plpgsql
as
$$
declare
  nodes jsonb := '[]'::jsonb;
  node jsonb;
  group_key text;
  space_key text;
begin
  for node in select * from jsonb_array_elements(explain_analyze_inc_sort_nodes(query)) t loop
    for group_key in select unnest(array['Full-sort Groups', 'Pre-sorted Groups']::text[]) t loop
      for space_key in select unnest(array['Sort Space Memory', 'Sort Space Disk']::text[]) t loop
        node := jsonb_set(node, array[group_key, space_key, 'Average Sort Space Used'], '"NN"', false);
        node := jsonb_set(node, array[group_key, space_key, 'Peak Sort Space Used'], '"NN"', false);
      end loop;
    end loop;
    nodes := nodes || node;
  end loop;
  return nodes;
end;
$$;

create or replace function explain_analyze_inc_sort_nodes_verify_invariants(query text)
returns bool language plpgsql
as
$$
declare
  node jsonb;
  group_stats jsonb;
  group_key text;
  space_key text;
begin
  for node in select * from jsonb_array_elements(explain_analyze_inc_sort_nodes(query)) t loop
    for group_key in select unnest(array['Full-sort Groups', 'Pre-sorted Groups']::text[]) t loop
      group_stats := node->group_key;
      for space_key in select unnest(array['Sort Space Memory', 'Sort Space Disk']::text[]) t loop
        if (group_stats->space_key->'Peak Sort Space Used')::bigint < (group_stats->space_key->'Peak Sort Space Used')::bigint then
          raise exception '% has invalid max space < average space', group_key;
        end if;
      end loop;
    end loop;
  end loop;
  return true;
end;
$$;

-- A single large group tested around each mode transition point.
insert into t(a, b) select i/100 + 1, i + 1 from generate_series(0, 999) n(i);
analyze t;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 31;
select * from (select * from t order by a) s order by a, b limit 31;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 32;
select * from (select * from t order by a) s order by a, b limit 32;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 33;
select * from (select * from t order by a) s order by a, b limit 33;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 65;
select * from (select * from t order by a) s order by a, b limit 65;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 66;
select * from (select * from t order by a) s order by a, b limit 66;
delete from t;

-- An initial large group followed by a small group.
insert into t(a, b) select i/50 + 1, i + 1 from generate_series(0, 999) n(i);
analyze t;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 55;
select * from (select * from t order by a) s order by a, b limit 55;
-- Test EXPLAIN ANALYZE with only a fullsort group.
select explain_analyze_without_memory('select * from (select * from t order by a) s order by a, b limit 55');
select jsonb_pretty(explain_analyze_inc_sort_nodes_without_memory('select * from (select * from t order by a) s order by a, b limit 55'));
select explain_analyze_inc_sort_nodes_verify_invariants('select * from (select * from t order by a) s order by a, b limit 55');
delete from t;

-- An initial small group followed by a large group.
insert into t(a, b) select (case when i < 5 then i else 9 end), i from generate_series(1, 1000) n(i);
analyze t;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 70;
select * from (select * from t order by a) s order by a, b limit 70;
-- Checks case where we hit a group boundary at the last tuple of a batch.
-- Because the full sort state is bounded, we scan 64 tuples (the mode
-- transition point) but only retain 5. Thus when we transition modes, all
-- tuples in the full sort state have different prefix keys.
explain (costs off) select * from (select * from t order by a) s order by a, b limit 5;
select * from (select * from t order by a) s order by a, b limit 5;

-- Test rescan.
begin;
-- We force the planner to choose a plan with incremental sort on the right side
-- of a nested loop join node. That way we trigger the rescan code path.
set local enable_hashjoin = off;
set local enable_mergejoin = off;
set local enable_material = off;
set local enable_sort = off;
explain (costs off) select * from t left join (select * from (select * from t order by a) v order by a, b) s on s.a = t.a where t.a in (1, 2);
select * from t left join (select * from (select * from t order by a) v order by a, b) s on s.a = t.a where t.a in (1, 2);
rollback;
-- Test EXPLAIN ANALYZE with both fullsort and presorted groups.
select explain_analyze_without_memory('select * from (select * from t order by a) s order by a, b limit 70');
select jsonb_pretty(explain_analyze_inc_sort_nodes_without_memory('select * from (select * from t order by a) s order by a, b limit 70'));
select explain_analyze_inc_sort_nodes_verify_invariants('select * from (select * from t order by a) s order by a, b limit 70');
delete from t;

-- Small groups of 10 tuples each tested around each mode transition point.
insert into t(a, b) select i / 10, i from generate_series(1, 1000) n(i);
analyze t;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 31;
select * from (select * from t order by a) s order by a, b limit 31;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 32;
select * from (select * from t order by a) s order by a, b limit 32;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 33;
select * from (select * from t order by a) s order by a, b limit 33;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 65;
select * from (select * from t order by a) s order by a, b limit 65;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 66;
select * from (select * from t order by a) s order by a, b limit 66;
delete from t;

-- Small groups of only 1 tuple each tested around each mode transition point.
insert into t(a, b) select i, i from generate_series(1, 1000) n(i);
analyze t;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 31;
select * from (select * from t order by a) s order by a, b limit 31;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 32;
select * from (select * from t order by a) s order by a, b limit 32;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 33;
select * from (select * from t order by a) s order by a, b limit 33;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 65;
select * from (select * from t order by a) s order by a, b limit 65;
explain (costs off) select * from (select * from t order by a) s order by a, b limit 66;
select * from (select * from t order by a) s order by a, b limit 66;
delete from t;

drop table t;

-- Incremental sort vs. parallel queries
set min_parallel_table_scan_size = '1kB';
set min_parallel_index_scan_size = '1kB';
set parallel_setup_cost = 0;
set parallel_tuple_cost = 0;
set max_parallel_workers_per_gather = 2;

create table t (a int, b int, c int);
insert into t select mod(i,10),mod(i,10),i from generate_series(1,60000) s(i);
create index on t (a);
analyze t;

set enable_incremental_sort = off;
explain (costs off) select a,b,sum(c) from t group by 1,2 order by 1,2,3 limit 1;

set enable_incremental_sort = on;
explain (costs off) select a,b,sum(c) from t group by 1,2 order by 1,2,3 limit 1;

-- Incremental sort vs. set operations with varno 0
set enable_hashagg to off;
explain (costs off) select * from t union select * from t order by 1,3;

-- Full sort, not just incremental sort can be pushed below a gather merge path
-- by generate_useful_gather_paths.
explain (costs off) select distinct a,b from t;

drop table t;

-- Sort pushdown can't go below where expressions are part of the rel target.
-- In particular this is interesting for volatile expressions which have to
-- go above joins since otherwise we'll incorrectly use expression evaluations
-- across multiple rows.
set enable_hashagg=off;
set enable_seqscan=off;
set enable_incremental_sort = off;
set parallel_tuple_cost=0;
set parallel_setup_cost=0;
set min_parallel_table_scan_size = 0;
set min_parallel_index_scan_size = 0;

-- Parallel sort below join.
explain (costs off) select distinct sub.unique1, stringu1
from tenk1, lateral (select tenk1.unique1 from generate_series(1, 1000)) as sub;
explain (costs off) select sub.unique1, stringu1
from tenk1, lateral (select tenk1.unique1 from generate_series(1, 1000)) as sub
order by 1, 2;
-- Parallel sort but with expression that can be safely generated at the base rel.
explain (costs off) select distinct sub.unique1, md5(stringu1)
from tenk1, lateral (select tenk1.unique1 from generate_series(1, 1000)) as sub;
explain (costs off) select sub.unique1, md5(stringu1)
from tenk1, lateral (select tenk1.unique1 from generate_series(1, 1000)) as sub
order by 1, 2;
-- Parallel sort with an aggregate that can be safely generated in parallel,
-- but we can't sort by partial aggregate values.
explain (costs off) select count(*)
from tenk1 t1
join tenk1 t2 on t1.unique1 = t2.unique2
join tenk1 t3 on t2.unique1 = t3.unique1
order by count(*);
-- Parallel sort but with expression (correlated subquery) that
-- is prohibited in parallel plans.
explain (costs off) select distinct
  unique1,
  (select t.unique1 from tenk1 where tenk1.unique1 = t.unique1)
from tenk1 t, generate_series(1, 1000);
explain (costs off) select
  unique1,
  (select t.unique1 from tenk1 where tenk1.unique1 = t.unique1)
from tenk1 t, generate_series(1, 1000)
order by 1, 2;
-- Parallel sort but with expression not available until the upper rel.
explain (costs off) select distinct sub.unique1, stringu1 || random()::text
from tenk1, lateral (select tenk1.unique1 from generate_series(1, 1000)) as sub;
explain (costs off) select sub.unique1, stringu1 || random()::text
from tenk1, lateral (select tenk1.unique1 from generate_series(1, 1000)) as sub
order by 1, 2;
-- Disallow pushing down sort when pathkey is an SRF.
explain (costs off) select unique1 from tenk1 order by unnest('{1,2}'::int[]);
