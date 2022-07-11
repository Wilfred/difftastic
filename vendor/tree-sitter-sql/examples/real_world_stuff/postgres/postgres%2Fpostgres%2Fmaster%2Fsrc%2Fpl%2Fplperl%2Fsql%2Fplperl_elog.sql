-- test warnings and errors from plperl

create or replace function perl_elog(text) returns void language plperl as $$

  my $msg = shift;
  elog(NOTICE,$msg);

$$;

select perl_elog('explicit elog');

create or replace function perl_warn(text) returns void language plperl as $$

  my $msg = shift;
  warn($msg);

$$;

select perl_warn('implicit elog via warn');

-- test strict mode on/off

SET plperl.use_strict = true;

create or replace function uses_global() returns text language plperl as $$

  $global = 1;
  $other_global = 2;
  return 'uses_global worked';

$$;

select uses_global();

SET plperl.use_strict = false;

create or replace function uses_global() returns text language plperl as $$

  $global = 1;
  $other_global=2;
  return 'uses_global worked';

$$;

select uses_global();

-- make sure we don't choke on readonly values
do language plperl $$ elog(NOTICE, ${^TAINT}); $$;

-- test recovery after "die"

create or replace function just_die() returns void language plperl AS $$
die "just die";
$$;

select just_die();

create or replace function die_caller() returns int language plpgsql as $$
BEGIN
  BEGIN
    PERFORM just_die();
  EXCEPTION WHEN OTHERS THEN
    RAISE NOTICE 'caught die';
  END;
  RETURN 1;
END;
$$;

select die_caller();

create or replace function indirect_die_caller() returns int language plperl as $$
my $prepared = spi_prepare('SELECT die_caller() AS fx');
my $a = spi_exec_prepared($prepared)->{rows}->[0]->{fx};
my $b = spi_exec_prepared($prepared)->{rows}->[0]->{fx};
return $a + $b;
$$;

select indirect_die_caller();

-- Test non-ASCII error messages
--
-- Note: this test case is known to fail if the database encoding is
-- EUC_CN, EUC_JP, EUC_KR, or EUC_TW, for lack of any equivalent to
-- U+00A0 (no-break space) in those encodings.  However, testing with
-- plain ASCII data would be rather useless, so we must live with that.

SET client_encoding TO UTF8;

create or replace function error_with_nbsp() returns void language plperl as $$
  elog(ERROR, "this message contains a no-break space");
$$;

select error_with_nbsp();
