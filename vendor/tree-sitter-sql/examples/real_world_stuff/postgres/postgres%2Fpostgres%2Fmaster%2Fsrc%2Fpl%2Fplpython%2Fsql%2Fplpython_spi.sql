--
-- nested calls
--

CREATE FUNCTION nested_call_one(a text) RETURNS text
	AS
'q = "SELECT nested_call_two(''%s'')" % a
r = plpy.execute(q)
return r[0]'
	LANGUAGE plpython3u ;

CREATE FUNCTION nested_call_two(a text) RETURNS text
	AS
'q = "SELECT nested_call_three(''%s'')" % a
r = plpy.execute(q)
return r[0]'
	LANGUAGE plpython3u ;

CREATE FUNCTION nested_call_three(a text) RETURNS text
	AS
'return a'
	LANGUAGE plpython3u ;

-- some spi stuff

CREATE FUNCTION spi_prepared_plan_test_one(a text) RETURNS text
	AS
'if "myplan" not in SD:
	q = "SELECT count(*) FROM users WHERE lname = $1"
	SD["myplan"] = plpy.prepare(q, [ "text" ])
try:
	rv = plpy.execute(SD["myplan"], [a])
	return "there are " + str(rv[0]["count"]) + " " + str(a) + "s"
except Exception as ex:
	plpy.error(str(ex))
return None
'
	LANGUAGE plpython3u;

CREATE FUNCTION spi_prepared_plan_test_two(a text) RETURNS text
	AS
'if "myplan" not in SD:
	q = "SELECT count(*) FROM users WHERE lname = $1"
	SD["myplan"] = plpy.prepare(q, [ "text" ])
try:
	rv = SD["myplan"].execute([a])
	return "there are " + str(rv[0]["count"]) + " " + str(a) + "s"
except Exception as ex:
	plpy.error(str(ex))
return None
'
	LANGUAGE plpython3u;

CREATE FUNCTION spi_prepared_plan_test_nested(a text) RETURNS text
	AS
'if "myplan" not in SD:
	q = "SELECT spi_prepared_plan_test_one(''%s'') as count" % a
	SD["myplan"] = plpy.prepare(q)
try:
	rv = plpy.execute(SD["myplan"])
	if len(rv):
		return rv[0]["count"]
except Exception as ex:
	plpy.error(str(ex))
return None
'
	LANGUAGE plpython3u;

CREATE FUNCTION join_sequences(s sequences) RETURNS text
	AS
'if not s["multipart"]:
	return s["sequence"]
q = "SELECT sequence FROM xsequences WHERE pid = ''%s''" % s["pid"]
rv = plpy.execute(q)
seq = s["sequence"]
for r in rv:
	seq = seq + r["sequence"]
return seq
'
	LANGUAGE plpython3u;

CREATE FUNCTION spi_recursive_sum(a int) RETURNS int
	AS
'r = 0
if a > 1:
    r = plpy.execute("SELECT spi_recursive_sum(%d) as a" % (a-1))[0]["a"]
return a + r
'
	LANGUAGE plpython3u;

--
-- spi and nested calls
--
select nested_call_one('pass this along');
select spi_prepared_plan_test_one('doe');
select spi_prepared_plan_test_two('smith');
select spi_prepared_plan_test_nested('smith');

SELECT join_sequences(sequences) FROM sequences;
SELECT join_sequences(sequences) FROM sequences
	WHERE join_sequences(sequences) ~* '^A';
SELECT join_sequences(sequences) FROM sequences
	WHERE join_sequences(sequences) ~* '^B';

SELECT spi_recursive_sum(10);

--
-- plan and result objects
--

CREATE FUNCTION result_metadata_test(cmd text) RETURNS int
AS $$
plan = plpy.prepare(cmd)
plpy.info(plan.status()) # not really documented or useful
result = plpy.execute(plan)
if result.status() > 0:
   plpy.info(result.colnames())
   plpy.info(result.coltypes())
   plpy.info(result.coltypmods())
   return result.nrows()
else:
   return None
$$ LANGUAGE plpython3u;

SELECT result_metadata_test($$SELECT 1 AS foo, '11'::text AS bar UNION SELECT 2, '22'$$);
SELECT result_metadata_test($$CREATE TEMPORARY TABLE foo1 (a int, b text)$$);

CREATE FUNCTION result_nrows_test(cmd text) RETURNS int
AS $$
result = plpy.execute(cmd)
return result.nrows()
$$ LANGUAGE plpython3u;

SELECT result_nrows_test($$SELECT 1$$);
SELECT result_nrows_test($$CREATE TEMPORARY TABLE foo2 (a int, b text)$$);
SELECT result_nrows_test($$INSERT INTO foo2 VALUES (1, 'one'), (2, 'two')$$);
SELECT result_nrows_test($$UPDATE foo2 SET b = '' WHERE a = 2$$);

CREATE FUNCTION result_len_test(cmd text) RETURNS int
AS $$
result = plpy.execute(cmd)
return len(result)
$$ LANGUAGE plpython3u;

SELECT result_len_test($$SELECT 1$$);
SELECT result_len_test($$CREATE TEMPORARY TABLE foo3 (a int, b text)$$);
SELECT result_len_test($$INSERT INTO foo3 VALUES (1, 'one'), (2, 'two')$$);
SELECT result_len_test($$UPDATE foo3 SET b= '' WHERE a = 2$$);

