--
-- grouping sets
--

-- test data sources

create temp view gstest1(a,b,v)
  as values (1,1,10),(1,1,11),(1,2,12),(1,2,13),(1,3,14),
            (2,3,15),
            (3,3,16),(3,4,17),
            (4,1,18),(4,1,19);

create temp table gstest2 (a integer, b integer, c integer, d integer,
                           e integer, f integer, g integer, h integer);
copy gstest2 from stdin;
1	1	1	1	1	1	1	1
1	1	1	1	1	1	1	2
1	1	1	1	1	1	2	2
1	1	1	1	1	2	2	2
1	1	1	1	2	2	2	2
1	1	1	2	2	2	2	2
1	1	2	2	2	2	2	2
1	2	2	2	2	2	2	2
2	2	2	2	2	2	2	2
\.

create temp table gstest3 (a integer, b integer, c integer, d integer);
copy gstest3 from stdin;
1	1	1	1
2	2	2	2
\.
alter table gstest3 add primary key (a);

create temp table gstest4(id integer, v integer,
                          unhashable_col bit(4), unsortable_col xid);
insert into gstest4
values (1,1,b'0000','1'), (2,2,b'0001','1'),
       (3,4,b'0010','2'), (4,8,b'0011','2'),
       (5,16,b'0000','2'), (6,32,b'0001','2'),
       (7,64,b'0010','1'), (8,128,b'0011','1');

create temp table gstest_empty (a integer, b integer, v integer);

create function gstest_data(v integer, out a integer, out b integer)
  returns setof record
  as $f$
    begin
      return query select v, i from generate_series(1,3) i;
    end;
  $f$ language plpgsql;

-- basic functionality

set enable_hashagg = false;  -- test hashing explicitly later

-- simple rollup with multiple plain aggregates, with and without ordering
-- (and with ordering differing from grouping)

select a, b, grouping(a,b), sum(v), count(*), max(v)
  from gstest1 group by rollup (a,b);
select a, b, grouping(a,b), sum(v), count(*), max(v)
  from gstest1 group by rollup (a,b) order by a,b;
select a, b, grouping(a,b), sum(v), count(*), max(v)
  from gstest1 group by rollup (a,b) order by b desc, a;
select a, b, grouping(a,b), sum(v), count(*), max(v)
  from gstest1 group by rollup (a,b) order by coalesce(a,0)+coalesce(b,0);

-- various types of ordered aggs
select a, b, grouping(a,b),
       array_agg(v order by v),
       string_agg(v::text, ':' order by v desc),
       percentile_disc(0.5) within group (order by v),
       rank(1,2,12) within group (order by a,b,v)
  from gstest1 group by rollup (a,b) order by a,b;

-- test usage of grouped columns in direct args of aggs
select grouping(a), a, array_agg(b),
       rank(a) within group (order by b nulls first),
       rank(a) within group (order by b nulls last)
  from (values (1,1),(1,4),(1,5),(3,1),(3,2)) v(a,b)
 group by rollup (a) order by a;

-- nesting with window functions
select a, b, sum(c), sum(sum(c)) over (order by a,b) as rsum
  from gstest2 group by rollup (a,b) order by rsum, a, b;

-- nesting with grouping sets
select sum(c) from gstest2
  group by grouping sets((), grouping sets((), grouping sets(())))
  order by 1 desc;
select sum(c) from gstest2
  group by grouping sets((), grouping sets((), grouping sets(((a, b)))))
  order by 1 desc;
select sum(c) from gstest2
  group by grouping sets(grouping sets(rollup(c), grouping sets(cube(c))))
  order by 1 desc;
select sum(c) from gstest2
  group by grouping sets(a, grouping sets(a, cube(b)))
  order by 1 desc;
select sum(c) from gstest2
  group by grouping sets(grouping sets((a, (b))))
  order by 1 desc;
select sum(c) from gstest2
  group by grouping sets(grouping sets((a, b)))
  order by 1 desc;
select sum(c) from gstest2
  group by grouping sets(grouping sets(a, grouping sets(a), a))
  order by 1 desc;
