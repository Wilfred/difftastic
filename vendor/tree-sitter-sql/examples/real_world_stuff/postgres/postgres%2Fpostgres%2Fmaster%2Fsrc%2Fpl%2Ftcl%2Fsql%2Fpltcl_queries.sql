-- suppress CONTEXT so that function OIDs aren't in output
\set VERBOSITY terse

-- Test composite-type arguments
select tcl_composite_arg_ref1(row('tkey', 42, 'ref2'));
select tcl_composite_arg_ref2(row('tkey', 42, 'ref2'));

-- More tests for composite argument/result types

create domain d_comp1 as T_comp1 check ((value).ref1 > 0);

create function tcl_record_arg(record, fldname text) returns int as '
    return $1($2)
' language pltcl;

select tcl_record_arg(row('tkey', 42, 'ref2')::T_comp1, 'ref1');
select tcl_record_arg(row('tkey', 42, 'ref2')::d_comp1, 'ref1');
select tcl_record_arg(row(2,4), 'f2');

create function tcl_cdomain_arg(d_comp1) returns int as '
    return $1(ref1)
' language pltcl;

select tcl_cdomain_arg(row('tkey', 42, 'ref2'));
select tcl_cdomain_arg(row('tkey', 42, 'ref2')::T_comp1);
select tcl_cdomain_arg(row('tkey', -1, 'ref2'));  -- fail

-- Test argisnull primitive
select tcl_argisnull('foo');
select tcl_argisnull('');
select tcl_argisnull(null);

-- test some error cases
create function tcl_error(out a int, out b int) as $$return {$$ language pltcl;
select tcl_error();

create function bad_record(out a text, out b text) as $$return [list a]$$ language pltcl;
select bad_record();

create function bad_field(out a text, out b text) as $$return [list a 1 b 2 cow 3]$$ language pltcl;
select bad_field();

-- test compound return
select * from tcl_test_cube_squared(5);

-- test SRF
select * from tcl_test_squared_rows(0,5);

select * from tcl_test_sequence(0,5) as a;

select 1, tcl_test_sequence(0,5);

create function non_srf() returns int as $$return_next 1$$ language pltcl;
select non_srf();

create function bad_record_srf(out a text, out b text) returns setof record as $$
return_next [list a]
$$ language pltcl;
select bad_record_srf();

create function bad_field_srf(out a text, out b text) returns setof record as $$
return_next [list a 1 b 2 cow 3]
$$ language pltcl;
select bad_field_srf();

-- test composite and domain-over-composite results
create function tcl_composite_result(int) returns T_comp1 as $$
return [list tkey tkey1 ref1 $1 ref2 ref22]
$$ language pltcl;
select tcl_composite_result(1001);
select * from tcl_composite_result(1002);

create function tcl_dcomposite_result(int) returns d_comp1 as $$
return [list tkey tkey2 ref1 $1 ref2 ref42]
$$ language pltcl;
select tcl_dcomposite_result(1001);
select * from tcl_dcomposite_result(1002);
select * from tcl_dcomposite_result(-1);  -- fail

create function tcl_record_result(int) returns record as $$
return [list q1 sometext q2 $1 q3 moretext]
$$ language pltcl;
select tcl_record_result(42);  -- fail
select * from tcl_record_result(42);  -- fail
select * from tcl_record_result(42) as (q1 text, q2 int, q3 text);
select * from tcl_record_result(42) as (q1 text, q2 int, q3 text, q4 int);
select * from tcl_record_result(42) as (q1 text, q2 int, q4 int);  -- fail

-- test quote
select tcl_eval('quote foo bar');
select tcl_eval('quote [format %c 39]');
select tcl_eval('quote [format %c 92]');

-- Test argisnull
select tcl_eval('argisnull');
select tcl_eval('argisnull 14');
select tcl_eval('argisnull abc');

-- Test return_null
select tcl_eval('return_null 14');

-- Test spi_exec
select tcl_eval('spi_exec');
select tcl_eval('spi_exec -count');
select tcl_eval('spi_exec -array');
select tcl_eval('spi_exec -count abc');
select tcl_eval('spi_exec query loop body toomuch');
select tcl_eval('spi_exec "begin; rollback;"');

-- Test spi_execp
select tcl_eval('spi_execp');
select tcl_eval('spi_execp -count');
select tcl_eval('spi_execp -array');
select tcl_eval('spi_execp -count abc');
select tcl_eval('spi_execp -nulls');
select tcl_eval('spi_execp ""');

-- test spi_prepare
select tcl_eval('spi_prepare');
select tcl_eval('spi_prepare a b');
select tcl_eval('spi_prepare a "b {"');
select tcl_error_handling_test($tcl$spi_prepare "select moo" []$tcl$);

-- test full error text
select tcl_error_handling_test($tcl$
spi_exec "DO $$
BEGIN
RAISE 'my message'
	USING HINT = 'my hint'
	, DETAIL = 'my detail'
	, SCHEMA = 'my schema'
	, TABLE = 'my table'
	, COLUMN = 'my column'
	, CONSTRAINT = 'my constraint'
	, DATATYPE = 'my datatype'
;
END$$;"
$tcl$);

-- verify tcl_error_handling_test() properly reports non-postgres errors
select tcl_error_handling_test('moo');

-- test elog
select tcl_eval('elog');
select tcl_eval('elog foo bar');

-- test forced error
select tcl_eval('error "forced error"');

-- test loop control in spi_exec[p]
select tcl_spi_exec(true, 'break');
select tcl_spi_exec(true, 'continue');
select tcl_spi_exec(true, 'error');
select tcl_spi_exec(true, 'return');
select tcl_spi_exec(false, 'break');
select tcl_spi_exec(false, 'continue');
select tcl_spi_exec(false, 'error');
select tcl_spi_exec(false, 'return');

-- forcibly run the Tcl event loop for awhile, to check that we have not
-- messed things up too badly by disabling the Tcl notifier subsystem
select tcl_eval($$
  unset -nocomplain ::tcl_vwait
  after 100 {set ::tcl_vwait 1}
  vwait ::tcl_vwait
  unset -nocomplain ::tcl_vwait$$);
