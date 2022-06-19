-- directory paths are passed to us in environment variables
\getenv abs_srcdir PG_ABS_SRCDIR

CREATE TABLE testjsonb (
       j jsonb
);

\set filename :abs_srcdir '/data/jsonb.data'
COPY testjsonb FROM :'filename';

-- Strings.
SELECT '""'::jsonb;				-- OK.
SELECT $$''$$::jsonb;			-- ERROR, single quotes are not allowed
SELECT '"abc"'::jsonb;			-- OK
SELECT '"abc'::jsonb;			-- ERROR, quotes not closed
SELECT '"abc
def"'::jsonb;					-- ERROR, unescaped newline in string constant
SELECT '"\n\"\\"'::jsonb;		-- OK, legal escapes
SELECT '"\v"'::jsonb;			-- ERROR, not a valid JSON escape
-- see json_encoding test for input with unicode escapes

-- Numbers.
SELECT '1'::jsonb;				-- OK
SELECT '0'::jsonb;				-- OK
SELECT '01'::jsonb;				-- ERROR, not valid according to JSON spec
SELECT '0.1'::jsonb;				-- OK
SELECT '9223372036854775808'::jsonb;	-- OK, even though it's too large for int8
SELECT '1e100'::jsonb;			-- OK
SELECT '1.3e100'::jsonb;			-- OK
SELECT '1f2'::jsonb;				-- ERROR
SELECT '0.x1'::jsonb;			-- ERROR
SELECT '1.3ex100'::jsonb;		-- ERROR

-- Arrays.
SELECT '[]'::jsonb;				-- OK
SELECT '[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]'::jsonb;  -- OK
SELECT '[1,2]'::jsonb;			-- OK
SELECT '[1,2,]'::jsonb;			-- ERROR, trailing comma
SELECT '[1,2'::jsonb;			-- ERROR, no closing bracket
SELECT '[1,[2]'::jsonb;			-- ERROR, no closing bracket

-- Objects.
SELECT '{}'::jsonb;				-- OK
SELECT '{"abc"}'::jsonb;			-- ERROR, no value
SELECT '{"abc":1}'::jsonb;		-- OK
SELECT '{1:"abc"}'::jsonb;		-- ERROR, keys must be strings
SELECT '{"abc",1}'::jsonb;		-- ERROR, wrong separator
SELECT '{"abc"=1}'::jsonb;		-- ERROR, totally wrong separator
SELECT '{"abc"::1}'::jsonb;		-- ERROR, another wrong separator
SELECT '{"abc":1,"def":2,"ghi":[3,4],"hij":{"klm":5,"nop":[6]}}'::jsonb; -- OK
SELECT '{"abc":1:2}'::jsonb;		-- ERROR, colon in wrong spot
SELECT '{"abc":1,3}'::jsonb;		-- ERROR, no value

-- Recursion.
SET max_stack_depth = '100kB';
SELECT repeat('[', 10000)::jsonb;
SELECT repeat('{"a":', 10000)::jsonb;
RESET max_stack_depth;

-- Miscellaneous stuff.
SELECT 'true'::jsonb;			-- OK
SELECT 'false'::jsonb;			-- OK
SELECT 'null'::jsonb;			-- OK
SELECT ' true '::jsonb;			-- OK, even with extra whitespace
SELECT 'true false'::jsonb;		-- ERROR, too many values
SELECT 'true, false'::jsonb;		-- ERROR, too many values
SELECT 'truf'::jsonb;			-- ERROR, not a keyword
SELECT 'trues'::jsonb;			-- ERROR, not a keyword
SELECT ''::jsonb;				-- ERROR, no value
SELECT '    '::jsonb;			-- ERROR, no value

-- Multi-line JSON input to check ERROR reporting
SELECT '{
		"one": 1,
		"two":"two",
		"three":
		true}'::jsonb; -- OK
SELECT '{
		"one": 1,
		"two":,"two",  -- ERROR extraneous comma before field "two"
		"three":
		true}'::jsonb;
SELECT '{
		"one": 1,
		"two":"two",
		"averyveryveryveryveryveryveryveryveryverylongfieldname":}'::jsonb;
-- ERROR missing value for last field

-- make sure jsonb is passed through json generators without being escaped
SELECT array_to_json(ARRAY [jsonb '{"a":1}', jsonb '{"b":[2,3]}']);

-- anyarray column

CREATE TEMP TABLE rows AS
SELECT x, 'txt' || x as y
FROM generate_series(1,3) AS x;

analyze rows;

select attname, to_jsonb(histogram_bounds) histogram_bounds
from pg_stats
where tablename = 'rows' and
      schemaname = pg_my_temp_schema()::regnamespace::text
order by 1;

-- to_jsonb, timestamps

select to_jsonb(timestamp '2014-05-28 12:22:35.614298');

BEGIN;
SET LOCAL TIME ZONE 10.5;
select to_jsonb(timestamptz '2014-05-28 12:22:35.614298-04');
SET LOCAL TIME ZONE -8;
select to_jsonb(timestamptz '2014-05-28 12:22:35.614298-04');
COMMIT;

select to_jsonb(date '2014-05-28');

select to_jsonb(date 'Infinity');
select to_jsonb(date '-Infinity');
select to_jsonb(timestamp 'Infinity');
select to_jsonb(timestamp '-Infinity');
select to_jsonb(timestamptz 'Infinity');
select to_jsonb(timestamptz '-Infinity');

--jsonb_agg

SELECT jsonb_agg(q)
  FROM ( SELECT $$a$$ || x AS b, y AS c,
               ARRAY[ROW(x.*,ARRAY[1,2,3]),
               ROW(y.*,ARRAY[4,5,6])] AS z
         FROM generate_series(1,2) x,
              generate_series(4,5) y) q;

SELECT jsonb_agg(q ORDER BY x, y)
  FROM rows q;

UPDATE rows SET x = NULL WHERE x = 1;

SELECT jsonb_agg(q ORDER BY x NULLS FIRST, y)
  FROM rows q;

-- jsonb extraction functions
CREATE TEMP TABLE test_jsonb (
       json_type text,
       test_json jsonb
);

INSERT INTO test_jsonb VALUES
('scalar','"a scalar"'),
('array','["zero", "one","two",null,"four","five", [1,2,3],{"f1":9}]'),
('object','{"field1":"val1","field2":"val2","field3":null, "field4": 4, "field5": [1,2,3], "field6": {"f1":9}}');

SELECT test_json -> 'x' FROM test_jsonb WHERE json_type = 'scalar';
SELECT test_json -> 'x' FROM test_jsonb WHERE json_type = 'array';
SELECT test_json -> 'x' FROM test_jsonb WHERE json_type = 'object';
SELECT test_json -> 'field2' FROM test_jsonb WHERE json_type = 'object';

SELECT test_json ->> 'field2' FROM test_jsonb WHERE json_type = 'scalar';
SELECT test_json ->> 'field2' FROM test_jsonb WHERE json_type = 'array';
SELECT test_json ->> 'field2' FROM test_jsonb WHERE json_type = 'object';

SELECT test_json -> 2 FROM test_jsonb WHERE json_type = 'scalar';
SELECT test_json -> 2 FROM test_jsonb WHERE json_type = 'array';
SELECT test_json -> 9 FROM test_jsonb WHERE json_type = 'array';
SELECT test_json -> 2 FROM test_jsonb WHERE json_type = 'object';

SELECT test_json ->> 6 FROM test_jsonb WHERE json_type = 'array';
SELECT test_json ->> 7 FROM test_jsonb WHERE json_type = 'array';

SELECT test_json ->> 'field4' FROM test_jsonb WHERE json_type = 'object';
SELECT test_json ->> 'field5' FROM test_jsonb WHERE json_type = 'object';
SELECT test_json ->> 'field6' FROM test_jsonb WHERE json_type = 'object';

SELECT test_json ->> 2 FROM test_jsonb WHERE json_type = 'scalar';
SELECT test_json ->> 2 FROM test_jsonb WHERE json_type = 'array';
SELECT test_json ->> 2 FROM test_jsonb WHERE json_type = 'object';

SELECT jsonb_object_keys(test_json) FROM test_jsonb WHERE json_type = 'scalar';
SELECT jsonb_object_keys(test_json) FROM test_jsonb WHERE json_type = 'array';
SELECT jsonb_object_keys(test_json) FROM test_jsonb WHERE json_type = 'object';

-- nulls
SELECT (test_json->'field3') IS NULL AS expect_false FROM test_jsonb WHERE json_type = 'object';
SELECT (test_json->>'field3') IS NULL AS expect_true FROM test_jsonb WHERE json_type = 'object';
SELECT (test_json->3) IS NULL AS expect_false FROM test_jsonb WHERE json_type = 'array';
SELECT (test_json->>3) IS NULL AS expect_true FROM test_jsonb WHERE json_type = 'array';

-- corner cases
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb -> null::text;
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb -> null::int;
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb -> 1;
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb -> 'z';
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb -> '';
select '[{"b": "c"}, {"b": "cc"}]'::jsonb -> 1;
select '[{"b": "c"}, {"b": "cc"}]'::jsonb -> 3;
select '[{"b": "c"}, {"b": "cc"}]'::jsonb -> 'z';
select '{"a": "c", "b": null}'::jsonb -> 'b';
select '"foo"'::jsonb -> 1;
select '"foo"'::jsonb -> 'z';

select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb ->> null::text;
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb ->> null::int;
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb ->> 1;
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb ->> 'z';
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb ->> '';
select '[{"b": "c"}, {"b": "cc"}]'::jsonb ->> 1;
select '[{"b": "c"}, {"b": "cc"}]'::jsonb ->> 3;
select '[{"b": "c"}, {"b": "cc"}]'::jsonb ->> 'z';
select '{"a": "c", "b": null}'::jsonb ->> 'b';
select '"foo"'::jsonb ->> 1;
select '"foo"'::jsonb ->> 'z';

-- equality and inequality
SELECT '{"x":"y"}'::jsonb = '{"x":"y"}'::jsonb;
SELECT '{"x":"y"}'::jsonb = '{"x":"z"}'::jsonb;

SELECT '{"x":"y"}'::jsonb <> '{"x":"y"}'::jsonb;
SELECT '{"x":"y"}'::jsonb <> '{"x":"z"}'::jsonb;

-- containment
SELECT jsonb_contains('{"a":"b", "b":1, "c":null}', '{"a":"b"}');
SELECT jsonb_contains('{"a":"b", "b":1, "c":null}', '{"a":"b", "c":null}');
SELECT jsonb_contains('{"a":"b", "b":1, "c":null}', '{"a":"b", "g":null}');
SELECT jsonb_contains('{"a":"b", "b":1, "c":null}', '{"g":null}');
SELECT jsonb_contains('{"a":"b", "b":1, "c":null}', '{"a":"c"}');
SELECT jsonb_contains('{"a":"b", "b":1, "c":null}', '{"a":"b"}');
SELECT jsonb_contains('{"a":"b", "b":1, "c":null}', '{"a":"b", "c":"q"}');
SELECT '{"a":"b", "b":1, "c":null}'::jsonb @> '{"a":"b"}';
SELECT '{"a":"b", "b":1, "c":null}'::jsonb @> '{"a":"b", "c":null}';
SELECT '{"a":"b", "b":1, "c":null}'::jsonb @> '{"a":"b", "g":null}';
SELECT '{"a":"b", "b":1, "c":null}'::jsonb @> '{"g":null}';
SELECT '{"a":"b", "b":1, "c":null}'::jsonb @> '{"a":"c"}';
SELECT '{"a":"b", "b":1, "c":null}'::jsonb @> '{"a":"b"}';
SELECT '{"a":"b", "b":1, "c":null}'::jsonb @> '{"a":"b", "c":"q"}';

