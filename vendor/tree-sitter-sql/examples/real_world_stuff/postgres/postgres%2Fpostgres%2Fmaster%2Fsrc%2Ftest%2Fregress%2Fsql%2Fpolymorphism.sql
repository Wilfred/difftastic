--
-- Tests for polymorphic SQL functions and aggregates based on them.
-- Tests for other features related to function-calling have snuck in, too.
--

create function polyf(x anyelement) returns anyelement as $$
  select x + 1
$$ language sql;

select polyf(42) as int, polyf(4.5) as num;
select polyf(point(3,4));  -- fail for lack of + operator

drop function polyf(x anyelement);

create function polyf(x anyelement) returns anyarray as $$
  select array[x + 1, x + 2]
$$ language sql;

select polyf(42) as int, polyf(4.5) as num;

drop function polyf(x anyelement);

create function polyf(x anyarray) returns anyelement as $$
  select x[1]
$$ language sql;

select polyf(array[2,4]) as int, polyf(array[4.5, 7.7]) as num;

select polyf(stavalues1) from pg_statistic;  -- fail, can't infer element type

drop function polyf(x anyarray);

create function polyf(x anyarray) returns anyarray as $$
  select x
$$ language sql;

select polyf(array[2,4]) as int, polyf(array[4.5, 7.7]) as num;

select polyf(stavalues1) from pg_statistic;  -- fail, can't infer element type

drop function polyf(x anyarray);

-- fail, can't infer type:
create function polyf(x anyelement) returns anyrange as $$
  select array[x + 1, x + 2]
$$ language sql;

create function polyf(x anyrange) returns anyarray as $$
  select array[lower(x), upper(x)]
$$ language sql;

select polyf(int4range(42, 49)) as int, polyf(float8range(4.5, 7.8)) as num;

drop function polyf(x anyrange);

create function polyf(x anycompatible, y anycompatible) returns anycompatiblearray as $$
  select array[x, y]
$$ language sql;

select polyf(2, 4) as int, polyf(2, 4.5) as num;

drop function polyf(x anycompatible, y anycompatible);

create function polyf(x anycompatiblerange, y anycompatible, z anycompatible) returns anycompatiblearray as $$
  select array[lower(x), upper(x), y, z]
$$ language sql;

select polyf(int4range(42, 49), 11, 2::smallint) as int, polyf(float8range(4.5, 7.8), 7.8, 11::real) as num;

select polyf(int4range(42, 49), 11, 4.5) as fail;  -- range type doesn't fit

drop function polyf(x anycompatiblerange, y anycompatible, z anycompatible);

create function polyf(x anycompatiblemultirange, y anycompatible, z anycompatible) returns anycompatiblearray as $$
  select array[lower(x), upper(x), y, z]
$$ language sql;

select polyf(multirange(int4range(42, 49)), 11, 2::smallint) as int, polyf(multirange(float8range(4.5, 7.8)), 7.8, 11::real) as num;

select polyf(multirange(int4range(42, 49)), 11, 4.5) as fail;  -- range type doesn't fit

drop function polyf(x anycompatiblemultirange, y anycompatible, z anycompatible);

-- fail, can't infer type:
create function polyf(x anycompatible) returns anycompatiblerange as $$
  select array[x + 1, x + 2]
$$ language sql;

create function polyf(x anycompatiblerange, y anycompatiblearray) returns anycompatiblerange as $$
  select x
$$ language sql;

select polyf(int4range(42, 49), array[11]) as int, polyf(float8range(4.5, 7.8), array[7]) as num;

drop function polyf(x anycompatiblerange, y anycompatiblearray);

-- fail, can't infer type:
create function polyf(x anycompatible) returns anycompatiblemultirange as $$
  select array[x + 1, x + 2]
$$ language sql;

create function polyf(x anycompatiblemultirange, y anycompatiblearray) returns anycompatiblemultirange as $$
  select x
$$ language sql;

select polyf(multirange(int4range(42, 49)), array[11]) as int, polyf(multirange(float8range(4.5, 7.8)), array[7]) as num;

drop function polyf(x anycompatiblemultirange, y anycompatiblearray);

create function polyf(a anyelement, b anyarray,
                      c anycompatible, d anycompatible,
                      OUT x anyarray, OUT y anycompatiblearray)
as $$
  select a || b, array[c, d]
$$ language sql;

select x, pg_typeof(x), y, pg_typeof(y)
  from polyf(11, array[1, 2], 42, 34.5);
select x, pg_typeof(x), y, pg_typeof(y)
  from polyf(11, array[1, 2], point(1,2), point(3,4));
select x, pg_typeof(x), y, pg_typeof(y)
  from polyf(11, '{1,2}', point(1,2), '(3,4)');
select x, pg_typeof(x), y, pg_typeof(y)
  from polyf(11, array[1, 2.2], 42, 34.5);  -- fail

drop function polyf(a anyelement, b anyarray,
                    c anycompatible, d anycompatible);

create function polyf(anyrange) returns anymultirange
as 'select multirange($1);' language sql;

select polyf(int4range(1,10));
select polyf(null);

drop function polyf(anyrange);

create function polyf(anymultirange) returns anyelement
as 'select lower($1);' language sql;

select polyf(int4multirange(int4range(1,10), int4range(20,30)));
select polyf(null);

drop function polyf(anymultirange);

create function polyf(anycompatiblerange) returns anycompatiblemultirange
as 'select multirange($1);' language sql;

select polyf(int4range(1,10));
select polyf(null);

drop function polyf(anycompatiblerange);

create function polyf(anymultirange) returns anyrange
as 'select range_merge($1);' language sql;

select polyf(int4multirange(int4range(1,10), int4range(20,30)));
select polyf(null);

drop function polyf(anymultirange);

create function polyf(anycompatiblemultirange) returns anycompatiblerange
as 'select range_merge($1);' language sql;

