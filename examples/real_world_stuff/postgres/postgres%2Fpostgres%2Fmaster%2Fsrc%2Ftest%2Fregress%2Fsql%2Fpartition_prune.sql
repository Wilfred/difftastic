--
-- Test partitioning planner code
--

-- Force generic plans to be used for all prepared statements in this file.
set plan_cache_mode = force_generic_plan;

create table lp (a char) partition by list (a);
create table lp_default partition of lp default;
create table lp_ef partition of lp for values in ('e', 'f');
create table lp_ad partition of lp for values in ('a', 'd');
create table lp_bc partition of lp for values in ('b', 'c');
create table lp_g partition of lp for values in ('g');
create table lp_null partition of lp for values in (null);
explain (costs off) select * from lp;
explain (costs off) select * from lp where a > 'a' and a < 'd';
explain (costs off) select * from lp where a > 'a' and a <= 'd';
explain (costs off) select * from lp where a = 'a';
explain (costs off) select * from lp where 'a' = a;	/* commuted */
explain (costs off) select * from lp where a is not null;
explain (costs off) select * from lp where a is null;
explain (costs off) select * from lp where a = 'a' or a = 'c';
explain (costs off) select * from lp where a is not null and (a = 'a' or a = 'c');
explain (costs off) select * from lp where a <> 'g';
explain (costs off) select * from lp where a <> 'a' and a <> 'd';
explain (costs off) select * from lp where a not in ('a', 'd');

-- collation matches the partitioning collation, pruning works
create table coll_pruning (a text collate "C") partition by list (a);
create table coll_pruning_a partition of coll_pruning for values in ('a');
create table coll_pruning_b partition of coll_pruning for values in ('b');
create table coll_pruning_def partition of coll_pruning default;
explain (costs off) select * from coll_pruning where a collate "C" = 'a' collate "C";
-- collation doesn't match the partitioning collation, no pruning occurs
explain (costs off) select * from coll_pruning where a collate "POSIX" = 'a' collate "POSIX";

create table rlp (a int, b varchar) partition by range (a);
create table rlp_default partition of rlp default partition by list (a);
create table rlp_default_default partition of rlp_default default;
create table rlp_default_10 partition of rlp_default for values in (10);
create table rlp_default_30 partition of rlp_default for values in (30);
create table rlp_default_null partition of rlp_default for values in (null);
create table rlp1 partition of rlp for values from (minvalue) to (1);
create table rlp2 partition of rlp for values from (1) to (10);

create table rlp3 (b varchar, a int) partition by list (b varchar_ops);
create table rlp3_default partition of rlp3 default;
create table rlp3abcd partition of rlp3 for values in ('ab', 'cd');
create table rlp3efgh partition of rlp3 for values in ('ef', 'gh');
create table rlp3nullxy partition of rlp3 for values in (null, 'xy');
alter table rlp attach partition rlp3 for values from (15) to (20);

create table rlp4 partition of rlp for values from (20) to (30) partition by range (a);
create table rlp4_default partition of rlp4 default;
create table rlp4_1 partition of rlp4 for values from (20) to (25);
create table rlp4_2 partition of rlp4 for values from (25) to (29);

create table rlp5 partition of rlp for values from (31) to (maxvalue) partition by range (a);
create table rlp5_default partition of rlp5 default;
create table rlp5_1 partition of rlp5 for values from (31) to (40);

explain (costs off) select * from rlp where a < 1;
explain (costs off) select * from rlp where 1 > a;	/* commuted */
explain (costs off) select * from rlp where a <= 1;
explain (costs off) select * from rlp where a = 1;
explain (costs off) select * from rlp where a = 1::bigint;		/* same as above */
explain (costs off) select * from rlp where a = 1::numeric;		/* no pruning */
explain (costs off) select * from rlp where a <= 10;
explain (costs off) select * from rlp where a > 10;
explain (costs off) select * from rlp where a < 15;
explain (costs off) select * from rlp where a <= 15;
explain (costs off) select * from rlp where a > 15 and b = 'ab';
explain (costs off) select * from rlp where a = 16;
explain (costs off) select * from rlp where a = 16 and b in ('not', 'in', 'here');
explain (costs off) select * from rlp where a = 16 and b < 'ab';
explain (costs off) select * from rlp where a = 16 and b <= 'ab';
explain (costs off) select * from rlp where a = 16 and b is null;
explain (costs off) select * from rlp where a = 16 and b is not null;
explain (costs off) select * from rlp where a is null;
explain (costs off) select * from rlp where a is not null;
explain (costs off) select * from rlp where a > 30;
explain (costs off) select * from rlp where a = 30;	/* only default is scanned */
explain (costs off) select * from rlp where a <= 31;
explain (costs off) select * from rlp where a = 1 or a = 7;
explain (costs off) select * from rlp where a = 1 or b = 'ab';

explain (costs off) select * from rlp where a > 20 and a < 27;
explain (costs off) select * from rlp where a = 29;
explain (costs off) select * from rlp where a >= 29;
explain (costs off) select * from rlp where a < 1 or (a > 20 and a < 25);

-- where clause contradicts sub-partition's constraint
explain (costs off) select * from rlp where a = 20 or a = 40;
explain (costs off) select * from rlp3 where a = 20;   /* empty */

-- redundant clauses are eliminated
explain (costs off) select * from rlp where a > 1 and a = 10;	/* only default */
explain (costs off) select * from rlp where a > 1 and a >=15;	/* rlp3 onwards, including default */
explain (costs off) select * from rlp where a = 1 and a = 3;	/* empty */
explain (costs off) select * from rlp where (a = 1 and a = 3) or (a > 1 and a = 15);

-- multi-column keys
create table mc3p (a int, b int, c int) partition by range (a, abs(b), c);
create table mc3p_default partition of mc3p default;
create table mc3p0 partition of mc3p for values from (minvalue, minvalue, minvalue) to (1, 1, 1);
create table mc3p1 partition of mc3p for values from (1, 1, 1) to (10, 5, 10);
create table mc3p2 partition of mc3p for values from (10, 5, 10) to (10, 10, 10);
create table mc3p3 partition of mc3p for values from (10, 10, 10) to (10, 10, 20);
create table mc3p4 partition of mc3p for values from (10, 10, 20) to (10, maxvalue, maxvalue);
create table mc3p5 partition of mc3p for values from (11, 1, 1) to (20, 10, 10);
create table mc3p6 partition of mc3p for values from (20, 10, 10) to (20, 20, 20);
create table mc3p7 partition of mc3p for values from (20, 20, 20) to (maxvalue, maxvalue, maxvalue);

