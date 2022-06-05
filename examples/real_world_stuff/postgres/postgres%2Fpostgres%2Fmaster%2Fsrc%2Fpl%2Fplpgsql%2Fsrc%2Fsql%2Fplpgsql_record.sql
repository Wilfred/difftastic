--
-- Tests for PL/pgSQL handling of composite (record) variables
--

create type two_int4s as (f1 int4, f2 int4);
create type two_int8s as (q1 int8, q2 int8);
create type nested_int8s as (c1 two_int8s, c2 two_int8s);

-- base-case return of a composite type
create function retc(int) returns two_int8s language plpgsql as
$$ begin return row($1,1)::two_int8s; end $$;
select retc(42);

-- ok to return a matching record type
create or replace function retc(int) returns two_int8s language plpgsql as
$$ begin return row($1::int8, 1::int8); end $$;
select retc(42);

-- we don't currently support implicit casting
create or replace function retc(int) returns two_int8s language plpgsql as
$$ begin return row($1,1); end $$;
select retc(42);

-- nor extra columns
create or replace function retc(int) returns two_int8s language plpgsql as
$$ begin return row($1::int8, 1::int8, 42); end $$;
select retc(42);

-- same cases with an intermediate "record" variable
create or replace function retc(int) returns two_int8s language plpgsql as
$$ declare r record; begin r := row($1::int8, 1::int8); return r; end $$;
select retc(42);

create or replace function retc(int) returns two_int8s language plpgsql as
$$ declare r record; begin r := row($1,1); return r; end $$;
select retc(42);

create or replace function retc(int) returns two_int8s language plpgsql as
$$ declare r record; begin r := row($1::int8, 1::int8, 42); return r; end $$;
select retc(42);

-- but, for mostly historical reasons, we do convert when assigning
-- to a named-composite-type variable
create or replace function retc(int) returns two_int8s language plpgsql as
$$ declare r two_int8s; begin r := row($1::int8, 1::int8, 42); return r; end $$;
select retc(42);

do $$ declare c two_int8s;
begin c := row(1,2); raise notice 'c = %', c; end$$;

do $$ declare c two_int8s;
begin for c in select 1,2 loop raise notice 'c = %', c; end loop; end$$;

do $$ declare c4 two_int4s; c8 two_int8s;
begin
  c8 := row(1,2);
  c4 := c8;
  c8 := c4;
  raise notice 'c4 = %', c4;
  raise notice 'c8 = %', c8;
end$$;

do $$ declare c two_int8s; d nested_int8s;
begin
  c := row(1,2);
  d := row(c, row(c.q1, c.q2+1));
  raise notice 'c = %, d = %', c, d;
  c.q1 := 10;
  d.c1 := row(11,12);
  d.c2.q2 := 42;
  raise notice 'c = %, d = %', c, d;
  raise notice 'c.q1 = %, d.c2 = %', c.q1, d.c2;
  raise notice '(d).c2.q2 = %', (d).c2.q2;  -- doesn't work without parens
  raise notice '(d.c2).q2 = %', (d.c2).q2;  -- doesn't work without parens
end$$;

-- block-qualified naming
do $$ <<b>> declare c two_int8s; d nested_int8s;
begin
  b.c := row(1,2);
  b.d := row(b.c, row(b.c.q1, b.c.q2+1));
  raise notice 'b.c = %, b.d = %', b.c, b.d;
  b.c.q1 := 10;
  b.d.c1 := row(11,12);
  b.d.c2.q2 := 42;
  raise notice 'b.c = %, b.d = %', b.c, b.d;
  raise notice 'b.c.q1 = %, b.d.c2 = %', b.c.q1, b.d.c2;
  raise notice '(b.d).c2.q2 = %', (b.d).c2.q2;  -- doesn't work without parens
  raise notice '(b.d.c2).q2 = %', (b.d.c2).q2;  -- doesn't work without parens
end$$;

-- error cases
do $$ declare c two_int8s; begin c.x = 1; end $$;
do $$ declare c nested_int8s; begin c.x = 1; end $$;
do $$ declare c nested_int8s; begin c.x.q1 = 1; end $$;
do $$ declare c nested_int8s; begin c.c2.x = 1; end $$;
do $$ declare c nested_int8s; begin d.c2.x = 1; end $$;
do $$ <<b>> declare c two_int8s; begin b.c.x = 1; end $$;
do $$ <<b>> declare c nested_int8s; begin b.c.x = 1; end $$;
do $$ <<b>> declare c nested_int8s; begin b.c.x.q1 = 1; end $$;
do $$ <<b>> declare c nested_int8s; begin b.c.c2.x = 1; end $$;
do $$ <<b>> declare c nested_int8s; begin b.d.c2.x = 1; end $$;