SELECT '[1,2]'::jsonb @> '[1,2,2]'::jsonb;
SELECT '[1,1,2]'::jsonb @> '[1,2,2]'::jsonb;
SELECT '[[1,2]]'::jsonb @> '[[1,2,2]]'::jsonb;
SELECT '[1,2,2]'::jsonb <@ '[1,2]'::jsonb;
SELECT '[1,2,2]'::jsonb <@ '[1,1,2]'::jsonb;
SELECT '[[1,2,2]]'::jsonb <@ '[[1,2]]'::jsonb;

SELECT jsonb_contained('{"a":"b"}', '{"a":"b", "b":1, "c":null}');
SELECT jsonb_contained('{"a":"b", "c":null}', '{"a":"b", "b":1, "c":null}');
SELECT jsonb_contained('{"a":"b", "g":null}', '{"a":"b", "b":1, "c":null}');
SELECT jsonb_contained('{"g":null}', '{"a":"b", "b":1, "c":null}');
SELECT jsonb_contained('{"a":"c"}', '{"a":"b", "b":1, "c":null}');
SELECT jsonb_contained('{"a":"b"}', '{"a":"b", "b":1, "c":null}');
SELECT jsonb_contained('{"a":"b", "c":"q"}', '{"a":"b", "b":1, "c":null}');
SELECT '{"a":"b"}'::jsonb <@ '{"a":"b", "b":1, "c":null}';
SELECT '{"a":"b", "c":null}'::jsonb <@ '{"a":"b", "b":1, "c":null}';
SELECT '{"a":"b", "g":null}'::jsonb <@ '{"a":"b", "b":1, "c":null}';
SELECT '{"g":null}'::jsonb <@ '{"a":"b", "b":1, "c":null}';
SELECT '{"a":"c"}'::jsonb <@ '{"a":"b", "b":1, "c":null}';
SELECT '{"a":"b"}'::jsonb <@ '{"a":"b", "b":1, "c":null}';
SELECT '{"a":"b", "c":"q"}'::jsonb <@ '{"a":"b", "b":1, "c":null}';
-- Raw scalar may contain another raw scalar, array may contain a raw scalar
SELECT '[5]'::jsonb @> '[5]';
SELECT '5'::jsonb @> '5';
SELECT '[5]'::jsonb @> '5';
-- But a raw scalar cannot contain an array
SELECT '5'::jsonb @> '[5]';
-- In general, one thing should always contain itself. Test array containment:
SELECT '["9", ["7", "3"], 1]'::jsonb @> '["9", ["7", "3"], 1]'::jsonb;
SELECT '["9", ["7", "3"], ["1"]]'::jsonb @> '["9", ["7", "3"], ["1"]]'::jsonb;
-- array containment string matching confusion bug
SELECT '{ "name": "Bob", "tags": [ "enim", "qui"]}'::jsonb @> '{"tags":["qu"]}';

-- array length
SELECT jsonb_array_length('[1,2,3,{"f1":1,"f2":[5,6]},4]');
SELECT jsonb_array_length('[]');
SELECT jsonb_array_length('{"f1":1,"f2":[5,6]}');
SELECT jsonb_array_length('4');

-- each
SELECT jsonb_each('{"f1":[1,2,3],"f2":{"f3":1},"f4":null}');
SELECT jsonb_each('{"a":{"b":"c","c":"b","1":"first"},"b":[1,2],"c":"cc","1":"first","n":null}'::jsonb) AS q;
SELECT * FROM jsonb_each('{"f1":[1,2,3],"f2":{"f3":1},"f4":null,"f5":99,"f6":"stringy"}') q;
SELECT * FROM jsonb_each('{"a":{"b":"c","c":"b","1":"first"},"b":[1,2],"c":"cc","1":"first","n":null}'::jsonb) AS q;

SELECT jsonb_each_text('{"f1":[1,2,3],"f2":{"f3":1},"f4":null,"f5":"null"}');
SELECT jsonb_each_text('{"a":{"b":"c","c":"b","1":"first"},"b":[1,2],"c":"cc","1":"first","n":null}'::jsonb) AS q;
SELECT * FROM jsonb_each_text('{"f1":[1,2,3],"f2":{"f3":1},"f4":null,"f5":99,"f6":"stringy"}') q;
SELECT * FROM jsonb_each_text('{"a":{"b":"c","c":"b","1":"first"},"b":[1,2],"c":"cc","1":"first","n":null}'::jsonb) AS q;

-- exists
SELECT jsonb_exists('{"a":null, "b":"qq"}', 'a');
SELECT jsonb_exists('{"a":null, "b":"qq"}', 'b');
SELECT jsonb_exists('{"a":null, "b":"qq"}', 'c');
SELECT jsonb_exists('{"a":"null", "b":"qq"}', 'a');
SELECT jsonb '{"a":null, "b":"qq"}' ? 'a';
SELECT jsonb '{"a":null, "b":"qq"}' ? 'b';
SELECT jsonb '{"a":null, "b":"qq"}' ? 'c';
SELECT jsonb '{"a":"null", "b":"qq"}' ? 'a';
-- array exists - array elements should behave as keys
SELECT count(*) from testjsonb  WHERE j->'array' ? 'bar';
-- type sensitive array exists - should return no rows (since "exists" only
-- matches strings that are either object keys or array elements)
SELECT count(*) from testjsonb  WHERE j->'array' ? '5'::text;
-- However, a raw scalar is *contained* within the array
SELECT count(*) from testjsonb  WHERE j->'array' @> '5'::jsonb;

SELECT jsonb_exists_any('{"a":null, "b":"qq"}', ARRAY['a','b']);
SELECT jsonb_exists_any('{"a":null, "b":"qq"}', ARRAY['b','a']);
SELECT jsonb_exists_any('{"a":null, "b":"qq"}', ARRAY['c','a']);
SELECT jsonb_exists_any('{"a":null, "b":"qq"}', ARRAY['c','d']);
SELECT jsonb_exists_any('{"a":null, "b":"qq"}', '{}'::text[]);
SELECT jsonb '{"a":null, "b":"qq"}' ?| ARRAY['a','b'];
SELECT jsonb '{"a":null, "b":"qq"}' ?| ARRAY['b','a'];
SELECT jsonb '{"a":null, "b":"qq"}' ?| ARRAY['c','a'];
SELECT jsonb '{"a":null, "b":"qq"}' ?| ARRAY['c','d'];
SELECT jsonb '{"a":null, "b":"qq"}' ?| '{}'::text[];

SELECT jsonb_exists_all('{"a":null, "b":"qq"}', ARRAY['a','b']);
SELECT jsonb_exists_all('{"a":null, "b":"qq"}', ARRAY['b','a']);
SELECT jsonb_exists_all('{"a":null, "b":"qq"}', ARRAY['c','a']);
SELECT jsonb_exists_all('{"a":null, "b":"qq"}', ARRAY['c','d']);
SELECT jsonb_exists_all('{"a":null, "b":"qq"}', '{}'::text[]);
SELECT jsonb '{"a":null, "b":"qq"}' ?& ARRAY['a','b'];
SELECT jsonb '{"a":null, "b":"qq"}' ?& ARRAY['b','a'];
SELECT jsonb '{"a":null, "b":"qq"}' ?& ARRAY['c','a'];
SELECT jsonb '{"a":null, "b":"qq"}' ?& ARRAY['c','d'];
SELECT jsonb '{"a":null, "b":"qq"}' ?& ARRAY['a','a', 'b', 'b', 'b'];
SELECT jsonb '{"a":null, "b":"qq"}' ?& '{}'::text[];

-- typeof
SELECT jsonb_typeof('{}') AS object;
SELECT jsonb_typeof('{"c":3,"p":"o"}') AS object;
SELECT jsonb_typeof('[]') AS array;
SELECT jsonb_typeof('["a", 1]') AS array;
SELECT jsonb_typeof('null') AS "null";
SELECT jsonb_typeof('1') AS number;
SELECT jsonb_typeof('-1') AS number;
SELECT jsonb_typeof('1.0') AS number;
SELECT jsonb_typeof('1e2') AS number;
SELECT jsonb_typeof('-1.0') AS number;
SELECT jsonb_typeof('true') AS boolean;
SELECT jsonb_typeof('false') AS boolean;
SELECT jsonb_typeof('"hello"') AS string;
SELECT jsonb_typeof('"true"') AS string;
SELECT jsonb_typeof('"1.0"') AS string;

-- jsonb_build_array, jsonb_build_object, jsonb_object_agg

SELECT jsonb_build_array('a',1,'b',1.2,'c',true,'d',null,'e',json '{"x": 3, "y": [1,2,3]}');
SELECT jsonb_build_array('a', NULL); -- ok
SELECT jsonb_build_array(VARIADIC NULL::text[]); -- ok
SELECT jsonb_build_array(VARIADIC '{}'::text[]); -- ok
SELECT jsonb_build_array(VARIADIC '{a,b,c}'::text[]); -- ok
SELECT jsonb_build_array(VARIADIC ARRAY['a', NULL]::text[]); -- ok
SELECT jsonb_build_array(VARIADIC '{1,2,3,4}'::text[]); -- ok
SELECT jsonb_build_array(VARIADIC '{1,2,3,4}'::int[]); -- ok
SELECT jsonb_build_array(VARIADIC '{{1,4},{2,5},{3,6}}'::int[][]); -- ok

SELECT jsonb_build_object('a',1,'b',1.2,'c',true,'d',null,'e',json '{"x": 3, "y": [1,2,3]}');

SELECT jsonb_build_object(
       'a', jsonb_build_object('b',false,'c',99),
       'd', jsonb_build_object('e',array[9,8,7]::int[],
           'f', (select row_to_json(r) from ( select relkind, oid::regclass as name from pg_class where relname = 'pg_class') r)));
SELECT jsonb_build_object('{a,b,c}'::text[]); -- error
SELECT jsonb_build_object('{a,b,c}'::text[], '{d,e,f}'::text[]); -- error, key cannot be array
SELECT jsonb_build_object('a', 'b', 'c'); -- error
SELECT jsonb_build_object(NULL, 'a'); -- error, key cannot be NULL
SELECT jsonb_build_object('a', NULL); -- ok
SELECT jsonb_build_object(VARIADIC NULL::text[]); -- ok
SELECT jsonb_build_object(VARIADIC '{}'::text[]); -- ok
SELECT jsonb_build_object(VARIADIC '{a,b,c}'::text[]); -- error
SELECT jsonb_build_object(VARIADIC ARRAY['a', NULL]::text[]); -- ok
SELECT jsonb_build_object(VARIADIC ARRAY[NULL, 'a']::text[]); -- error, key cannot be NULL
SELECT jsonb_build_object(VARIADIC '{1,2,3,4}'::text[]); -- ok
SELECT jsonb_build_object(VARIADIC '{1,2,3,4}'::int[]); -- ok
SELECT jsonb_build_object(VARIADIC '{{1,4},{2,5},{3,6}}'::int[][]); -- ok

-- empty objects/arrays
SELECT jsonb_build_array();

SELECT jsonb_build_object();