explain (costs off) select * from mc3p where a = 1;
explain (costs off) select * from mc3p where a = 1 and abs(b) < 1;
explain (costs off) select * from mc3p where a = 1 and abs(b) = 1;
explain (costs off) select * from mc3p where a = 1 and abs(b) = 1 and c < 8;
explain (costs off) select * from mc3p where a = 10 and abs(b) between 5 and 35;
explain (costs off) select * from mc3p where a > 10;
explain (costs off) select * from mc3p where a >= 10;
explain (costs off) select * from mc3p where a < 10;
explain (costs off) select * from mc3p where a <= 10 and abs(b) < 10;
explain (costs off) select * from mc3p where a = 11 and abs(b) = 0;
explain (costs off) select * from mc3p where a = 20 and abs(b) = 10 and c = 100;
explain (costs off) select * from mc3p where a > 20;
explain (costs off) select * from mc3p where a >= 20;
explain (costs off) select * from mc3p where (a = 1 and abs(b) = 1 and c = 1) or (a = 10 and abs(b) = 5 and c = 10) or (a > 11 and a < 20);
explain (costs off) select * from mc3p where (a = 1 and abs(b) = 1 and c = 1) or (a = 10 and abs(b) = 5 and c = 10) or (a > 11 and a < 20) or a < 1;
explain (costs off) select * from mc3p where (a = 1 and abs(b) = 1 and c = 1) or (a = 10 and abs(b) = 5 and c = 10) or (a > 11 and a < 20) or a < 1 or a = 1;
explain (costs off) select * from mc3p where a = 1 or abs(b) = 1 or c = 1;
explain (costs off) select * from mc3p where (a = 1 and abs(b) = 1) or (a = 10 and abs(b) = 10);
explain (costs off) select * from mc3p where (a = 1 and abs(b) = 1) or (a = 10 and abs(b) = 9);

-- a simpler multi-column keys case
create table mc2p (a int, b int) partition by range (a, b);
create table mc2p_default partition of mc2p default;
create table mc2p0 partition of mc2p for values from (minvalue, minvalue) to (1, minvalue);
create table mc2p1 partition of mc2p for values from (1, minvalue) to (1, 1);
create table mc2p2 partition of mc2p for values from (1, 1) to (2, minvalue);
create table mc2p3 partition of mc2p for values from (2, minvalue) to (2, 1);
create table mc2p4 partition of mc2p for values from (2, 1) to (2, maxvalue);
create table mc2p5 partition of mc2p for values from (2, maxvalue) to (maxvalue, maxvalue);

explain (costs off) select * from mc2p where a < 2;
explain (costs off) select * from mc2p where a = 2 and b < 1;
explain (costs off) select * from mc2p where a > 1;
explain (costs off) select * from mc2p where a = 1 and b > 1;

-- all partitions but the default one should be pruned
explain (costs off) select * from mc2p where a = 1 and b is null;
explain (costs off) select * from mc2p where a is null and b is null;
explain (costs off) select * from mc2p where a is null and b = 1;
explain (costs off) select * from mc2p where a is null;
explain (costs off) select * from mc2p where b is null;

-- boolean partitioning
create table boolpart (a bool) partition by list (a);
create table boolpart_default partition of boolpart default;
create table boolpart_t partition of boolpart for values in ('true');
create table boolpart_f partition of boolpart for values in ('false');

explain (costs off) select * from boolpart where a in (true, false);
explain (costs off) select * from boolpart where a = false;
explain (costs off) select * from boolpart where not a = false;
explain (costs off) select * from boolpart where a is true or a is not true;
explain (costs off) select * from boolpart where a is not true;
explain (costs off) select * from boolpart where a is not true and a is not false;
explain (costs off) select * from boolpart where a is unknown;
explain (costs off) select * from boolpart where a is not unknown;

create table boolrangep (a bool, b bool, c int) partition by range (a,b,c);
create table boolrangep_tf partition of boolrangep for values from ('true', 'false', 0) to ('true', 'false', 100);
create table boolrangep_ft partition of boolrangep for values from ('false', 'true', 0) to ('false', 'true', 100);
create table boolrangep_ff1 partition of boolrangep for values from ('false', 'false', 0) to ('false', 'false', 50);
create table boolrangep_ff2 partition of boolrangep for values from ('false', 'false', 50) to ('false', 'false', 100);

-- try a more complex case that's been known to trip up pruning in the past
explain (costs off)  select * from boolrangep where not a and not b and c = 25;

-- test scalar-to-array operators
create table coercepart (a varchar) partition by list (a);
create table coercepart_ab partition of coercepart for values in ('ab');
create table coercepart_bc partition of coercepart for values in ('bc');
create table coercepart_cd partition of coercepart for values in ('cd');

explain (costs off) select * from coercepart where a in ('ab', to_char(125, '999'));
explain (costs off) select * from coercepart where a ~ any ('{ab}');
explain (costs off) select * from coercepart where a !~ all ('{ab}');
explain (costs off) select * from coercepart where a ~ any ('{ab,bc}');
explain (costs off) select * from coercepart where a !~ all ('{ab,bc}');
explain (costs off) select * from coercepart where a = any ('{ab,bc}');
explain (costs off) select * from coercepart where a = any ('{ab,null}');
explain (costs off) select * from coercepart where a = any (null::text[]);
explain (costs off) select * from coercepart where a = all ('{ab}');
explain (costs off) select * from coercepart where a = all ('{ab,bc}');
explain (costs off) select * from coercepart where a = all ('{ab,null}');
explain (costs off) select * from coercepart where a = all (null::text[]);

drop table coercepart;

CREATE TABLE part (a INT, b INT) PARTITION BY LIST (a);
CREATE TABLE part_p1 PARTITION OF part FOR VALUES IN (-2,-1,0,1,2);
CREATE TABLE part_p2 PARTITION OF part DEFAULT PARTITION BY RANGE(a);
CREATE TABLE part_p2_p1 PARTITION OF part_p2 DEFAULT;
CREATE TABLE part_rev (b INT, c INT, a INT);
ALTER TABLE part ATTACH PARTITION part_rev FOR VALUES IN (3);  -- fail
ALTER TABLE part_rev DROP COLUMN c;
ALTER TABLE part ATTACH PARTITION part_rev FOR VALUES IN (3);  -- now it's ok
INSERT INTO part VALUES (-1,-1), (1,1), (2,NULL), (NULL,-2),(NULL,NULL);
EXPLAIN (COSTS OFF) SELECT tableoid::regclass as part, a, b FROM part WHERE a IS NULL ORDER BY 1, 2, 3;
EXPLAIN (VERBOSE, COSTS OFF) SELECT * FROM part p(x) ORDER BY x;

--
-- some more cases
--

--
-- pruning for partitioned table appearing inside a sub-query
--
-- pruning won't work for mc3p, because some keys are Params
explain (costs off) select * from mc2p t1, lateral (select count(*) from mc3p t2 where t2.a = t1.b and abs(t2.b) = 1 and t2.c = 1) s where t1.a = 1;

