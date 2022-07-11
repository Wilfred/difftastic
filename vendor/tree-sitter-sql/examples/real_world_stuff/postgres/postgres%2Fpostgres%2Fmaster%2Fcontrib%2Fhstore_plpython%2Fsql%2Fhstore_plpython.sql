CREATE EXTENSION hstore_plpython3u CASCADE;


-- test hstore -> python
CREATE FUNCTION test1(val hstore) RETURNS int
LANGUAGE plpython3u
TRANSFORM FOR TYPE hstore
AS $$
assert isinstance(val, dict)
plpy.info(sorted(val.items()))
return len(val)
$$;

SELECT test1('aa=>bb, cc=>NULL'::hstore);


-- the same with the versioned language name
CREATE FUNCTION test1n(val hstore) RETURNS int
LANGUAGE plpython3u
TRANSFORM FOR TYPE hstore
AS $$
assert isinstance(val, dict)
plpy.info(sorted(val.items()))
return len(val)
$$;

SELECT test1n('aa=>bb, cc=>NULL'::hstore);


-- test hstore[] -> python
CREATE FUNCTION test1arr(val hstore[]) RETURNS int
LANGUAGE plpython3u
TRANSFORM FOR TYPE hstore
AS $$
assert(val == [{'aa': 'bb', 'cc': None}, {'dd': 'ee'}])
return len(val)
$$;

SELECT test1arr(array['aa=>bb, cc=>NULL'::hstore, 'dd=>ee']);


-- test python -> hstore
CREATE FUNCTION test2(a int, b text) RETURNS hstore
LANGUAGE plpython3u
TRANSFORM FOR TYPE hstore
AS $$
val = {'a': a, 'b': b, 'c': None}
return val
$$;

SELECT test2(1, 'boo');

--- test ruleutils
\sf test2


-- test python -> hstore[]
CREATE FUNCTION test2arr() RETURNS hstore[]
LANGUAGE plpython3u
TRANSFORM FOR TYPE hstore
AS $$
val = [{'a': 1, 'b': 'boo', 'c': None}, {'d': 2}]
return val
$$;

SELECT test2arr();


-- test python -> domain over hstore
CREATE DOMAIN hstore_foo AS hstore CHECK(VALUE ? 'foo');

CREATE FUNCTION test2dom(fn text) RETURNS hstore_foo
LANGUAGE plpython3u
TRANSFORM FOR TYPE hstore
AS $$
return {'a': 1, fn: 'boo', 'c': None}
$$;

SELECT test2dom('foo');
SELECT test2dom('bar');  -- fail


-- test as part of prepare/execute
CREATE FUNCTION test3() RETURNS void
LANGUAGE plpython3u
TRANSFORM FOR TYPE hstore
AS $$
rv = plpy.execute("SELECT 'aa=>bb, cc=>NULL'::hstore AS col1")
assert(rv[0]["col1"] == {'aa': 'bb', 'cc': None})

val = {'a': 1, 'b': 'boo', 'c': None}
plan = plpy.prepare("SELECT $1::text AS col1", ["hstore"])
rv = plpy.execute(plan, [val])
assert(rv[0]["col1"] == '"a"=>"1", "b"=>"boo", "c"=>NULL')
$$;

SELECT test3();


-- test trigger
CREATE TABLE test1 (a int, b hstore);
INSERT INTO test1 VALUES (1, 'aa=>bb, cc=>NULL');
SELECT * FROM test1;

CREATE FUNCTION test4() RETURNS trigger
LANGUAGE plpython3u
TRANSFORM FOR TYPE hstore
AS $$
assert(TD["new"] == {'a': 1, 'b': {'aa': 'bb', 'cc': None}})
if TD["new"]["a"] == 1:
    TD["new"]["b"] = {'a': 1, 'b': 'boo', 'c': None}

return "MODIFY"
$$;

CREATE TRIGGER test4 BEFORE UPDATE ON test1 FOR EACH ROW EXECUTE PROCEDURE test4();

UPDATE test1 SET a = a;
SELECT * FROM test1;
