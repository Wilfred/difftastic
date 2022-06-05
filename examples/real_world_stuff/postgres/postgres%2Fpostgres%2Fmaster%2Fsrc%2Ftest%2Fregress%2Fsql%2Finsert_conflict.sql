--
-- insert...on conflict do unique index inference
--
create table insertconflicttest(key int4, fruit text);

--
-- Test unique index inference with operator class specifications and
-- named collations
--
create unique index op_index_key on insertconflicttest(key, fruit text_pattern_ops);
create unique index collation_index_key on insertconflicttest(key, fruit collate "C");
create unique index both_index_key on insertconflicttest(key, fruit collate "C" text_pattern_ops);
create unique index both_index_expr_key on insertconflicttest(key, lower(fruit) collate "C" text_pattern_ops);

-- fails
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (key) do nothing;
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (fruit) do nothing;

-- succeeds
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (key, fruit) do nothing;
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (fruit, key, fruit, key) do nothing;
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (lower(fruit), key, lower(fruit), key) do nothing;
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (key, fruit) do update set fruit = excluded.fruit
  where exists (select 1 from insertconflicttest ii where ii.key = excluded.key);
-- Neither collation nor operator class specifications are required --
-- supplying them merely *limits* matches to indexes with matching opclasses
-- used for relevant indexes
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (key, fruit text_pattern_ops) do nothing;
-- Okay, arbitrates using both index where text_pattern_ops opclass does and
-- does not appear.
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (key, fruit collate "C") do nothing;
-- Okay, but only accepts the single index where both opclass and collation are
-- specified
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (fruit collate "C" text_pattern_ops, key) do nothing;
-- Okay, but only accepts the single index where both opclass and collation are
-- specified (plus expression variant)
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (lower(fruit) collate "C", key, key) do nothing;
-- Attribute appears twice, while not all attributes/expressions on attributes
-- appearing within index definition match in terms of both opclass and
-- collation.
--
-- Works because every attribute in inference specification needs to be
-- satisfied once or more by cataloged index attribute, and as always when an
-- attribute in the cataloged definition has a non-default opclass/collation,
-- it still satisfied some inference attribute lacking any particular
-- opclass/collation specification.
--
-- The implementation is liberal in accepting inference specifications on the
-- assumption that multiple inferred unique indexes will prevent problematic
-- cases.  It rolls with unique indexes where attributes redundantly appear
-- multiple times, too (which is not tested here).
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (fruit, key, fruit text_pattern_ops, key) do nothing;
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (lower(fruit) collate "C" text_pattern_ops, key, key) do nothing;

drop index op_index_key;
drop index collation_index_key;
drop index both_index_key;
drop index both_index_expr_key;

--
-- Make sure that cross matching of attribute opclass/collation does not occur
--
create unique index cross_match on insertconflicttest(lower(fruit) collate "C", upper(fruit) text_pattern_ops);

-- fails:
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (lower(fruit) text_pattern_ops, upper(fruit) collate "C") do nothing;
-- works:
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (lower(fruit) collate "C", upper(fruit) text_pattern_ops) do nothing;

drop index cross_match;

--
-- Single key tests
--
create unique index key_index on insertconflicttest(key);

--
-- Explain tests
--
explain (costs off) insert into insertconflicttest values (0, 'Bilberry') on conflict (key) do update set fruit = excluded.fruit;
-- Should display qual actually attributable to internal sequential scan:
explain (costs off) insert into insertconflicttest values (0, 'Bilberry') on conflict (key) do update set fruit = excluded.fruit where insertconflicttest.fruit != 'Cawesh';
-- With EXCLUDED.* expression in scan node:
explain (costs off) insert into insertconflicttest values(0, 'Crowberry') on conflict (key) do update set fruit = excluded.fruit where excluded.fruit != 'Elderberry';
-- Does the same, but JSON format shows "Conflict Arbiter Index" as JSON array:
explain (costs off, format json) insert into insertconflicttest values (0, 'Bilberry') on conflict (key) do update set fruit = excluded.fruit where insertconflicttest.fruit != 'Lime' returning *;