select polyf(int4multirange(int4range(1,10), int4range(20,30)));
select polyf(null);

drop function polyf(anycompatiblemultirange);

create function polyf(anycompatiblemultirange) returns anycompatible
as 'select lower($1);' language sql;

select polyf(int4multirange(int4range(1,10), int4range(20,30)));
select polyf(null);

drop function polyf(anycompatiblemultirange);


--
-- Polymorphic aggregate tests
--
-- Legend:
-----------
-- A = type is ANY
-- P = type is polymorphic
-- N = type is non-polymorphic
-- B = aggregate base type
-- S = aggregate state type
-- R = aggregate return type
-- 1 = arg1 of a function
-- 2 = arg2 of a function
-- ag = aggregate
-- tf = trans (state) function
-- ff = final function
-- rt = return type of a function
-- -> = implies
-- => = allowed
-- !> = not allowed
-- E  = exists
-- NE = not-exists
--
-- Possible states:
-- ----------------
-- B = (A || P || N)
--   when (B = A) -> (tf2 = NE)
-- S = (P || N)
-- ff = (E || NE)
-- tf1 = (P || N)
-- tf2 = (NE || P || N)
-- R = (P || N)

-- create functions for use as tf and ff with the needed combinations of
-- argument polymorphism, but within the constraints of valid aggregate
-- functions, i.e. tf arg1 and tf return type must match

-- polymorphic single arg transfn
CREATE FUNCTION stfp(anyarray) RETURNS anyarray AS
'select $1' LANGUAGE SQL;
-- non-polymorphic single arg transfn
CREATE FUNCTION stfnp(int[]) RETURNS int[] AS
'select $1' LANGUAGE SQL;

-- dual polymorphic transfn
CREATE FUNCTION tfp(anyarray,anyelement) RETURNS anyarray AS
'select $1 || $2' LANGUAGE SQL;
-- dual non-polymorphic transfn
CREATE FUNCTION tfnp(int[],int) RETURNS int[] AS
'select $1 || $2' LANGUAGE SQL;

-- arg1 only polymorphic transfn
CREATE FUNCTION tf1p(anyarray,int) RETURNS anyarray AS
'select $1' LANGUAGE SQL;
-- arg2 only polymorphic transfn
CREATE FUNCTION tf2p(int[],anyelement) RETURNS int[] AS
'select $1' LANGUAGE SQL;

-- multi-arg polymorphic
CREATE FUNCTION sum3(anyelement,anyelement,anyelement) returns anyelement AS
'select $1+$2+$3' language sql strict;

-- finalfn polymorphic
CREATE FUNCTION ffp(anyarray) RETURNS anyarray AS
'select $1' LANGUAGE SQL;
-- finalfn non-polymorphic
CREATE FUNCTION ffnp(int[]) returns int[] as
'select $1' LANGUAGE SQL;

-- Try to cover all the possible states:
--
-- Note: in Cases 1 & 2, we are trying to return P. Therefore, if the transfn
-- is stfnp, tfnp, or tf2p, we must use ffp as finalfn, because stfnp, tfnp,
-- and tf2p do not return P. Conversely, in Cases 3 & 4, we are trying to
-- return N. Therefore, if the transfn is stfp, tfp, or tf1p, we must use ffnp
-- as finalfn, because stfp, tfp, and tf1p do not return N.
--
--     Case1 (R = P) && (B = A)
--     ------------------------
--     S    tf1
--     -------
--     N    N
-- should CREATE
CREATE AGGREGATE myaggp01a(*) (SFUNC = stfnp, STYPE = int4[],
  FINALFUNC = ffp, INITCOND = '{}');

--     P    N
-- should ERROR: stfnp(anyarray) not matched by stfnp(int[])
CREATE AGGREGATE myaggp02a(*) (SFUNC = stfnp, STYPE = anyarray,
  FINALFUNC = ffp, INITCOND = '{}');

--     N    P
-- should CREATE
CREATE AGGREGATE myaggp03a(*) (SFUNC = stfp, STYPE = int4[],
  FINALFUNC = ffp, INITCOND = '{}');
CREATE AGGREGATE myaggp03b(*) (SFUNC = stfp, STYPE = int4[],
  INITCOND = '{}');

--     P    P
-- should ERROR: we have no way to resolve S
CREATE AGGREGATE myaggp04a(*) (SFUNC = stfp, STYPE = anyarray,
  FINALFUNC = ffp, INITCOND = '{}');
CREATE AGGREGATE myaggp04b(*) (SFUNC = stfp, STYPE = anyarray,
  INITCOND = '{}');


--    Case2 (R = P) && ((B = P) || (B = N))
--    -------------------------------------
--    S    tf1      B    tf2
--    -----------------------
--    N    N        N    N
-- should CREATE
CREATE AGGREGATE myaggp05a(BASETYPE = int, SFUNC = tfnp, STYPE = int[],
  FINALFUNC = ffp, INITCOND = '{}');

--    N    N        N    P
-- should CREATE
CREATE AGGREGATE myaggp06a(BASETYPE = int, SFUNC = tf2p, STYPE = int[],
  FINALFUNC = ffp, INITCOND = '{}');

--    N    N        P    N
-- should ERROR: tfnp(int[], anyelement) not matched by tfnp(int[], int)
CREATE AGGREGATE myaggp07a(BASETYPE = anyelement, SFUNC = tfnp, STYPE = int[],
  FINALFUNC = ffp, INITCOND = '{}');

--    N    N        P    P
-- should CREATE
CREATE AGGREGATE myaggp08a(BASETYPE = anyelement, SFUNC = tf2p, STYPE = int[],
  FINALFUNC = ffp, INITCOND = '{}');

