--
-- Tests for PL/pgSQL's behavior with domain types
--

CREATE DOMAIN booltrue AS bool CHECK (VALUE IS TRUE OR VALUE IS NULL);

CREATE FUNCTION test_argresult_booltrue(x booltrue, y bool) RETURNS booltrue AS $$
begin
return y;
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_argresult_booltrue(true, true);
SELECT * FROM test_argresult_booltrue(false, true);
SELECT * FROM test_argresult_booltrue(true, false);

CREATE FUNCTION test_assign_booltrue(x bool, y bool) RETURNS booltrue AS $$
declare v booltrue := x;
begin
v := y;
return v;
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_assign_booltrue(true, true);
SELECT * FROM test_assign_booltrue(false, true);
SELECT * FROM test_assign_booltrue(true, false);


CREATE DOMAIN uint2 AS int2 CHECK (VALUE >= 0);

CREATE FUNCTION test_argresult_uint2(x uint2, y int) RETURNS uint2 AS $$
begin
return y;
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_argresult_uint2(100::uint2, 50);
SELECT * FROM test_argresult_uint2(100::uint2, -50);
SELECT * FROM test_argresult_uint2(null, 1);

CREATE FUNCTION test_assign_uint2(x int, y int) RETURNS uint2 AS $$
declare v uint2 := x;
begin
v := y;
return v;
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_assign_uint2(100, 50);
SELECT * FROM test_assign_uint2(100, -50);
SELECT * FROM test_assign_uint2(-100, 50);
SELECT * FROM test_assign_uint2(null, 1);


CREATE DOMAIN nnint AS int NOT NULL;

CREATE FUNCTION test_argresult_nnint(x nnint, y int) RETURNS nnint AS $$
begin
return y;
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_argresult_nnint(10, 20);
SELECT * FROM test_argresult_nnint(null, 20);
SELECT * FROM test_argresult_nnint(10, null);

CREATE FUNCTION test_assign_nnint(x int, y int) RETURNS nnint AS $$
declare v nnint := x;
begin
v := y;
return v;
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_assign_nnint(10, 20);
SELECT * FROM test_assign_nnint(null, 20);
SELECT * FROM test_assign_nnint(10, null);


--
-- Domains over arrays
--

CREATE DOMAIN ordered_pair_domain AS integer[] CHECK (array_length(VALUE,1)=2 AND VALUE[1] < VALUE[2]);

CREATE FUNCTION test_argresult_array_domain(x ordered_pair_domain)
  RETURNS ordered_pair_domain AS $$
begin
return x;
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_argresult_array_domain(ARRAY[0, 100]::ordered_pair_domain);
SELECT * FROM test_argresult_array_domain(NULL::ordered_pair_domain);

CREATE FUNCTION test_argresult_array_domain_check_violation()
  RETURNS ordered_pair_domain AS $$
begin
return array[2,1];
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_argresult_array_domain_check_violation();

CREATE FUNCTION test_assign_ordered_pair_domain(x int, y int, z int) RETURNS ordered_pair_domain AS $$
declare v ordered_pair_domain := array[x, y];
begin
v[2] := z;
return v;
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_assign_ordered_pair_domain(1,2,3);
SELECT * FROM test_assign_ordered_pair_domain(1,2,0);
SELECT * FROM test_assign_ordered_pair_domain(2,1,3);


--
-- Arrays of domains
--

CREATE FUNCTION test_read_uint2_array(x uint2[]) RETURNS uint2 AS $$
begin
return x[1];
end
$$ LANGUAGE plpgsql;

select test_read_uint2_array(array[1::uint2]);

CREATE FUNCTION test_build_uint2_array(x int2) RETURNS uint2[] AS $$
begin
return array[x, x];
end
$$ LANGUAGE plpgsql;

select test_build_uint2_array(1::int2);
select test_build_uint2_array(-1::int2);  -- fail

CREATE FUNCTION test_argresult_domain_array(x integer[])
  RETURNS ordered_pair_domain[] AS $$
begin
return array[x::ordered_pair_domain, x::ordered_pair_domain];
end
$$ LANGUAGE plpgsql;