-- pruning should work fine, because values for a prefix of keys (a, b) are
-- available
explain (costs off) select * from mc2p t1, lateral (select count(*) from mc3p t2 where t2.c = t1.b and abs(t2.b) = 1 and t2.a = 1) s where t1.a = 1;

-- also here, because values for all keys are provided
explain (costs off) select * from mc2p t1, lateral (select count(*) from mc3p t2 where t2.a = 1 and abs(t2.b) = 1 and t2.c = 1) s where t1.a = 1;

--
-- pruning with clauses containing <> operator
--

-- doesn't prune range partitions
create table rp (a int) partition by range (a);
create table rp0 partition of rp for values from (minvalue) to (1);
create table rp1 partition of rp for values from (1) to (2);
create table rp2 partition of rp for values from (2) to (maxvalue);

explain (costs off) select * from rp where a <> 1;
explain (costs off) select * from rp where a <> 1 and a <> 2;

-- null partition should be eliminated due to strict <> clause.
explain (costs off) select * from lp where a <> 'a';

-- ensure we detect contradictions in clauses; a can't be NULL and NOT NULL.
explain (costs off) select * from lp where a <> 'a' and a is null;
explain (costs off) select * from lp where (a <> 'a' and a <> 'd') or a is null;

-- check that it also works for a partitioned table that's not root,
-- which in this case are partitions of rlp that are themselves
-- list-partitioned on b
explain (costs off) select * from rlp where a = 15 and b <> 'ab' and b <> 'cd' and b <> 'xy' and b is not null;

--
-- different collations for different keys with same expression
--
create table coll_pruning_multi (a text) partition by range (substr(a, 1) collate "POSIX", substr(a, 1) collate "C");
create table coll_pruning_multi1 partition of coll_pruning_multi for values from ('a', 'a') to ('a', 'e');
create table coll_pruning_multi2 partition of coll_pruning_multi for values from ('a', 'e') to ('a', 'z');
create table coll_pruning_multi3 partition of coll_pruning_multi for values from ('b', 'a') to ('b', 'e');

-- no pruning, because no value for the leading key
explain (costs off) select * from coll_pruning_multi where substr(a, 1) = 'e' collate "C";

-- pruning, with a value provided for the leading key
explain (costs off) select * from coll_pruning_multi where substr(a, 1) = 'a' collate "POSIX";

-- pruning, with values provided for both keys
explain (costs off) select * from coll_pruning_multi where substr(a, 1) = 'e' collate "C" and substr(a, 1) = 'a' collate "POSIX";

--
-- LIKE operators don't prune
--
create table like_op_noprune (a text) partition by list (a);
create table like_op_noprune1 partition of like_op_noprune for values in ('ABC');
create table like_op_noprune2 partition of like_op_noprune for values in ('BCD');
explain (costs off) select * from like_op_noprune where a like '%BC';

--
-- tests wherein clause value requires a cross-type comparison function
--
create table lparted_by_int2 (a smallint) partition by list (a);
create table lparted_by_int2_1 partition of lparted_by_int2 for values in (1);
create table lparted_by_int2_16384 partition of lparted_by_int2 for values in (16384);
explain (costs off) select * from lparted_by_int2 where a = 100000000000000;

create table rparted_by_int2 (a smallint) partition by range (a);
create table rparted_by_int2_1 partition of rparted_by_int2 for values from (1) to (10);
create table rparted_by_int2_16384 partition of rparted_by_int2 for values from (10) to (16384);
-- all partitions pruned
explain (costs off) select * from rparted_by_int2 where a > 100000000000000;
create table rparted_by_int2_maxvalue partition of rparted_by_int2 for values from (16384) to (maxvalue);
-- all partitions but rparted_by_int2_maxvalue pruned
explain (costs off) select * from rparted_by_int2 where a > 100000000000000;

drop table lp, coll_pruning, rlp, mc3p, mc2p, boolpart, boolrangep, rp, coll_pruning_multi, like_op_noprune, lparted_by_int2, rparted_by_int2;

--
-- Test Partition pruning for HASH partitioning
--
-- Use hand-rolled hash functions and operator classes to get predictable
-- result on different machines.  See the definitions of
-- part_part_test_int4_ops and part_test_text_ops in insert.sql.
--

create table hp (a int, b text, c int)
  partition by hash (a part_test_int4_ops, b part_test_text_ops);
create table hp0 partition of hp for values with (modulus 4, remainder 0);
create table hp3 partition of hp for values with (modulus 4, remainder 3);
create table hp1 partition of hp for values with (modulus 4, remainder 1);
create table hp2 partition of hp for values with (modulus 4, remainder 2);

insert into hp values (null, null, 0);
insert into hp values (1, null, 1);
insert into hp values (1, 'xxx', 2);
insert into hp values (null, 'xxx', 3);
insert into hp values (2, 'xxx', 4);
insert into hp values (1, 'abcde', 5);
select tableoid::regclass, * from hp order by c;

-- partial keys won't prune, nor would non-equality conditions
explain (costs off) select * from hp where a = 1;
explain (costs off) select * from hp where b = 'xxx';
explain (costs off) select * from hp where a is null;
explain (costs off) select * from hp where b is null;
explain (costs off) select * from hp where a < 1 and b = 'xxx';
explain (costs off) select * from hp where a <> 1 and b = 'yyy';
explain (costs off) select * from hp where a <> 1 and b <> 'xxx';

-- pruning should work if either a value or a IS NULL clause is provided for
-- each of the keys
explain (costs off) select * from hp where a is null and b is null;
explain (costs off) select * from hp where a = 1 and b is null;
explain (costs off) select * from hp where a = 1 and b = 'xxx';
explain (costs off) select * from hp where a is null and b = 'xxx';
explain (costs off) select * from hp where a = 2 and b = 'xxx';
explain (costs off) select * from hp where a = 1 and b = 'abcde';
explain (costs off) select * from hp where (a = 1 and b = 'abcde') or (a = 2 and b = 'xxx') or (a is null and b is null);

-- test pruning when not all the partitions exist
drop table hp1;
drop table hp3;
explain (costs off) select * from hp where a = 1 and b = 'abcde';
explain (costs off) select * from hp where a = 1 and b = 'abcde' and
  (c = 2 or c = 3);
drop table hp2;
explain (costs off) select * from hp where a = 1 and b = 'abcde' and
  (c = 2 or c = 3);

drop table hp;