-- make sure keys are quoted
SELECT jsonb_build_object(1,2);

-- keys must be scalar and not null
SELECT jsonb_build_object(null,2);

SELECT jsonb_build_object(r,2) FROM (SELECT 1 AS a, 2 AS b) r;

SELECT jsonb_build_object(json '{"a":1,"b":2}', 3);

SELECT jsonb_build_object('{1,2,3}'::int[], 3);

-- handling of NULL values
SELECT jsonb_object_agg(1, NULL::jsonb);
SELECT jsonb_object_agg(NULL, '{"a":1}');

CREATE TEMP TABLE foo (serial_num int, name text, type text);
INSERT INTO foo VALUES (847001,'t15','GE1043');
INSERT INTO foo VALUES (847002,'t16','GE1043');
INSERT INTO foo VALUES (847003,'sub-alpha','GESS90');

SELECT jsonb_build_object('turbines',jsonb_object_agg(serial_num,jsonb_build_object('name',name,'type',type)))
FROM foo;

SELECT jsonb_object_agg(name, type) FROM foo;

INSERT INTO foo VALUES (999999, NULL, 'bar');
SELECT jsonb_object_agg(name, type) FROM foo;

-- jsonb_object

-- empty object, one dimension
SELECT jsonb_object('{}');

-- empty object, two dimensions
SELECT jsonb_object('{}', '{}');

-- one dimension
SELECT jsonb_object('{a,1,b,2,3,NULL,"d e f","a b c"}');

-- same but with two dimensions
SELECT jsonb_object('{{a,1},{b,2},{3,NULL},{"d e f","a b c"}}');

-- odd number error
SELECT jsonb_object('{a,b,c}');

-- one column error
SELECT jsonb_object('{{a},{b}}');

-- too many columns error
SELECT jsonb_object('{{a,b,c},{b,c,d}}');

-- too many dimensions error
SELECT jsonb_object('{{{a,b},{c,d}},{{b,c},{d,e}}}');

--two argument form of jsonb_object

select jsonb_object('{a,b,c,"d e f"}','{1,2,3,"a b c"}');

-- too many dimensions
SELECT jsonb_object('{{a,1},{b,2},{3,NULL},{"d e f","a b c"}}', '{{a,1},{b,2},{3,NULL},{"d e f","a b c"}}');

-- mismatched dimensions

select jsonb_object('{a,b,c,"d e f",g}','{1,2,3,"a b c"}');

select jsonb_object('{a,b,c,"d e f"}','{1,2,3,"a b c",g}');

-- null key error

select jsonb_object('{a,b,NULL,"d e f"}','{1,2,3,"a b c"}');

-- empty key is allowed

select jsonb_object('{a,b,"","d e f"}','{1,2,3,"a b c"}');



-- extract_path, extract_path_as_text
SELECT jsonb_extract_path('{"f2":{"f3":1},"f4":{"f5":99,"f6":"stringy"}}','f4','f6');
SELECT jsonb_extract_path('{"f2":{"f3":1},"f4":{"f5":99,"f6":"stringy"}}','f2');
SELECT jsonb_extract_path('{"f2":["f3",1],"f4":{"f5":99,"f6":"stringy"}}','f2',0::text);
SELECT jsonb_extract_path('{"f2":["f3",1],"f4":{"f5":99,"f6":"stringy"}}','f2',1::text);
SELECT jsonb_extract_path_text('{"f2":{"f3":1},"f4":{"f5":99,"f6":"stringy"}}','f4','f6');
SELECT jsonb_extract_path_text('{"f2":{"f3":1},"f4":{"f5":99,"f6":"stringy"}}','f2');
SELECT jsonb_extract_path_text('{"f2":["f3",1],"f4":{"f5":99,"f6":"stringy"}}','f2',0::text);
SELECT jsonb_extract_path_text('{"f2":["f3",1],"f4":{"f5":99,"f6":"stringy"}}','f2',1::text);

-- extract_path nulls
SELECT jsonb_extract_path('{"f2":{"f3":1},"f4":{"f5":null,"f6":"stringy"}}','f4','f5') IS NULL AS expect_false;
SELECT jsonb_extract_path_text('{"f2":{"f3":1},"f4":{"f5":null,"f6":"stringy"}}','f4','f5') IS NULL AS expect_true;
SELECT jsonb_extract_path('{"f2":{"f3":1},"f4":[0,1,2,null]}','f4','3') IS NULL AS expect_false;
SELECT jsonb_extract_path_text('{"f2":{"f3":1},"f4":[0,1,2,null]}','f4','3') IS NULL AS expect_true;

-- extract_path operators
SELECT '{"f2":{"f3":1},"f4":{"f5":99,"f6":"stringy"}}'::jsonb#>array['f4','f6'];
SELECT '{"f2":{"f3":1},"f4":{"f5":99,"f6":"stringy"}}'::jsonb#>array['f2'];
SELECT '{"f2":["f3",1],"f4":{"f5":99,"f6":"stringy"}}'::jsonb#>array['f2','0'];
SELECT '{"f2":["f3",1],"f4":{"f5":99,"f6":"stringy"}}'::jsonb#>array['f2','1'];

SELECT '{"f2":{"f3":1},"f4":{"f5":99,"f6":"stringy"}}'::jsonb#>>array['f4','f6'];
SELECT '{"f2":{"f3":1},"f4":{"f5":99,"f6":"stringy"}}'::jsonb#>>array['f2'];
SELECT '{"f2":["f3",1],"f4":{"f5":99,"f6":"stringy"}}'::jsonb#>>array['f2','0'];
SELECT '{"f2":["f3",1],"f4":{"f5":99,"f6":"stringy"}}'::jsonb#>>array['f2','1'];

-- corner cases for same
select '{"a": {"b":{"c": "foo"}}}'::jsonb #> '{}';
select '[1,2,3]'::jsonb #> '{}';
select '"foo"'::jsonb #> '{}';
select '42'::jsonb #> '{}';
select 'null'::jsonb #> '{}';
select '{"a": {"b":{"c": "foo"}}}'::jsonb #> array['a'];
select '{"a": {"b":{"c": "foo"}}}'::jsonb #> array['a', null];
select '{"a": {"b":{"c": "foo"}}}'::jsonb #> array['a', ''];
select '{"a": {"b":{"c": "foo"}}}'::jsonb #> array['a','b'];
select '{"a": {"b":{"c": "foo"}}}'::jsonb #> array['a','b','c'];
select '{"a": {"b":{"c": "foo"}}}'::jsonb #> array['a','b','c','d'];
select '{"a": {"b":{"c": "foo"}}}'::jsonb #> array['a','z','c'];
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb #> array['a','1','b'];
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb #> array['a','z','b'];
select '[{"b": "c"}, {"b": "cc"}]'::jsonb #> array['1','b'];
select '[{"b": "c"}, {"b": "cc"}]'::jsonb #> array['z','b'];
select '[{"b": "c"}, {"b": null}]'::jsonb #> array['1','b'];
select '"foo"'::jsonb #> array['z'];
select '42'::jsonb #> array['f2'];
select '42'::jsonb #> array['0'];

select '{"a": {"b":{"c": "foo"}}}'::jsonb #>> '{}';
select '[1,2,3]'::jsonb #>> '{}';
select '"foo"'::jsonb #>> '{}';
select '42'::jsonb #>> '{}';
select 'null'::jsonb #>> '{}';
select '{"a": {"b":{"c": "foo"}}}'::jsonb #>> array['a'];
select '{"a": {"b":{"c": "foo"}}}'::jsonb #>> array['a', null];
select '{"a": {"b":{"c": "foo"}}}'::jsonb #>> array['a', ''];
select '{"a": {"b":{"c": "foo"}}}'::jsonb #>> array['a','b'];
select '{"a": {"b":{"c": "foo"}}}'::jsonb #>> array['a','b','c'];
select '{"a": {"b":{"c": "foo"}}}'::jsonb #>> array['a','b','c','d'];
select '{"a": {"b":{"c": "foo"}}}'::jsonb #>> array['a','z','c'];
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb #>> array['a','1','b'];
select '{"a": [{"b": "c"}, {"b": "cc"}]}'::jsonb #>> array['a','z','b'];
select '[{"b": "c"}, {"b": "cc"}]'::jsonb #>> array['1','b'];
select '[{"b": "c"}, {"b": "cc"}]'::jsonb #>> array['z','b'];
select '[{"b": "c"}, {"b": null}]'::jsonb #>> array['1','b'];
select '"foo"'::jsonb #>> array['z'];
select '42'::jsonb #>> array['f2'];
select '42'::jsonb #>> array['0'];

-- array_elements
SELECT jsonb_array_elements('[1,true,[1,[2,3]],null,{"f1":1,"f2":[7,8,9]},false]');
SELECT * FROM jsonb_array_elements('[1,true,[1,[2,3]],null,{"f1":1,"f2":[7,8,9]},false]') q;
SELECT jsonb_array_elements_text('[1,true,[1,[2,3]],null,{"f1":1,"f2":[7,8,9]},false,"stringy"]');
SELECT * FROM jsonb_array_elements_text('[1,true,[1,[2,3]],null,{"f1":1,"f2":[7,8,9]},false,"stringy"]') q;

-- populate_record
CREATE TYPE jbpop AS (a text, b int, c timestamp);

CREATE DOMAIN jsb_int_not_null  AS int     NOT NULL;
CREATE DOMAIN jsb_int_array_1d  AS int[]   CHECK(array_length(VALUE, 1) = 3);
CREATE DOMAIN jsb_int_array_2d  AS int[][] CHECK(array_length(VALUE, 2) = 3);

create type jb_unordered_pair as (x int, y int);
create domain jb_ordered_pair as jb_unordered_pair check((value).x <= (value).y);

CREATE TYPE jsbrec AS (
	i	int,
	ia	_int4,
	ia1	int[],
	ia2	int[][],
	ia3	int[][][],
	ia1d	jsb_int_array_1d,
	ia2d	jsb_int_array_2d,
	t	text,
	ta	text[],
	c	char(10),
	ca	char(10)[],
	ts	timestamp,
	js	json,
	jsb	jsonb,
	jsa	json[],
	rec	jbpop,
	reca	jbpop[]
);

CREATE TYPE jsbrec_i_not_null AS (
	i	jsb_int_not_null
);

SELECT * FROM jsonb_populate_record(NULL::jbpop,'{"a":"blurfl","x":43.2}') q;
SELECT * FROM jsonb_populate_record(row('x',3,'2012-12-31 15:30:56')::jbpop,'{"a":"blurfl","x":43.2}') q;

SELECT * FROM jsonb_populate_record(NULL::jbpop,'{"a":"blurfl","x":43.2}') q;
SELECT * FROM jsonb_populate_record(row('x',3,'2012-12-31 15:30:56')::jbpop,'{"a":"blurfl","x":43.2}') q;

SELECT * FROM jsonb_populate_record(NULL::jbpop,'{"a":[100,200,false],"x":43.2}') q;
SELECT * FROM jsonb_populate_record(row('x',3,'2012-12-31 15:30:56')::jbpop,'{"a":[100,200,false],"x":43.2}') q;
SELECT * FROM jsonb_populate_record(row('x',3,'2012-12-31 15:30:56')::jbpop,'{"c":[100,200,false],"x":43.2}') q;

SELECT * FROM jsonb_populate_record(row('x',3,'2012-12-31 15:30:56')::jbpop, '{}') q;