-- Fails (no unique index inference specification, required for do update variant):
insert into insertconflicttest values (1, 'Apple') on conflict do update set fruit = excluded.fruit;

-- inference succeeds:
insert into insertconflicttest values (1, 'Apple') on conflict (key) do update set fruit = excluded.fruit;
insert into insertconflicttest values (2, 'Orange') on conflict (key, key, key) do update set fruit = excluded.fruit;

-- Succeed, since multi-assignment does not involve subquery:
insert into insertconflicttest
values (1, 'Apple'), (2, 'Orange')
on conflict (key) do update set (fruit, key) = (excluded.fruit, excluded.key);

-- Give good diagnostic message when EXCLUDED.* spuriously referenced from
-- RETURNING:
insert into insertconflicttest values (1, 'Apple') on conflict (key) do update set fruit = excluded.fruit RETURNING excluded.fruit;

-- Only suggest <table>.* column when inference element misspelled:
insert into insertconflicttest values (1, 'Apple') on conflict (keyy) do update set fruit = excluded.fruit;

-- Have useful HINT for EXCLUDED.* RTE within UPDATE:
insert into insertconflicttest values (1, 'Apple') on conflict (key) do update set fruit = excluded.fruitt;

-- inference fails:
insert into insertconflicttest values (3, 'Kiwi') on conflict (key, fruit) do update set fruit = excluded.fruit;
insert into insertconflicttest values (4, 'Mango') on conflict (fruit, key) do update set fruit = excluded.fruit;
insert into insertconflicttest values (5, 'Lemon') on conflict (fruit) do update set fruit = excluded.fruit;
insert into insertconflicttest values (6, 'Passionfruit') on conflict (lower(fruit)) do update set fruit = excluded.fruit;

-- Check the target relation can be aliased
insert into insertconflicttest AS ict values (6, 'Passionfruit') on conflict (key) do update set fruit = excluded.fruit; -- ok, no reference to target table
insert into insertconflicttest AS ict values (6, 'Passionfruit') on conflict (key) do update set fruit = ict.fruit; -- ok, alias
insert into insertconflicttest AS ict values (6, 'Passionfruit') on conflict (key) do update set fruit = insertconflicttest.fruit; -- error, references aliased away name

drop index key_index;

--
-- Composite key tests
--
create unique index comp_key_index on insertconflicttest(key, fruit);

-- inference succeeds:
insert into insertconflicttest values (7, 'Raspberry') on conflict (key, fruit) do update set fruit = excluded.fruit;
insert into insertconflicttest values (8, 'Lime') on conflict (fruit, key) do update set fruit = excluded.fruit;

-- inference fails:
insert into insertconflicttest values (9, 'Banana') on conflict (key) do update set fruit = excluded.fruit;
insert into insertconflicttest values (10, 'Blueberry') on conflict (key, key, key) do update set fruit = excluded.fruit;
insert into insertconflicttest values (11, 'Cherry') on conflict (key, lower(fruit)) do update set fruit = excluded.fruit;
insert into insertconflicttest values (12, 'Date') on conflict (lower(fruit), key) do update set fruit = excluded.fruit;

drop index comp_key_index;

--
-- Partial index tests, no inference predicate specified
--
create unique index part_comp_key_index on insertconflicttest(key, fruit) where key < 5;
create unique index expr_part_comp_key_index on insertconflicttest(key, lower(fruit)) where key < 5;

