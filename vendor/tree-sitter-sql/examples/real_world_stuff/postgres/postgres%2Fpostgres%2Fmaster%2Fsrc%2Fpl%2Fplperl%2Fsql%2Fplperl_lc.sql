--
-- Make sure strings are validated
-- Should fail for all encodings, as nul bytes are never permitted.
--
CREATE OR REPLACE FUNCTION perl_zerob() RETURNS TEXT AS $$
  return "abcd\0efg";
$$ LANGUAGE plperl;
SELECT perl_zerob();