--
-- Test runtime partition pruning
--
create table ab (a int not null, b int not null) partition by list (a);
create table ab_a2 partition of ab for values in(2) partition by list (b);
create table ab_a2_b1 partition of ab_a2 for values in (1);
create table ab_a2_b2 partition of ab_a2 for values in (2);
create table ab_a2_b3 partition of ab_a2 for values in (3);
create table ab_a1 partition of ab for values in(1) partition by list (b);
create table ab_a1_b1 partition of ab_a1 for values in (1);
create table ab_a1_b2 partition of ab_a1 for values in (2);
create table ab_a1_b3 partition of ab_a1 for values in (3);
create table ab_a3 partition of ab for values in(3) partition by list (b);
create table ab_a3_b1 partition of ab_a3 for values in (1);
create table ab_a3_b2 partition of ab_a3 for values in (2);
create table ab_a3_b3 partition of ab_a3 for values in (3);

-- Disallow index only scans as concurrent transactions may stop visibility
-- bits being set causing "Heap Fetches" to be unstable in the EXPLAIN ANALYZE
-- output.
set enable_indexonlyscan = off;

prepare ab_q1 (int, int, int) as
select * from ab where a between $1 and $2 and b <= $3;

explain (analyze, costs off, summary off, timing off) execute ab_q1 (2, 2, 3);
explain (analyze, costs off, summary off, timing off) execute ab_q1 (1, 2, 3);

deallocate ab_q1;

-- Runtime pruning after optimizer pruning
prepare ab_q1 (int, int) as
select a from ab where a between $1 and $2 and b < 3;

explain (analyze, costs off, summary off, timing off) execute ab_q1 (2, 2);
explain (analyze, costs off, summary off, timing off) execute ab_q1 (2, 4);

-- Ensure a mix of PARAM_EXTERN and PARAM_EXEC Params work together at
-- different levels of partitioning.
prepare ab_q2 (int, int) as
select a from ab where a between $1 and $2 and b < (select 3);

explain (analyze, costs off, summary off, timing off) execute ab_q2 (2, 2);

-- As above, but swap the PARAM_EXEC Param to the first partition level
prepare ab_q3 (int, int) as
select a from ab where b between $1 and $2 and a < (select 3);

explain (analyze, costs off, summary off, timing off) execute ab_q3 (2, 2);

-- Test a backwards Append scan
create table list_part (a int) partition by list (a);
create table list_part1 partition of list_part for values in (1);
create table list_part2 partition of list_part for values in (2);
create table list_part3 partition of list_part for values in (3);
create table list_part4 partition of list_part for values in (4);

insert into list_part select generate_series(1,4);

begin;

-- Don't select an actual value out of the table as the order of the Append's
-- subnodes may not be stable.
declare cur SCROLL CURSOR for select 1 from list_part where a > (select 1) and a < (select 4);

-- move beyond the final row
move 3 from cur;

-- Ensure we get two rows.
fetch backward all from cur;

commit;

begin;

-- Test run-time pruning using stable functions
create function list_part_fn(int) returns int as $$ begin return $1; end;$$ language plpgsql stable;

-- Ensure pruning works using a stable function containing no Vars
explain (analyze, costs off, summary off, timing off) select * from list_part where a = list_part_fn(1);

-- Ensure pruning does not take place when the function has a Var parameter
explain (analyze, costs off, summary off, timing off) select * from list_part where a = list_part_fn(a);

-- Ensure pruning does not take place when the expression contains a Var.
explain (analyze, costs off, summary off, timing off) select * from list_part where a = list_part_fn(1) + a;

rollback;

drop table list_part;

-- Parallel append

-- Parallel queries won't necessarily get as many workers as the planner
-- asked for.  This affects not only the "Workers Launched:" field of EXPLAIN
-- results, but also row counts and loop counts for parallel scans, Gathers,
-- and everything in between.  This function filters out the values we can't
-- rely on to be stable.
-- This removes enough info that you might wonder why bother with EXPLAIN
-- ANALYZE at all.  The answer is that we need to see '(never executed)'
-- notations because that's the only way to verify runtime pruning.
create function explain_parallel_append(text) returns setof text
language plpgsql as
$$
declare
    ln text;
begin
    for ln in
        execute format('explain (analyze, costs off, summary off, timing off) %s',
            $1)
    loop
        ln := regexp_replace(ln, 'Workers Launched: \d+', 'Workers Launched: N');
        ln := regexp_replace(ln, 'actual rows=\d+ loops=\d+', 'actual rows=N loops=N');
        ln := regexp_replace(ln, 'Rows Removed by Filter: \d+', 'Rows Removed by Filter: N');
        return next ln;
    end loop;
end;
$$;

prepare ab_q4 (int, int) as
select avg(a) from ab where a between $1 and $2 and b < 4;

-- Encourage use of parallel plans
set parallel_setup_cost = 0;
set parallel_tuple_cost = 0;
set min_parallel_table_scan_size = 0;
set max_parallel_workers_per_gather = 2;

select explain_parallel_append('execute ab_q4 (2, 2)');

-- Test run-time pruning with IN lists.
prepare ab_q5 (int, int, int) as
select avg(a) from ab where a in($1,$2,$3) and b < 4;

select explain_parallel_append('execute ab_q5 (1, 1, 1)');
select explain_parallel_append('execute ab_q5 (2, 3, 3)');

-- Try some params whose values do not belong to any partition.
select explain_parallel_append('execute ab_q5 (33, 44, 55)');

-- Test Parallel Append with PARAM_EXEC Params
select explain_parallel_append('select count(*) from ab where (a = (select 1) or a = (select 3)) and b = 2');

-- Test pruning during parallel nested loop query
create table lprt_a (a int not null);
-- Insert some values we won't find in ab
insert into lprt_a select 0 from generate_series(1,100);

-- and insert some values that we should find.
insert into lprt_a values(1),(1);

analyze lprt_a;

create index ab_a2_b1_a_idx on ab_a2_b1 (a);
create index ab_a2_b2_a_idx on ab_a2_b2 (a);
create index ab_a2_b3_a_idx on ab_a2_b3 (a);
create index ab_a1_b1_a_idx on ab_a1_b1 (a);
create index ab_a1_b2_a_idx on ab_a1_b2 (a);
create index ab_a1_b3_a_idx on ab_a1_b3 (a);
create index ab_a3_b1_a_idx on ab_a3_b1 (a);
create index ab_a3_b2_a_idx on ab_a3_b2 (a);
create index ab_a3_b3_a_idx on ab_a3_b3 (a);

set enable_hashjoin = 0;
set enable_mergejoin = 0;
set enable_memoize = 0;

select explain_parallel_append('select avg(ab.a) from ab inner join lprt_a a on ab.a = a.a where a.a in(0, 0, 1)');

-- Ensure the same partitions are pruned when we make the nested loop
-- parameter an Expr rather than a plain Param.
select explain_parallel_append('select avg(ab.a) from ab inner join lprt_a a on ab.a = a.a + 0 where a.a in(0, 0, 1)');