-- inference fails:
insert into insertconflicttest values (13, 'Grape') on conflict (key, fruit) do update set fruit = excluded.fruit;
insert into insertconflicttest values (14, 'Raisin') on conflict (fruit, key) do update set fruit = excluded.fruit;
insert into insertconflicttest values (15, 'Cranberry') on conflict (key) do update set fruit = excluded.fruit;
insert into insertconflicttest values (16, 'Melon') on conflict (key, key, key) do update set fruit = excluded.fruit;
insert into insertconflicttest values (17, 'Mulberry') on conflict (key, lower(fruit)) do update set fruit = excluded.fruit;
insert into insertconflicttest values (18, 'Pineapple') on conflict (lower(fruit), key) do update set fruit = excluded.fruit;

drop index part_comp_key_index;
drop index expr_part_comp_key_index;

--
-- Expression index tests
--
create unique index expr_key_index on insertconflicttest(lower(fruit));

-- inference succeeds:
insert into insertconflicttest values (20, 'Quince') on conflict (lower(fruit)) do update set fruit = excluded.fruit;
insert into insertconflicttest values (21, 'Pomegranate') on conflict (lower(fruit), lower(fruit)) do update set fruit = excluded.fruit;

-- inference fails:
insert into insertconflicttest values (22, 'Apricot') on conflict (upper(fruit)) do update set fruit = excluded.fruit;
insert into insertconflicttest values (23, 'Blackberry') on conflict (fruit) do update set fruit = excluded.fruit;

drop index expr_key_index;

--
-- Expression index tests (with regular column)
--
create unique index expr_comp_key_index on insertconflicttest(key, lower(fruit));
create unique index tricky_expr_comp_key_index on insertconflicttest(key, lower(fruit), upper(fruit));

-- inference succeeds:
insert into insertconflicttest values (24, 'Plum') on conflict (key, lower(fruit)) do update set fruit = excluded.fruit;
insert into insertconflicttest values (25, 'Peach') on conflict (lower(fruit), key) do update set fruit = excluded.fruit;
-- Should not infer "tricky_expr_comp_key_index" index:
explain (costs off) insert into insertconflicttest values (26, 'Fig') on conflict (lower(fruit), key, lower(fruit), key) do update set fruit = excluded.fruit;

-- inference fails:
insert into insertconflicttest values (27, 'Prune') on conflict (key, upper(fruit)) do update set fruit = excluded.fruit;
insert into insertconflicttest values (28, 'Redcurrant') on conflict (fruit, key) do update set fruit = excluded.fruit;
insert into insertconflicttest values (29, 'Nectarine') on conflict (key) do update set fruit = excluded.fruit;

drop index expr_comp_key_index;
drop index tricky_expr_comp_key_index;

--
-- Non-spurious duplicate violation tests
--
create unique index key_index on insertconflicttest(key);
create unique index fruit_index on insertconflicttest(fruit);

-- succeeds, since UPDATE happens to update "fruit" to existing value:
insert into insertconflicttest values (26, 'Fig') on conflict (key) do update set fruit = excluded.fruit;
-- fails, since UPDATE is to row with key value 26, and we're updating "fruit"
-- to a value that happens to exist in another row ('peach'):
insert into insertconflicttest values (26, 'Peach') on conflict (key) do update set fruit = excluded.fruit;
-- succeeds, since "key" isn't repeated/referenced in UPDATE, and "fruit"
-- arbitrates that statement updates existing "Fig" row:
insert into insertconflicttest values (25, 'Fig') on conflict (fruit) do update set fruit = excluded.fruit;

drop index key_index;
drop index fruit_index;

--
-- Test partial unique index inference
--
create unique index partial_key_index on insertconflicttest(key) where fruit like '%berry';

-- Succeeds
insert into insertconflicttest values (23, 'Blackberry') on conflict (key) where fruit like '%berry' do update set fruit = excluded.fruit;
insert into insertconflicttest as t values (23, 'Blackberry') on conflict (key) where fruit like '%berry' and t.fruit = 'inconsequential' do nothing;

