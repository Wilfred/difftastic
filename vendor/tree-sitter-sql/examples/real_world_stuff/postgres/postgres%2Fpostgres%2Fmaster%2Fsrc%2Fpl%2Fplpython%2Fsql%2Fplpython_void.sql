--
-- Tests for functions that return void
--

CREATE FUNCTION test_void_func1() RETURNS void AS $$
x = 10
$$ LANGUAGE plpython3u;

-- illegal: can't return non-None value in void-returning func
CREATE FUNCTION test_void_func2() RETURNS void AS $$
return 10
$$ LANGUAGE plpython3u;

CREATE FUNCTION test_return_none() RETURNS int AS $$
None
$$ LANGUAGE plpython3u;


-- Tests for functions returning void
SELECT test_void_func1(), test_void_func1() IS NULL AS "is null";
SELECT test_void_func2(); -- should fail
SELECT test_return_none(), test_return_none() IS NULL AS "is null";