insert into lprt_a values(3),(3);

select explain_parallel_append('select avg(ab.a) from ab inner join lprt_a a on ab.a = a.a where a.a in(1, 0, 3)');
select explain_parallel_append('select avg(ab.a) from ab inner join lprt_a a on ab.a = a.a where a.a in(1, 0, 0)');

delete from lprt_a where a = 1;

select explain_parallel_append('select avg(ab.a) from ab inner join lprt_a a on ab.a = a.a where a.a in(1, 0, 0)');

reset enable_hashjoin;
reset enable_mergejoin;
reset enable_memoize;
reset parallel_setup_cost;
reset parallel_tuple_cost;
reset min_parallel_table_scan_size;
reset max_parallel_workers_per_gather;

-- Test run-time partition pruning with an initplan
explain (analyze, costs off, summary off, timing off)
select * from ab where a = (select max(a) from lprt_a) and b = (select max(a)-1 from lprt_a);

-- Test run-time partition pruning with UNION ALL parents
explain (analyze, costs off, summary off, timing off)
select * from (select * from ab where a = 1 union all select * from ab) ab where b = (select 1);

-- A case containing a UNION ALL with a non-partitioned child.
explain (analyze, costs off, summary off, timing off)
select * from (select * from ab where a = 1 union all (values(10,5)) union all select * from ab) ab where b = (select 1);

-- Another UNION ALL test, but containing a mix of exec init and exec run-time pruning.
create table xy_1 (x int, y int);
insert into xy_1 values(100,-10);

set enable_bitmapscan = 0;
set enable_indexscan = 0;

prepare ab_q6 as
select * from (
	select tableoid::regclass,a,b from ab
union all
	select tableoid::regclass,x,y from xy_1
union all
	select tableoid::regclass,a,b from ab
) ab where a = $1 and b = (select -10);

-- Ensure the xy_1 subplan is not pruned.
explain (analyze, costs off, summary off, timing off) execute ab_q6(1);

-- Ensure we see just the xy_1 row.
execute ab_q6(100);

reset enable_bitmapscan;
reset enable_indexscan;

deallocate ab_q1;
deallocate ab_q2;
deallocate ab_q3;
deallocate ab_q4;
deallocate ab_q5;
deallocate ab_q6;

-- UPDATE on a partition subtree has been seen to have problems.
insert into ab values (1,2);
explain (analyze, costs off, summary off, timing off)
update ab_a1 set b = 3 from ab where ab.a = 1 and ab.a = ab_a1.a;
table ab;

-- Test UPDATE where source relation has run-time pruning enabled
truncate ab;
insert into ab values (1, 1), (1, 2), (1, 3), (2, 1);
explain (analyze, costs off, summary off, timing off)
update ab_a1 set b = 3 from ab_a2 where ab_a2.b = (select 1);
select tableoid::regclass, * from ab;

drop table ab, lprt_a;

-- Join
create table tbl1(col1 int);
insert into tbl1 values (501), (505);

-- Basic table
create table tprt (col1 int) partition by range (col1);
create table tprt_1 partition of tprt for values from (1) to (501);
create table tprt_2 partition of tprt for values from (501) to (1001);
create table tprt_3 partition of tprt for values from (1001) to (2001);
create table tprt_4 partition of tprt for values from (2001) to (3001);
create table tprt_5 partition of tprt for values from (3001) to (4001);
create table tprt_6 partition of tprt for values from (4001) to (5001);

create index tprt1_idx on tprt_1 (col1);
create index tprt2_idx on tprt_2 (col1);
create index tprt3_idx on tprt_3 (col1);
create index tprt4_idx on tprt_4 (col1);
create index tprt5_idx on tprt_5 (col1);
create index tprt6_idx on tprt_6 (col1);

insert into tprt values (10), (20), (501), (502), (505), (1001), (4500);

set enable_hashjoin = off;
set enable_mergejoin = off;

explain (analyze, costs off, summary off, timing off)
select * from tbl1 join tprt on tbl1.col1 > tprt.col1;

explain (analyze, costs off, summary off, timing off)
select * from tbl1 join tprt on tbl1.col1 = tprt.col1;

select tbl1.col1, tprt.col1 from tbl1
inner join tprt on tbl1.col1 > tprt.col1
order by tbl1.col1, tprt.col1;

select tbl1.col1, tprt.col1 from tbl1
inner join tprt on tbl1.col1 = tprt.col1
order by tbl1.col1, tprt.col1;

-- Multiple partitions
insert into tbl1 values (1001), (1010), (1011);
explain (analyze, costs off, summary off, timing off)
select * from tbl1 inner join tprt on tbl1.col1 > tprt.col1;

explain (analyze, costs off, summary off, timing off)
select * from tbl1 inner join tprt on tbl1.col1 = tprt.col1;

select tbl1.col1, tprt.col1 from tbl1
inner join tprt on tbl1.col1 > tprt.col1
order by tbl1.col1, tprt.col1;

select tbl1.col1, tprt.col1 from tbl1
inner join tprt on tbl1.col1 = tprt.col1
order by tbl1.col1, tprt.col1;

-- Last partition
delete from tbl1;
insert into tbl1 values (4400);
explain (analyze, costs off, summary off, timing off)
select * from tbl1 join tprt on tbl1.col1 < tprt.col1;

select tbl1.col1, tprt.col1 from tbl1
inner join tprt on tbl1.col1 < tprt.col1
order by tbl1.col1, tprt.col1;

-- No matching partition
delete from tbl1;
insert into tbl1 values (10000);
explain (analyze, costs off, summary off, timing off)
select * from tbl1 join tprt on tbl1.col1 = tprt.col1;

select tbl1.col1, tprt.col1 from tbl1
inner join tprt on tbl1.col1 = tprt.col1
order by tbl1.col1, tprt.col1;

drop table tbl1, tprt;

-- Test with columns defined in varying orders between each level
create table part_abc (a int not null, b int not null, c int not null) partition by list (a);
create table part_bac (b int not null, a int not null, c int not null) partition by list (b);
create table part_cab (c int not null, a int not null, b int not null) partition by list (c);
create table part_abc_p1 (a int not null, b int not null, c int not null);

alter table part_abc attach partition part_bac for values in(1);
alter table part_bac attach partition part_cab for values in(2);
alter table part_cab attach partition part_abc_p1 for values in(3);

prepare part_abc_q1 (int, int, int) as
select * from part_abc where a = $1 and b = $2 and c = $3;

-- Single partition should be scanned.
explain (analyze, costs off, summary off, timing off) execute part_abc_q1 (1, 2, 3);

deallocate part_abc_q1;

drop table part_abc;