--    N    P        N    N
-- should CREATE
CREATE AGGREGATE myaggp09a(BASETYPE = int, SFUNC = tf1p, STYPE = int[],
  FINALFUNC = ffp, INITCOND = '{}');
CREATE AGGREGATE myaggp09b(BASETYPE = int, SFUNC = tf1p, STYPE = int[],
  INITCOND = '{}');

--    N    P        N    P
-- should CREATE
CREATE AGGREGATE myaggp10a(BASETYPE = int, SFUNC = tfp, STYPE = int[],
  FINALFUNC = ffp, INITCOND = '{}');
CREATE AGGREGATE myaggp10b(BASETYPE = int, SFUNC = tfp, STYPE = int[],
  INITCOND = '{}');

--    N    P        P    N
-- should ERROR: tf1p(int[],anyelement) not matched by tf1p(anyarray,int)
CREATE AGGREGATE myaggp11a(BASETYPE = anyelement, SFUNC = tf1p, STYPE = int[],
  FINALFUNC = ffp, INITCOND = '{}');
CREATE AGGREGATE myaggp11b(BASETYPE = anyelement, SFUNC = tf1p, STYPE = int[],
  INITCOND = '{}');

--    N    P        P    P
-- should ERROR: tfp(int[],anyelement) not matched by tfp(anyarray,anyelement)
CREATE AGGREGATE myaggp12a(BASETYPE = anyelement, SFUNC = tfp, STYPE = int[],
  FINALFUNC = ffp, INITCOND = '{}');
CREATE AGGREGATE myaggp12b(BASETYPE = anyelement, SFUNC = tfp, STYPE = int[],
  INITCOND = '{}');

--    P    N        N    N
-- should ERROR: tfnp(anyarray, int) not matched by tfnp(int[],int)
CREATE AGGREGATE myaggp13a(BASETYPE = int, SFUNC = tfnp, STYPE = anyarray,
  FINALFUNC = ffp, INITCOND = '{}');

--    P    N        N    P
-- should ERROR: tf2p(anyarray, int) not matched by tf2p(int[],anyelement)
CREATE AGGREGATE myaggp14a(BASETYPE = int, SFUNC = tf2p, STYPE = anyarray,
  FINALFUNC = ffp, INITCOND = '{}');

--    P    N        P    N
-- should ERROR: tfnp(anyarray, anyelement) not matched by tfnp(int[],int)
CREATE AGGREGATE myaggp15a(BASETYPE = anyelement, SFUNC = tfnp,
  STYPE = anyarray, FINALFUNC = ffp, INITCOND = '{}');

--    P    N        P    P
-- should ERROR: tf2p(anyarray, anyelement) not matched by tf2p(int[],anyelement)
CREATE AGGREGATE myaggp16a(BASETYPE = anyelement, SFUNC = tf2p,
  STYPE = anyarray, FINALFUNC = ffp, INITCOND = '{}');

--    P    P        N    N
-- should ERROR: we have no way to resolve S
CREATE AGGREGATE myaggp17a(BASETYPE = int, SFUNC = tf1p, STYPE = anyarray,
  FINALFUNC = ffp, INITCOND = '{}');
CREATE AGGREGATE myaggp17b(BASETYPE = int, SFUNC = tf1p, STYPE = anyarray,
  INITCOND = '{}');

--    P    P        N    P
-- should ERROR: tfp(anyarray, int) not matched by tfp(anyarray, anyelement)
CREATE AGGREGATE myaggp18a(BASETYPE = int, SFUNC = tfp, STYPE = anyarray,
  FINALFUNC = ffp, INITCOND = '{}');
CREATE AGGREGATE myaggp18b(BASETYPE = int, SFUNC = tfp, STYPE = anyarray,
  INITCOND = '{}');

--    P    P        P    N
-- should ERROR: tf1p(anyarray, anyelement) not matched by tf1p(anyarray, int)
CREATE AGGREGATE myaggp19a(BASETYPE = anyelement, SFUNC = tf1p,
  STYPE = anyarray, FINALFUNC = ffp, INITCOND = '{}');
CREATE AGGREGATE myaggp19b(BASETYPE = anyelement, SFUNC = tf1p,
  STYPE = anyarray, INITCOND = '{}');

--    P    P        P    P
-- should CREATE
CREATE AGGREGATE myaggp20a(BASETYPE = anyelement, SFUNC = tfp,
  STYPE = anyarray, FINALFUNC = ffp, INITCOND = '{}');
CREATE AGGREGATE myaggp20b(BASETYPE = anyelement, SFUNC = tfp,
  STYPE = anyarray, INITCOND = '{}');

--     Case3 (R = N) && (B = A)
--     ------------------------
--     S    tf1
--     -------
--     N    N
-- should CREATE
CREATE AGGREGATE myaggn01a(*) (SFUNC = stfnp, STYPE = int4[],
  FINALFUNC = ffnp, INITCOND = '{}');
CREATE AGGREGATE myaggn01b(*) (SFUNC = stfnp, STYPE = int4[],
  INITCOND = '{}');

--     P    N
-- should ERROR: stfnp(anyarray) not matched by stfnp(int[])
CREATE AGGREGATE myaggn02a(*) (SFUNC = stfnp, STYPE = anyarray,
  FINALFUNC = ffnp, INITCOND = '{}');
CREATE AGGREGATE myaggn02b(*) (SFUNC = stfnp, STYPE = anyarray,
  INITCOND = '{}');

--     N    P
-- should CREATE
CREATE AGGREGATE myaggn03a(*) (SFUNC = stfp, STYPE = int4[],
  FINALFUNC = ffnp, INITCOND = '{}');

--     P    P
-- should ERROR: ffnp(anyarray) not matched by ffnp(int[])
CREATE AGGREGATE myaggn04a(*) (SFUNC = stfp, STYPE = anyarray,
  FINALFUNC = ffnp, INITCOND = '{}');


