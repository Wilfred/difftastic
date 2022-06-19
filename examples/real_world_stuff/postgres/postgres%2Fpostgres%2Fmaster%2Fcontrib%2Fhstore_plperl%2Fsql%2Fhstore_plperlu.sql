CREATE EXTENSION hstore_plperlu CASCADE;

SELECT transforms.udt_schema, transforms.udt_name,
       routine_schema, routine_name,
       group_name, transform_type
FROM information_schema.transforms JOIN information_schema.routines
     USING (specific_catalog, specific_schema, specific_name)
ORDER BY 1, 2, 5, 6;


-- test hstore -> perl
CREATE FUNCTION test1(val hstore) RETURNS int
LANGUAGE plperlu
TRANSFORM FOR TYPE hstore
AS $$
use Data::Dumper;
$Data::Dumper::Sortkeys = 1;
$Data::Dumper::Indent = 0;
elog(INFO, Dumper($_[0]));
return scalar(keys %{$_[0]});
$$;

SELECT test1('aa=>bb, cc=>NULL'::hstore);

CREATE FUNCTION test1none(val hstore) RETURNS int
LANGUAGE plperlu
AS $$
use Data::Dumper;
$Data::Dumper::Sortkeys = 1;
$Data::Dumper::Indent = 0;
elog(INFO, Dumper($_[0]));
return scalar(keys %{$_[0]});
$$;

SELECT test1none('aa=>bb, cc=>NULL'::hstore);

CREATE FUNCTION test1list(val hstore) RETURNS int
LANGUAGE plperlu
TRANSFORM FOR TYPE hstore
AS $$
use Data::Dumper;
$Data::Dumper::Sortkeys = 1;
$Data::Dumper::Indent = 0;
elog(INFO, Dumper($_[0]));
return scalar(keys %{$_[0]});
$$;

SELECT test1list('aa=>bb, cc=>NULL'::hstore);


-- test hstore[] -> perl
CREATE FUNCTION test1arr(val hstore[]) RETURNS int
LANGUAGE plperlu
TRANSFORM FOR TYPE hstore
AS $$
use Data::Dumper;
$Data::Dumper::Sortkeys = 1;
$Data::Dumper::Indent = 0;
elog(INFO, Dumper($_[0]->[0], $_[0]->[1]));
return scalar(keys %{$_[0]});
$$;

SELECT test1arr(array['aa=>bb, cc=>NULL'::hstore, 'dd=>ee']);


-- test as part of prepare/execute
CREATE FUNCTION test3() RETURNS void
LANGUAGE plperlu
TRANSFORM FOR TYPE hstore
AS $$
use Data::Dumper;
$Data::Dumper::Sortkeys = 1;
$Data::Dumper::Indent = 0;

$rv = spi_exec_query(q{SELECT 'aa=>bb, cc=>NULL'::hstore AS col1});
elog(INFO, Dumper($rv->{rows}[0]->{col1}));

$val = {a => 1, b => 'boo', c => undef};
$plan = spi_prepare(q{SELECT $1::text AS col1}, "hstore");
$rv = spi_exec_prepared($plan, {}, $val);
elog(INFO, Dumper($rv->{rows}[0]->{col1}));
$$;

SELECT test3();


-- test trigger
CREATE TABLE test1 (a int, b hstore);
INSERT INTO test1 VALUES (1, 'aa=>bb, cc=>NULL');
SELECT * FROM test1;

CREATE FUNCTION test4() RETURNS trigger
LANGUAGE plperlu
TRANSFORM FOR TYPE hstore
AS $$
use Data::Dumper;
$Data::Dumper::Sortkeys = 1;
$Data::Dumper::Indent = 0;
elog(INFO, Dumper($_TD->{new}));
if ($_TD->{new}{a} == 1) {
    $_TD->{new}{b} = {a => 1, b => 'boo', c => undef};
}

return "MODIFY";
$$;

CREATE TRIGGER test4 BEFORE UPDATE ON test1 FOR EACH ROW EXECUTE PROCEDURE test4();

UPDATE test1 SET a = a;
SELECT * FROM test1;


DROP TABLE test1;

DROP FUNCTION test1(hstore);
DROP FUNCTION test1none(hstore);
DROP FUNCTION test1list(hstore);
DROP FUNCTION test1arr(hstore[]);
DROP FUNCTION test3();
DROP FUNCTION test4();


DROP EXTENSION hstore_plperlu;
DROP EXTENSION hstore;
DROP EXTENSION plperlu;