-- Ensure that an Append node properly handles a sub-partitioned table
-- matching without any of its leaf partitions matching the clause.
create table listp (a int, b int) partition by list (a);
create table listp_1 partition of listp for values in(1) partition by list (b);
create table listp_1_1 partition of listp_1 for values in(1);
create table listp_2 partition of listp for values in(2) partition by list (b);
create table listp_2_1 partition of listp_2 for values in(2);
select * from listp where b = 1;

-- Ensure that an Append node properly can handle selection of all first level
-- partitions before finally detecting the correct set of 2nd level partitions
-- which match the given parameter.
prepare q1 (int,int) as select * from listp where b in ($1,$2);

explain (analyze, costs off, summary off, timing off)  execute q1 (1,1);

explain (analyze, costs off, summary off, timing off)  execute q1 (2,2);

-- Try with no matching partitions.
explain (analyze, costs off, summary off, timing off)  execute q1 (0,0);

deallocate q1;

-- Test more complex cases where a not-equal condition further eliminates partitions.
prepare q1 (int,int,int,int) as select * from listp where b in($1,$2) and $3 <> b and $4 <> b;

-- Both partitions allowed by IN clause, but one disallowed by <> clause
explain (analyze, costs off, summary off, timing off)  execute q1 (1,2,2,0);

-- Both partitions allowed by IN clause, then both excluded again by <> clauses.
explain (analyze, costs off, summary off, timing off)  execute q1 (1,2,2,1);

-- Ensure Params that evaluate to NULL properly prune away all partitions
explain (analyze, costs off, summary off, timing off)
select * from listp where a = (select null::int);

drop table listp;

--
-- check that stable query clauses are only used in run-time pruning
--
create table stable_qual_pruning (a timestamp) partition by range (a);
create table stable_qual_pruning1 partition of stable_qual_pruning
  for values from ('2000-01-01') to ('2000-02-01');
create table stable_qual_pruning2 partition of stable_qual_pruning
  for values from ('2000-02-01') to ('2000-03-01');
create table stable_qual_pruning3 partition of stable_qual_pruning
  for values from ('3000-02-01') to ('3000-03-01');

-- comparison against a stable value requires run-time pruning
explain (analyze, costs off, summary off, timing off)
select * from stable_qual_pruning where a < localtimestamp;

-- timestamp < timestamptz comparison is only stable, not immutable
explain (analyze, costs off, summary off, timing off)
select * from stable_qual_pruning where a < '2000-02-01'::timestamptz;

-- check ScalarArrayOp cases
explain (analyze, costs off, summary off, timing off)
select * from stable_qual_pruning
  where a = any(array['2010-02-01', '2020-01-01']::timestamp[]);
explain (analyze, costs off, summary off, timing off)
select * from stable_qual_pruning
  where a = any(array['2000-02-01', '2010-01-01']::timestamp[]);
explain (analyze, costs off, summary off, timing off)
select * from stable_qual_pruning
  where a = any(array['2000-02-01', localtimestamp]::timestamp[]);
explain (analyze, costs off, summary off, timing off)
select * from stable_qual_pruning
  where a = any(array['2010-02-01', '2020-01-01']::timestamptz[]);
explain (analyze, costs off, summary off, timing off)
select * from stable_qual_pruning
  where a = any(array['2000-02-01', '2010-01-01']::timestamptz[]);
explain (analyze, costs off, summary off, timing off)
select * from stable_qual_pruning
  where a = any(null::timestamptz[]);

drop table stable_qual_pruning;

--
-- Check that pruning with composite range partitioning works correctly when
-- it must ignore clauses for trailing keys once it has seen a clause with
-- non-inclusive operator for an earlier key
--
create table mc3p (a int, b int, c int) partition by range (a, abs(b), c);
create table mc3p0 partition of mc3p
  for values from (0, 0, 0) to (0, maxvalue, maxvalue);
create table mc3p1 partition of mc3p
  for values from (1, 1, 1) to (2, minvalue, minvalue);
create table mc3p2 partition of mc3p
  for values from (2, minvalue, minvalue) to (3, maxvalue, maxvalue);
insert into mc3p values (0, 1, 1), (1, 1, 1), (2, 1, 1);

explain (analyze, costs off, summary off, timing off)
select * from mc3p where a < 3 and abs(b) = 1;

--
-- Check that pruning with composite range partitioning works correctly when
-- a combination of runtime parameters is specified, not all of whose values
-- are available at the same time
--
prepare ps1 as
  select * from mc3p where a = $1 and abs(b) < (select 3);
explain (analyze, costs off, summary off, timing off)
execute ps1(1);
deallocate ps1;
prepare ps2 as
  select * from mc3p where a <= $1 and abs(b) < (select 3);
explain (analyze, costs off, summary off, timing off)
execute ps2(1);
deallocate ps2;

drop table mc3p;

-- Ensure runtime pruning works with initplans params with boolean types
create table boolvalues (value bool not null);
insert into boolvalues values('t'),('f');

create table boolp (a bool) partition by list (a);
create table boolp_t partition of boolp for values in('t');
create table boolp_f partition of boolp for values in('f');

explain (analyze, costs off, summary off, timing off)
select * from boolp where a = (select value from boolvalues where value);

explain (analyze, costs off, summary off, timing off)
select * from boolp where a = (select value from boolvalues where not value);

drop table boolp;

--
-- Test run-time pruning of MergeAppend subnodes
--
set enable_seqscan = off;
set enable_sort = off;
create table ma_test (a int, b int) partition by range (a);
create table ma_test_p1 partition of ma_test for values from (0) to (10);
create table ma_test_p2 partition of ma_test for values from (10) to (20);
create table ma_test_p3 partition of ma_test for values from (20) to (30);
insert into ma_test select x,x from generate_series(0,29) t(x);
create index on ma_test (b);

analyze ma_test;
prepare mt_q1 (int) as select a from ma_test where a >= $1 and a % 10 = 5 order by b;

explain (analyze, costs off, summary off, timing off) execute mt_q1(15);
execute mt_q1(15);
explain (analyze, costs off, summary off, timing off) execute mt_q1(25);
execute mt_q1(25);
-- Ensure MergeAppend behaves correctly when no subplans match
explain (analyze, costs off, summary off, timing off) execute mt_q1(35);
execute mt_q1(35);

deallocate mt_q1;

prepare mt_q2 (int) as select * from ma_test where a >= $1 order by b limit 1;

-- Ensure output list looks sane when the MergeAppend has no subplans.
explain (analyze, verbose, costs off, summary off, timing off) execute mt_q2 (35);

deallocate mt_q2;

-- ensure initplan params properly prune partitions
explain (analyze, costs off, summary off, timing off) select * from ma_test where a >= (select min(b) from ma_test_p2) order by b;

reset enable_seqscan;
reset enable_sort;

drop table ma_test;

reset enable_indexonlyscan;