-- fails
insert into insertconflicttest values (23, 'Blackberry') on conflict (key) do update set fruit = excluded.fruit;
insert into insertconflicttest values (23, 'Blackberry') on conflict (key) where fruit like '%berry' or fruit = 'consequential' do nothing;
insert into insertconflicttest values (23, 'Blackberry') on conflict (fruit) where fruit like '%berry' do update set fruit = excluded.fruit;

drop index partial_key_index;

--
-- Test that wholerow references to ON CONFLICT's EXCLUDED work
--
create unique index plain on insertconflicttest(key);

-- Succeeds, updates existing row:
insert into insertconflicttest as i values (23, 'Jackfruit') on conflict (key) do update set fruit = excluded.fruit
  where i.* != excluded.* returning *;
-- No update this time, though:
insert into insertconflicttest as i values (23, 'Jackfruit') on conflict (key) do update set fruit = excluded.fruit
  where i.* != excluded.* returning *;
-- Predicate changed to require match rather than non-match, so updates once more:
insert into insertconflicttest as i values (23, 'Jackfruit') on conflict (key) do update set fruit = excluded.fruit
  where i.* = excluded.* returning *;
-- Assign:
insert into insertconflicttest as i values (23, 'Avocado') on conflict (key) do update set fruit = excluded.*::text
  returning *;
-- deparse whole row var in WHERE and SET clauses:
explain (costs off) insert into insertconflicttest as i values (23, 'Avocado') on conflict (key) do update set fruit = excluded.fruit where excluded.* is null;
explain (costs off) insert into insertconflicttest as i values (23, 'Avocado') on conflict (key) do update set fruit = excluded.*::text;

drop index plain;

-- Cleanup
drop table insertconflicttest;