select test_argresult_domain_array(array[2,4]);
select test_argresult_domain_array(array[4,2]);  -- fail

CREATE FUNCTION test_argresult_domain_array2(x ordered_pair_domain)
  RETURNS integer AS $$
begin
return x[1];
end
$$ LANGUAGE plpgsql;

select test_argresult_domain_array2(array[2,4]);
select test_argresult_domain_array2(array[4,2]);  -- fail

CREATE FUNCTION test_argresult_array_domain_array(x ordered_pair_domain[])
  RETURNS ordered_pair_domain AS $$
begin
return x[1];
end
$$ LANGUAGE plpgsql;

select test_argresult_array_domain_array(array[array[2,4]::ordered_pair_domain]);


--
-- Domains within composite
--

CREATE TYPE nnint_container AS (f1 int, f2 nnint);

CREATE FUNCTION test_result_nnint_container(x int, y int)
  RETURNS nnint_container AS $$
begin
return row(x, y)::nnint_container;
end
$$ LANGUAGE plpgsql;

SELECT test_result_nnint_container(null, 3);
SELECT test_result_nnint_container(3, null);  -- fail

CREATE FUNCTION test_assign_nnint_container(x int, y int, z int)
  RETURNS nnint_container AS $$
declare v nnint_container := row(x, y);
begin
v.f2 := z;
return v;
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_assign_nnint_container(1,2,3);
SELECT * FROM test_assign_nnint_container(1,2,null);
SELECT * FROM test_assign_nnint_container(1,null,3);

-- Since core system allows this:
SELECT null::nnint_container;
-- so should PL/PgSQL

CREATE FUNCTION test_assign_nnint_container2(x int, y int, z int)
  RETURNS nnint_container AS $$
declare v nnint_container;
begin
v.f2 := z;
return v;
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_assign_nnint_container2(1,2,3);
SELECT * FROM test_assign_nnint_container2(1,2,null);


--
-- Domains of composite
--

CREATE TYPE named_pair AS (
    i integer,
    j integer
);

CREATE DOMAIN ordered_named_pair AS named_pair CHECK((VALUE).i <= (VALUE).j);

CREATE FUNCTION read_ordered_named_pair(p ordered_named_pair) RETURNS integer AS $$
begin
return p.i + p.j;
end
$$ LANGUAGE plpgsql;

SELECT read_ordered_named_pair(row(1, 2));
SELECT read_ordered_named_pair(row(2, 1));  -- fail

CREATE FUNCTION build_ordered_named_pair(i int, j int) RETURNS ordered_named_pair AS $$
begin
return row(i, j);
end
$$ LANGUAGE plpgsql;

SELECT build_ordered_named_pair(1,2);
SELECT build_ordered_named_pair(2,1);  -- fail

CREATE FUNCTION test_assign_ordered_named_pair(x int, y int, z int)
  RETURNS ordered_named_pair AS $$
declare v ordered_named_pair := row(x, y);
begin
v.j := z;
return v;
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_assign_ordered_named_pair(1,2,3);
SELECT * FROM test_assign_ordered_named_pair(1,2,0);
SELECT * FROM test_assign_ordered_named_pair(2,1,3);

CREATE FUNCTION build_ordered_named_pairs(i int, j int) RETURNS ordered_named_pair[] AS $$
begin
return array[row(i, j), row(i, j+1)];
end
$$ LANGUAGE plpgsql;

SELECT build_ordered_named_pairs(1,2);
SELECT build_ordered_named_pairs(2,1);  -- fail

CREATE FUNCTION test_assign_ordered_named_pairs(x int, y int, z int)
  RETURNS ordered_named_pair[] AS $$
declare v ordered_named_pair[] := array[row(x, y)];
begin
-- ideally this would work, but it doesn't yet:
-- v[1].j := z;
return v;
end
$$ LANGUAGE plpgsql;

SELECT * FROM test_assign_ordered_named_pairs(1,2,3);
SELECT * FROM test_assign_ordered_named_pairs(2,1,3);
SELECT * FROM test_assign_ordered_named_pairs(1,2,0);  -- should fail someday