--
-- check that pruning works properly when the partition key is of a
-- pseudotype
--

-- array type list partition key
create table pp_arrpart (a int[]) partition by list (a);
create table pp_arrpart1 partition of pp_arrpart for values in ('{1}');
create table pp_arrpart2 partition of pp_arrpart for values in ('{2, 3}', '{4, 5}');
explain (costs off) select * from pp_arrpart where a = '{1}';
explain (costs off) select * from pp_arrpart where a = '{1, 2}';
explain (costs off) select * from pp_arrpart where a in ('{4, 5}', '{1}');
explain (costs off) update pp_arrpart set a = a where a = '{1}';
explain (costs off) delete from pp_arrpart where a = '{1}';
drop table pp_arrpart;

-- array type hash partition key
create table pph_arrpart (a int[]) partition by hash (a);
create table pph_arrpart1 partition of pph_arrpart for values with (modulus 2, remainder 0);
create table pph_arrpart2 partition of pph_arrpart for values with (modulus 2, remainder 1);
insert into pph_arrpart values ('{1}'), ('{1, 2}'), ('{4, 5}');
select tableoid::regclass, * from pph_arrpart order by 1;
explain (costs off) select * from pph_arrpart where a = '{1}';
explain (costs off) select * from pph_arrpart where a = '{1, 2}';
explain (costs off) select * from pph_arrpart where a in ('{4, 5}', '{1}');
drop table pph_arrpart;

-- enum type list partition key
create type pp_colors as enum ('green', 'blue', 'black');
create table pp_enumpart (a pp_colors) partition by list (a);
create table pp_enumpart_green partition of pp_enumpart for values in ('green');
create table pp_enumpart_blue partition of pp_enumpart for values in ('blue');
explain (costs off) select * from pp_enumpart where a = 'blue';
explain (costs off) select * from pp_enumpart where a = 'black';
drop table pp_enumpart;
drop type pp_colors;

-- record type as partition key
create type pp_rectype as (a int, b int);
create table pp_recpart (a pp_rectype) partition by list (a);
create table pp_recpart_11 partition of pp_recpart for values in ('(1,1)');
create table pp_recpart_23 partition of pp_recpart for values in ('(2,3)');
explain (costs off) select * from pp_recpart where a = '(1,1)'::pp_rectype;
explain (costs off) select * from pp_recpart where a = '(1,2)'::pp_rectype;
drop table pp_recpart;
drop type pp_rectype;

-- range type partition key
create table pp_intrangepart (a int4range) partition by list (a);
create table pp_intrangepart12 partition of pp_intrangepart for values in ('[1,2]');
create table pp_intrangepart2inf partition of pp_intrangepart for values in ('[2,)');
explain (costs off) select * from pp_intrangepart where a = '[1,2]'::int4range;
explain (costs off) select * from pp_intrangepart where a = '(1,2)'::int4range;
drop table pp_intrangepart;

--
-- Ensure the enable_partition_prune GUC properly disables partition pruning.
--

create table pp_lp (a int, value int) partition by list (a);
create table pp_lp1 partition of pp_lp for values in(1);
create table pp_lp2 partition of pp_lp for values in(2);

explain (costs off) select * from pp_lp where a = 1;
explain (costs off) update pp_lp set value = 10 where a = 1;
explain (costs off) delete from pp_lp where a = 1;

set enable_partition_pruning = off;

set constraint_exclusion = 'partition'; -- this should not affect the result.

explain (costs off) select * from pp_lp where a = 1;
explain (costs off) update pp_lp set value = 10 where a = 1;
explain (costs off) delete from pp_lp where a = 1;

set constraint_exclusion = 'off'; -- this should not affect the result.

explain (costs off) select * from pp_lp where a = 1;
explain (costs off) update pp_lp set value = 10 where a = 1;
explain (costs off) delete from pp_lp where a = 1;

drop table pp_lp;

-- Ensure enable_partition_prune does not affect non-partitioned tables.

create table inh_lp (a int, value int);
create table inh_lp1 (a int, value int, check(a = 1)) inherits (inh_lp);
create table inh_lp2 (a int, value int, check(a = 2)) inherits (inh_lp);

set constraint_exclusion = 'partition';

-- inh_lp2 should be removed in the following 3 cases.
explain (costs off) select * from inh_lp where a = 1;
explain (costs off) update inh_lp set value = 10 where a = 1;
explain (costs off) delete from inh_lp where a = 1;

-- Ensure we don't exclude normal relations when we only expect to exclude
-- inheritance children
explain (costs off) update inh_lp1 set value = 10 where a = 2;

drop table inh_lp cascade;

reset enable_partition_pruning;
reset constraint_exclusion;

-- Check pruning for a partition tree containing only temporary relations
create temp table pp_temp_parent (a int) partition by list (a);
create temp table pp_temp_part_1 partition of pp_temp_parent for values in (1);
create temp table pp_temp_part_def partition of pp_temp_parent default;
explain (costs off) select * from pp_temp_parent where true;
explain (costs off) select * from pp_temp_parent where a = 2;
drop table pp_temp_parent;

-- Stress run-time partition pruning a bit more, per bug reports
create temp table p (a int, b int, c int) partition by list (a);
create temp table p1 partition of p for values in (1);
create temp table p2 partition of p for values in (2);
create temp table q (a int, b int, c int) partition by list (a);
create temp table q1 partition of q for values in (1) partition by list (b);
create temp table q11 partition of q1 for values in (1) partition by list (c);
create temp table q111 partition of q11 for values in (1);
create temp table q2 partition of q for values in (2) partition by list (b);
create temp table q21 partition of q2 for values in (1);
create temp table q22 partition of q2 for values in (2);

insert into q22 values (2, 2, 3);

explain (costs off)
select *
from (
      select * from p
      union all
      select * from q1
      union all
      select 1, 1, 1
     ) s(a, b, c)
where s.a = 1 and s.b = 1 and s.c = (select 1);

select *
from (
      select * from p
      union all
      select * from q1
      union all
      select 1, 1, 1
     ) s(a, b, c)
where s.a = 1 and s.b = 1 and s.c = (select 1);

prepare q (int, int) as
select *
from (
      select * from p
      union all
      select * from q1
      union all
      select 1, 1, 1
     ) s(a, b, c)
where s.a = $1 and s.b = $2 and s.c = (select 1);

explain (costs off) execute q (1, 1);
execute q (1, 1);

drop table p, q;

-- Ensure run-time pruning works correctly when we match a partitioned table
-- on the first level but find no matching partitions on the second level.
create table listp (a int, b int) partition by list (a);
create table listp1 partition of listp for values in(1);
create table listp2 partition of listp for values in(2) partition by list(b);
create table listp2_10 partition of listp2 for values in (10);

explain (analyze, costs off, summary off, timing off)
select * from listp where a = (select 2) and b <> 10;