-- check passing composite result to another function
create function getq1(two_int8s) returns int8 language plpgsql as $$
declare r two_int8s; begin r := $1; return r.q1; end $$;

select getq1(retc(344));
select getq1(row(1,2));

do $$
declare r1 two_int8s; r2 record; x int8;
begin
  r1 := retc(345);
  perform getq1(r1);
  x := getq1(r1);
  raise notice 'x = %', x;
  r2 := retc(346);
  perform getq1(r2);
  x := getq1(r2);
  raise notice 'x = %', x;
end$$;

-- check assignments of composites
do $$
declare r1 two_int8s; r2 two_int8s; r3 record; r4 record;
begin
  r1 := row(1,2);
  raise notice 'r1 = %', r1;
  r1 := r1;  -- shouldn't do anything
  raise notice 'r1 = %', r1;
  r2 := r1;
  raise notice 'r1 = %', r1;
  raise notice 'r2 = %', r2;
  r2.q2 = r1.q1 + 3;  -- check that r2 has distinct storage
  raise notice 'r1 = %', r1;
  raise notice 'r2 = %', r2;
  r1 := null;
  raise notice 'r1 = %', r1;
  raise notice 'r2 = %', r2;
  r1 := row(7,11)::two_int8s;
  r2 := r1;
  raise notice 'r1 = %', r1;
  raise notice 'r2 = %', r2;
  r3 := row(1,2);
  r4 := r3;
  raise notice 'r3 = %', r3;
  raise notice 'r4 = %', r4;
  r4.f1 := r4.f1 + 3;  -- check that r4 has distinct storage
  raise notice 'r3 = %', r3;
  raise notice 'r4 = %', r4;
  r1 := r3;
  raise notice 'r1 = %', r1;
  r4 := r1;
  raise notice 'r4 = %', r4;
  r4.q2 := r4.q2 + 1;  -- r4's field names have changed
  raise notice 'r4 = %', r4;
end$$;

-- fields of named-type vars read as null if uninitialized
do $$
declare r1 two_int8s;
begin
  raise notice 'r1 = %', r1;
  raise notice 'r1.q1 = %', r1.q1;
  raise notice 'r1.q2 = %', r1.q2;
  raise notice 'r1 = %', r1;
end$$;

do $$
declare r1 two_int8s;
begin
  raise notice 'r1.q1 = %', r1.q1;
  raise notice 'r1.q2 = %', r1.q2;
  raise notice 'r1 = %', r1;
  raise notice 'r1.nosuchfield = %', r1.nosuchfield;
end$$;

-- records, not so much
do $$
declare r1 record;
begin
  raise notice 'r1 = %', r1;
  raise notice 'r1.f1 = %', r1.f1;
  raise notice 'r1.f2 = %', r1.f2;
  raise notice 'r1 = %', r1;
end$$;

-- but OK if you assign first
do $$
declare r1 record;
begin
  raise notice 'r1 = %', r1;
  r1 := row(1,2);
  raise notice 'r1.f1 = %', r1.f1;
  raise notice 'r1.f2 = %', r1.f2;
  raise notice 'r1 = %', r1;
  raise notice 'r1.nosuchfield = %', r1.nosuchfield;
end$$;

-- check repeated assignments to composite fields
create table some_table (id int, data text);

do $$
declare r some_table;
begin
  r := (23, 'skidoo');
  for i in 1 .. 10 loop
    r.id := r.id + i;
    r.data := r.data || ' ' || i;
  end loop;
  raise notice 'r = %', r;
end$$;

-- check behavior of function declared to return "record"

create function returnsrecord(int) returns record language plpgsql as
$$ begin return row($1,$1+1); end $$;

select returnsrecord(42);
select * from returnsrecord(42) as r(x int, y int);
select * from returnsrecord(42) as r(x int, y int, z int);  -- fail
select * from returnsrecord(42) as r(x int, y bigint);  -- fail

-- same with an intermediate record variable
create or replace function returnsrecord(int) returns record language plpgsql as
$$ declare r record; begin r := row($1,$1+1); return r; end $$;