SELECT i FROM jsonb_populate_record(NULL::jsbrec_i_not_null, '{"x": 43.2}') q;
SELECT i FROM jsonb_populate_record(NULL::jsbrec_i_not_null, '{"i": null}') q;
SELECT i FROM jsonb_populate_record(NULL::jsbrec_i_not_null, '{"i": 12345}') q;

SELECT ia FROM jsonb_populate_record(NULL::jsbrec, '{"ia": null}') q;
SELECT ia FROM jsonb_populate_record(NULL::jsbrec, '{"ia": 123}') q;
SELECT ia FROM jsonb_populate_record(NULL::jsbrec, '{"ia": [1, "2", null, 4]}') q;
SELECT ia FROM jsonb_populate_record(NULL::jsbrec, '{"ia": [[1, 2], [3, 4]]}') q;
SELECT ia FROM jsonb_populate_record(NULL::jsbrec, '{"ia": [[1], 2]}') q;
SELECT ia FROM jsonb_populate_record(NULL::jsbrec, '{"ia": [[1], [2, 3]]}') q;
SELECT ia FROM jsonb_populate_record(NULL::jsbrec, '{"ia": "{1,2,3}"}') q;

SELECT ia1 FROM jsonb_populate_record(NULL::jsbrec, '{"ia1": null}') q;
SELECT ia1 FROM jsonb_populate_record(NULL::jsbrec, '{"ia1": 123}') q;
SELECT ia1 FROM jsonb_populate_record(NULL::jsbrec, '{"ia1": [1, "2", null, 4]}') q;
SELECT ia1 FROM jsonb_populate_record(NULL::jsbrec, '{"ia1": [[1, 2, 3]]}') q;

SELECT ia1d FROM jsonb_populate_record(NULL::jsbrec, '{"ia1d": null}') q;
SELECT ia1d FROM jsonb_populate_record(NULL::jsbrec, '{"ia1d": 123}') q;
SELECT ia1d FROM jsonb_populate_record(NULL::jsbrec, '{"ia1d": [1, "2", null, 4]}') q;
SELECT ia1d FROM jsonb_populate_record(NULL::jsbrec, '{"ia1d": [1, "2", null]}') q;

SELECT ia2 FROM jsonb_populate_record(NULL::jsbrec, '{"ia2": [1, "2", null, 4]}') q;
SELECT ia2 FROM jsonb_populate_record(NULL::jsbrec, '{"ia2": [[1, 2], [null, 4]]}') q;
SELECT ia2 FROM jsonb_populate_record(NULL::jsbrec, '{"ia2": [[], []]}') q;
SELECT ia2 FROM jsonb_populate_record(NULL::jsbrec, '{"ia2": [[1, 2], [3]]}') q;
SELECT ia2 FROM jsonb_populate_record(NULL::jsbrec, '{"ia2": [[1, 2], 3, 4]}') q;

SELECT ia2d FROM jsonb_populate_record(NULL::jsbrec, '{"ia2d": [[1, "2"], [null, 4]]}') q;
SELECT ia2d FROM jsonb_populate_record(NULL::jsbrec, '{"ia2d": [[1, "2", 3], [null, 5, 6]]}') q;

SELECT ia3 FROM jsonb_populate_record(NULL::jsbrec, '{"ia3": [1, "2", null, 4]}') q;
SELECT ia3 FROM jsonb_populate_record(NULL::jsbrec, '{"ia3": [[1, 2], [null, 4]]}') q;
SELECT ia3 FROM jsonb_populate_record(NULL::jsbrec, '{"ia3": [ [[], []], [[], []], [[], []] ]}') q;
SELECT ia3 FROM jsonb_populate_record(NULL::jsbrec, '{"ia3": [ [[1, 2]], [[3, 4]] ]}') q;
SELECT ia3 FROM jsonb_populate_record(NULL::jsbrec, '{"ia3": [ [[1, 2], [3, 4]], [[5, 6], [7, 8]] ]}') q;
SELECT ia3 FROM jsonb_populate_record(NULL::jsbrec, '{"ia3": [ [[1, 2], [3, 4]], [[5, 6], [7, 8], [9, 10]] ]}') q;

SELECT ta FROM jsonb_populate_record(NULL::jsbrec, '{"ta": null}') q;
SELECT ta FROM jsonb_populate_record(NULL::jsbrec, '{"ta": 123}') q;
SELECT ta FROM jsonb_populate_record(NULL::jsbrec, '{"ta": [1, "2", null, 4]}') q;
SELECT ta FROM jsonb_populate_record(NULL::jsbrec, '{"ta": [[1, 2, 3], {"k": "v"}]}') q;

SELECT c FROM jsonb_populate_record(NULL::jsbrec, '{"c": null}') q;
SELECT c FROM jsonb_populate_record(NULL::jsbrec, '{"c": "aaa"}') q;
SELECT c FROM jsonb_populate_record(NULL::jsbrec, '{"c": "aaaaaaaaaa"}') q;
SELECT c FROM jsonb_populate_record(NULL::jsbrec, '{"c": "aaaaaaaaaaaaa"}') q;

SELECT ca FROM jsonb_populate_record(NULL::jsbrec, '{"ca": null}') q;
SELECT ca FROM jsonb_populate_record(NULL::jsbrec, '{"ca": 123}') q;
SELECT ca FROM jsonb_populate_record(NULL::jsbrec, '{"ca": [1, "2", null, 4]}') q;
SELECT ca FROM jsonb_populate_record(NULL::jsbrec, '{"ca": ["aaaaaaaaaaaaaaaa"]}') q;
SELECT ca FROM jsonb_populate_record(NULL::jsbrec, '{"ca": [[1, 2, 3], {"k": "v"}]}') q;

SELECT js FROM jsonb_populate_record(NULL::jsbrec, '{"js": null}') q;
SELECT js FROM jsonb_populate_record(NULL::jsbrec, '{"js": true}') q;
SELECT js FROM jsonb_populate_record(NULL::jsbrec, '{"js": 123.45}') q;
SELECT js FROM jsonb_populate_record(NULL::jsbrec, '{"js": "123.45"}') q;
SELECT js FROM jsonb_populate_record(NULL::jsbrec, '{"js": "abc"}') q;
SELECT js FROM jsonb_populate_record(NULL::jsbrec, '{"js": [123, "123", null, {"key": "value"}]}') q;
SELECT js FROM jsonb_populate_record(NULL::jsbrec, '{"js": {"a": "bbb", "b": null, "c": 123.45}}') q;

SELECT jsb FROM jsonb_populate_record(NULL::jsbrec, '{"jsb": null}') q;
SELECT jsb FROM jsonb_populate_record(NULL::jsbrec, '{"jsb": true}') q;
SELECT jsb FROM jsonb_populate_record(NULL::jsbrec, '{"jsb": 123.45}') q;
SELECT jsb FROM jsonb_populate_record(NULL::jsbrec, '{"jsb": "123.45"}') q;
SELECT jsb FROM jsonb_populate_record(NULL::jsbrec, '{"jsb": "abc"}') q;
SELECT jsb FROM jsonb_populate_record(NULL::jsbrec, '{"jsb": [123, "123", null, {"key": "value"}]}') q;
SELECT jsb FROM jsonb_populate_record(NULL::jsbrec, '{"jsb": {"a": "bbb", "b": null, "c": 123.45}}') q;

SELECT jsa FROM jsonb_populate_record(NULL::jsbrec, '{"jsa": null}') q;
SELECT jsa FROM jsonb_populate_record(NULL::jsbrec, '{"jsa": 123}') q;
SELECT jsa FROM jsonb_populate_record(NULL::jsbrec, '{"jsa": [1, "2", null, 4]}') q;
SELECT jsa FROM jsonb_populate_record(NULL::jsbrec, '{"jsa": ["aaa", null, [1, 2, "3", {}], { "k" : "v" }]}') q;

SELECT rec FROM jsonb_populate_record(NULL::jsbrec, '{"rec": 123}') q;
SELECT rec FROM jsonb_populate_record(NULL::jsbrec, '{"rec": [1, 2]}') q;
SELECT rec FROM jsonb_populate_record(NULL::jsbrec, '{"rec": {"a": "abc", "c": "01.02.2003", "x": 43.2}}') q;
SELECT rec FROM jsonb_populate_record(NULL::jsbrec, '{"rec": "(abc,42,01.02.2003)"}') q;

SELECT reca FROM jsonb_populate_record(NULL::jsbrec, '{"reca": 123}') q;
SELECT reca FROM jsonb_populate_record(NULL::jsbrec, '{"reca": [1, 2]}') q;
SELECT reca FROM jsonb_populate_record(NULL::jsbrec, '{"reca": [{"a": "abc", "b": 456}, null, {"c": "01.02.2003", "x": 43.2}]}') q;
SELECT reca FROM jsonb_populate_record(NULL::jsbrec, '{"reca": ["(abc,42,01.02.2003)"]}') q;
SELECT reca FROM jsonb_populate_record(NULL::jsbrec, '{"reca": "{\"(abc,42,01.02.2003)\"}"}') q;

SELECT rec FROM jsonb_populate_record(
	row(NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
		row('x',3,'2012-12-31 15:30:56')::jbpop,NULL)::jsbrec,
	'{"rec": {"a": "abc", "c": "01.02.2003", "x": 43.2}}'
) q;

-- anonymous record type
SELECT jsonb_populate_record(null::record, '{"x": 0, "y": 1}');
SELECT jsonb_populate_record(row(1,2), '{"f1": 0, "f2": 1}');
SELECT * FROM
  jsonb_populate_record(null::record, '{"x": 776}') AS (x int, y int);

-- composite domain
SELECT jsonb_populate_record(null::jb_ordered_pair, '{"x": 0, "y": 1}');
SELECT jsonb_populate_record(row(1,2)::jb_ordered_pair, '{"x": 0}');
SELECT jsonb_populate_record(row(1,2)::jb_ordered_pair, '{"x": 1, "y": 0}');

-- populate_recordset
SELECT * FROM jsonb_populate_recordset(NULL::jbpop,'[{"a":"blurfl","x":43.2},{"b":3,"c":"2012-01-20 10:42:53"}]') q;
SELECT * FROM jsonb_populate_recordset(row('def',99,NULL)::jbpop,'[{"a":"blurfl","x":43.2},{"b":3,"c":"2012-01-20 10:42:53"}]') q;
SELECT * FROM jsonb_populate_recordset(NULL::jbpop,'[{"a":"blurfl","x":43.2},{"b":3,"c":"2012-01-20 10:42:53"}]') q;
SELECT * FROM jsonb_populate_recordset(row('def',99,NULL)::jbpop,'[{"a":"blurfl","x":43.2},{"b":3,"c":"2012-01-20 10:42:53"}]') q;
SELECT * FROM jsonb_populate_recordset(row('def',99,NULL)::jbpop,'[{"a":[100,200,300],"x":43.2},{"a":{"z":true},"b":3,"c":"2012-01-20 10:42:53"}]') q;
SELECT * FROM jsonb_populate_recordset(row('def',99,NULL)::jbpop,'[{"c":[100,200,300],"x":43.2},{"a":{"z":true},"b":3,"c":"2012-01-20 10:42:53"}]') q;