--    Case4 (R = N) && ((B = P) || (B = N))
--    -------------------------------------
--    S    tf1      B    tf2
--    -----------------------
--    N    N        N    N
-- should CREATE
CREATE AGGREGATE myaggn05a(BASETYPE = int, SFUNC = tfnp, STYPE = int[],
  FINALFUNC = ffnp, INITCOND = '{}');
CREATE AGGREGATE myaggn05b(BASETYPE = int, SFUNC = tfnp, STYPE = int[],
  INITCOND = '{}');

--    N    N        N    P
-- should CREATE
CREATE AGGREGATE myaggn06a(BASETYPE = int, SFUNC = tf2p, STYPE = int[],
  FINALFUNC = ffnp, INITCOND = '{}');
CREATE AGGREGATE myaggn06b(BASETYPE = int, SFUNC = tf2p, STYPE = int[],
  INITCOND = '{}');

--    N    N        P    N
-- should ERROR: tfnp(int[], anyelement) not matched by tfnp(int[], int)
CREATE AGGREGATE myaggn07a(BASETYPE = anyelement, SFUNC = tfnp, STYPE = int[],
  FINALFUNC = ffnp, INITCOND = '{}');
CREATE AGGREGATE myaggn07b(BASETYPE = anyelement, SFUNC = tfnp, STYPE = int[],
  INITCOND = '{}');

--    N    N        P    P
-- should CREATE
CREATE AGGREGATE myaggn08a(BASETYPE = anyelement, SFUNC = tf2p, STYPE = int[],
  FINALFUNC = ffnp, INITCOND = '{}');
CREATE AGGREGATE myaggn08b(BASETYPE = anyelement, SFUNC = tf2p, STYPE = int[],
  INITCOND = '{}');

--    N    P        N    N
-- should CREATE
CREATE AGGREGATE myaggn09a(BASETYPE = int, SFUNC = tf1p, STYPE = int[],
  FINALFUNC = ffnp, INITCOND = '{}');

--    N    P        N    P
-- should CREATE
CREATE AGGREGATE myaggn10a(BASETYPE = int, SFUNC = tfp, STYPE = int[],
  FINALFUNC = ffnp, INITCOND = '{}');

--    N    P        P    N
-- should ERROR: tf1p(int[],anyelement) not matched by tf1p(anyarray,int)
CREATE AGGREGATE myaggn11a(BASETYPE = anyelement, SFUNC = tf1p, STYPE = int[],
  FINALFUNC = ffnp, INITCOND = '{}');

--    N    P        P    P
-- should ERROR: tfp(int[],anyelement) not matched by tfp(anyarray,anyelement)
CREATE AGGREGATE myaggn12a(BASETYPE = anyelement, SFUNC = tfp, STYPE = int[],
  FINALFUNC = ffnp, INITCOND = '{}');

--    P    N        N    N
-- should ERROR: tfnp(anyarray, int) not matched by tfnp(int[],int)
CREATE AGGREGATE myaggn13a(BASETYPE = int, SFUNC = tfnp, STYPE = anyarray,
  FINALFUNC = ffnp, INITCOND = '{}');
CREATE AGGREGATE myaggn13b(BASETYPE = int, SFUNC = tfnp, STYPE = anyarray,
  INITCOND = '{}');

--    P    N        N    P
-- should ERROR: tf2p(anyarray, int) not matched by tf2p(int[],anyelement)
CREATE AGGREGATE myaggn14a(BASETYPE = int, SFUNC = tf2p, STYPE = anyarray,
  FINALFUNC = ffnp, INITCOND = '{}');
CREATE AGGREGATE myaggn14b(BASETYPE = int, SFUNC = tf2p, STYPE = anyarray,
  INITCOND = '{}');

--    P    N        P    N
-- should ERROR: tfnp(anyarray, anyelement) not matched by tfnp(int[],int)
CREATE AGGREGATE myaggn15a(BASETYPE = anyelement, SFUNC = tfnp,
  STYPE = anyarray, FINALFUNC = ffnp, INITCOND = '{}');
CREATE AGGREGATE myaggn15b(BASETYPE = anyelement, SFUNC = tfnp,
  STYPE = anyarray, INITCOND = '{}');

--    P    N        P    P
-- should ERROR: tf2p(anyarray, anyelement) not matched by tf2p(int[],anyelement)
CREATE AGGREGATE myaggn16a(BASETYPE = anyelement, SFUNC = tf2p,
  STYPE = anyarray, FINALFUNC = ffnp, INITCOND = '{}');
CREATE AGGREGATE myaggn16b(BASETYPE = anyelement, SFUNC = tf2p,
  STYPE = anyarray, INITCOND = '{}');

--    P    P        N    N
-- should ERROR: ffnp(anyarray) not matched by ffnp(int[])
CREATE AGGREGATE myaggn17a(BASETYPE = int, SFUNC = tf1p, STYPE = anyarray,
  FINALFUNC = ffnp, INITCOND = '{}');

--    P    P        N    P
-- should ERROR: tfp(anyarray, int) not matched by tfp(anyarray, anyelement)
CREATE AGGREGATE myaggn18a(BASETYPE = int, SFUNC = tfp, STYPE = anyarray,
  FINALFUNC = ffnp, INITCOND = '{}');

--    P    P        P    N
-- should ERROR: tf1p(anyarray, anyelement) not matched by tf1p(anyarray, int)
CREATE AGGREGATE myaggn19a(BASETYPE = anyelement, SFUNC = tf1p,
  STYPE = anyarray, FINALFUNC = ffnp, INITCOND = '{}');

--    P    P        P    P
-- should ERROR: ffnp(anyarray) not matched by ffnp(int[])
CREATE AGGREGATE myaggn20a(BASETYPE = anyelement, SFUNC = tfp,
  STYPE = anyarray, FINALFUNC = ffnp, INITCOND = '{}');

