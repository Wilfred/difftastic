CREATE EXTENSION test_predtest;

-- Make output more legible
\pset expanded on

-- Test data

-- all combinations of four boolean values
create table booleans as
select
  case i%3 when 0 then true when 1 then false else null end as x,
  case (i/3)%3 when 0 then true when 1 then false else null end as y,
  case (i/9)%3 when 0 then true when 1 then false else null end as z,
  case (i/27)%3 when 0 then true when 1 then false else null end as w
from generate_series(0, 3*3*3*3-1) i;

-- all combinations of two integers 0..9, plus null
create table integers as
select
  case i%11 when 10 then null else i%11 end as x,
  case (i/11)%11 when 10 then null else (i/11)%11 end as y
from generate_series(0, 11*11-1) i;

-- and a simple strict function that's opaque to the optimizer
create function strictf(bool, bool) returns bool
language plpgsql as $$begin return $1 and not $2; end$$ strict;

-- a simple function to make arrays opaque to the optimizer
create function opaque_array(int[]) returns int[]
language plpgsql as $$begin return $1; end$$ strict;

-- Basic proof rules for single boolean variables

select * from test_predtest($$
select x, x
from booleans
$$);

select * from test_predtest($$
select x, not x
from booleans
$$);

select * from test_predtest($$
select not x, x
from booleans
$$);

select * from test_predtest($$
select not x, not x
from booleans
$$);

select * from test_predtest($$
select x is not null, x
from booleans
$$);

select * from test_predtest($$
select x is not null, x is null
from integers
$$);

select * from test_predtest($$
select x is null, x is not null
from integers
$$);

select * from test_predtest($$
select x is not true, x
from booleans
$$);

select * from test_predtest($$
select x, x is not true
from booleans
$$);

select * from test_predtest($$
select x is false, x
from booleans
$$);

select * from test_predtest($$
select x, x is false
from booleans
$$);

select * from test_predtest($$
select x is unknown, x
from booleans
$$);

select * from test_predtest($$
select x, x is unknown
from booleans
$$);

-- Assorted not-so-trivial refutation rules

select * from test_predtest($$
select x is null, x
from booleans
$$);

select * from test_predtest($$
select x, x is null
from booleans
$$);

select * from test_predtest($$
select strictf(x,y), x is null
from booleans
$$);

select * from test_predtest($$
select (x is not null) is not true, x
from booleans
$$);

select * from test_predtest($$
select strictf(x,y), (x is not null) is false
from booleans
$$);

select * from test_predtest($$
select x > y, (y < x) is false
from integers
$$);

-- Tests involving AND/OR constructs

select * from test_predtest($$
select x, x and y
from booleans
$$);

select * from test_predtest($$
select not x, x and y
from booleans
$$);

select * from test_predtest($$
select x, not x and y
from booleans
$$);

select * from test_predtest($$
select x or y, x
from booleans
$$);

select * from test_predtest($$
select x and y, x
from booleans
$$);

select * from test_predtest($$
select x and y, not x
from booleans
$$);

select * from test_predtest($$
select x and y, y and x
from booleans
$$);

select * from test_predtest($$
select not y, y and x
from booleans
$$);

select * from test_predtest($$
select x or y, y or x
from booleans
$$);

select * from test_predtest($$
select x or y or z, x or z
from booleans
$$);

select * from test_predtest($$
select x and z, x and y and z
from booleans
$$);

select * from test_predtest($$
select z or w, x or y
from booleans
$$);

select * from test_predtest($$
select z and w, x or y
from booleans
$$);

select * from test_predtest($$
select x, (x and y) or (x and z)
from booleans
$$);

select * from test_predtest($$
select (x and y) or z, y and x
from booleans
$$);

select * from test_predtest($$
select (not x or not y) and z, y and x
from booleans
$$);

select * from test_predtest($$
select y or x, (x or y) and z
from booleans
$$);

select * from test_predtest($$
select not x and not y, (x or y) and z
from booleans
$$);

-- Tests using btree operator knowledge

select * from test_predtest($$
select x <= y, x < y
from integers
$$);

select * from test_predtest($$
select x <= y, x > y
from integers
$$);

select * from test_predtest($$
select x <= y, y >= x
from integers
$$);

select * from test_predtest($$
select x <= y, y > x and y < x+2
from integers
$$);

