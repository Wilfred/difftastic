--
-- Tests for things affected by allow_system_table_mods
--
-- We run the same set of commands once with allow_system_table_mods
-- off and then again with on.
--
-- The "on" tests should where possible be wrapped in BEGIN/ROLLBACK
-- blocks so as to not leave a mess around.

CREATE USER regress_user_ast;

SET allow_system_table_mods = off;

-- create new table in pg_catalog
CREATE TABLE pg_catalog.test (a int);

-- anyarray column
CREATE TABLE t1x (a int, b anyarray);

-- index on system catalog
ALTER TABLE pg_namespace ADD CONSTRAINT foo UNIQUE USING INDEX pg_namespace_nspname_index;

-- write to system catalog table as superuser
-- (allowed even without allow_system_table_mods)
INSERT INTO pg_description (objoid, classoid, objsubid, description) VALUES (0, 0, 0, 'foo');

-- write to system catalog table as normal user
GRANT INSERT ON pg_description TO regress_user_ast;
SET ROLE regress_user_ast;
INSERT INTO pg_description (objoid, classoid, objsubid, description) VALUES (0, 0, 1, 'foo');
RESET ROLE;

-- policy on system catalog
CREATE POLICY foo ON pg_description FOR SELECT USING (description NOT LIKE 'secret%');

-- reserved schema name
CREATE SCHEMA pg_foo;

-- drop system table
DROP TABLE pg_description;

-- truncate of system table
TRUNCATE pg_description;

-- rename column of system table
ALTER TABLE pg_description RENAME COLUMN description TO comment;

-- ATSimplePermissions()
ALTER TABLE pg_description ALTER COLUMN description SET NOT NULL;

-- SET STATISTICS
ALTER TABLE pg_description ALTER COLUMN description SET STATISTICS -1;

-- foreign key referencing catalog
CREATE TABLE foo (a oid, b oid, c int, FOREIGN KEY (a, b, c) REFERENCES pg_description);

-- RangeVarCallbackOwnsRelation()
CREATE INDEX pg_description_test_index ON pg_description (description);

-- RangeVarCallbackForAlterRelation()
ALTER TABLE pg_description RENAME TO pg_comment;
ALTER TABLE pg_description SET SCHEMA public;

-- reserved tablespace name
CREATE TABLESPACE pg_foo LOCATION '/no/such/location';

-- triggers
CREATE FUNCTION tf1() RETURNS trigger
LANGUAGE plpgsql
AS $$
BEGIN
  RETURN NULL;
END $$;

CREATE TRIGGER t1 BEFORE INSERT ON pg_description EXECUTE FUNCTION tf1();
ALTER TRIGGER t1 ON pg_description RENAME TO t2;
--DROP TRIGGER t2 ON pg_description;

-- rules
CREATE RULE r1 AS ON INSERT TO pg_description DO INSTEAD NOTHING;
ALTER RULE r1 ON pg_description RENAME TO r2;
-- now make one to test dropping:
SET allow_system_table_mods TO on;
CREATE RULE r2 AS ON INSERT TO pg_description DO INSTEAD NOTHING;
RESET allow_system_table_mods;
DROP RULE r2 ON pg_description;
-- cleanup:
SET allow_system_table_mods TO on;
DROP RULE r2 ON pg_description;
RESET allow_system_table_mods;


SET allow_system_table_mods = on;

-- create new table in pg_catalog
BEGIN;
CREATE TABLE pg_catalog.test (a int);
ROLLBACK;

-- anyarray column
BEGIN;
CREATE TABLE t1 (a int, b anyarray);
ROLLBACK;

-- index on system catalog
BEGIN;
ALTER TABLE pg_namespace ADD CONSTRAINT foo UNIQUE USING INDEX pg_namespace_nspname_index;
ROLLBACK;

-- write to system catalog table as superuser
BEGIN;
INSERT INTO pg_description (objoid, classoid, objsubid, description) VALUES (0, 0, 2, 'foo');
ROLLBACK;

-- write to system catalog table as normal user
-- (not allowed)
SET ROLE regress_user_ast;
INSERT INTO pg_description (objoid, classoid, objsubid, description) VALUES (0, 0, 3, 'foo');
RESET ROLE;

-- policy on system catalog
BEGIN;
CREATE POLICY foo ON pg_description FOR SELECT USING (description NOT LIKE 'secret%');
ROLLBACK;

-- reserved schema name
BEGIN;
CREATE SCHEMA pg_foo;
ROLLBACK;

-- drop system table
-- (This will fail anyway because it's pinned.)
BEGIN;
DROP TABLE pg_description;
ROLLBACK;

-- truncate of system table
BEGIN;
TRUNCATE pg_description;
ROLLBACK;

-- rename column of system table
BEGIN;
ALTER TABLE pg_description RENAME COLUMN description TO comment;
ROLLBACK;

-- ATSimplePermissions()
BEGIN;
ALTER TABLE pg_description ALTER COLUMN description SET NOT NULL;
ROLLBACK;

-- SET STATISTICS
BEGIN;
ALTER TABLE pg_description ALTER COLUMN description SET STATISTICS -1;
ROLLBACK;

-- foreign key referencing catalog
BEGIN;
CREATE TABLE foo (a oid, b oid, c int, FOREIGN KEY (a, b, c) REFERENCES pg_description);
ROLLBACK;

-- RangeVarCallbackOwnsRelation()
BEGIN;
CREATE INDEX pg_description_test_index ON pg_description (description);
ROLLBACK;

-- RangeVarCallbackForAlterRelation()
BEGIN;
ALTER TABLE pg_description RENAME TO pg_comment;
ROLLBACK;
BEGIN;
ALTER TABLE pg_description SET SCHEMA public;
ROLLBACK;

-- reserved tablespace name
SET client_min_messages = error;  -- disable ENFORCE_REGRESSION_TEST_NAME_RESTRICTIONS warning
CREATE TABLESPACE pg_foo LOCATION '/no/such/location';
RESET client_min_messages;

-- triggers
CREATE TRIGGER t1 BEFORE INSERT ON pg_description EXECUTE FUNCTION tf1();
ALTER TRIGGER t1 ON pg_description RENAME TO t2;
DROP TRIGGER t2 ON pg_description;

-- rules
CREATE RULE r1 AS ON INSERT TO pg_description DO INSTEAD NOTHING;
ALTER RULE r1 ON pg_description RENAME TO r2;
DROP RULE r2 ON pg_description;


-- cleanup
REVOKE ALL ON pg_description FROM regress_user_ast;
DROP USER regress_user_ast;
DROP FUNCTION tf1;