--
-- Verify that EXCLUDED does not allow system column references. These
-- do not make sense because EXCLUDED isn't an already stored tuple
-- (and thus doesn't have a ctid etc).
--
create table syscolconflicttest(key int4, data text);
insert into syscolconflicttest values (1);
insert into syscolconflicttest values (1) on conflict (key) do update set data = excluded.ctid::text;
drop table syscolconflicttest;

--
-- Previous tests all managed to not test any expressions requiring
-- planner preprocessing ...
--
create table insertconflict (a bigint, b bigint);

create unique index insertconflicti1 on insertconflict(coalesce(a, 0));

create unique index insertconflicti2 on insertconflict(b)
  where coalesce(a, 1) > 0;

insert into insertconflict values (1, 2)
on conflict (coalesce(a, 0)) do nothing;

insert into insertconflict values (1, 2)
on conflict (b) where coalesce(a, 1) > 0 do nothing;

insert into insertconflict values (1, 2)
on conflict (b) where coalesce(a, 1) > 1 do nothing;

drop table insertconflict;

--
-- test insertion through view
--

create table insertconflict (f1 int primary key, f2 text);
create view insertconflictv as
  select * from insertconflict with cascaded check option;

insert into insertconflictv values (1,'foo')
  on conflict (f1) do update set f2 = excluded.f2;
select * from insertconflict;
insert into insertconflictv values (1,'bar')
  on conflict (f1) do update set f2 = excluded.f2;
select * from insertconflict;

drop view insertconflictv;
drop table insertconflict;


-- ******************************************************************
-- *                                                                *
-- * Test inheritance (example taken from tutorial)                 *
-- *                                                                *
-- ******************************************************************
create table cities (
	name		text,
	population	float8,
	altitude	int		-- (in ft)
);

create table capitals (
	state		char(2)
) inherits (cities);

-- Create unique indexes.  Due to a general limitation of inheritance,
-- uniqueness is only enforced per-relation.  Unique index inference
-- specification will do the right thing, though.
create unique index cities_names_unique on cities (name);
create unique index capitals_names_unique on capitals (name);

-- prepopulate the tables.
insert into cities values ('San Francisco', 7.24E+5, 63);
insert into cities values ('Las Vegas', 2.583E+5, 2174);
insert into cities values ('Mariposa', 1200, 1953);

insert into capitals values ('Sacramento', 3.694E+5, 30, 'CA');
insert into capitals values ('Madison', 1.913E+5, 845, 'WI');

-- Tests proper for inheritance:
select * from capitals;

-- Succeeds:
insert into cities values ('Las Vegas', 2.583E+5, 2174) on conflict do nothing;
insert into capitals values ('Sacramento', 4664.E+5, 30, 'CA') on conflict (name) do update set population = excluded.population;
-- Wrong "Sacramento", so do nothing:
insert into capitals values ('Sacramento', 50, 2267, 'NE') on conflict (name) do nothing;
select * from capitals;
insert into cities values ('Las Vegas', 5.83E+5, 2001) on conflict (name) do update set population = excluded.population, altitude = excluded.altitude;
select tableoid::regclass, * from cities;
insert into capitals values ('Las Vegas', 5.83E+5, 2222, 'NV') on conflict (name) do update set population = excluded.population;
-- Capitals will contain new capital, Las Vegas:
select * from capitals;
-- Cities contains two instances of "Las Vegas", since unique constraints don't
-- work across inheritance:
select tableoid::regclass, * from cities;
-- This only affects "cities" version of "Las Vegas":
insert into cities values ('Las Vegas', 5.86E+5, 2223) on conflict (name) do update set population = excluded.population, altitude = excluded.altitude;
select tableoid::regclass, * from cities;

-- clean up
drop table capitals;
drop table cities;


-- Make sure a table named excluded is handled properly
create table excluded(key int primary key, data text);
insert into excluded values(1, '1');
-- error, ambiguous
insert into excluded values(1, '2') on conflict (key) do update set data = excluded.data RETURNING *;
-- ok, aliased
insert into excluded AS target values(1, '2') on conflict (key) do update set data = excluded.data RETURNING *;
-- ok, aliased
insert into excluded AS target values(1, '2') on conflict (key) do update set data = target.data RETURNING *;
-- make sure excluded isn't a problem in returning clause
insert into excluded values(1, '2') on conflict (key) do update set data = 3 RETURNING excluded.*;

-- clean up
drop table excluded;


-- check that references to columns after dropped columns are handled correctly
create table dropcol(key int primary key, drop1 int, keep1 text, drop2 numeric, keep2 float);
insert into dropcol(key, drop1, keep1, drop2, keep2) values(1, 1, '1', '1', 1);
-- set using excluded
insert into dropcol(key, drop1, keep1, drop2, keep2) values(1, 2, '2', '2', 2) on conflict(key)
    do update set drop1 = excluded.drop1, keep1 = excluded.keep1, drop2 = excluded.drop2, keep2 = excluded.keep2
    where excluded.drop1 is not null and excluded.keep1 is not null and excluded.drop2 is not null and excluded.keep2 is not null
          and dropcol.drop1 is not null and dropcol.keep1 is not null and dropcol.drop2 is not null and dropcol.keep2 is not null
    returning *;
;
-- set using existing table
insert into dropcol(key, drop1, keep1, drop2, keep2) values(1, 3, '3', '3', 3) on conflict(key)
    do update set drop1 = dropcol.drop1, keep1 = dropcol.keep1, drop2 = dropcol.drop2, keep2 = dropcol.keep2
    returning *;
;
alter table dropcol drop column drop1, drop column drop2;
-- set using excluded
insert into dropcol(key, keep1, keep2) values(1, '4', 4) on conflict(key)
    do update set keep1 = excluded.keep1, keep2 = excluded.keep2
    where excluded.keep1 is not null and excluded.keep2 is not null
          and dropcol.keep1 is not null and dropcol.keep2 is not null
    returning *;
;
-- set using existing table
insert into dropcol(key, keep1, keep2) values(1, '5', 5) on conflict(key)
    do update set keep1 = dropcol.keep1, keep2 = dropcol.keep2
    returning *;
;

DROP TABLE dropcol;

-- check handling of regular btree constraint along with gist constraint

create table twoconstraints (f1 int unique, f2 box,
                             exclude using gist(f2 with &&));
insert into twoconstraints values(1, '((0,0),(1,1))');
insert into twoconstraints values(1, '((2,2),(3,3))');  -- fail on f1
insert into twoconstraints values(2, '((0,0),(1,2))');  -- fail on f2
insert into twoconstraints values(2, '((0,0),(1,2))')
  on conflict on constraint twoconstraints_f1_key do nothing;  -- fail on f2
insert into twoconstraints values(2, '((0,0),(1,2))')
  on conflict on constraint twoconstraints_f2_excl do nothing;  -- do nothing
select * from twoconstraints;
drop table twoconstraints;

-- check handling of self-conflicts at various isolation levels

create table selfconflict (f1 int primary key, f2 int);

begin transaction isolation level read committed;
insert into selfconflict values (1,1), (1,2) on conflict do nothing;
commit;

begin transaction isolation level repeatable read;
insert into selfconflict values (2,1), (2,2) on conflict do nothing;
commit;

begin transaction isolation level serializable;
insert into selfconflict values (3,1), (3,2) on conflict do nothing;
commit;

begin transaction isolation level read committed;
insert into selfconflict values (4,1), (4,2) on conflict(f1) do update set f2 = 0;
commit;

begin transaction isolation level repeatable read;
insert into selfconflict values (5,1), (5,2) on conflict(f1) do update set f2 = 0;
commit;

begin transaction isolation level serializable;
insert into selfconflict values (6,1), (6,2) on conflict(f1) do update set f2 = 0;
commit;

select * from selfconflict;

drop table selfconflict;

-- check ON CONFLICT handling with partitioned tables
create table parted_conflict_test (a int unique, b char) partition by list (a);
create table parted_conflict_test_1 partition of parted_conflict_test (b unique) for values in (1, 2);

-- no indexes required here
insert into parted_conflict_test values (1, 'a') on conflict do nothing;

-- index on a required, which does exist in parent
insert into parted_conflict_test values (1, 'a') on conflict (a) do nothing;
insert into parted_conflict_test values (1, 'a') on conflict (a) do update set b = excluded.b;

-- targeting partition directly will work
insert into parted_conflict_test_1 values (1, 'a') on conflict (a) do nothing;
insert into parted_conflict_test_1 values (1, 'b') on conflict (a) do update set b = excluded.b;

-- index on b required, which doesn't exist in parent
insert into parted_conflict_test values (2, 'b') on conflict (b) do update set a = excluded.a;

-- targeting partition directly will work
insert into parted_conflict_test_1 values (2, 'b') on conflict (b) do update set a = excluded.a;

-- should see (2, 'b')
select * from parted_conflict_test order by a;

-- now check that DO UPDATE works correctly for target partition with
-- different attribute numbers
create table parted_conflict_test_2 (b char, a int unique);
alter table parted_conflict_test attach partition parted_conflict_test_2 for values in (3);
truncate parted_conflict_test;
insert into parted_conflict_test values (3, 'a') on conflict (a) do update set b = excluded.b;
insert into parted_conflict_test values (3, 'b') on conflict (a) do update set b = excluded.b;

-- should see (3, 'b')
select * from parted_conflict_test order by a;

-- case where parent will have a dropped column, but the partition won't
alter table parted_conflict_test drop b, add b char;
create table parted_conflict_test_3 partition of parted_conflict_test for values in (4);
truncate parted_conflict_test;
insert into parted_conflict_test (a, b) values (4, 'a') on conflict (a) do update set b = excluded.b;
insert into parted_conflict_test (a, b) values (4, 'b') on conflict (a) do update set b = excluded.b where parted_conflict_test.b = 'a';

-- should see (4, 'b')
select * from parted_conflict_test order by a;

-- case with multi-level partitioning
create table parted_conflict_test_4 partition of parted_conflict_test for values in (5) partition by list (a);
create table parted_conflict_test_4_1 partition of parted_conflict_test_4 for values in (5);
truncate parted_conflict_test;
insert into parted_conflict_test (a, b) values (5, 'a') on conflict (a) do update set b = excluded.b;
insert into parted_conflict_test (a, b) values (5, 'b') on conflict (a) do update set b = excluded.b where parted_conflict_test.b = 'a';

-- should see (5, 'b')
select * from parted_conflict_test order by a;

-- test with multiple rows
truncate parted_conflict_test;
insert into parted_conflict_test (a, b) values (1, 'a'), (2, 'a'), (4, 'a') on conflict (a) do update set b = excluded.b where excluded.b = 'b';
insert into parted_conflict_test (a, b) values (1, 'b'), (2, 'c'), (4, 'b') on conflict (a) do update set b = excluded.b where excluded.b = 'b';

-- should see (1, 'b'), (2, 'a'), (4, 'b')
select * from parted_conflict_test order by a;

drop table parted_conflict_test;

-- test behavior of inserting a conflicting tuple into an intermediate
-- partitioning level
create table parted_conflict (a int primary key, b text) partition by range (a);
create table parted_conflict_1 partition of parted_conflict for values from (0) to (1000) partition by range (a);
create table parted_conflict_1_1 partition of parted_conflict_1 for values from (0) to (500);
insert into parted_conflict values (40, 'forty');
insert into parted_conflict_1 values (40, 'cuarenta')
  on conflict (a) do update set b = excluded.b;
drop table parted_conflict;

-- same thing, but this time try to use an index that's created not in the
-- partition
create table parted_conflict (a int, b text) partition by range (a);
create table parted_conflict_1 partition of parted_conflict for values from (0) to (1000) partition by range (a);
create table parted_conflict_1_1 partition of parted_conflict_1 for values from (0) to (500);
create unique index on only parted_conflict_1 (a);
create unique index on only parted_conflict (a);
alter index parted_conflict_a_idx attach partition parted_conflict_1_a_idx;
insert into parted_conflict values (40, 'forty');
insert into parted_conflict_1 values (40, 'cuarenta')
  on conflict (a) do update set b = excluded.b;
drop table parted_conflict;

-- test whole-row Vars in ON CONFLICT expressions
create table parted_conflict (a int, b text, c int) partition by range (a);
create table parted_conflict_1 (drp text, c int, a int, b text);
alter table parted_conflict_1 drop column drp;
create unique index on parted_conflict (a, b);
alter table parted_conflict attach partition parted_conflict_1 for values from (0) to (1000);
truncate parted_conflict;
insert into parted_conflict values (50, 'cincuenta', 1);
insert into parted_conflict values (50, 'cincuenta', 2)
  on conflict (a, b) do update set (a, b, c) = row(excluded.*)
  where parted_conflict = (50, text 'cincuenta', 1) and
        excluded = (50, text 'cincuenta', 2);

-- should see (50, 'cincuenta', 2)
select * from parted_conflict order by a;

-- test with statement level triggers
create or replace function parted_conflict_update_func() returns trigger as $$
declare
    r record;
begin
 for r in select * from inserted loop
	raise notice 'a = %, b = %, c = %', r.a, r.b, r.c;
 end loop;
 return new;
end;
$$ language plpgsql;

create trigger parted_conflict_update
    after update on parted_conflict
    referencing new table as inserted
    for each statement
    execute procedure parted_conflict_update_func();

truncate parted_conflict;

insert into parted_conflict values (0, 'cero', 1);

insert into parted_conflict values(0, 'cero', 1)
  on conflict (a,b) do update set c = parted_conflict.c + 1;

drop table parted_conflict;
drop function parted_conflict_update_func();