--
-- check that a partition directly accessed in a query is excluded with
-- constraint_exclusion = on
--

-- turn off partition pruning, so that it doesn't interfere
set enable_partition_pruning to off;

-- setting constraint_exclusion to 'partition' disables exclusion
set constraint_exclusion to 'partition';
explain (costs off) select * from listp1 where a = 2;
explain (costs off) update listp1 set a = 1 where a = 2;
-- constraint exclusion enabled
set constraint_exclusion to 'on';
explain (costs off) select * from listp1 where a = 2;
explain (costs off) update listp1 set a = 1 where a = 2;

reset constraint_exclusion;
reset enable_partition_pruning;

drop table listp;

-- Ensure run-time pruning works correctly for nested Append nodes
set parallel_setup_cost to 0;
set parallel_tuple_cost to 0;

create table listp (a int) partition by list(a);
create table listp_12 partition of listp for values in(1,2) partition by list(a);
create table listp_12_1 partition of listp_12 for values in(1);
create table listp_12_2 partition of listp_12 for values in(2);

-- Force the 2nd subnode of the Append to be non-parallel.  This results in
-- a nested Append node because the mixed parallel / non-parallel paths cannot
-- be pulled into the top-level Append.
alter table listp_12_1 set (parallel_workers = 0);

-- Ensure that listp_12_2 is not scanned.  (The nested Append is not seen in
-- the plan as it's pulled in setref.c due to having just a single subnode).
select explain_parallel_append('select * from listp where a = (select 1);');

-- Like the above but throw some more complexity at the planner by adding
-- a UNION ALL.  We expect both sides of the union not to scan the
-- non-required partitions.
select explain_parallel_append(
'select * from listp where a = (select 1)
  union all
select * from listp where a = (select 2);');

drop table listp;
reset parallel_tuple_cost;
reset parallel_setup_cost;

-- Test case for run-time pruning with a nested Merge Append
set enable_sort to 0;
create table rangep (a int, b int) partition by range (a);
create table rangep_0_to_100 partition of rangep for values from (0) to (100) partition by list (b);
-- We need 3 sub-partitions. 1 to validate pruning worked and another two
-- because a single remaining partition would be pulled up to the main Append.
create table rangep_0_to_100_1 partition of rangep_0_to_100 for values in(1);
create table rangep_0_to_100_2 partition of rangep_0_to_100 for values in(2);
create table rangep_0_to_100_3 partition of rangep_0_to_100 for values in(3);
create table rangep_100_to_200 partition of rangep for values from (100) to (200);
create index on rangep (a);

-- Ensure run-time pruning works on the nested Merge Append
explain (analyze on, costs off, timing off, summary off)
select * from rangep where b IN((select 1),(select 2)) order by a;
reset enable_sort;
drop table rangep;

--
-- Check that gen_prune_steps_from_opexps() works well for various cases of
-- clauses for different partition keys
--

create table rp_prefix_test1 (a int, b varchar) partition by range(a, b);
create table rp_prefix_test1_p1 partition of rp_prefix_test1 for values from (1, 'a') to (1, 'b');
create table rp_prefix_test1_p2 partition of rp_prefix_test1 for values from (2, 'a') to (2, 'b');

-- Don't call get_steps_using_prefix() with the last partition key b plus
-- an empty prefix
explain (costs off) select * from rp_prefix_test1 where a <= 1 and b = 'a';

create table rp_prefix_test2 (a int, b int, c int) partition by range(a, b, c);
create table rp_prefix_test2_p1 partition of rp_prefix_test2 for values from (1, 1, 0) to (1, 1, 10);
create table rp_prefix_test2_p2 partition of rp_prefix_test2 for values from (2, 2, 0) to (2, 2, 10);

-- Don't call get_steps_using_prefix() with the last partition key c plus
-- an invalid prefix (ie, b = 1)
explain (costs off) select * from rp_prefix_test2 where a <= 1 and b = 1 and c >= 0;

create table rp_prefix_test3 (a int, b int, c int, d int) partition by range(a, b, c, d);
create table rp_prefix_test3_p1 partition of rp_prefix_test3 for values from (1, 1, 1, 0) to (1, 1, 1, 10);
create table rp_prefix_test3_p2 partition of rp_prefix_test3 for values from (2, 2, 2, 0) to (2, 2, 2, 10);

-- Test that get_steps_using_prefix() handles a prefix that contains multiple
-- clauses for the partition key b (ie, b >= 1 and b >= 2)
explain (costs off) select * from rp_prefix_test3 where a >= 1 and b >= 1 and b >= 2 and c >= 2 and d >= 0;

-- Test that get_steps_using_prefix() handles a prefix that contains multiple
-- clauses for the partition key b (ie, b >= 1 and b = 2)  (This also tests
-- that the caller arranges clauses in that prefix in the required order)
explain (costs off) select * from rp_prefix_test3 where a >= 1 and b >= 1 and b = 2 and c = 2 and d >= 0;

create table hp_prefix_test (a int, b int, c int, d int) partition by hash (a part_test_int4_ops, b part_test_int4_ops, c part_test_int4_ops, d part_test_int4_ops);
create table hp_prefix_test_p1 partition of hp_prefix_test for values with (modulus 2, remainder 0);
create table hp_prefix_test_p2 partition of hp_prefix_test for values with (modulus 2, remainder 1);

-- Test that get_steps_using_prefix() handles non-NULL step_nullkeys
explain (costs off) select * from hp_prefix_test where a = 1 and b is null and c = 1 and d = 1;

drop table rp_prefix_test1;
drop table rp_prefix_test2;
drop table rp_prefix_test3;
drop table hp_prefix_test;

--
-- Check that gen_partprune_steps() detects self-contradiction from clauses
-- regardless of the order of the clauses (Here we use a custom operator to
-- prevent the equivclass.c machinery from reordering the clauses)
--

create operator === (
   leftarg = int4,
   rightarg = int4,
   procedure = int4eq,
   commutator = ===,
   hashes
);
create operator class part_test_int4_ops2
for type int4
using hash as
operator 1 ===,
function 2 part_hashint4_noop(int4, int8);

create table hp_contradict_test (a int, b int) partition by hash (a part_test_int4_ops2, b part_test_int4_ops2);
create table hp_contradict_test_p1 partition of hp_contradict_test for values with (modulus 2, remainder 0);
create table hp_contradict_test_p2 partition of hp_contradict_test for values with (modulus 2, remainder 1);

explain (costs off) select * from hp_contradict_test where a is null and a === 1 and b === 1;
explain (costs off) select * from hp_contradict_test where a === 1 and b === 1 and a is null;

drop table hp_contradict_test;
drop operator class part_test_int4_ops2 using hash;
drop operator ===(int4, int4);