-- multi-arg polymorphic
CREATE AGGREGATE mysum2(anyelement,anyelement) (SFUNC = sum3,
  STYPE = anyelement, INITCOND = '0');

-- create test data for polymorphic aggregates
create temp table t(f1 int, f2 int[], f3 text);
insert into t values(1,array[1],'a');
insert into t values(1,array[11],'b');
insert into t values(1,array[111],'c');
insert into t values(2,array[2],'a');
insert into t values(2,array[22],'b');
insert into t values(2,array[222],'c');
insert into t values(3,array[3],'a');
insert into t values(3,array[3],'b');

-- test the successfully created polymorphic aggregates
select f3, myaggp01a(*) from t group by f3 order by f3;
select f3, myaggp03a(*) from t group by f3 order by f3;
select f3, myaggp03b(*) from t group by f3 order by f3;
select f3, myaggp05a(f1) from t group by f3 order by f3;
select f3, myaggp06a(f1) from t group by f3 order by f3;
select f3, myaggp08a(f1) from t group by f3 order by f3;
select f3, myaggp09a(f1) from t group by f3 order by f3;
select f3, myaggp09b(f1) from t group by f3 order by f3;
select f3, myaggp10a(f1) from t group by f3 order by f3;
select f3, myaggp10b(f1) from t group by f3 order by f3;
select f3, myaggp20a(f1) from t group by f3 order by f3;
select f3, myaggp20b(f1) from t group by f3 order by f3;
select f3, myaggn01a(*) from t group by f3 order by f3;
select f3, myaggn01b(*) from t group by f3 order by f3;
select f3, myaggn03a(*) from t group by f3 order by f3;
select f3, myaggn05a(f1) from t group by f3 order by f3;
select f3, myaggn05b(f1) from t group by f3 order by f3;
select f3, myaggn06a(f1) from t group by f3 order by f3;
select f3, myaggn06b(f1) from t group by f3 order by f3;
select f3, myaggn08a(f1) from t group by f3 order by f3;
select f3, myaggn08b(f1) from t group by f3 order by f3;
select f3, myaggn09a(f1) from t group by f3 order by f3;
select f3, myaggn10a(f1) from t group by f3 order by f3;
select mysum2(f1, f1 + 1) from t;

-- test inlining of polymorphic SQL functions
create function bleat(int) returns int as $$
begin
  raise notice 'bleat %', $1;
  return $1;
end$$ language plpgsql;

create function sql_if(bool, anyelement, anyelement) returns anyelement as $$
select case when $1 then $2 else $3 end $$ language sql;

-- Note this would fail with integer overflow, never mind wrong bleat() output,
-- if the CASE expression were not successfully inlined
select f1, sql_if(f1 > 0, bleat(f1), bleat(f1 + 1)) from int4_tbl;

select q2, sql_if(q2 > 0, q2, q2 + 1) from int8_tbl;

-- another sort of polymorphic aggregate

CREATE AGGREGATE array_larger_accum (anyarray)
(
    sfunc = array_larger,
    stype = anyarray,
    initcond = '{}'
);

SELECT array_larger_accum(i)
FROM (VALUES (ARRAY[1,2]), (ARRAY[3,4])) as t(i);

SELECT array_larger_accum(i)
FROM (VALUES (ARRAY[row(1,2),row(3,4)]), (ARRAY[row(5,6),row(7,8)])) as t(i);

-- another kind of polymorphic aggregate

create function add_group(grp anyarray, ad anyelement, size integer)
  returns anyarray
  as $$
begin
  if grp is null then
    return array[ad];
  end if;
  if array_upper(grp, 1) < size then
    return grp || ad;
  end if;
  return grp;
end;
$$
  language plpgsql immutable;

create aggregate build_group(anyelement, integer) (
  SFUNC = add_group,
  STYPE = anyarray
);

select build_group(q1,3) from int8_tbl;

-- this should fail because stype isn't compatible with arg
create aggregate build_group(int8, integer) (
  SFUNC = add_group,
  STYPE = int2[]
);

-- but we can make a non-poly agg from a poly sfunc if types are OK
create aggregate build_group(int8, integer) (
  SFUNC = add_group,
  STYPE = int8[]
);

-- check proper resolution of data types for polymorphic transfn/finalfn

create function first_el_transfn(anyarray, anyelement) returns anyarray as
'select $1 || $2' language sql immutable;

create function first_el(anyarray) returns anyelement as
'select $1[1]' language sql strict immutable;

create aggregate first_el_agg_f8(float8) (
  SFUNC = array_append,
  STYPE = float8[],
  FINALFUNC = first_el
);

create aggregate first_el_agg_any(anyelement) (
  SFUNC = first_el_transfn,
  STYPE = anyarray,
  FINALFUNC = first_el
);

select first_el_agg_f8(x::float8) from generate_series(1,10) x;
select first_el_agg_any(x) from generate_series(1,10) x;
select first_el_agg_f8(x::float8) over(order by x) from generate_series(1,10) x;
select first_el_agg_any(x) over(order by x) from generate_series(1,10) x;

-- check that we can apply functions taking ANYARRAY to pg_stats
select distinct array_ndims(histogram_bounds) from pg_stats
where histogram_bounds is not null;

-- such functions must protect themselves if varying element type isn't OK
-- (WHERE clause here is to avoid possibly getting a collation error instead)
select max(histogram_bounds) from pg_stats where tablename = 'pg_am';

-- another corner case is the input functions for polymorphic pseudotypes
select array_in('{1,2,3}','int4'::regtype,-1);  -- this has historically worked
select * from array_in('{1,2,3}','int4'::regtype,-1);  -- this not
select anyrange_in('[10,20)','int4range'::regtype,-1);

-- test variadic polymorphic functions

create function myleast(variadic anyarray) returns anyelement as $$
  select min($1[i]) from generate_subscripts($1,1) g(i)
