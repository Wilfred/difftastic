--
-- expression evaluation tests that don't fit into a more specific file
--

--
-- Tests for SQLValueFunction
--


-- current_date  (always matches because of transactional behaviour)
SELECT date(now())::text = current_date::text;


-- current_time / localtime
SELECT now()::timetz::text = current_time::text;
SELECT now()::timetz(4)::text = current_time(4)::text;
SELECT now()::time::text = localtime::text;
SELECT now()::time(3)::text = localtime(3)::text;

-- current_timestamp / localtimestamp (always matches because of transactional behaviour)
SELECT current_timestamp = NOW();
-- precision
SELECT length(current_timestamp::text) >= length(current_timestamp(0)::text);
-- localtimestamp
SELECT now()::timestamp::text = localtimestamp::text;

-- current_role/user/user is tested in rolnames.sql

-- current database / catalog
SELECT current_catalog = current_database();

-- current_schema
SELECT current_schema;
SET search_path = 'notme';
SELECT current_schema;
SET search_path = 'pg_catalog';
SELECT current_schema;
RESET search_path;


--
-- Test parsing of a no-op cast to a type with unspecified typmod
--
begin;

create table numeric_tbl (f1 numeric(18,3), f2 numeric);

create view numeric_view as
  select
    f1, f1::numeric(16,4) as f1164, f1::numeric as f1n,
    f2, f2::numeric(16,4) as f2164, f2::numeric as f2n
  from numeric_tbl;

\d+ numeric_view

explain (verbose, costs off) select * from numeric_view;

-- bpchar, lacking planner support for its length coercion function,
-- could behave differently

create table bpchar_tbl (f1 character(16) unique, f2 bpchar);

create view bpchar_view as
  select
    f1, f1::character(14) as f114, f1::bpchar as f1n,
    f2, f2::character(14) as f214, f2::bpchar as f2n
  from bpchar_tbl;

\d+ bpchar_view

explain (verbose, costs off) select * from bpchar_view
  where f1::bpchar = 'foo';

rollback;


--
-- Ordinarily, IN/NOT IN can be converted to a ScalarArrayOpExpr
-- with a suitably-chosen array type.
--
explain (verbose, costs off)
select random() IN (1, 4, 8.0);
explain (verbose, costs off)
select random()::int IN (1, 4, 8.0);
-- However, if there's not a common supertype for the IN elements,
-- we should instead try to produce "x = v1 OR x = v2 OR ...".
-- In most cases that'll fail for lack of all the requisite = operators,
-- but it can succeed sometimes.  So this should complain about lack of
-- an = operator, not about cast failure.
select '(0,0)'::point in ('(0,0,0,0)'::box, point(0,0));


--
-- Tests for ScalarArrayOpExpr with a hashfn
--

-- create a stable function so that the tests below are not
-- evaluated using the planner's constant folding.
begin;

create function return_int_input(int) returns int as $$
begin
	return $1;
end;
$$ language plpgsql stable;

create function return_text_input(text) returns text as $$
begin
	return $1;
end;
$$ language plpgsql stable;

select return_int_input(1) in (10, 9, 2, 8, 3, 7, 4, 6, 5, 1);
select return_int_input(1) in (10, 9, 2, 8, 3, 7, 4, 6, 5, null);
select return_int_input(1) in (null, null, null, null, null, null, null, null, null, null, null);
select return_int_input(1) in (10, 9, 2, 8, 3, 7, 4, 6, 5, 1, null);
select return_int_input(null::int) in (10, 9, 2, 8, 3, 7, 4, 6, 5, 1);
select return_int_input(null::int) in (10, 9, 2, 8, 3, 7, 4, 6, 5, null);
select return_text_input('a') in ('a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j');
-- NOT IN
select return_int_input(1) not in (10, 9, 2, 8, 3, 7, 4, 6, 5, 1);
select return_int_input(1) not in (10, 9, 2, 8, 3, 7, 4, 6, 5, 0);
select return_int_input(1) not in (10, 9, 2, 8, 3, 7, 4, 6, 5, 2, null);
select return_int_input(1) not in (10, 9, 2, 8, 3, 7, 4, 6, 5, 1, null);
select return_int_input(1) not in (null, null, null, null, null, null, null, null, null, null, null);
select return_int_input(null::int) not in (10, 9, 2, 8, 3, 7, 4, 6, 5, 1);
select return_int_input(null::int) not in (10, 9, 2, 8, 3, 7, 4, 6, 5, null);
select return_text_input('a') not in ('a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j');

rollback;

-- Test with non-strict equality function.
-- We need to create our own type for this.

begin;

create type myint;
create function myintin(cstring) returns myint strict immutable language
  internal as 'int4in';
create function myintout(myint) returns cstring strict immutable language
  internal as 'int4out';
create function myinthash(myint) returns integer strict immutable language
  internal as 'hashint4';

create type myint (input = myintin, output = myintout, like = int4);

create cast (int4 as myint) without function;
create cast (myint as int4) without function;

create function myinteq(myint, myint) returns bool as $$
begin
  if $1 is null and $2 is null then
    return true;
  else
    return $1::int = $2::int;
  end if;
end;
$$ language plpgsql immutable;

create function myintne(myint, myint) returns bool as $$
begin
  return not myinteq($1, $2);
end;
$$ language plpgsql immutable;

create operator = (
  leftarg    = myint,
  rightarg   = myint,
  commutator = =,
  negator    = <>,
  procedure  = myinteq,
  restrict   = eqsel,
  join       = eqjoinsel,
  merges
);

create operator <> (
  leftarg    = myint,
  rightarg   = myint,
  commutator = <>,
  negator    = =,
  procedure  = myintne,
  restrict   = eqsel,
  join       = eqjoinsel,
  merges
);

create operator class myint_ops
default for type myint using hash as
  operator    1   =  (myint, myint),
  function    1   myinthash(myint);

create table inttest (a myint);
insert into inttest values(1::myint),(null);

-- try an array with enough elements to cause hashing
select * from inttest where a in (1::myint,2::myint,3::myint,4::myint,5::myint,6::myint,7::myint,8::myint,9::myint, null);
select * from inttest where a not in (1::myint,2::myint,3::myint,4::myint,5::myint,6::myint,7::myint,8::myint,9::myint, null);
select * from inttest where a not in (0::myint,2::myint,3::myint,4::myint,5::myint,6::myint,7::myint,8::myint,9::myint, null);
-- ensure the result matched with the non-hashed version.  We simply remove
-- some array elements so that we don't reach the hashing threshold.
select * from inttest where a in (1::myint,2::myint,3::myint,4::myint,5::myint, null);
select * from inttest where a not in (1::myint,2::myint,3::myint,4::myint,5::myint, null);
select * from inttest where a not in (0::myint,2::myint,3::myint,4::myint,5::myint, null);

rollback;