select returnsrecord(42);
select * from returnsrecord(42) as r(x int, y int);
select * from returnsrecord(42) as r(x int, y int, z int);  -- fail
select * from returnsrecord(42) as r(x int, y bigint);  -- fail

-- should work the same with a missing column in the actual result value
create table has_hole(f1 int, f2 int, f3 int);
alter table has_hole drop column f2;

create or replace function returnsrecord(int) returns record language plpgsql as
$$ begin return row($1,$1+1)::has_hole; end $$;

select returnsrecord(42);
select * from returnsrecord(42) as r(x int, y int);
select * from returnsrecord(42) as r(x int, y int, z int);  -- fail
select * from returnsrecord(42) as r(x int, y bigint);  -- fail

-- same with an intermediate record variable
create or replace function returnsrecord(int) returns record language plpgsql as
$$ declare r record; begin r := row($1,$1+1)::has_hole; return r; end $$;

select returnsrecord(42);
select * from returnsrecord(42) as r(x int, y int);
select * from returnsrecord(42) as r(x int, y int, z int);  -- fail
select * from returnsrecord(42) as r(x int, y bigint);  -- fail

-- check access to a field of an argument declared "record"
create function getf1(x record) returns int language plpgsql as
$$ begin return x.f1; end $$;
select getf1(1);
select getf1(row(1,2));
-- the context stack is different when debug_discard_caches
-- is set, so suppress context output
\set SHOW_CONTEXT never
select getf1(row(1,2)::two_int8s);
\set SHOW_CONTEXT errors
select getf1(row(1,2));

-- check behavior when assignment to FOR-loop variable requires coercion
do $$
declare r two_int8s;
begin
  for r in select i, i+1 from generate_series(1,4) i
  loop
    raise notice 'r = %', r;
  end loop;
end$$;

-- check behavior when returning setof composite
create function returnssetofholes() returns setof has_hole language plpgsql as
$$
declare r record;
  h has_hole;
begin
  return next h;
  r := (1,2);
  h := (3,4);
  return next r;
  return next h;
  return next row(5,6);
  return next row(7,8)::has_hole;
end$$;
select returnssetofholes();

create or replace function returnssetofholes() returns setof has_hole language plpgsql as
$$
declare r record;
begin
  return next r;  -- fails, not assigned yet
end$$;
select returnssetofholes();

create or replace function returnssetofholes() returns setof has_hole language plpgsql as
$$
begin
  return next row(1,2,3);  -- fails
end$$;
select returnssetofholes();

-- check behavior with changes of a named rowtype
create table mutable(f1 int, f2 text);

create function sillyaddone(int) returns int language plpgsql as
$$ declare r mutable; begin r.f1 := $1; return r.f1 + 1; end $$;
select sillyaddone(42);

-- test for change of type of column f1 should be here someday;
-- for now see plpgsql_cache test

alter table mutable drop column f1;
-- the context stack is different when debug_discard_caches
-- is set, so suppress context output
\set SHOW_CONTEXT never
select sillyaddone(42);  -- fail
\set SHOW_CONTEXT errors

create function getf3(x mutable) returns int language plpgsql as
$$ begin return x.f3; end $$;
select getf3(null::mutable);  -- doesn't work yet
alter table mutable add column f3 int;
select getf3(null::mutable);  -- now it works
alter table mutable drop column f3;
-- the context stack is different when debug_discard_caches
-- is set, so suppress context output
\set SHOW_CONTEXT never
select getf3(null::mutable);  -- fails again
\set SHOW_CONTEXT errors

-- check behavior with creating/dropping a named rowtype
set check_function_bodies = off;  -- else reference to nonexistent type fails

create function sillyaddtwo(int) returns int language plpgsql as
$$ declare r mutable2; begin r.f1 := $1; return r.f1 + 2; end $$;

reset check_function_bodies;

select sillyaddtwo(42);  -- fail
create table mutable2(f1 int, f2 text);
select sillyaddtwo(42);
drop table mutable2;
-- the context stack is different when debug_discard_caches
-- is set, so suppress context output
\set SHOW_CONTEXT never
select sillyaddtwo(42);  -- fail
\set SHOW_CONTEXT errors
create table mutable2(f0 text, f1 int, f2 text);
select sillyaddtwo(42);
select sillyaddtwo(43);

-- check access to system columns in a record variable

create function sillytrig() returns trigger language plpgsql as
$$begin
  raise notice 'old.ctid = %', old.ctid;
  raise notice 'old.tableoid = %', old.tableoid::regclass;
  return new;
