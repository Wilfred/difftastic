--
-- Cache-behavior-dependent test cases
--
-- These tests logically belong in plpgsql_record.sql, and perhaps someday
-- can be merged back into it.  For now, however, their results are different
-- depending on debug_discard_caches, so we must have two expected-output
-- files to cover both cases.  To minimize the maintenance effort resulting
-- from that, this file should contain only tests that do have different
-- results under debug_discard_caches.
--

-- check behavior with changes of a named rowtype
create table c_mutable(f1 int, f2 text);

create function c_sillyaddone(int) returns int language plpgsql as
$$ declare r c_mutable; begin r.f1 := $1; return r.f1 + 1; end $$;
select c_sillyaddone(42);

alter table c_mutable drop column f1;
alter table c_mutable add column f1 float8;

-- currently, this fails due to cached plan for "r.f1 + 1" expression
-- (but if debug_discard_caches is on, it will succeed)
select c_sillyaddone(42);

-- but it's OK if we force plan rebuilding
discard plans;
select c_sillyaddone(42);

-- check behavior with changes in a record rowtype
create function show_result_type(text) returns text language plpgsql as
$$
    declare
        r record;
        t text;
    begin
        execute $1 into r;
        select pg_typeof(r.a) into t;
        return format('type %s value %s', t, r.a::text);
    end;
$$;

select show_result_type('select 1 as a');
-- currently this fails due to cached plan for pg_typeof expression
-- (but if debug_discard_caches is on, it will succeed)
select show_result_type('select 2.0 as a');

-- but it's OK if we force plan rebuilding
discard plans;
select show_result_type('select 2.0 as a');