$$ language sql immutable strict;

select myleast(10, 1, 20, 33);
select myleast(1.1, 0.22, 0.55);
select myleast('z'::text);
select myleast(); -- fail

-- test with variadic call parameter
select myleast(variadic array[1,2,3,4,-1]);
select myleast(variadic array[1.1, -5.5]);

--test with empty variadic call parameter
select myleast(variadic array[]::int[]);

-- an example with some ordinary arguments too
create function concat(text, variadic anyarray) returns text as $$
  select array_to_string($2, $1);
$$ language sql immutable strict;

select concat('%', 1, 2, 3, 4, 5);
select concat('|', 'a'::text, 'b', 'c');
select concat('|', variadic array[1,2,33]);
select concat('|', variadic array[]::int[]);

drop function concat(text, anyarray);

-- mix variadic with anyelement
create function formarray(anyelement, variadic anyarray) returns anyarray as $$
  select array_prepend($1, $2);
$$ language sql immutable strict;

select formarray(1,2,3,4,5);
select formarray(1.1, variadic array[1.2,55.5]);
select formarray(1.1, array[1.2,55.5]); -- fail without variadic
select formarray(1, 'x'::text); -- fail, type mismatch
select formarray(1, variadic array['x'::text]); -- fail, type mismatch

drop function formarray(anyelement, variadic anyarray);

-- test pg_typeof() function
select pg_typeof(null);           -- unknown
select pg_typeof(0);              -- integer
select pg_typeof(0.0);            -- numeric
select pg_typeof(1+1 = 2);        -- boolean
select pg_typeof('x');            -- unknown
select pg_typeof('' || '');       -- text
select pg_typeof(pg_typeof(0));   -- regtype
select pg_typeof(array[1.2,55.5]); -- numeric[]
select pg_typeof(myleast(10, 1, 20, 33));  -- polymorphic input

-- test functions with default parameters

-- test basic functionality
create function dfunc(a int = 1, int = 2) returns int as $$
  select $1 + $2;
$$ language sql;

select dfunc();
select dfunc(10);
select dfunc(10, 20);
select dfunc(10, 20, 30);  -- fail

drop function dfunc();  -- fail
drop function dfunc(int);  -- fail
drop function dfunc(int, int);  -- ok

-- fail: defaults must be at end of argument list
create function dfunc(a int = 1, b int) returns int as $$
  select $1 + $2;
$$ language sql;

-- however, this should work:
create function dfunc(a int = 1, out sum int, b int = 2) as $$
  select $1 + $2;
$$ language sql;

select dfunc();

-- verify it lists properly
\df dfunc

drop function dfunc(int, int);

-- check implicit coercion
create function dfunc(a int DEFAULT 1.0, int DEFAULT '-1') returns int as $$
  select $1 + $2;
$$ language sql;
select dfunc();

create function dfunc(a text DEFAULT 'Hello', b text DEFAULT 'World') returns text as $$
  select $1 || ', ' || $2;
$$ language sql;

select dfunc();  -- fail: which dfunc should be called? int or text
select dfunc('Hi');  -- ok
select dfunc('Hi', 'City');  -- ok
select dfunc(0);  -- ok
select dfunc(10, 20);  -- ok

drop function dfunc(int, int);
drop function dfunc(text, text);

create function dfunc(int = 1, int = 2) returns int as $$
  select 2;
$$ language sql;

create function dfunc(int = 1, int = 2, int = 3, int = 4) returns int as $$
  select 4;
$$ language sql;

-- Now, dfunc(nargs = 2) and dfunc(nargs = 4) are ambiguous when called
-- with 0 to 2 arguments.

select dfunc();  -- fail
select dfunc(1);  -- fail
select dfunc(1, 2);  -- fail
select dfunc(1, 2, 3);  -- ok
select dfunc(1, 2, 3, 4);  -- ok

drop function dfunc(int, int);
drop function dfunc(int, int, int, int);

-- default values are not allowed for output parameters
create function dfunc(out int = 20) returns int as $$
  select 1;
$$ language sql;

-- polymorphic parameter test
create function dfunc(anyelement = 'World'::text) returns text as $$
  select 'Hello, ' || $1::text;
$$ language sql;

select dfunc();
select dfunc(0);
select dfunc(to_date('20081215','YYYYMMDD'));
select dfunc('City'::text);

drop function dfunc(anyelement);

-- check defaults for variadics

create function dfunc(a variadic int[]) returns int as
$$ select array_upper($1, 1) $$ language sql;

select dfunc();  -- fail
select dfunc(10);
select dfunc(10,20);

create or replace function dfunc(a variadic int[] default array[]::int[]) returns int as
$$ select array_upper($1, 1) $$ language sql;

select dfunc();  -- now ok
select dfunc(10);
select dfunc(10,20);

-- can't remove the default once it exists
create or replace function dfunc(a variadic int[]) returns int as
$$ select array_upper($1, 1) $$ language sql;

\df dfunc

drop function dfunc(a variadic int[]);

-- Ambiguity should be reported only if there's not a better match available

create function dfunc(int = 1, int = 2, int = 3) returns int as $$
  select 3;
$$ language sql;

create function dfunc(int = 1, int = 2) returns int as $$
  select 2;
$$ language sql;

create function dfunc(text) returns text as $$
  select $1;
$$ language sql;

-- dfunc(narg=2) and dfunc(narg=3) are ambiguous
select dfunc(1);  -- fail

-- but this works since the ambiguous functions aren't preferred anyway
select dfunc('Hi');

drop function dfunc(int, int, int);
drop function dfunc(int, int);
drop function dfunc(text);

--
-- Tests for named- and mixed-notation function calling
--

create function dfunc(a int, b int, c int = 0, d int = 0)
  returns table (a int, b int, c int, d int) as $$
  select $1, $2, $3, $4;