end$$;

create trigger mutable_trig before update on mutable for each row
execute procedure sillytrig();

insert into mutable values ('foo'), ('bar');
update mutable set f2 = f2 || ' baz';
table mutable;

-- check returning a composite datum from a trigger

create or replace function sillytrig() returns trigger language plpgsql as
$$begin
  return row(new.*);
end$$;

update mutable set f2 = f2 || ' baz';
table mutable;

create or replace function sillytrig() returns trigger language plpgsql as
$$declare r record;
begin
  r := row(new.*);
  return r;
end$$;

update mutable set f2 = f2 || ' baz';
table mutable;

--
-- Domains of composite
--

create domain ordered_int8s as two_int8s check((value).q1 <= (value).q2);

create function read_ordered_int8s(p ordered_int8s) returns int8 as $$
begin return p.q1 + p.q2; end
$$ language plpgsql;

select read_ordered_int8s(row(1, 2));
select read_ordered_int8s(row(2, 1));  -- fail

create function build_ordered_int8s(i int8, j int8) returns ordered_int8s as $$
begin return row(i,j); end
$$ language plpgsql;

select build_ordered_int8s(1,2);
select build_ordered_int8s(2,1);  -- fail

create function build_ordered_int8s_2(i int8, j int8) returns ordered_int8s as $$
declare r record; begin r := row(i,j); return r; end
$$ language plpgsql;

select build_ordered_int8s_2(1,2);
select build_ordered_int8s_2(2,1);  -- fail

create function build_ordered_int8s_3(i int8, j int8) returns ordered_int8s as $$
declare r two_int8s; begin r := row(i,j); return r; end
$$ language plpgsql;

select build_ordered_int8s_3(1,2);
select build_ordered_int8s_3(2,1);  -- fail

create function build_ordered_int8s_4(i int8, j int8) returns ordered_int8s as $$
declare r ordered_int8s; begin r := row(i,j); return r; end
$$ language plpgsql;

select build_ordered_int8s_4(1,2);
select build_ordered_int8s_4(2,1);  -- fail

create function build_ordered_int8s_a(i int8, j int8) returns ordered_int8s[] as $$
begin return array[row(i,j), row(i,j+1)]; end
$$ language plpgsql;

select build_ordered_int8s_a(1,2);
select build_ordered_int8s_a(2,1);  -- fail

-- check field assignment
do $$
declare r ordered_int8s;
begin
  r.q1 := null;
  r.q2 := 43;
  r.q1 := 42;
  r.q2 := 41;  -- fail
end$$;

-- check whole-row assignment
do $$
declare r ordered_int8s;
begin
  r := null;
  r := row(null,null);
  r := row(1,2);
  r := row(2,1);  -- fail
end$$;

-- check assignment in for-loop
do $$
declare r ordered_int8s;
begin
  for r in values (1,2),(3,4),(6,5) loop
    raise notice 'r = %', r;
  end loop;
end$$;

-- check behavior with toastable fields, too

create type two_texts as (f1 text, f2 text);
create domain ordered_texts as two_texts check((value).f1 <= (value).f2);

create table sometable (id int, a text, b text);
-- b should be compressed, but in-line
insert into sometable values (1, 'a', repeat('ffoob',1000));
-- this b should be out-of-line
insert into sometable values (2, 'a', repeat('ffoob',100000));
-- this pair should fail the domain check
insert into sometable values (3, 'z', repeat('ffoob',100000));

do $$
declare d ordered_texts;
begin
  for d in select a, b from sometable loop
    raise notice 'succeeded at "%"', d.f1;
  end loop;
end$$;

do $$
declare r record; d ordered_texts;
begin
  for r in select * from sometable loop
    raise notice 'processing row %', r.id;
    d := row(r.a, r.b);
  end loop;
end$$;

do $$
declare r record; d ordered_texts;
begin
  for r in select * from sometable loop
    raise notice 'processing row %', r.id;
    d := null;
    d.f1 := r.a;
    d.f2 := r.b;
  end loop;
end$$;

-- check coercion of a record result to named-composite function output type
create function compresult(int8) returns two_int8s language plpgsql as
$$ declare r record; begin r := row($1,$1); return r; end $$;

create table two_int8s_tab (f1 two_int8s);
insert into two_int8s_tab values (compresult(42));
-- reconnect so we lose any local knowledge of anonymous record types
\c -
table two_int8s_tab;
