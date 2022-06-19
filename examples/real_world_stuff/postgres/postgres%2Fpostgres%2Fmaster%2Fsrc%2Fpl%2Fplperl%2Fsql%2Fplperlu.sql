-- Use ONLY plperlu tests here. For plperl/plerlu combined tests
-- see plperl_plperlu.sql

-- This test tests setting on_plperlu_init after loading plperl
LOAD 'plperl';

-- Test plperl.on_plperlu_init gets run
SET plperl.on_plperlu_init = '$_SHARED{init} = 42';
DO $$ warn $_SHARED{init} $$ language plperlu;

--
-- Test compilation of unicode regex - regardless of locale.
-- This code fails in plain plperl in a non-UTF8 database.
--
CREATE OR REPLACE FUNCTION perl_unicode_regex(text) RETURNS INTEGER AS $$
  return ($_[0] =~ /\x{263A}|happy/i) ? 1 : 0; # unicode smiley
$$ LANGUAGE plperlu;