SELECT * FROM jsonb_populate_recordset(NULL::jbpop,'[{"a":"blurfl","x":43.2},{"b":3,"c":"2012-01-20 10:42:53"}]') q;
SELECT * FROM jsonb_populate_recordset(row('def',99,NULL)::jbpop,'[{"a":"blurfl","x":43.2},{"b":3,"c":"2012-01-20 10:42:53"}]') q;
SELECT * FROM jsonb_populate_recordset(row('def',99,NULL)::jbpop,'[{"a":[100,200,300],"x":43.2},{"a":{"z":true},"b":3,"c":"2012-01-20 10:42:53"}]') q;

-- anonymous record type
SELECT jsonb_populate_recordset(null::record, '[{"x": 0, "y": 1}]');
SELECT jsonb_populate_recordset(row(1,2), '[{"f1": 0, "f2": 1}]');
SELECT i, jsonb_populate_recordset(row(i,50), '[{"f1":"42"},{"f2":"43"}]')
FROM (VALUES (1),(2)) v(i);
SELECT * FROM
  jsonb_populate_recordset(null::record, '[{"x": 776}]') AS (x int, y int);

-- empty array is a corner case
SELECT jsonb_populate_recordset(null::record, '[]');
SELECT jsonb_populate_recordset(row(1,2), '[]');
SELECT * FROM jsonb_populate_recordset(NULL::jbpop,'[]') q;
SELECT * FROM
  jsonb_populate_recordset(null::record, '[]') AS (x int, y int);

-- composite domain
SELECT jsonb_populate_recordset(null::jb_ordered_pair, '[{"x": 0, "y": 1}]');
SELECT jsonb_populate_recordset(row(1,2)::jb_ordered_pair, '[{"x": 0}, {"y": 3}]');
SELECT jsonb_populate_recordset(row(1,2)::jb_ordered_pair, '[{"x": 1, "y": 0}]');

-- negative cases where the wrong record type is supplied
select * from jsonb_populate_recordset(row(0::int),'[{"a":"1","b":"2"},{"a":"3"}]') q (a text, b text);
select * from jsonb_populate_recordset(row(0::int,0::int),'[{"a":"1","b":"2"},{"a":"3"}]') q (a text, b text);
select * from jsonb_populate_recordset(row(0::int,0::int,0::int),'[{"a":"1","b":"2"},{"a":"3"}]') q (a text, b text);
select * from jsonb_populate_recordset(row(1000000000::int,50::int),'[{"b":"2"},{"a":"3"}]') q (a text, b text);

-- jsonb_to_record and jsonb_to_recordset

select * from jsonb_to_record('{"a":1,"b":"foo","c":"bar"}')
    as x(a int, b text, d text);

select * from jsonb_to_recordset('[{"a":1,"b":"foo","d":false},{"a":2,"b":"bar","c":true}]')
    as x(a int, b text, c boolean);

select *, c is null as c_is_null
from jsonb_to_record('{"a":1, "b":{"c":16, "d":2}, "x":8, "ca": ["1 2", 3], "ia": [[1,2],[3,4]], "r": {"a": "aaa", "b": 123}}'::jsonb)
    as t(a int, b jsonb, c text, x int, ca char(5)[], ia int[][], r jbpop);

select *, c is null as c_is_null
from jsonb_to_recordset('[{"a":1, "b":{"c":16, "d":2}, "x":8}]'::jsonb)
    as t(a int, b jsonb, c text, x int);

select * from jsonb_to_record('{"ia": null}') as x(ia _int4);
select * from jsonb_to_record('{"ia": 123}') as x(ia _int4);
select * from jsonb_to_record('{"ia": [1, "2", null, 4]}') as x(ia _int4);
select * from jsonb_to_record('{"ia": [[1, 2], [3, 4]]}') as x(ia _int4);
select * from jsonb_to_record('{"ia": [[1], 2]}') as x(ia _int4);
select * from jsonb_to_record('{"ia": [[1], [2, 3]]}') as x(ia _int4);

select * from jsonb_to_record('{"ia2": [1, 2, 3]}') as x(ia2 int[][]);
select * from jsonb_to_record('{"ia2": [[1, 2], [3, 4]]}') as x(ia2 int4[][]);
select * from jsonb_to_record('{"ia2": [[[1], [2], [3]]]}') as x(ia2 int4[][]);

select * from jsonb_to_record('{"out": {"key": 1}}') as x(out json);
select * from jsonb_to_record('{"out": [{"key": 1}]}') as x(out json);
select * from jsonb_to_record('{"out": "{\"key\": 1}"}') as x(out json);
select * from jsonb_to_record('{"out": {"key": 1}}') as x(out jsonb);
select * from jsonb_to_record('{"out": [{"key": 1}]}') as x(out jsonb);
select * from jsonb_to_record('{"out": "{\"key\": 1}"}') as x(out jsonb);

-- test type info caching in jsonb_populate_record()
CREATE TEMP TABLE jsbpoptest (js jsonb);

INSERT INTO jsbpoptest
SELECT '{
	"jsa": [1, "2", null, 4],
	"rec": {"a": "abc", "c": "01.02.2003", "x": 43.2},
	"reca": [{"a": "abc", "b": 456}, null, {"c": "01.02.2003", "x": 43.2}]
}'::jsonb
FROM generate_series(1, 3);

SELECT (jsonb_populate_record(NULL::jsbrec, js)).* FROM jsbpoptest;

DROP TYPE jsbrec;
DROP TYPE jsbrec_i_not_null;
DROP DOMAIN jsb_int_not_null;
DROP DOMAIN jsb_int_array_1d;
DROP DOMAIN jsb_int_array_2d;
DROP DOMAIN jb_ordered_pair;
DROP TYPE jb_unordered_pair;

-- indexing
SELECT count(*) FROM testjsonb WHERE j @> '{"wait":null}';
SELECT count(*) FROM testjsonb WHERE j @> '{"wait":"CC"}';
SELECT count(*) FROM testjsonb WHERE j @> '{"wait":"CC", "public":true}';
SELECT count(*) FROM testjsonb WHERE j @> '{"age":25}';
SELECT count(*) FROM testjsonb WHERE j @> '{"age":25.0}';
SELECT count(*) FROM testjsonb WHERE j ? 'public';
SELECT count(*) FROM testjsonb WHERE j ? 'bar';
SELECT count(*) FROM testjsonb WHERE j ?| ARRAY['public','disabled'];
SELECT count(*) FROM testjsonb WHERE j ?& ARRAY['public','disabled'];
SELECT count(*) FROM testjsonb WHERE j @@ '$.wait == null';
SELECT count(*) FROM testjsonb WHERE j @@ '"CC" == $.wait';
SELECT count(*) FROM testjsonb WHERE j @@ '$.wait == "CC" && true == $.public';
SELECT count(*) FROM testjsonb WHERE j @@ '$.age == 25';
SELECT count(*) FROM testjsonb WHERE j @@ '$.age == 25.0';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($)';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.public)';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.bar)';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.public) || exists($.disabled)';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.public) && exists($.disabled)';
SELECT count(*) FROM testjsonb WHERE j @? '$.wait ? (@ == null)';
SELECT count(*) FROM testjsonb WHERE j @? '$.wait ? ("CC" == @)';
SELECT count(*) FROM testjsonb WHERE j @? '$ ? (@.wait == "CC" && true == @.public)';
SELECT count(*) FROM testjsonb WHERE j @? '$.age ? (@ == 25)';
SELECT count(*) FROM testjsonb WHERE j @? '$ ? (@.age == 25.0)';
SELECT count(*) FROM testjsonb WHERE j @? '$';
SELECT count(*) FROM testjsonb WHERE j @? '$.public';
SELECT count(*) FROM testjsonb WHERE j @? '$.bar';

CREATE INDEX jidx ON testjsonb USING gin (j);
SET enable_seqscan = off;

SELECT count(*) FROM testjsonb WHERE j @> '{"wait":null}';
SELECT count(*) FROM testjsonb WHERE j @> '{"wait":"CC"}';
SELECT count(*) FROM testjsonb WHERE j @> '{"wait":"CC", "public":true}';
SELECT count(*) FROM testjsonb WHERE j @> '{"age":25}';
SELECT count(*) FROM testjsonb WHERE j @> '{"age":25.0}';
SELECT count(*) FROM testjsonb WHERE j @> '{"array":["foo"]}';
SELECT count(*) FROM testjsonb WHERE j @> '{"array":["bar"]}';
-- exercise GIN_SEARCH_MODE_ALL
SELECT count(*) FROM testjsonb WHERE j @> '{}';
SELECT count(*) FROM testjsonb WHERE j ? 'public';
SELECT count(*) FROM testjsonb WHERE j ? 'bar';
SELECT count(*) FROM testjsonb WHERE j ?| ARRAY['public','disabled'];
SELECT count(*) FROM testjsonb WHERE j ?& ARRAY['public','disabled'];

EXPLAIN (COSTS OFF)
SELECT count(*) FROM testjsonb WHERE j @@ '$.wait == null';
SELECT count(*) FROM testjsonb WHERE j @@ '$.wait == null';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($ ? (@.wait == null))';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.wait ? (@ == null))';
SELECT count(*) FROM testjsonb WHERE j @@ '"CC" == $.wait';
SELECT count(*) FROM testjsonb WHERE j @@ '$.wait == "CC" && true == $.public';
SELECT count(*) FROM testjsonb WHERE j @@ '$.age == 25';
SELECT count(*) FROM testjsonb WHERE j @@ '$.age == 25.0';
SELECT count(*) FROM testjsonb WHERE j @@ '$.array[*] == "foo"';
SELECT count(*) FROM testjsonb WHERE j @@ '$.array[*] == "bar"';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($ ? (@.array[*] == "bar"))';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.array ? (@[*] == "bar"))';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.array[*] ? (@ == "bar"))';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($)';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.public)';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.bar)';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.public) || exists($.disabled)';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.public) && exists($.disabled)';
EXPLAIN (COSTS OFF)
SELECT count(*) FROM testjsonb WHERE j @? '$.wait ? (@ == null)';
SELECT count(*) FROM testjsonb WHERE j @? '$.wait ? (@ == null)';
SELECT count(*) FROM testjsonb WHERE j @? '$.wait ? ("CC" == @)';
SELECT count(*) FROM testjsonb WHERE j @? '$ ? (@.wait == "CC" && true == @.public)';
SELECT count(*) FROM testjsonb WHERE j @? '$.age ? (@ == 25)';
SELECT count(*) FROM testjsonb WHERE j @? '$ ? (@.age == 25.0)';
SELECT count(*) FROM testjsonb WHERE j @? '$ ? (@.array[*] == "bar")';
SELECT count(*) FROM testjsonb WHERE j @? '$.array ? (@[*] == "bar")';
SELECT count(*) FROM testjsonb WHERE j @? '$.array[*] ? (@ == "bar")';
SELECT count(*) FROM testjsonb WHERE j @? '$';
SELECT count(*) FROM testjsonb WHERE j @? '$.public';
SELECT count(*) FROM testjsonb WHERE j @? '$.bar';

-- array exists - array elements should behave as keys (for GIN index scans too)
CREATE INDEX jidx_array ON testjsonb USING gin((j->'array'));
SELECT count(*) from testjsonb  WHERE j->'array' ? 'bar';
-- type sensitive array exists - should return no rows (since "exists" only
-- matches strings that are either object keys or array elements)
SELECT count(*) from testjsonb  WHERE j->'array' ? '5'::text;
-- However, a raw scalar is *contained* within the array
SELECT count(*) from testjsonb  WHERE j->'array' @> '5'::jsonb;

RESET enable_seqscan;