$$ language sql;

select (dfunc(10,20,30)).*;
select (dfunc(a := 10, b := 20, c := 30)).*;
select * from dfunc(a := 10, b := 20);
select * from dfunc(b := 10, a := 20);
select * from dfunc(0);  -- fail
select * from dfunc(1,2);
select * from dfunc(1,2,c := 3);
select * from dfunc(1,2,d := 3);

select * from dfunc(x := 20, b := 10, x := 30);  -- fail, duplicate name
select * from dfunc(10, b := 20, 30);  -- fail, named args must be last
select * from dfunc(x := 10, b := 20, c := 30);  -- fail, unknown param
select * from dfunc(10, 10, a := 20);  -- fail, a overlaps positional parameter
select * from dfunc(1,c := 2,d := 3); -- fail, no value for b

drop function dfunc(int, int, int, int);

-- test with different parameter types
create function dfunc(a varchar, b numeric, c date = current_date)
  returns table (a varchar, b numeric, c date) as $$
  select $1, $2, $3;
$$ language sql;

select (dfunc('Hello World', 20, '2009-07-25'::date)).*;
select * from dfunc('Hello World', 20, '2009-07-25'::date);
select * from dfunc(c := '2009-07-25'::date, a := 'Hello World', b := 20);
select * from dfunc('Hello World', b := 20, c := '2009-07-25'::date);
select * from dfunc('Hello World', c := '2009-07-25'::date, b := 20);
select * from dfunc('Hello World', c := 20, b := '2009-07-25'::date);  -- fail

drop function dfunc(varchar, numeric, date);

-- test out parameters with named params
create function dfunc(a varchar = 'def a', out _a varchar, c numeric = NULL, out _c numeric)
returns record as $$
  select $1, $2;
$$ language sql;

select (dfunc()).*;
select * from dfunc();
select * from dfunc('Hello', 100);
select * from dfunc(a := 'Hello', c := 100);
select * from dfunc(c := 100, a := 'Hello');
select * from dfunc('Hello');
select * from dfunc('Hello', c := 100);
select * from dfunc(c := 100);

-- fail, can no longer change an input parameter's name
create or replace function dfunc(a varchar = 'def a', out _a varchar, x numeric = NULL, out _c numeric)
returns record as $$
  select $1, $2;
$$ language sql;

create or replace function dfunc(a varchar = 'def a', out _a varchar, numeric = NULL, out _c numeric)
returns record as $$
  select $1, $2;
$$ language sql;

drop function dfunc(varchar, numeric);

--fail, named parameters are not unique
create function testpolym(a int, a int) returns int as $$ select 1;$$ language sql;
create function testpolym(int, out a int, out a int) returns int as $$ select 1;$$ language sql;
create function testpolym(out a int, inout a int) returns int as $$ select 1;$$ language sql;
create function testpolym(a int, inout a int) returns int as $$ select 1;$$ language sql;

-- valid
create function testpolym(a int, out a int) returns int as $$ select $1;$$ language sql;
select testpolym(37);
drop function testpolym(int);
create function testpolym(a int) returns table(a int) as $$ select $1;$$ language sql;
select * from testpolym(37);
drop function testpolym(int);

-- test polymorphic params and defaults
create function dfunc(a anyelement, b anyelement = null, flag bool = true)
returns anyelement as $$
  select case when $3 then $1 else $2 end;
$$ language sql;

select dfunc(1,2);
select dfunc('a'::text, 'b'); -- positional notation with default

select dfunc(a := 1, b := 2);
select dfunc(a := 'a'::text, b := 'b');
select dfunc(a := 'a'::text, b := 'b', flag := false); -- named notation

select dfunc(b := 'b'::text, a := 'a'); -- named notation with default
select dfunc(a := 'a'::text, flag := true); -- named notation with default
select dfunc(a := 'a'::text, flag := false); -- named notation with default
select dfunc(b := 'b'::text, a := 'a', flag := true); -- named notation

select dfunc('a'::text, 'b', false); -- full positional notation
select dfunc('a'::text, 'b', flag := false); -- mixed notation
select dfunc('a'::text, 'b', true); -- full positional notation
select dfunc('a'::text, 'b', flag := true); -- mixed notation

-- ansi/sql syntax
select dfunc(a => 1, b => 2);
select dfunc(a => 'a'::text, b => 'b');
select dfunc(a => 'a'::text, b => 'b', flag => false); -- named notation

select dfunc(b => 'b'::text, a => 'a'); -- named notation with default
select dfunc(a => 'a'::text, flag => true); -- named notation with default
select dfunc(a => 'a'::text, flag => false); -- named notation with default
select dfunc(b => 'b'::text, a => 'a', flag => true); -- named notation

select dfunc('a'::text, 'b', false); -- full positional notation
select dfunc('a'::text, 'b', flag => false); -- mixed notation
select dfunc('a'::text, 'b', true); -- full positional notation
select dfunc('a'::text, 'b', flag => true); -- mixed notation

-- this tests lexer edge cases around =>
select dfunc(a =>-1);
select dfunc(a =>+1);
select dfunc(a =>/**/1);
select dfunc(a =>--comment to be removed by psql
  1);
-- need DO to protect the -- from psql
do $$
  declare r integer;
  begin
    select dfunc(a=>-- comment
      1) into r;
    raise info 'r = %', r;
  end;
$$;

-- check reverse-listing of named-arg calls
CREATE VIEW dfview AS
   SELECT q1, q2,
     dfunc(q1,q2, flag := q1>q2) as c3,
     dfunc(q1, flag := q1<q2, b := q2) as c4
     FROM int8_tbl;

select * from dfview;

\d+ dfview

drop view dfview;
drop function dfunc(anyelement, anyelement, bool);

--
-- Tests for ANYCOMPATIBLE polymorphism family
--