select sum(c) from gstest2
  group by grouping sets(grouping sets(a, grouping sets(a, grouping sets(a), ((a)), a, grouping sets(a), (a)), a))
  order by 1 desc;
select sum(c) from gstest2
  group by grouping sets((a,(a,b)), grouping sets((a,(a,b)),a))
  order by 1 desc;

-- empty input: first is 0 rows, second 1, third 3 etc.
select a, b, sum(v), count(*) from gstest_empty group by grouping sets ((a,b),a);
select a, b, sum(v), count(*) from gstest_empty group by grouping sets ((a,b),());
select a, b, sum(v), count(*) from gstest_empty group by grouping sets ((a,b),(),(),());
select sum(v), count(*) from gstest_empty group by grouping sets ((),(),());

-- empty input with joins tests some important code paths
select t1.a, t2.b, sum(t1.v), count(*) from gstest_empty t1, gstest_empty t2
 group by grouping sets ((t1.a,t2.b),());

-- simple joins, var resolution, GROUPING on join vars
select t1.a, t2.b, grouping(t1.a, t2.b), sum(t1.v), max(t2.a)
  from gstest1 t1, gstest2 t2
 group by grouping sets ((t1.a, t2.b), ());

select t1.a, t2.b, grouping(t1.a, t2.b), sum(t1.v), max(t2.a)
  from gstest1 t1 join gstest2 t2 on (t1.a=t2.a)
 group by grouping sets ((t1.a, t2.b), ());

select a, b, grouping(a, b), sum(t1.v), max(t2.c)
  from gstest1 t1 join gstest2 t2 using (a,b)
 group by grouping sets ((a, b), ());

-- check that functionally dependent cols are not nulled
select a, d, grouping(a,b,c)
  from gstest3
 group by grouping sets ((a,b), (a,c));

-- check that distinct grouping columns are kept separate
-- even if they are equal()
explain (costs off)
select g as alias1, g as alias2
  from generate_series(1,3) g
 group by alias1, rollup(alias2);

select g as alias1, g as alias2
  from generate_series(1,3) g
 group by alias1, rollup(alias2);

-- check that pulled-up subquery outputs still go to null when appropriate
select four, x
  from (select four, ten, 'foo'::text as x from tenk1) as t
  group by grouping sets (four, x)
  having x = 'foo';

select four, x || 'x'
  from (select four, ten, 'foo'::text as x from tenk1) as t
  group by grouping sets (four, x)
  order by four;

select (x+y)*1, sum(z)
 from (select 1 as x, 2 as y, 3 as z) s
 group by grouping sets (x+y, x);

select x, not x as not_x, q2 from
  (select *, q1 = 1 as x from int8_tbl i1) as t
  group by grouping sets(x, q2)
  order by x, q2;

-- check qual push-down rules for a subquery with grouping sets
explain (verbose, costs off)
select * from (
  select 1 as x, q1, sum(q2)
  from int8_tbl i1
  group by grouping sets(1, 2)
) ss
where x = 1 and q1 = 123;

select * from (
  select 1 as x, q1, sum(q2)
  from int8_tbl i1
  group by grouping sets(1, 2)
) ss
where x = 1 and q1 = 123;