SELECT count(*) FROM (SELECT (jsonb_each(j)).key FROM testjsonb) AS wow;
SELECT key, count(*) FROM (SELECT (jsonb_each(j)).key FROM testjsonb) AS wow GROUP BY key ORDER BY count DESC, key;

-- sort/hash
SELECT count(distinct j) FROM testjsonb;
SET enable_hashagg = off;
SELECT count(*) FROM (SELECT j FROM (SELECT * FROM testjsonb UNION ALL SELECT * FROM testjsonb) js GROUP BY j) js2;
SET enable_hashagg = on;
SET enable_sort = off;
SELECT count(*) FROM (SELECT j FROM (SELECT * FROM testjsonb UNION ALL SELECT * FROM testjsonb) js GROUP BY j) js2;
SELECT distinct * FROM (values (jsonb '{}' || ''::text),('{}')) v(j);
SET enable_sort = on;

RESET enable_hashagg;
RESET enable_sort;

DROP INDEX jidx;
DROP INDEX jidx_array;
-- btree
CREATE INDEX jidx ON testjsonb USING btree (j);
SET enable_seqscan = off;

SELECT count(*) FROM testjsonb WHERE j > '{"p":1}';
SELECT count(*) FROM testjsonb WHERE j = '{"pos":98, "line":371, "node":"CBA", "indexed":true}';

--gin path opclass
DROP INDEX jidx;
CREATE INDEX jidx ON testjsonb USING gin (j jsonb_path_ops);
SET enable_seqscan = off;

SELECT count(*) FROM testjsonb WHERE j @> '{"wait":null}';
SELECT count(*) FROM testjsonb WHERE j @> '{"wait":"CC"}';
SELECT count(*) FROM testjsonb WHERE j @> '{"wait":"CC", "public":true}';
SELECT count(*) FROM testjsonb WHERE j @> '{"age":25}';
SELECT count(*) FROM testjsonb WHERE j @> '{"age":25.0}';
-- exercise GIN_SEARCH_MODE_ALL
SELECT count(*) FROM testjsonb WHERE j @> '{}';

SELECT count(*) FROM testjsonb WHERE j @@ '$.wait == null';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($ ? (@.wait == null))';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.wait ? (@ == null))';
SELECT count(*) FROM testjsonb WHERE j @@ '"CC" == $.wait';
SELECT count(*) FROM testjsonb WHERE j @@ '$.wait == "CC" && true == $.public';
SELECT count(*) FROM testjsonb WHERE j @@ '$.age == 25';
SELECT count(*) FROM testjsonb WHERE j @@ '$.age == 25.0';
SELECT count(*) FROM testjsonb WHERE j @@ '$.array[*] == "foo"';
SELECT count(*) FROM testjsonb WHERE j @@ '$.array[*] == "bar"';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($ ? (@.array[*] == "bar"))';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.array ? (@[*] == "bar"))';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($.array[*] ? (@ == "bar"))';
SELECT count(*) FROM testjsonb WHERE j @@ 'exists($)';

EXPLAIN (COSTS OFF)
SELECT count(*) FROM testjsonb WHERE j @? '$.wait ? (@ == null)';
SELECT count(*) FROM testjsonb WHERE j @? '$.wait ? (@ == null)';
SELECT count(*) FROM testjsonb WHERE j @? '$.wait ? ("CC" == @)';
SELECT count(*) FROM testjsonb WHERE j @? '$ ? (@.wait == "CC" && true == @.public)';
SELECT count(*) FROM testjsonb WHERE j @? '$.age ? (@ == 25)';
SELECT count(*) FROM testjsonb WHERE j @? '$ ? (@.age == 25.0)';
SELECT count(*) FROM testjsonb WHERE j @? '$ ? (@.array[*] == "bar")';
SELECT count(*) FROM testjsonb WHERE j @? '$.array ? (@[*] == "bar")';
SELECT count(*) FROM testjsonb WHERE j @? '$.array[*] ? (@ == "bar")';
SELECT count(*) FROM testjsonb WHERE j @? '$';
SELECT count(*) FROM testjsonb WHERE j @? '$.public';
SELECT count(*) FROM testjsonb WHERE j @? '$.bar';

RESET enable_seqscan;
DROP INDEX jidx;

-- nested tests
SELECT '{"ff":{"a":12,"b":16}}'::jsonb;
SELECT '{"ff":{"a":12,"b":16},"qq":123}'::jsonb;
SELECT '{"aa":["a","aaa"],"qq":{"a":12,"b":16,"c":["c1","c2"],"d":{"d1":"d1","d2":"d2","d1":"d3"}}}'::jsonb;
SELECT '{"aa":["a","aaa"],"qq":{"a":"12","b":"16","c":["c1","c2"],"d":{"d1":"d1","d2":"d2"}}}'::jsonb;
SELECT '{"aa":["a","aaa"],"qq":{"a":"12","b":"16","c":["c1","c2",["c3"],{"c4":4}],"d":{"d1":"d1","d2":"d2"}}}'::jsonb;
SELECT '{"ff":["a","aaa"]}'::jsonb;

SELECT
  '{"ff":{"a":12,"b":16},"qq":123,"x":[1,2],"Y":null}'::jsonb -> 'ff',
  '{"ff":{"a":12,"b":16},"qq":123,"x":[1,2],"Y":null}'::jsonb -> 'qq',
  ('{"ff":{"a":12,"b":16},"qq":123,"x":[1,2],"Y":null}'::jsonb -> 'Y') IS NULL AS f,
  ('{"ff":{"a":12,"b":16},"qq":123,"x":[1,2],"Y":null}'::jsonb ->> 'Y') IS NULL AS t,
   '{"ff":{"a":12,"b":16},"qq":123,"x":[1,2],"Y":null}'::jsonb -> 'x';

-- nested containment
SELECT '{"a":[1,2],"c":"b"}'::jsonb @> '{"a":[1,2]}';
SELECT '{"a":[2,1],"c":"b"}'::jsonb @> '{"a":[1,2]}';
SELECT '{"a":{"1":2},"c":"b"}'::jsonb @> '{"a":[1,2]}';
SELECT '{"a":{"2":1},"c":"b"}'::jsonb @> '{"a":[1,2]}';
SELECT '{"a":{"1":2},"c":"b"}'::jsonb @> '{"a":{"1":2}}';
SELECT '{"a":{"2":1},"c":"b"}'::jsonb @> '{"a":{"1":2}}';
SELECT '["a","b"]'::jsonb @> '["a","b","c","b"]';
SELECT '["a","b","c","b"]'::jsonb @> '["a","b"]';
SELECT '["a","b","c",[1,2]]'::jsonb @> '["a",[1,2]]';
SELECT '["a","b","c",[1,2]]'::jsonb @> '["b",[1,2]]';

SELECT '{"a":[1,2],"c":"b"}'::jsonb @> '{"a":[1]}';
SELECT '{"a":[1,2],"c":"b"}'::jsonb @> '{"a":[2]}';
SELECT '{"a":[1,2],"c":"b"}'::jsonb @> '{"a":[3]}';

SELECT '{"a":[1,2,{"c":3,"x":4}],"c":"b"}'::jsonb @> '{"a":[{"c":3}]}';
SELECT '{"a":[1,2,{"c":3,"x":4}],"c":"b"}'::jsonb @> '{"a":[{"x":4}]}';
SELECT '{"a":[1,2,{"c":3,"x":4}],"c":"b"}'::jsonb @> '{"a":[{"x":4},3]}';
SELECT '{"a":[1,2,{"c":3,"x":4}],"c":"b"}'::jsonb @> '{"a":[{"x":4},1]}';