create function anyctest(anycompatible, anycompatible)
returns anycompatible as $$
  select greatest($1, $2)
$$ language sql;

select x, pg_typeof(x) from anyctest(11, 12) x;
select x, pg_typeof(x) from anyctest(11, 12.3) x;
select x, pg_typeof(x) from anyctest(11, point(1,2)) x;  -- fail
select x, pg_typeof(x) from anyctest('11', '12.3') x;  -- defaults to text

drop function anyctest(anycompatible, anycompatible);

create function anyctest(anycompatible, anycompatible)
returns anycompatiblearray as $$
  select array[$1, $2]
$$ language sql;

select x, pg_typeof(x) from anyctest(11, 12) x;
select x, pg_typeof(x) from anyctest(11, 12.3) x;
select x, pg_typeof(x) from anyctest(11, array[1,2]) x;  -- fail

drop function anyctest(anycompatible, anycompatible);

create function anyctest(anycompatible, anycompatiblearray)
returns anycompatiblearray as $$
  select array[$1] || $2
$$ language sql;

select x, pg_typeof(x) from anyctest(11, array[12]) x;
select x, pg_typeof(x) from anyctest(11, array[12.3]) x;
select x, pg_typeof(x) from anyctest(12.3, array[13]) x;
select x, pg_typeof(x) from anyctest(12.3, '{13,14.4}') x;
select x, pg_typeof(x) from anyctest(11, array[point(1,2)]) x;  -- fail
select x, pg_typeof(x) from anyctest(11, 12) x;  -- fail

drop function anyctest(anycompatible, anycompatiblearray);

create function anyctest(anycompatible, anycompatiblerange)
returns anycompatiblerange as $$
  select $2
$$ language sql;

select x, pg_typeof(x) from anyctest(11, int4range(4,7)) x;
select x, pg_typeof(x) from anyctest(11, numrange(4,7)) x;
select x, pg_typeof(x) from anyctest(11, 12) x;  -- fail
select x, pg_typeof(x) from anyctest(11.2, int4range(4,7)) x;  -- fail
select x, pg_typeof(x) from anyctest(11.2, '[4,7)') x;  -- fail

drop function anyctest(anycompatible, anycompatiblerange);

create function anyctest(anycompatiblerange, anycompatiblerange)
returns anycompatible as $$
  select lower($1) + upper($2)
$$ language sql;

select x, pg_typeof(x) from anyctest(int4range(11,12), int4range(4,7)) x;
select x, pg_typeof(x) from anyctest(int4range(11,12), numrange(4,7)) x; -- fail

drop function anyctest(anycompatiblerange, anycompatiblerange);

-- fail, can't infer result type:
create function anyctest(anycompatible)
returns anycompatiblerange as $$
  select $1
$$ language sql;

create function anyctest(anycompatible, anycompatiblemultirange)
returns anycompatiblemultirange as $$
  select $2
$$ language sql;

select x, pg_typeof(x) from anyctest(11, multirange(int4range(4,7))) x;
select x, pg_typeof(x) from anyctest(11, multirange(numrange(4,7))) x;
select x, pg_typeof(x) from anyctest(11, 12) x;  -- fail
select x, pg_typeof(x) from anyctest(11.2, multirange(int4range(4,7))) x;  -- fail
select x, pg_typeof(x) from anyctest(11.2, '{[4,7)}') x;  -- fail

drop function anyctest(anycompatible, anycompatiblemultirange);

create function anyctest(anycompatiblemultirange, anycompatiblemultirange)
returns anycompatible as $$
  select lower($1) + upper($2)
$$ language sql;

select x, pg_typeof(x) from anyctest(multirange(int4range(11,12)), multirange(int4range(4,7))) x;
select x, pg_typeof(x) from anyctest(multirange(int4range(11,12)), multirange(numrange(4,7))) x; -- fail

drop function anyctest(anycompatiblemultirange, anycompatiblemultirange);

-- fail, can't infer result type:
create function anyctest(anycompatible)
returns anycompatiblemultirange as $$
  select $1
$$ language sql;

create function anyctest(anycompatiblenonarray, anycompatiblenonarray)
returns anycompatiblearray as $$
  select array[$1, $2]
$$ language sql;

select x, pg_typeof(x) from anyctest(11, 12) x;
select x, pg_typeof(x) from anyctest(11, 12.3) x;
select x, pg_typeof(x) from anyctest(array[11], array[1,2]) x;  -- fail

drop function anyctest(anycompatiblenonarray, anycompatiblenonarray);

create function anyctest(a anyelement, b anyarray,
                         c anycompatible, d anycompatible)
returns anycompatiblearray as $$
  select array[c, d]
$$ language sql;

select x, pg_typeof(x) from anyctest(11, array[1, 2], 42, 34.5) x;
select x, pg_typeof(x) from anyctest(11, array[1, 2], point(1,2), point(3,4)) x;
select x, pg_typeof(x) from anyctest(11, '{1,2}', point(1,2), '(3,4)') x;
select x, pg_typeof(x) from anyctest(11, array[1, 2.2], 42, 34.5) x;  -- fail

drop function anyctest(a anyelement, b anyarray,
                       c anycompatible, d anycompatible);

create function anyctest(variadic anycompatiblearray)
returns anycompatiblearray as $$
  select $1
$$ language sql;

select x, pg_typeof(x) from anyctest(11, 12) x;
select x, pg_typeof(x) from anyctest(11, 12.2) x;
select x, pg_typeof(x) from anyctest(11, '12') x;
select x, pg_typeof(x) from anyctest(11, '12.2') x;  -- fail
select x, pg_typeof(x) from anyctest(variadic array[11, 12]) x;
select x, pg_typeof(x) from anyctest(variadic array[11, 12.2]) x;

drop function anyctest(variadic anycompatiblearray);
