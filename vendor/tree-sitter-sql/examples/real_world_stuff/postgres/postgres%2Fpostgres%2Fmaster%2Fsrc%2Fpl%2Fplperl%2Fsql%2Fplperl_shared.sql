-- test plperl.on_plperl_init via the shared hash
-- (must be done before plperl is first used)

-- This test tests setting on_plperl_init before loading plperl

-- testing on_plperl_init gets run, and that it can alter %_SHARED
SET plperl.on_plperl_init = '$_SHARED{on_init} = 42';

-- test the shared hash

create function setme(key text, val text) returns void language plperl as $$

  my $key = shift;
  my $val = shift;
  $_SHARED{$key}= $val;

$$;

create function getme(key text) returns text language plperl as $$

  my $key = shift;
  return $_SHARED{$key};

$$;

select setme('ourkey','ourval');

select getme('ourkey');

select getme('on_init');

-- verify that we can use $_SHARED in strict mode
create or replace function perl_shared() returns int as $$
use strict;
my $val = $_SHARED{'stuff'};
$_SHARED{'stuff'} = '1';
return $val;
$$ language plperl;

select perl_shared();
select perl_shared();