-- check some corner cases for indexed nested containment (bug #13756)
create temp table nestjsonb (j jsonb);
insert into nestjsonb (j) values ('{"a":[["b",{"x":1}],["b",{"x":2}]],"c":3}');
insert into nestjsonb (j) values ('[[14,2,3]]');
insert into nestjsonb (j) values ('[1,[14,2,3]]');
create index on nestjsonb using gin(j jsonb_path_ops);

set enable_seqscan = on;
set enable_bitmapscan = off;
select * from nestjsonb where j @> '{"a":[[{"x":2}]]}'::jsonb;
select * from nestjsonb where j @> '{"c":3}';
select * from nestjsonb where j @> '[[14]]';
set enable_seqscan = off;
set enable_bitmapscan = on;
select * from nestjsonb where j @> '{"a":[[{"x":2}]]}'::jsonb;
select * from nestjsonb where j @> '{"c":3}';
select * from nestjsonb where j @> '[[14]]';
reset enable_seqscan;
reset enable_bitmapscan;

-- nested object field / array index lookup
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb -> 'n';
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb -> 'a';
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb -> 'b';
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb -> 'c';
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb -> 'd';
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb -> 'd' -> '1';
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb -> 'e';
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb -> 0; --expecting error

SELECT '["a","b","c",[1,2],null]'::jsonb -> 0;
SELECT '["a","b","c",[1,2],null]'::jsonb -> 1;
SELECT '["a","b","c",[1,2],null]'::jsonb -> 2;
SELECT '["a","b","c",[1,2],null]'::jsonb -> 3;
SELECT '["a","b","c",[1,2],null]'::jsonb -> 3 -> 1;
SELECT '["a","b","c",[1,2],null]'::jsonb -> 4;
SELECT '["a","b","c",[1,2],null]'::jsonb -> 5;
SELECT '["a","b","c",[1,2],null]'::jsonb -> -1;
SELECT '["a","b","c",[1,2],null]'::jsonb -> -5;
SELECT '["a","b","c",[1,2],null]'::jsonb -> -6;

--nested path extraction
SELECT '{"a":"b","c":[1,2,3]}'::jsonb #> '{0}';
SELECT '{"a":"b","c":[1,2,3]}'::jsonb #> '{a}';
SELECT '{"a":"b","c":[1,2,3]}'::jsonb #> '{c}';
SELECT '{"a":"b","c":[1,2,3]}'::jsonb #> '{c,0}';
SELECT '{"a":"b","c":[1,2,3]}'::jsonb #> '{c,1}';
SELECT '{"a":"b","c":[1,2,3]}'::jsonb #> '{c,2}';
SELECT '{"a":"b","c":[1,2,3]}'::jsonb #> '{c,3}';
SELECT '{"a":"b","c":[1,2,3]}'::jsonb #> '{c,-1}';
SELECT '{"a":"b","c":[1,2,3]}'::jsonb #> '{c,-3}';
SELECT '{"a":"b","c":[1,2,3]}'::jsonb #> '{c,-4}';

SELECT '[0,1,2,[3,4],{"5":"five"}]'::jsonb #> '{0}';
SELECT '[0,1,2,[3,4],{"5":"five"}]'::jsonb #> '{3}';
SELECT '[0,1,2,[3,4],{"5":"five"}]'::jsonb #> '{4}';
SELECT '[0,1,2,[3,4],{"5":"five"}]'::jsonb #> '{4,5}';

--nested exists
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb ? 'n';
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb ? 'a';
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb ? 'b';
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb ? 'c';
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb ? 'd';
SELECT '{"n":null,"a":1,"b":[1,2],"c":{"1":2},"d":{"1":[2,3]}}'::jsonb ? 'e';

-- jsonb_strip_nulls

select jsonb_strip_nulls(null);

select jsonb_strip_nulls('1');

select jsonb_strip_nulls('"a string"');

select jsonb_strip_nulls('null');

select jsonb_strip_nulls('[1,2,null,3,4]');

select jsonb_strip_nulls('{"a":1,"b":null,"c":[2,null,3],"d":{"e":4,"f":null}}');

select jsonb_strip_nulls('[1,{"a":1,"b":null,"c":2},3]');

-- an empty object is not null and should not be stripped
select jsonb_strip_nulls('{"a": {"b": null, "c": null}, "d": {} }');


select jsonb_pretty('{"a": "test", "b": [1, 2, 3], "c": "test3", "d":{"dd": "test4", "dd2":{"ddd": "test5"}}}');
select jsonb_pretty('[{"f1":1,"f2":null},2,null,[[{"x":true},6,7],8],3]');
select jsonb_pretty('{"a":["b", "c"], "d": {"e":"f"}}');

select jsonb_concat('{"d": "test", "a": [1, 2]}', '{"g": "test2", "c": {"c1":1, "c2":2}}');

select '{"aa":1 , "b":2, "cq":3}'::jsonb || '{"cq":"l", "b":"g", "fg":false}';
select '{"aa":1 , "b":2, "cq":3}'::jsonb || '{"aq":"l"}';
select '{"aa":1 , "b":2, "cq":3}'::jsonb || '{"aa":"l"}';
select '{"aa":1 , "b":2, "cq":3}'::jsonb || '{}';

select '["a", "b"]'::jsonb || '["c"]';
select '["a", "b"]'::jsonb || '["c", "d"]';
select '["c"]' || '["a", "b"]'::jsonb;

select '["a", "b"]'::jsonb || '"c"';
select '"c"' || '["a", "b"]'::jsonb;

select '[]'::jsonb || '["a"]'::jsonb;
select '[]'::jsonb || '"a"'::jsonb;
select '"b"'::jsonb || '"a"'::jsonb;
select '{}'::jsonb || '{"a":"b"}'::jsonb;
select '[]'::jsonb || '{"a":"b"}'::jsonb;
select '{"a":"b"}'::jsonb || '[]'::jsonb;

select '"a"'::jsonb || '{"a":1}';
select '{"a":1}' || '"a"'::jsonb;

select '[3]'::jsonb || '{}'::jsonb;
select '3'::jsonb || '[]'::jsonb;
select '3'::jsonb || '4'::jsonb;
select '3'::jsonb || '{}'::jsonb;

select '["a", "b"]'::jsonb || '{"c":1}';
select '{"c": 1}'::jsonb || '["a", "b"]';

select '{}'::jsonb || '{"cq":"l", "b":"g", "fg":false}';

select pg_column_size('{}'::jsonb || '{}'::jsonb) = pg_column_size('{}'::jsonb);
select pg_column_size('{"aa":1}'::jsonb || '{"b":2}'::jsonb) = pg_column_size('{"aa":1, "b":2}'::jsonb);
select pg_column_size('{"aa":1, "b":2}'::jsonb || '{}'::jsonb) = pg_column_size('{"aa":1, "b":2}'::jsonb);
select pg_column_size('{}'::jsonb || '{"aa":1, "b":2}'::jsonb) = pg_column_size('{"aa":1, "b":2}'::jsonb);

select jsonb_delete('{"a":1 , "b":2, "c":3}'::jsonb, 'a');
select jsonb_delete('{"a":null , "b":2, "c":3}'::jsonb, 'a');
select jsonb_delete('{"a":1 , "b":2, "c":3}'::jsonb, 'b');
select jsonb_delete('{"a":1 , "b":2, "c":3}'::jsonb, 'c');
select jsonb_delete('{"a":1 , "b":2, "c":3}'::jsonb, 'd');
select '{"a":1 , "b":2, "c":3}'::jsonb - 'a';
select '{"a":null , "b":2, "c":3}'::jsonb - 'a';
select '{"a":1 , "b":2, "c":3}'::jsonb - 'b';
select '{"a":1 , "b":2, "c":3}'::jsonb - 'c';
select '{"a":1 , "b":2, "c":3}'::jsonb - 'd';
select pg_column_size('{"a":1 , "b":2, "c":3}'::jsonb - 'b') = pg_column_size('{"a":1, "b":2}'::jsonb);

select '["a","b","c"]'::jsonb - 3;
select '["a","b","c"]'::jsonb - 2;
select '["a","b","c"]'::jsonb - 1;
select '["a","b","c"]'::jsonb - 0;
select '["a","b","c"]'::jsonb - -1;
select '["a","b","c"]'::jsonb - -2;
select '["a","b","c"]'::jsonb - -3;
select '["a","b","c"]'::jsonb - -4;

select '{"a":1 , "b":2, "c":3}'::jsonb - '{b}'::text[];
select '{"a":1 , "b":2, "c":3}'::jsonb - '{c,b}'::text[];
select '{"a":1 , "b":2, "c":3}'::jsonb - '{}'::text[];

select jsonb_set('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb, '{n}', '[1,2,3]');
select jsonb_set('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb, '{b,-1}', '[1,2,3]');
select jsonb_set('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb, '{d,1,0}', '[1,2,3]');
select jsonb_set('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb, '{d,NULL,0}', '[1,2,3]');

select jsonb_set('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb, '{n}', '{"1": 2}');
select jsonb_set('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb, '{b,-1}', '{"1": 2}');
select jsonb_set('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb, '{d,1,0}', '{"1": 2}');
select jsonb_set('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb, '{d,NULL,0}', '{"1": 2}');

select jsonb_set('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb, '{b,-1}', '"test"');
select jsonb_set('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb, '{b,-1}', '{"f": "test"}');

select jsonb_delete_path('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}', '{n}');
select jsonb_delete_path('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}', '{b,-1}');
select jsonb_delete_path('{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}', '{d,1,0}');

select '{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb #- '{n}';
select '{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb #- '{b,-1}';
select '{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb #- '{b,-1e}'; -- invalid array subscript
select '{"n":null, "a":1, "b":[1,2], "c":{"1":2}, "d":{"1":[2,3]}}'::jsonb #- '{d,1,0}';


-- empty structure and error conditions for delete and replace

select '"a"'::jsonb - 'a'; -- error
select '{}'::jsonb - 'a';
select '[]'::jsonb - 'a';
select '"a"'::jsonb - 1; -- error
select '{}'::jsonb -  1; -- error
select '[]'::jsonb - 1;
select '"a"'::jsonb #- '{a}'; -- error
select '{}'::jsonb #- '{a}';
select '[]'::jsonb #- '{a}';
select jsonb_set('"a"','{a}','"b"'); --error
select jsonb_set('{}','{a}','"b"', false);
select jsonb_set('[]','{1}','"b"', false);
select jsonb_set('[{"f1":1,"f2":null},2,null,3]', '{0}','[2,3,4]', false);

-- jsonb_set adding instead of replacing

-- prepend to array
select jsonb_set('{"a":1,"b":[0,1,2],"c":{"d":4}}','{b,-33}','{"foo":123}');
-- append to array
select jsonb_set('{"a":1,"b":[0,1,2],"c":{"d":4}}','{b,33}','{"foo":123}');
-- check nesting levels addition
select jsonb_set('{"a":1,"b":[4,5,[0,1,2],6,7],"c":{"d":4}}','{b,2,33}','{"foo":123}');
-- add new key
select jsonb_set('{"a":1,"b":[0,1,2],"c":{"d":4}}','{c,e}','{"foo":123}');
-- adding doesn't do anything if elements before last aren't present
select jsonb_set('{"a":1,"b":[0,1,2],"c":{"d":4}}','{x,-33}','{"foo":123}');
select jsonb_set('{"a":1,"b":[0,1,2],"c":{"d":4}}','{x,y}','{"foo":123}');
-- add to empty object
select jsonb_set('{}','{x}','{"foo":123}');
--add to empty array
select jsonb_set('[]','{0}','{"foo":123}');
select jsonb_set('[]','{99}','{"foo":123}');
select jsonb_set('[]','{-99}','{"foo":123}');
select jsonb_set('{"a": [1, 2, 3]}', '{a, non_integer}', '"new_value"');
select jsonb_set('{"a": {"b": [1, 2, 3]}}', '{a, b, non_integer}', '"new_value"');
select jsonb_set('{"a": {"b": [1, 2, 3]}}', '{a, b, NULL}', '"new_value"');

-- jsonb_set_lax

\pset null NULL

-- pass though non nulls to jsonb_set
select jsonb_set_lax('{"a":1,"b":2}','{b}','5') ;
select jsonb_set_lax('{"a":1,"b":2}','{d}','6', true) ;
-- using the default treatment
select jsonb_set_lax('{"a":1,"b":2}','{b}',null);
select jsonb_set_lax('{"a":1,"b":2}','{d}',null,true);
-- errors
select jsonb_set_lax('{"a":1,"b":2}', '{b}', null, true, null);
select jsonb_set_lax('{"a":1,"b":2}', '{b}', null, true, 'no_such_treatment');
-- explicit treatments
select jsonb_set_lax('{"a":1,"b":2}', '{b}', null, null_value_treatment => 'raise_exception') as raise_exception;
select jsonb_set_lax('{"a":1,"b":2}', '{b}', null, null_value_treatment => 'return_target') as return_target;
select jsonb_set_lax('{"a":1,"b":2}', '{b}', null, null_value_treatment => 'delete_key') as delete_key;
select jsonb_set_lax('{"a":1,"b":2}', '{b}', null, null_value_treatment => 'use_json_null') as use_json_null;

\pset null ''

-- jsonb_insert
select jsonb_insert('{"a": [0,1,2]}', '{a, 1}', '"new_value"');
select jsonb_insert('{"a": [0,1,2]}', '{a, 1}', '"new_value"', true);
select jsonb_insert('{"a": {"b": {"c": [0, 1, "test1", "test2"]}}}', '{a, b, c, 2}', '"new_value"');
select jsonb_insert('{"a": {"b": {"c": [0, 1, "test1", "test2"]}}}', '{a, b, c, 2}', '"new_value"', true);
select jsonb_insert('{"a": [0,1,2]}', '{a, 1}', '{"b": "value"}');
select jsonb_insert('{"a": [0,1,2]}', '{a, 1}', '["value1", "value2"]');

-- edge cases
select jsonb_insert('{"a": [0,1,2]}', '{a, 0}', '"new_value"');
select jsonb_insert('{"a": [0,1,2]}', '{a, 0}', '"new_value"', true);
select jsonb_insert('{"a": [0,1,2]}', '{a, 2}', '"new_value"');
select jsonb_insert('{"a": [0,1,2]}', '{a, 2}', '"new_value"', true);
select jsonb_insert('{"a": [0,1,2]}', '{a, -1}', '"new_value"');
select jsonb_insert('{"a": [0,1,2]}', '{a, -1}', '"new_value"', true);
select jsonb_insert('[]', '{1}', '"new_value"');
select jsonb_insert('[]', '{1}', '"new_value"', true);
select jsonb_insert('{"a": []}', '{a, 1}', '"new_value"');
select jsonb_insert('{"a": []}', '{a, 1}', '"new_value"', true);
select jsonb_insert('{"a": [0,1,2]}', '{a, 10}', '"new_value"');
select jsonb_insert('{"a": [0,1,2]}', '{a, -10}', '"new_value"');

-- jsonb_insert should be able to insert new value for objects, but not to replace
select jsonb_insert('{"a": {"b": "value"}}', '{a, c}', '"new_value"');
select jsonb_insert('{"a": {"b": "value"}}', '{a, c}', '"new_value"', true);

select jsonb_insert('{"a": {"b": "value"}}', '{a, b}', '"new_value"');
select jsonb_insert('{"a": {"b": "value"}}', '{a, b}', '"new_value"', true);

-- jsonb subscript
select ('123'::jsonb)['a'];
select ('123'::jsonb)[0];
select ('123'::jsonb)[NULL];
select ('{"a": 1}'::jsonb)['a'];
select ('{"a": 1}'::jsonb)[0];
select ('{"a": 1}'::jsonb)['not_exist'];
select ('{"a": 1}'::jsonb)[NULL];
select ('[1, "2", null]'::jsonb)['a'];
select ('[1, "2", null]'::jsonb)[0];
select ('[1, "2", null]'::jsonb)['1'];
select ('[1, "2", null]'::jsonb)[1.0];
select ('[1, "2", null]'::jsonb)[2];
select ('[1, "2", null]'::jsonb)[3];
select ('[1, "2", null]'::jsonb)[-2];
select ('[1, "2", null]'::jsonb)[1]['a'];
select ('[1, "2", null]'::jsonb)[1][0];
select ('{"a": 1, "b": "c", "d": [1, 2, 3]}'::jsonb)['b'];
select ('{"a": 1, "b": "c", "d": [1, 2, 3]}'::jsonb)['d'];
select ('{"a": 1, "b": "c", "d": [1, 2, 3]}'::jsonb)['d'][1];
select ('{"a": 1, "b": "c", "d": [1, 2, 3]}'::jsonb)['d']['a'];
select ('{"a": {"a1": {"a2": "aaa"}}, "b": "bbb", "c": "ccc"}'::jsonb)['a']['a1'];
select ('{"a": {"a1": {"a2": "aaa"}}, "b": "bbb", "c": "ccc"}'::jsonb)['a']['a1']['a2'];
select ('{"a": {"a1": {"a2": "aaa"}}, "b": "bbb", "c": "ccc"}'::jsonb)['a']['a1']['a2']['a3'];
select ('{"a": ["a1", {"b1": ["aaa", "bbb", "ccc"]}], "b": "bb"}'::jsonb)['a'][1]['b1'];
select ('{"a": ["a1", {"b1": ["aaa", "bbb", "ccc"]}], "b": "bb"}'::jsonb)['a'][1]['b1'][2];

-- slices are not supported
select ('{"a": 1}'::jsonb)['a':'b'];
select ('[1, "2", null]'::jsonb)[1:2];
select ('[1, "2", null]'::jsonb)[:2];
select ('[1, "2", null]'::jsonb)[1:];
select ('[1, "2", null]'::jsonb)[:];

create TEMP TABLE test_jsonb_subscript (
       id int,
       test_json jsonb
);

insert into test_jsonb_subscript values
(1, '{}'), -- empty jsonb
(2, '{"key": "value"}'); -- jsonb with data

-- update empty jsonb
update test_jsonb_subscript set test_json['a'] = '1' where id = 1;
select * from test_jsonb_subscript;

-- update jsonb with some data
update test_jsonb_subscript set test_json['a'] = '1' where id = 2;
select * from test_jsonb_subscript;

-- replace jsonb
update test_jsonb_subscript set test_json['a'] = '"test"';
select * from test_jsonb_subscript;

-- replace by object
update test_jsonb_subscript set test_json['a'] = '{"b": 1}'::jsonb;
select * from test_jsonb_subscript;

-- replace by array
update test_jsonb_subscript set test_json['a'] = '[1, 2, 3]'::jsonb;
select * from test_jsonb_subscript;

-- use jsonb subscription in where clause
select * from test_jsonb_subscript where test_json['key'] = '"value"';
select * from test_jsonb_subscript where test_json['key_doesnt_exists'] = '"value"';
select * from test_jsonb_subscript where test_json['key'] = '"wrong_value"';

-- NULL
update test_jsonb_subscript set test_json[NULL] = '1';
update test_jsonb_subscript set test_json['another_key'] = NULL;
select * from test_jsonb_subscript;

-- NULL as jsonb source
insert into test_jsonb_subscript values (3, NULL);
update test_jsonb_subscript set test_json['a'] = '1' where id = 3;
select * from test_jsonb_subscript;

update test_jsonb_subscript set test_json = NULL where id = 3;
update test_jsonb_subscript set test_json[0] = '1';
select * from test_jsonb_subscript;

-- Fill the gaps logic
delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '[0]');

update test_jsonb_subscript set test_json[5] = '1';
select * from test_jsonb_subscript;

update test_jsonb_subscript set test_json[-4] = '1';
select * from test_jsonb_subscript;

update test_jsonb_subscript set test_json[-8] = '1';
select * from test_jsonb_subscript;

-- keep consistent values position
delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '[]');

update test_jsonb_subscript set test_json[5] = '1';
select * from test_jsonb_subscript;

-- create the whole path
delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '{}');
update test_jsonb_subscript set test_json['a'][0]['b'][0]['c'] = '1';
select * from test_jsonb_subscript;

delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '{}');
update test_jsonb_subscript set test_json['a'][2]['b'][2]['c'][2] = '1';
select * from test_jsonb_subscript;

-- create the whole path with already existing keys
delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '{"b": 1}');
update test_jsonb_subscript set test_json['a'][0] = '2';
select * from test_jsonb_subscript;

-- the start jsonb is an object, first subscript is treated as a key
delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '{}');
update test_jsonb_subscript set test_json[0]['a'] = '1';
select * from test_jsonb_subscript;

-- the start jsonb is an array
delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '[]');
update test_jsonb_subscript set test_json[0]['a'] = '1';
update test_jsonb_subscript set test_json[2]['b'] = '2';
select * from test_jsonb_subscript;

-- overwriting an existing path
delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '{}');
update test_jsonb_subscript set test_json['a']['b'][1] = '1';
update test_jsonb_subscript set test_json['a']['b'][10] = '1';
select * from test_jsonb_subscript;

delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '[]');
update test_jsonb_subscript set test_json[0][0][0] = '1';
update test_jsonb_subscript set test_json[0][0][1] = '1';
select * from test_jsonb_subscript;

delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '{}');
update test_jsonb_subscript set test_json['a']['b'][10] = '1';
update test_jsonb_subscript set test_json['a'][10][10] = '1';
select * from test_jsonb_subscript;

-- an empty sub element

delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '{"a": {}}');
update test_jsonb_subscript set test_json['a']['b']['c'][2] = '1';
select * from test_jsonb_subscript;

delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '{"a": []}');
update test_jsonb_subscript set test_json['a'][1]['c'][2] = '1';
select * from test_jsonb_subscript;

-- trying replace assuming a composite object, but it's an element or a value

delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, '{"a": 1}');
update test_jsonb_subscript set test_json['a']['b'] = '1';
update test_jsonb_subscript set test_json['a']['b']['c'] = '1';
update test_jsonb_subscript set test_json['a'][0] = '1';
update test_jsonb_subscript set test_json['a'][0]['c'] = '1';
update test_jsonb_subscript set test_json['a'][0][0] = '1';

-- trying replace assuming a composite object, but it's a raw scalar

delete from test_jsonb_subscript;
insert into test_jsonb_subscript values (1, 'null');
update test_jsonb_subscript set test_json[0] = '1';
update test_jsonb_subscript set test_json[0][0] = '1';

-- jsonb to tsvector
select to_tsvector('{"a": "aaa bbb ddd ccc", "b": ["eee fff ggg"], "c": {"d": "hhh iii"}}'::jsonb);

-- jsonb to tsvector with config
select to_tsvector('simple', '{"a": "aaa bbb ddd ccc", "b": ["eee fff ggg"], "c": {"d": "hhh iii"}}'::jsonb);

-- jsonb to tsvector with stop words
select to_tsvector('english', '{"a": "aaa in bbb ddd ccc", "b": ["the eee fff ggg"], "c": {"d": "hhh. iii"}}'::jsonb);

-- jsonb to tsvector with numeric values
select to_tsvector('english', '{"a": "aaa in bbb ddd ccc", "b": 123, "c": 456}'::jsonb);

-- jsonb_to_tsvector
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '"all"');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '"key"');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '"string"');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '"numeric"');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '"boolean"');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '["string", "numeric"]');

select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '"all"');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '"key"');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '"string"');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '"numeric"');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '"boolean"');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '["string", "numeric"]');

-- to_tsvector corner cases
select to_tsvector('""'::jsonb);
select to_tsvector('{}'::jsonb);
select to_tsvector('[]'::jsonb);
select to_tsvector('null'::jsonb);

-- jsonb_to_tsvector corner cases
select jsonb_to_tsvector('""'::jsonb, '"all"');
select jsonb_to_tsvector('{}'::jsonb, '"all"');
select jsonb_to_tsvector('[]'::jsonb, '"all"');
select jsonb_to_tsvector('null'::jsonb, '"all"');

select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '""');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '{}');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '[]');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, 'null');
select jsonb_to_tsvector('english', '{"a": "aaa in bbb", "b": 123, "c": 456, "d": true, "f": false, "g": null}'::jsonb, '["all", null]');

-- ts_headline for jsonb
select ts_headline('{"a": "aaa bbb", "b": {"c": "ccc ddd fff", "c1": "ccc1 ddd1"}, "d": ["ggg hhh", "iii jjj"]}'::jsonb, tsquery('bbb & ddd & hhh'));
select ts_headline('english', '{"a": "aaa bbb", "b": {"c": "ccc ddd fff"}, "d": ["ggg hhh", "iii jjj"]}'::jsonb, tsquery('bbb & ddd & hhh'));
select ts_headline('{"a": "aaa bbb", "b": {"c": "ccc ddd fff", "c1": "ccc1 ddd1"}, "d": ["ggg hhh", "iii jjj"]}'::jsonb, tsquery('bbb & ddd & hhh'), 'StartSel = <, StopSel = >');
select ts_headline('english', '{"a": "aaa bbb", "b": {"c": "ccc ddd fff", "c1": "ccc1 ddd1"}, "d": ["ggg hhh", "iii jjj"]}'::jsonb, tsquery('bbb & ddd & hhh'), 'StartSel = <, StopSel = >');

-- corner cases for ts_headline with jsonb
select ts_headline('null'::jsonb, tsquery('aaa & bbb'));
select ts_headline('{}'::jsonb, tsquery('aaa & bbb'));
select ts_headline('[]'::jsonb, tsquery('aaa & bbb'));

-- casts
select 'true'::jsonb::bool;
select '[]'::jsonb::bool;
select '1.0'::jsonb::float;
select '[1.0]'::jsonb::float;
select '12345'::jsonb::int4;
select '"hello"'::jsonb::int4;
select '12345'::jsonb::numeric;
select '{}'::jsonb::numeric;
select '12345.05'::jsonb::numeric;
select '12345.05'::jsonb::float4;
select '12345.05'::jsonb::float8;
select '12345.05'::jsonb::int2;
select '12345.05'::jsonb::int4;
select '12345.05'::jsonb::int8;
select '12345.0000000000000000000000000000000000000000000005'::jsonb::numeric;
select '12345.0000000000000000000000000000000000000000000005'::jsonb::float4;
select '12345.0000000000000000000000000000000000000000000005'::jsonb::float8;
select '12345.0000000000000000000000000000000000000000000005'::jsonb::int2;
select '12345.0000000000000000000000000000000000000000000005'::jsonb::int4;
select '12345.0000000000000000000000000000000000000000000005'::jsonb::int8;
