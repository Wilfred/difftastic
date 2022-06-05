--
-- DEPENDENCIES
--

CREATE USER regress_dep_user;
CREATE USER regress_dep_user2;
CREATE USER regress_dep_user3;
CREATE GROUP regress_dep_group;

CREATE TABLE deptest (f1 serial primary key, f2 text);

GRANT SELECT ON TABLE deptest TO GROUP regress_dep_group;
GRANT ALL ON TABLE deptest TO regress_dep_user, regress_dep_user2;

-- can't drop neither because they have privileges somewhere
DROP USER regress_dep_user;
DROP GROUP regress_dep_group;

-- if we revoke the privileges we can drop the group
REVOKE SELECT ON deptest FROM GROUP regress_dep_group;
DROP GROUP regress_dep_group;

-- can't drop the user if we revoke the privileges partially
REVOKE SELECT, INSERT, UPDATE, DELETE, TRUNCATE, REFERENCES ON deptest FROM regress_dep_user;
DROP USER regress_dep_user;

-- now we are OK to drop him
REVOKE TRIGGER ON deptest FROM regress_dep_user;
DROP USER regress_dep_user;

-- we are OK too if we drop the privileges all at once
REVOKE ALL ON deptest FROM regress_dep_user2;
DROP USER regress_dep_user2;

-- can't drop the owner of an object
-- the error message detail here would include a pg_toast_nnn name that
-- is not constant, so suppress it
\set VERBOSITY terse
ALTER TABLE deptest OWNER TO regress_dep_user3;
DROP USER regress_dep_user3;
\set VERBOSITY default

-- if we drop the object, we can drop the user too
DROP TABLE deptest;
DROP USER regress_dep_user3;

-- Test DROP OWNED
CREATE USER regress_dep_user0;
CREATE USER regress_dep_user1;
CREATE USER regress_dep_user2;
SET SESSION AUTHORIZATION regress_dep_user0;
-- permission denied
DROP OWNED BY regress_dep_user1;
DROP OWNED BY regress_dep_user0, regress_dep_user2;
REASSIGN OWNED BY regress_dep_user0 TO regress_dep_user1;
REASSIGN OWNED BY regress_dep_user1 TO regress_dep_user0;
-- this one is allowed
DROP OWNED BY regress_dep_user0;

CREATE TABLE deptest1 (f1 int unique);
GRANT ALL ON deptest1 TO regress_dep_user1 WITH GRANT OPTION;

SET SESSION AUTHORIZATION regress_dep_user1;
CREATE TABLE deptest (a serial primary key, b text);
GRANT ALL ON deptest1 TO regress_dep_user2;
RESET SESSION AUTHORIZATION;
\z deptest1

DROP OWNED BY regress_dep_user1;
-- all grants revoked
\z deptest1
-- table was dropped
\d deptest

-- Test REASSIGN OWNED
GRANT ALL ON deptest1 TO regress_dep_user1;
GRANT CREATE ON DATABASE regression TO regress_dep_user1;

SET SESSION AUTHORIZATION regress_dep_user1;
CREATE SCHEMA deptest;
CREATE TABLE deptest (a serial primary key, b text);
ALTER DEFAULT PRIVILEGES FOR ROLE regress_dep_user1 IN SCHEMA deptest
  GRANT ALL ON TABLES TO regress_dep_user2;
CREATE FUNCTION deptest_func() RETURNS void LANGUAGE plpgsql
  AS $$ BEGIN END; $$;
CREATE TYPE deptest_enum AS ENUM ('red');
CREATE TYPE deptest_range AS RANGE (SUBTYPE = int4);

CREATE TABLE deptest2 (f1 int);
-- make a serial column the hard way
CREATE SEQUENCE ss1;
ALTER TABLE deptest2 ALTER f1 SET DEFAULT nextval('ss1');
ALTER SEQUENCE ss1 OWNED BY deptest2.f1;

-- When reassigning ownership of a composite type, its pg_class entry
-- should match
CREATE TYPE deptest_t AS (a int);
SELECT typowner = relowner
FROM pg_type JOIN pg_class c ON typrelid = c.oid WHERE typname = 'deptest_t';

RESET SESSION AUTHORIZATION;
REASSIGN OWNED BY regress_dep_user1 TO regress_dep_user2;
\dt deptest

SELECT typowner = relowner
FROM pg_type JOIN pg_class c ON typrelid = c.oid WHERE typname = 'deptest_t';

-- doesn't work: grant still exists
DROP USER regress_dep_user1;
DROP OWNED BY regress_dep_user1;
DROP USER regress_dep_user1;

DROP USER regress_dep_user2;
DROP OWNED BY regress_dep_user2, regress_dep_user0;
DROP USER regress_dep_user2;
DROP USER regress_dep_user0;