select * from test_predtest($$
select x <= 5, x <= 7
from integers
$$);

select * from test_predtest($$
select x <= 5, x > 7
from integers
$$);

select * from test_predtest($$
select x <= 5, 7 > x
from integers
$$);

select * from test_predtest($$
select 5 >= x, 7 > x
from integers
$$);

select * from test_predtest($$
select 5 >= x, x > 7
from integers
$$);

select * from test_predtest($$
select 5 = x, x = 7
from integers
$$);

select * from test_predtest($$
select x is not null, x > 7
from integers
$$);

select * from test_predtest($$
select x is not null, int4lt(x,8)
from integers
$$);

select * from test_predtest($$
select x is null, x > 7
from integers
$$);

select * from test_predtest($$
select x is null, int4lt(x,8)
from integers
$$);

select * from test_predtest($$
select x is not null, x < 'foo'
from (values
  ('aaa'::varchar), ('zzz'::varchar), (null)) as v(x)
$$);

-- Cases using ScalarArrayOpExpr

select * from test_predtest($$
select x <= 5, x in (1,3,5)
from integers
$$);

select * from test_predtest($$
select x <= 5, x in (1,3,5,7)
from integers
$$);

select * from test_predtest($$
select x <= 5, x in (1,3,5,null)
from integers
$$);

select * from test_predtest($$
select x in (null,1,3,5,7), x in (1,3,5)
from integers
$$);

select * from test_predtest($$
select x <= 5, x < all(array[1,3,5])
from integers
$$);

select * from test_predtest($$
select x <= y, x = any(array[1,3,y])
from integers
$$);

-- In these tests, we want to prevent predtest.c from breaking down the
-- ScalarArrayOpExpr into an AND/OR tree, so as to exercise the logic
-- that handles ScalarArrayOpExpr directly.  We use opaque_array() if
-- possible, otherwise an array longer than MAX_SAOP_ARRAY_SIZE.

-- ScalarArrayOpExpr implies scalar IS NOT NULL
select * from test_predtest($$
select x is not null, x = any(opaque_array(array[1]))
from integers
$$);

-- but for ALL, we have to be able to prove the array nonempty
select * from test_predtest($$
select x is not null, x <> all(opaque_array(array[1]))
from integers
$$);

select * from test_predtest($$
select x is not null, x <> all(array[
  1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,
  29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,
  54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,
  79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101
])
from integers
$$);

select * from test_predtest($$
select x is not null, x <> all(array[
  1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,
  29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,
  54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,
  79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,y
])
from integers
$$);

-- check empty-array cases
select * from test_predtest($$
select x is not null, x = any(opaque_array(array[]::int[]))
from integers
$$);

select * from test_predtest($$
select x is not null, x <> all(opaque_array(array[]::int[]))
from integers
$$);

-- same thing under a strict function doesn't prove it
select * from test_predtest($$
select x is not null, strictf(true, x = any(opaque_array(array[]::int[])))
from integers
$$);

-- ScalarArrayOpExpr refutes scalar IS NULL
select * from test_predtest($$
select x is null, x = any(opaque_array(array[1]))
from integers
$$);

-- but for ALL, we have to be able to prove the array nonempty
select * from test_predtest($$
select x is null, x <> all(opaque_array(array[1]))
from integers
$$);

select * from test_predtest($$
select x is null, x <> all(array[
  1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,
  29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,
  54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,
  79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101
])
from integers
$$);

-- check empty-array cases
select * from test_predtest($$
select x is null, x = any(opaque_array(array[]::int[]))
from integers
$$);

select * from test_predtest($$
select x is null, x <> all(opaque_array(array[]::int[]))
from integers
$$);

-- same thing under a strict function doesn't prove it
select * from test_predtest($$
select x is null, strictf(true, x = any(opaque_array(array[]::int[])))
from integers
$$);

-- Also, nullness of the scalar weakly refutes a SAOP
select * from test_predtest($$
select x = any(opaque_array(array[1])), x is null
from integers
$$);

-- as does nullness of the array
select * from test_predtest($$
select x = any(opaque_array(array[y])), array[y] is null
from integers
$$);

-- ... unless we need to prove array empty
select * from test_predtest($$
select x = all(opaque_array(array[1])), x is null
from integers
$$);