CREATE FUNCTION result_subscript_test() RETURNS void
AS $$
result = plpy.execute("SELECT 1 AS c UNION ALL SELECT 2 "
                      "UNION ALL SELECT 3 UNION ALL SELECT 4")

plpy.info(result[1]['c'])
plpy.info(result[-1]['c'])

plpy.info([item['c'] for item in result[1:3]])
plpy.info([item['c'] for item in result[::2]])

result[-1] = {'c': 1000}
result[:2] = [{'c': 10}, {'c': 100}]
plpy.info([item['c'] for item in result[:]])

# raises TypeError, catch so further tests could be added
try:
    plpy.info(result['foo'])
except TypeError:
    pass
else:
    assert False, "TypeError not raised"

$$ LANGUAGE plpython3u;

SELECT result_subscript_test();

CREATE FUNCTION result_empty_test() RETURNS void
AS $$
result = plpy.execute("select 1 where false")

plpy.info(result[:])

$$ LANGUAGE plpython3u;

SELECT result_empty_test();

CREATE FUNCTION result_str_test(cmd text) RETURNS text
AS $$
plan = plpy.prepare(cmd)
result = plpy.execute(plan)
return str(result)
$$ LANGUAGE plpython3u;

SELECT result_str_test($$SELECT 1 AS foo UNION SELECT 2$$);
SELECT result_str_test($$CREATE TEMPORARY TABLE foo1 (a int, b text)$$);

-- cursor objects

CREATE FUNCTION simple_cursor_test() RETURNS int AS $$
res = plpy.cursor("select fname, lname from users")
does = 0
for row in res:
    if row['lname'] == 'doe':
        does += 1
return does
$$ LANGUAGE plpython3u;

CREATE FUNCTION double_cursor_close() RETURNS int AS $$
res = plpy.cursor("select fname, lname from users")
res.close()
res.close()
$$ LANGUAGE plpython3u;

CREATE FUNCTION cursor_fetch() RETURNS int AS $$
res = plpy.cursor("select fname, lname from users")
assert len(res.fetch(3)) == 3
assert len(res.fetch(3)) == 1
assert len(res.fetch(3)) == 0
assert len(res.fetch(3)) == 0
try:
    # use next() or __next__(), the method name changed in
    # http://www.python.org/dev/peps/pep-3114/
    try:
        res.next()
    except AttributeError:
        res.__next__()
except StopIteration:
    pass
else:
    assert False, "StopIteration not raised"
$$ LANGUAGE plpython3u;

CREATE FUNCTION cursor_mix_next_and_fetch() RETURNS int AS $$
res = plpy.cursor("select fname, lname from users order by fname")
assert len(res.fetch(2)) == 2

item = None
try:
    item = res.next()
except AttributeError:
    item = res.__next__()
assert item['fname'] == 'rick'

assert len(res.fetch(2)) == 1
$$ LANGUAGE plpython3u;

CREATE FUNCTION fetch_after_close() RETURNS int AS $$
res = plpy.cursor("select fname, lname from users")
res.close()
try:
    res.fetch(1)
except ValueError:
    pass
else:
    assert False, "ValueError not raised"
$$ LANGUAGE plpython3u;

CREATE FUNCTION next_after_close() RETURNS int AS $$
res = plpy.cursor("select fname, lname from users")
res.close()
try:
    try:
        res.next()
    except AttributeError:
        res.__next__()
except ValueError:
    pass
else:
    assert False, "ValueError not raised"
$$ LANGUAGE plpython3u;

CREATE FUNCTION cursor_fetch_next_empty() RETURNS int AS $$
res = plpy.cursor("select fname, lname from users where false")
assert len(res.fetch(1)) == 0
try:
    try:
        res.next()
    except AttributeError:
        res.__next__()
except StopIteration:
    pass
else:
    assert False, "StopIteration not raised"
$$ LANGUAGE plpython3u;

CREATE FUNCTION cursor_plan() RETURNS SETOF text AS $$
plan = plpy.prepare(
    "select fname, lname from users where fname like $1 || '%' order by fname",
    ["text"])
for row in plpy.cursor(plan, ["w"]):
    yield row['fname']
for row in plan.cursor(["j"]):
    yield row['fname']
$$ LANGUAGE plpython3u;

CREATE FUNCTION cursor_plan_wrong_args() RETURNS SETOF text AS $$
plan = plpy.prepare("select fname, lname from users where fname like $1 || '%'",
                    ["text"])
c = plpy.cursor(plan, ["a", "b"])
$$ LANGUAGE plpython3u;

CREATE TYPE test_composite_type AS (
  a1 int,
  a2 varchar
);

CREATE OR REPLACE FUNCTION plan_composite_args() RETURNS test_composite_type AS $$
plan = plpy.prepare("select $1 as c1", ["test_composite_type"])
res = plpy.execute(plan, [{"a1": 3, "a2": "label"}])
return res[0]["c1"]
$$ LANGUAGE plpython3u;

SELECT simple_cursor_test();
SELECT double_cursor_close();
SELECT cursor_fetch();
SELECT cursor_mix_next_and_fetch();
SELECT fetch_after_close();
SELECT next_after_close();
SELECT cursor_fetch_next_empty();
SELECT cursor_plan();
SELECT cursor_plan_wrong_args();
SELECT plan_composite_args();
