CREATE EXTENSION hstore_plperl CASCADE;

SELECT transforms.udt_schema, transforms.udt_name,
       routine_schema, routine_name,
       group_name, transform_type
FROM information_schema.transforms JOIN information_schema.routines
     USING (specific_catalog, specific_schema, specific_name)
ORDER BY 1, 2, 5, 6;


-- test perl -> hstore
CREATE FUNCTION test2() RETURNS hstore
LANGUAGE plperl
TRANSFORM FOR TYPE hstore
AS $$
$val = {a => 1, b => 'boo', c => undef};
return $val;
$$;

SELECT test2();


-- test perl -> hstore[]
CREATE FUNCTION test2arr() RETURNS hstore[]
LANGUAGE plperl
TRANSFORM FOR TYPE hstore
AS $$
$val = [{a => 1, b => 'boo', c => undef}, {d => 2}];
return $val;
$$;

SELECT test2arr();

-- check error cases
CREATE OR REPLACE FUNCTION test2() RETURNS hstore
LANGUAGE plperl
TRANSFORM FOR TYPE hstore
AS $$
return 42;
$$;

SELECT test2();

CREATE OR REPLACE FUNCTION test2() RETURNS hstore
LANGUAGE plperl
TRANSFORM FOR TYPE hstore
AS $$
return [1, 2];
$$;

SELECT test2();


DROP FUNCTION test2();
DROP FUNCTION test2arr();


DROP EXTENSION hstore_plperl;
DROP EXTENSION hstore;
DROP EXTENSION plperl;
