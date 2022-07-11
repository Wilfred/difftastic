--
-- test ALTER THING name DEPENDS ON EXTENSION
--

-- Common setup for all tests
CREATE TABLE test_extdep_commands (command text);
COPY test_extdep_commands FROM stdin;
 CREATE SCHEMA test_ext
 CREATE EXTENSION test_ext5 SCHEMA test_ext
 SET search_path TO test_ext
 CREATE TABLE a (a1 int)

 CREATE FUNCTION b() RETURNS TRIGGER LANGUAGE plpgsql AS\n   $$ BEGIN NEW.a1 := NEW.a1 + 42; RETURN NEW; END; $$
 ALTER FUNCTION b() DEPENDS ON EXTENSION test_ext5

 CREATE TRIGGER c BEFORE INSERT ON a FOR EACH ROW EXECUTE PROCEDURE b()
 ALTER TRIGGER c ON a DEPENDS ON EXTENSION test_ext5

 CREATE MATERIALIZED VIEW d AS SELECT * FROM a
 ALTER MATERIALIZED VIEW d DEPENDS ON EXTENSION test_ext5

 CREATE INDEX e ON a (a1)
 ALTER INDEX e DEPENDS ON EXTENSION test_ext5
 RESET search_path
\.

SELECT * FROM test_extdep_commands;
-- First, test that dependent objects go away when the extension is dropped.
SELECT * FROM test_extdep_commands \gexec
-- A dependent object made dependent again has no effect
ALTER FUNCTION test_ext.b() DEPENDS ON EXTENSION test_ext5;
-- make sure we have the right dependencies on the extension
SELECT deptype, p.*
  FROM pg_depend, pg_identify_object(classid, objid, objsubid) AS p
 WHERE refclassid = 'pg_extension'::regclass AND
       refobjid = (SELECT oid FROM pg_extension WHERE extname = 'test_ext5')
ORDER BY type;
DROP EXTENSION test_ext5;
-- anything still depending on the table?
SELECT deptype, i.*
  FROM pg_catalog.pg_depend, pg_identify_object(classid, objid, objsubid) i
WHERE refclassid='pg_class'::regclass AND
 refobjid='test_ext.a'::regclass AND NOT deptype IN ('i', 'a');
DROP SCHEMA test_ext CASCADE;

-- Second test: If we drop the table, the objects are dropped too and no
-- vestige remains in pg_depend.
SELECT * FROM test_extdep_commands \gexec
DROP TABLE test_ext.a;		-- should fail, require cascade
DROP TABLE test_ext.a CASCADE;
-- anything still depending on the extension?  Should be only function b()
SELECT deptype, i.*
  FROM pg_catalog.pg_depend, pg_identify_object(classid, objid, objsubid) i
 WHERE refclassid='pg_extension'::regclass AND
 refobjid=(SELECT oid FROM pg_extension WHERE extname='test_ext5');
DROP EXTENSION test_ext5;
DROP SCHEMA test_ext CASCADE;

-- Third test: we can drop the objects individually
SELECT * FROM test_extdep_commands \gexec
SET search_path TO test_ext;
DROP TRIGGER c ON a;
DROP FUNCTION b();
DROP MATERIALIZED VIEW d;
DROP INDEX e;

SELECT deptype, i.*
  FROM pg_catalog.pg_depend, pg_identify_object(classid, objid, objsubid) i
 WHERE (refclassid='pg_extension'::regclass AND
        refobjid=(SELECT oid FROM pg_extension WHERE extname='test_ext5'))
	OR (refclassid='pg_class'::regclass AND refobjid='test_ext.a'::regclass)
   AND NOT deptype IN ('i', 'a');
DROP TABLE a;
RESET search_path;
DROP SCHEMA test_ext CASCADE;

-- Fourth test: we can mark the objects as dependent, then unmark; then the
-- drop of the extension does nothing
SELECT * FROM test_extdep_commands \gexec
SET search_path TO test_ext;
ALTER FUNCTION b() NO DEPENDS ON EXTENSION test_ext5;
ALTER TRIGGER c ON a NO DEPENDS ON EXTENSION test_ext5;
ALTER MATERIALIZED VIEW d NO DEPENDS ON EXTENSION test_ext5;
ALTER INDEX e NO DEPENDS ON EXTENSION test_ext5;
DROP EXTENSION test_ext5;
DROP TRIGGER c ON a;
DROP FUNCTION b();
DROP MATERIALIZED VIEW d;
DROP INDEX e;
DROP SCHEMA test_ext CASCADE;
