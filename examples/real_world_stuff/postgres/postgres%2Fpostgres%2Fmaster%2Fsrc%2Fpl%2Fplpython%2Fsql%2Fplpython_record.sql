--
-- Test returning tuples
--

CREATE TABLE table_record (
	first text,
	second int4
	) ;

CREATE TYPE type_record AS (
	first text,
	second int4
	) ;


CREATE FUNCTION test_table_record_as(typ text, first text, second integer, retnull boolean) RETURNS table_record AS $$
if retnull:
	return None
if typ == 'dict':
	return { 'first': first, 'second': second, 'additionalfield': 'must not cause trouble' }
elif typ == 'tuple':
	return ( first, second )
elif typ == 'list':
	return [ first, second ]
elif typ == 'obj':
	class type_record: pass
	type_record.first = first
	type_record.second = second
	return type_record
$$ LANGUAGE plpython3u;

CREATE FUNCTION test_type_record_as(typ text, first text, second integer, retnull boolean) RETURNS type_record AS $$
if retnull:
	return None
if typ == 'dict':
	return { 'first': first, 'second': second, 'additionalfield': 'must not cause trouble' }
elif typ == 'tuple':
	return ( first, second )
elif typ == 'list':
	return [ first, second ]
elif typ == 'obj':
	class type_record: pass
	type_record.first = first
	type_record.second = second
	return type_record
elif typ == 'str':
	return "('%s',%r)" % (first, second)
$$ LANGUAGE plpython3u;

CREATE FUNCTION test_in_out_params(first in text, second out text) AS $$
return first + '_in_to_out';
$$ LANGUAGE plpython3u;

CREATE FUNCTION test_in_out_params_multi(first in text,
                                         second out text, third out text) AS $$
return (first + '_record_in_to_out_1', first + '_record_in_to_out_2');
$$ LANGUAGE plpython3u;

CREATE FUNCTION test_inout_params(first inout text) AS $$
return first + '_inout';
$$ LANGUAGE plpython3u;


-- Test tuple returning functions
SELECT * FROM test_table_record_as('dict', null, null, false);
SELECT * FROM test_table_record_as('dict', 'one', null, false);
SELECT * FROM test_table_record_as('dict', null, 2, false);
SELECT * FROM test_table_record_as('dict', 'three', 3, false);
SELECT * FROM test_table_record_as('dict', null, null, true);

SELECT * FROM test_table_record_as('tuple', null, null, false);
SELECT * FROM test_table_record_as('tuple', 'one', null, false);
SELECT * FROM test_table_record_as('tuple', null, 2, false);
SELECT * FROM test_table_record_as('tuple', 'three', 3, false);
SELECT * FROM test_table_record_as('tuple', null, null, true);

SELECT * FROM test_table_record_as('list', null, null, false);
SELECT * FROM test_table_record_as('list', 'one', null, false);
SELECT * FROM test_table_record_as('list', null, 2, false);
SELECT * FROM test_table_record_as('list', 'three', 3, false);
SELECT * FROM test_table_record_as('list', null, null, true);

SELECT * FROM test_table_record_as('obj', null, null, false);
SELECT * FROM test_table_record_as('obj', 'one', null, false);
SELECT * FROM test_table_record_as('obj', null, 2, false);
SELECT * FROM test_table_record_as('obj', 'three', 3, false);
SELECT * FROM test_table_record_as('obj', null, null, true);

SELECT * FROM test_type_record_as('dict', null, null, false);
SELECT * FROM test_type_record_as('dict', 'one', null, false);
SELECT * FROM test_type_record_as('dict', null, 2, false);
SELECT * FROM test_type_record_as('dict', 'three', 3, false);
SELECT * FROM test_type_record_as('dict', null, null, true);

SELECT * FROM test_type_record_as('tuple', null, null, false);
SELECT * FROM test_type_record_as('tuple', 'one', null, false);
SELECT * FROM test_type_record_as('tuple', null, 2, false);
SELECT * FROM test_type_record_as('tuple', 'three', 3, false);
SELECT * FROM test_type_record_as('tuple', null, null, true);

SELECT * FROM test_type_record_as('list', null, null, false);
SELECT * FROM test_type_record_as('list', 'one', null, false);
SELECT * FROM test_type_record_as('list', null, 2, false);
SELECT * FROM test_type_record_as('list', 'three', 3, false);
SELECT * FROM test_type_record_as('list', null, null, true);

SELECT * FROM test_type_record_as('obj', null, null, false);
SELECT * FROM test_type_record_as('obj', 'one', null, false);
SELECT * FROM test_type_record_as('obj', null, 2, false);
SELECT * FROM test_type_record_as('obj', 'three', 3, false);
SELECT * FROM test_type_record_as('obj', null, null, true);

SELECT * FROM test_type_record_as('str', 'one', 1, false);

SELECT * FROM test_in_out_params('test_in');
SELECT * FROM test_in_out_params_multi('test_in');
SELECT * FROM test_inout_params('test_in');

-- try changing the return types and call functions again

ALTER TABLE table_record DROP COLUMN first;
ALTER TABLE table_record DROP COLUMN second;
ALTER TABLE table_record ADD COLUMN first text;
ALTER TABLE table_record ADD COLUMN second int4;

SELECT * FROM test_table_record_as('obj', 'one', 1, false);

ALTER TYPE type_record DROP ATTRIBUTE first;
ALTER TYPE type_record DROP ATTRIBUTE second;
ALTER TYPE type_record ADD ATTRIBUTE first text;
ALTER TYPE type_record ADD ATTRIBUTE second int4;

SELECT * FROM test_type_record_as('obj', 'one', 1, false);

-- errors cases

CREATE FUNCTION test_type_record_error1() RETURNS type_record AS $$
    return { 'first': 'first' }
$$ LANGUAGE plpython3u;

SELECT * FROM test_type_record_error1();


CREATE FUNCTION test_type_record_error2() RETURNS type_record AS $$
    return [ 'first' ]
$$ LANGUAGE plpython3u;

SELECT * FROM test_type_record_error2();


CREATE FUNCTION test_type_record_error3() RETURNS type_record AS $$
    class type_record: pass
    type_record.first = 'first'
    return type_record
$$ LANGUAGE plpython3u;

SELECT * FROM test_type_record_error3();

CREATE FUNCTION test_type_record_error4() RETURNS type_record AS $$
    return 'foo'
$$ LANGUAGE plpython3u;

SELECT * FROM test_type_record_error4();