-- check handling of pulled-up SubPlan in GROUPING() argument (bug #17479)
explain (verbose, costs off)
select grouping(ss.x)
from int8_tbl i1
cross join lateral (select (select i1.q1) as x) ss
group by ss.x;

select grouping(ss.x)
from int8_tbl i1
cross join lateral (select (select i1.q1) as x) ss
group by ss.x;

explain (verbose, costs off)
select (select grouping(ss.x))
from int8_tbl i1
cross join lateral (select (select i1.q1) as x) ss
group by ss.x;

select (select grouping(ss.x))
from int8_tbl i1
cross join lateral (select (select i1.q1) as x) ss
group by ss.x;

-- simple rescan tests

select a, b, sum(v.x)
  from (values (1),(2)) v(x), gstest_data(v.x)
 group by rollup (a,b);

select *
  from (values (1),(2)) v(x),
       lateral (select a, b, sum(v.x) from gstest_data(v.x) group by rollup (a,b)) s;

-- min max optimization should still work with GROUP BY ()
explain (costs off)
  select min(unique1) from tenk1 GROUP BY ();

-- Views with GROUPING SET queries
CREATE VIEW gstest_view AS select a, b, grouping(a,b), sum(c), count(*), max(c)
  from gstest2 group by rollup ((a,b,c),(c,d));

select pg_get_viewdef('gstest_view'::regclass, true);

-- Nested queries with 3 or more levels of nesting
select(select (select grouping(a,b) from (values (1)) v2(c)) from (values (1,2)) v1(a,b) group by (a,b)) from (values(6,7)) v3(e,f) GROUP BY ROLLUP(e,f);
select(select (select grouping(e,f) from (values (1)) v2(c)) from (values (1,2)) v1(a,b) group by (a,b)) from (values(6,7)) v3(e,f) GROUP BY ROLLUP(e,f);
select(select (select grouping(c) from (values (1)) v2(c) GROUP BY c) from (values (1,2)) v1(a,b) group by (a,b)) from (values(6,7)) v3(e,f) GROUP BY ROLLUP(e,f);

-- Combinations of operations
select a, b, c, d from gstest2 group by rollup(a,b),grouping sets(c,d);
select a, b from (values (1,2),(2,3)) v(a,b) group by a,b, grouping sets(a);

-- Tests for chained aggregates
select a, b, grouping(a,b), sum(v), count(*), max(v)
  from gstest1 group by grouping sets ((a,b),(a+1,b+1),(a+2,b+2)) order by 3,6;
select(select (select grouping(a,b) from (values (1)) v2(c)) from (values (1,2)) v1(a,b) group by (a,b)) from (values(6,7)) v3(e,f) GROUP BY ROLLUP((e+1),(f+1));
select(select (select grouping(a,b) from (values (1)) v2(c)) from (values (1,2)) v1(a,b) group by (a,b)) from (values(6,7)) v3(e,f) GROUP BY CUBE((e+1),(f+1)) ORDER BY (e+1),(f+1);
select a, b, sum(c), sum(sum(c)) over (order by a,b) as rsum
  from gstest2 group by cube (a,b) order by rsum, a, b;
select a, b, sum(c) from (values (1,1,10),(1,1,11),(1,2,12),(1,2,13),(1,3,14),(2,3,15),(3,3,16),(3,4,17),(4,1,18),(4,1,19)) v(a,b,c) group by rollup (a,b);
select a, b, sum(v.x)
  from (values (1),(2)) v(x), gstest_data(v.x)
 group by cube (a,b) order by a,b;

-- Test reordering of grouping sets
explain (costs off)
select * from gstest1 group by grouping sets((a,b,v),(v)) order by v,b,a;

-- Agg level check. This query should error out.
select (select grouping(a,b) from gstest2) from gstest2 group by a,b;

--Nested queries
select a, b, sum(c), count(*) from gstest2 group by grouping sets (rollup(a,b),a);

-- HAVING queries
select ten, sum(distinct four) from onek a
group by grouping sets((ten,four),(ten))
having exists (select 1 from onek b where sum(distinct a.four) = b.four);

-- Tests around pushdown of HAVING clauses, partially testing against previous bugs
select a,count(*) from gstest2 group by rollup(a) order by a;
select a,count(*) from gstest2 group by rollup(a) having a is distinct from 1 order by a;
explain (costs off)
  select a,count(*) from gstest2 group by rollup(a) having a is distinct from 1 order by a;

select v.c, (select count(*) from gstest2 group by () having v.c)
  from (values (false),(true)) v(c) order by v.c;
explain (costs off)
  select v.c, (select count(*) from gstest2 group by () having v.c)
    from (values (false),(true)) v(c) order by v.c;

-- HAVING with GROUPING queries
select ten, grouping(ten) from onek
group by grouping sets(ten) having grouping(ten) >= 0
order by 2,1;
select ten, grouping(ten) from onek
group by grouping sets(ten, four) having grouping(ten) > 0
order by 2,1;
select ten, grouping(ten) from onek
group by rollup(ten) having grouping(ten) > 0
order by 2,1;
select ten, grouping(ten) from onek
group by cube(ten) having grouping(ten) > 0
order by 2,1;
select ten, grouping(ten) from onek
group by (ten) having grouping(ten) >= 0
order by 2,1;

-- FILTER queries
select ten, sum(distinct four) filter (where four::text ~ '123') from onek a
group by rollup(ten);

-- More rescan tests
select * from (values (1),(2)) v(a) left join lateral (select v.a, four, ten, count(*) from onek group by cube(four,ten)) s on true order by v.a,four,ten;
select array(select row(v.a,s1.*) from (select two,four, count(*) from onek group by cube(two,four) order by two,four) s1) from (values (1),(2)) v(a);

-- Grouping on text columns
select sum(ten) from onek group by two, rollup(four::text) order by 1;
select sum(ten) from onek group by rollup(four::text), two order by 1;

-- hashing support

set enable_hashagg = true;

-- failure cases

select count(*) from gstest4 group by rollup(unhashable_col,unsortable_col);
select array_agg(v order by v) from gstest4 group by grouping sets ((id,unsortable_col),(id));

-- simple cases

select a, b, grouping(a,b), sum(v), count(*), max(v)
  from gstest1 group by grouping sets ((a),(b)) order by 3,1,2;
explain (costs off) select a, b, grouping(a,b), sum(v), count(*), max(v)
  from gstest1 group by grouping sets ((a),(b)) order by 3,1,2;

select a, b, grouping(a,b), sum(v), count(*), max(v)
  from gstest1 group by cube(a,b) order by 3,1,2;
explain (costs off) select a, b, grouping(a,b), sum(v), count(*), max(v)
  from gstest1 group by cube(a,b) order by 3,1,2;

-- shouldn't try and hash
explain (costs off)
  select a, b, grouping(a,b), array_agg(v order by v)
    from gstest1 group by cube(a,b);

-- unsortable cases
select unsortable_col, count(*)
  from gstest4 group by grouping sets ((unsortable_col),(unsortable_col))
  order by unsortable_col::text;

-- mixed hashable/sortable cases
select unhashable_col, unsortable_col,
       grouping(unhashable_col, unsortable_col),
       count(*), sum(v)
  from gstest4 group by grouping sets ((unhashable_col),(unsortable_col))
 order by 3, 5;
explain (costs off)
  select unhashable_col, unsortable_col,
         grouping(unhashable_col, unsortable_col),
         count(*), sum(v)
    from gstest4 group by grouping sets ((unhashable_col),(unsortable_col))
   order by 3,5;

select unhashable_col, unsortable_col,
       grouping(unhashable_col, unsortable_col),
       count(*), sum(v)
  from gstest4 group by grouping sets ((v,unhashable_col),(v,unsortable_col))
 order by 3,5;
explain (costs off)
  select unhashable_col, unsortable_col,
         grouping(unhashable_col, unsortable_col),
         count(*), sum(v)
    from gstest4 group by grouping sets ((v,unhashable_col),(v,unsortable_col))
   order by 3,5;

-- empty input: first is 0 rows, second 1, third 3 etc.
select a, b, sum(v), count(*) from gstest_empty group by grouping sets ((a,b),a);
explain (costs off)
  select a, b, sum(v), count(*) from gstest_empty group by grouping sets ((a,b),a);
select a, b, sum(v), count(*) from gstest_empty group by grouping sets ((a,b),());
select a, b, sum(v), count(*) from gstest_empty group by grouping sets ((a,b),(),(),());
explain (costs off)
  select a, b, sum(v), count(*) from gstest_empty group by grouping sets ((a,b),(),(),());
select sum(v), count(*) from gstest_empty group by grouping sets ((),(),());
explain (costs off)
  select sum(v), count(*) from gstest_empty group by grouping sets ((),(),());

-- check that functionally dependent cols are not nulled
select a, d, grouping(a,b,c)
  from gstest3
 group by grouping sets ((a,b), (a,c));
explain (costs off)
  select a, d, grouping(a,b,c)
    from gstest3
   group by grouping sets ((a,b), (a,c));

-- simple rescan tests

select a, b, sum(v.x)
  from (values (1),(2)) v(x), gstest_data(v.x)
 group by grouping sets (a,b)
 order by 1, 2, 3;
explain (costs off)
  select a, b, sum(v.x)
    from (values (1),(2)) v(x), gstest_data(v.x)
   group by grouping sets (a,b)
   order by 3, 1, 2;
select *
  from (values (1),(2)) v(x),
       lateral (select a, b, sum(v.x) from gstest_data(v.x) group by grouping sets (a,b)) s;
explain (costs off)
  select *
    from (values (1),(2)) v(x),
         lateral (select a, b, sum(v.x) from gstest_data(v.x) group by grouping sets (a,b)) s;

-- Tests for chained aggregates
select a, b, grouping(a,b), sum(v), count(*), max(v)
  from gstest1 group by grouping sets ((a,b),(a+1,b+1),(a+2,b+2)) order by 3,6;
explain (costs off)
  select a, b, grouping(a,b), sum(v), count(*), max(v)
    from gstest1 group by grouping sets ((a,b),(a+1,b+1),(a+2,b+2)) order by 3,6;
select a, b, sum(c), sum(sum(c)) over (order by a,b) as rsum
  from gstest2 group by cube (a,b) order by rsum, a, b;
explain (costs off)
  select a, b, sum(c), sum(sum(c)) over (order by a,b) as rsum
    from gstest2 group by cube (a,b) order by rsum, a, b;
select a, b, sum(v.x)
  from (values (1),(2)) v(x), gstest_data(v.x)
 group by cube (a,b) order by a,b;
explain (costs off)
  select a, b, sum(v.x)
    from (values (1),(2)) v(x), gstest_data(v.x)
   group by cube (a,b) order by a,b;

-- Verify that we correctly handle the child node returning a
-- non-minimal slot, which happens if the input is pre-sorted,
-- e.g. due to an index scan.
BEGIN;
SET LOCAL enable_hashagg = false;
EXPLAIN (COSTS OFF) SELECT a, b, count(*), max(a), max(b) FROM gstest3 GROUP BY GROUPING SETS(a, b,()) ORDER BY a, b;
SELECT a, b, count(*), max(a), max(b) FROM gstest3 GROUP BY GROUPING SETS(a, b,()) ORDER BY a, b;
SET LOCAL enable_seqscan = false;
EXPLAIN (COSTS OFF) SELECT a, b, count(*), max(a), max(b) FROM gstest3 GROUP BY GROUPING SETS(a, b,()) ORDER BY a, b;
SELECT a, b, count(*), max(a), max(b) FROM gstest3 GROUP BY GROUPING SETS(a, b,()) ORDER BY a, b;
COMMIT;

-- More rescan tests
select * from (values (1),(2)) v(a) left join lateral (select v.a, four, ten, count(*) from onek group by cube(four,ten)) s on true order by v.a,four,ten;
select array(select row(v.a,s1.*) from (select two,four, count(*) from onek group by cube(two,four) order by two,four) s1) from (values (1),(2)) v(a);

-- Rescan logic changes when there are no empty grouping sets, so test
-- that too:
select * from (values (1),(2)) v(a) left join lateral (select v.a, four, ten, count(*) from onek group by grouping sets(four,ten)) s on true order by v.a,four,ten;
select array(select row(v.a,s1.*) from (select two,four, count(*) from onek group by grouping sets(two,four) order by two,four) s1) from (values (1),(2)) v(a);

-- test the knapsack

set enable_indexscan = false;
set hash_mem_multiplier = 1.0;
set work_mem = '64kB';
explain (costs off)
  select unique1,
         count(two), count(four), count(ten),
         count(hundred), count(thousand), count(twothousand),
         count(*)
    from tenk1 group by grouping sets (unique1,twothousand,thousand,hundred,ten,four,two);
explain (costs off)
  select unique1,
         count(two), count(four), count(ten),
         count(hundred), count(thousand), count(twothousand),
         count(*)
    from tenk1 group by grouping sets (unique1,hundred,ten,four,two);

set work_mem = '384kB';
explain (costs off)
  select unique1,
         count(two), count(four), count(ten),
         count(hundred), count(thousand), count(twothousand),
         count(*)
    from tenk1 group by grouping sets (unique1,twothousand,thousand,hundred,ten,four,two);

-- check collation-sensitive matching between grouping expressions
-- (similar to a check for aggregates, but there are additional code
-- paths for GROUPING, so check again here)

select v||'a', case grouping(v||'a') when 1 then 1 else 0 end, count(*)
  from unnest(array[1,1], array['a','b']) u(i,v)
 group by rollup(i, v||'a') order by 1,3;
select v||'a', case when grouping(v||'a') = 1 then 1 else 0 end, count(*)
  from unnest(array[1,1], array['a','b']) u(i,v)
 group by rollup(i, v||'a') order by 1,3;

-- Bug #16784
create table bug_16784(i int, j int);
analyze bug_16784;
alter table bug_16784 set (autovacuum_enabled = 'false');
update pg_class set reltuples = 10 where relname='bug_16784';

insert into bug_16784 select g/10, g from generate_series(1,40) g;

set work_mem='64kB';
set enable_sort = false;

select * from
  (values (1),(2)) v(a),
  lateral (select a, i, j, count(*) from
             bug_16784 group by cube(i,j)) s
  order by v.a, i, j;

--
-- Compare results between plans using sorting and plans using hash
-- aggregation. Force spilling in both cases by setting work_mem low
-- and altering the statistics.
--

create table gs_data_1 as
select g%1000 as g1000, g%100 as g100, g%10 as g10, g
   from generate_series(0,1999) g;

analyze gs_data_1;
alter table gs_data_1 set (autovacuum_enabled = 'false');
update pg_class set reltuples = 10 where relname='gs_data_1';

set work_mem='64kB';

-- Produce results with sorting.

set enable_sort = true;
set enable_hashagg = false;
set jit_above_cost = 0;

explain (costs off)
select g100, g10, sum(g::numeric), count(*), max(g::text)
from gs_data_1 group by cube (g1000, g100,g10);

create table gs_group_1 as
select g100, g10, sum(g::numeric), count(*), max(g::text)
from gs_data_1 group by cube (g1000, g100,g10);

-- Produce results with hash aggregation.

set enable_hashagg = true;
set enable_sort = false;

explain (costs off)
select g100, g10, sum(g::numeric), count(*), max(g::text)
from gs_data_1 group by cube (g1000, g100,g10);

create table gs_hash_1 as
select g100, g10, sum(g::numeric), count(*), max(g::text)
from gs_data_1 group by cube (g1000, g100,g10);

set enable_sort = true;
set work_mem to default;
set hash_mem_multiplier to default;

-- Compare results

(select * from gs_hash_1 except select * from gs_group_1)
  union all
(select * from gs_group_1 except select * from gs_hash_1);

drop table gs_group_1;
drop table gs_hash_1;

-- GROUP BY DISTINCT

-- "normal" behavior...
select a, b, c
from (values (1, 2, 3), (4, null, 6), (7, 8, 9)) as t (a, b, c)
group by all rollup(a, b), rollup(a, c)
order by a, b, c;

-- ...which is also the default
select a, b, c
from (values (1, 2, 3), (4, null, 6), (7, 8, 9)) as t (a, b, c)
group by rollup(a, b), rollup(a, c)
order by a, b, c;

-- "group by distinct" behavior...
select a, b, c
from (values (1, 2, 3), (4, null, 6), (7, 8, 9)) as t (a, b, c)
group by distinct rollup(a, b), rollup(a, c)
order by a, b, c;

-- ...which is not the same as "select distinct"
select distinct a, b, c
from (values (1, 2, 3), (4, null, 6), (7, 8, 9)) as t (a, b, c)
group by rollup(a, b), rollup(a, c)
order by a, b, c;

-- test handling of outer GroupingFunc within subqueries
explain (costs off)
select (select grouping(v1)) from (values ((select 1))) v(v1) group by cube(v1);
select (select grouping(v1)) from (values ((select 1))) v(v1) group by cube(v1);

explain (costs off)
select (select grouping(v1)) from (values ((select 1))) v(v1) group by v1;
select (select grouping(v1)) from (values ((select 1))) v(v1) group by v1;

-- end
