CREATE EXTENSION jsonb_plpython3u CASCADE;

-- test jsonb -> python dict
CREATE FUNCTION test1(val jsonb) RETURNS int
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
assert isinstance(val, dict)
assert(val == {'a': 1, 'c': 'NULL'})
return len(val)
$$;

SELECT test1('{"a": 1, "c": "NULL"}'::jsonb);

-- test jsonb -> python dict
-- complex dict with dicts as value
CREATE FUNCTION test1complex(val jsonb) RETURNS int
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
assert isinstance(val, dict)
assert(val == {"d": {"d": 1}})
return len(val)
$$;

SELECT test1complex('{"d": {"d": 1}}'::jsonb);


-- test jsonb[] -> python dict
-- dict with array as value
CREATE FUNCTION test1arr(val jsonb) RETURNS int
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
assert isinstance(val, dict)
assert(val == {"d": [12, 1]})
return len(val)
$$;

SELECT test1arr('{"d":[12, 1]}'::jsonb);

-- test jsonb[] -> python list
-- simple list
CREATE FUNCTION test2arr(val jsonb) RETURNS int
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
assert isinstance(val, list)
assert(val == [12, 1])
return len(val)
$$;

SELECT test2arr('[12, 1]'::jsonb);

-- test jsonb[] -> python list
-- array of dicts
CREATE FUNCTION test3arr(val jsonb) RETURNS int
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
assert isinstance(val, list)
assert(val == [{"a": 1,"b": 2}, {"c": 3,"d": 4}])
return len(val)
$$;

SELECT test3arr('[{"a": 1, "b": 2}, {"c": 3,"d": 4}]'::jsonb);

-- test jsonb int -> python int
CREATE FUNCTION test1int(val jsonb) RETURNS int
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
assert(val == 1)
return val
$$;

SELECT test1int('1'::jsonb);

-- test jsonb string -> python string
CREATE FUNCTION test1string(val jsonb) RETURNS text
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
assert(val == "a")
return val
$$;

SELECT test1string('"a"'::jsonb);

-- test jsonb null -> python None
CREATE FUNCTION test1null(val jsonb) RETURNS int
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
assert(val == None)
return 1
$$;

SELECT test1null('null'::jsonb);

-- test python -> jsonb
CREATE FUNCTION roundtrip(val jsonb) RETURNS jsonb
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
as $$
return val
$$;

SELECT roundtrip('null'::jsonb);
SELECT roundtrip('1'::jsonb);
SELECT roundtrip('1234567890.0987654321'::jsonb);
SELECT roundtrip('-1234567890.0987654321'::jsonb);
SELECT roundtrip('true'::jsonb);
SELECT roundtrip('"string"'::jsonb);

SELECT roundtrip('{"1": null}'::jsonb);
SELECT roundtrip('{"1": 1}'::jsonb);
SELECT roundtrip('{"1": true}'::jsonb);
SELECT roundtrip('{"1": "string"}'::jsonb);

SELECT roundtrip('[null]'::jsonb);
SELECT roundtrip('[1]'::jsonb);
SELECT roundtrip('[true]'::jsonb);
SELECT roundtrip('["string"]'::jsonb);
SELECT roundtrip('[null, 1]'::jsonb);
SELECT roundtrip('[1, true]'::jsonb);
SELECT roundtrip('[true, "string"]'::jsonb);
SELECT roundtrip('["string", "string2"]'::jsonb);

-- complex numbers -> jsonb
CREATE FUNCTION testComplexNumbers() RETURNS jsonb
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
x = 1 + 2j
return x
$$;

SELECT testComplexNumbers();

-- range -> jsonb
CREATE FUNCTION testRange() RETURNS jsonb
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
x = range(3)
return x
$$;

SELECT testRange();

-- 0xff -> jsonb
CREATE FUNCTION testDecimal() RETURNS jsonb
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
x = 0xff
return x
$$;

SELECT testDecimal();

-- tuple -> jsonb
CREATE FUNCTION testTuple() RETURNS jsonb
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
x = (1, 'String', None)
return x
$$;

SELECT testTuple();

-- interesting dict -> jsonb
CREATE FUNCTION test_dict1() RETURNS jsonb
LANGUAGE plpython3u
TRANSFORM FOR TYPE jsonb
AS $$
x = {"a": 1, None: 2, 33: 3}
return x
$$;

SELECT test_dict1();
