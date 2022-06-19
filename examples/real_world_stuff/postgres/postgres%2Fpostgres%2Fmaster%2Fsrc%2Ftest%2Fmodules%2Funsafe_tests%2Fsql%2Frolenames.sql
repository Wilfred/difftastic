CREATE FUNCTION chkrolattr()
 RETURNS TABLE ("role" name, rolekeyword text, canlogin bool, replication bool)
 AS $$
SELECT r.rolname, v.keyword, r.rolcanlogin, r.rolreplication
 FROM pg_roles r
 JOIN (VALUES(CURRENT_ROLE, 'current_role'),
             (CURRENT_USER, 'current_user'),
             (SESSION_USER, 'session_user'),
             ('current_role', '-'),
             ('current_user', '-'),
             ('session_user', '-'),
             ('Public', '-'),
             ('None', '-'))
      AS v(uname, keyword)
      ON (r.rolname = v.uname)
 ORDER BY 1, 2;
$$ LANGUAGE SQL;

CREATE FUNCTION chksetconfig()
 RETURNS TABLE (db name, "role" name, rolkeyword text, setconfig text[])
 AS $$
SELECT COALESCE(d.datname, 'ALL'), COALESCE(r.rolname, 'ALL'),
       COALESCE(v.keyword, '-'), s.setconfig
 FROM pg_db_role_setting s
 LEFT JOIN pg_roles r ON (r.oid = s.setrole)
 LEFT JOIN pg_database d ON (d.oid = s.setdatabase)
 LEFT JOIN (VALUES(CURRENT_ROLE, 'current_role'),
                  (CURRENT_USER, 'current_user'),
                  (SESSION_USER, 'session_user'))
      AS v(uname, keyword)
      ON (r.rolname = v.uname)
   WHERE (r.rolname) IN ('Public', 'current_user', 'regress_testrol1', 'regress_testrol2')
ORDER BY 1, 2, 3;
$$ LANGUAGE SQL;

CREATE FUNCTION chkumapping()
 RETURNS TABLE (umname name, umserver name, umoptions text[])
 AS $$
SELECT r.rolname, s.srvname, m.umoptions
 FROM pg_user_mapping m
 LEFT JOIN pg_roles r ON (r.oid = m.umuser)
 JOIN pg_foreign_server s ON (s.oid = m.umserver)
 ORDER BY 2, 1;
$$ LANGUAGE SQL;

--
-- We test creation and use of these role names to ensure that the server
-- correctly distinguishes role keywords from quoted names that look like
-- those keywords.  In a test environment, creation of these roles may
-- provoke warnings, so hide the warnings by raising client_min_messages.
--
SET client_min_messages = ERROR;

CREATE ROLE "Public";
CREATE ROLE "None";
CREATE ROLE "current_role";
CREATE ROLE "current_user";
CREATE ROLE "session_user";
CREATE ROLE "user";

RESET client_min_messages;

CREATE ROLE current_user; -- error
CREATE ROLE current_role; -- error
CREATE ROLE session_user; -- error
CREATE ROLE user; -- error
CREATE ROLE all; -- error

CREATE ROLE public; -- error
CREATE ROLE "public"; -- error
CREATE ROLE none; -- error
CREATE ROLE "none"; -- error

CREATE ROLE pg_abc; -- error
CREATE ROLE "pg_abc"; -- error
CREATE ROLE pg_abcdef; -- error
CREATE ROLE "pg_abcdef"; -- error

CREATE ROLE regress_testrol0 SUPERUSER LOGIN;
CREATE ROLE regress_testrolx SUPERUSER LOGIN;
CREATE ROLE regress_testrol2 SUPERUSER;
CREATE ROLE regress_testrol1 SUPERUSER LOGIN IN ROLE regress_testrol2;

\c -
SET SESSION AUTHORIZATION regress_testrol1;
SET ROLE regress_testrol2;

--  ALTER ROLE
BEGIN;
SELECT * FROM chkrolattr();
ALTER ROLE CURRENT_ROLE WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER ROLE "current_role" WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER ROLE CURRENT_ROLE WITH NOREPLICATION;
ALTER ROLE CURRENT_USER WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER ROLE "current_user" WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER ROLE SESSION_USER WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER ROLE "session_user" WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER USER "Public" WITH REPLICATION;
ALTER USER "None" WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER USER regress_testrol1 WITH NOREPLICATION;
ALTER USER regress_testrol2 WITH NOREPLICATION;
SELECT * FROM chkrolattr();
ROLLBACK;

ALTER ROLE USER WITH LOGIN; -- error
ALTER ROLE ALL WITH REPLICATION; -- error
ALTER ROLE SESSION_ROLE WITH NOREPLICATION; -- error
ALTER ROLE PUBLIC WITH NOREPLICATION; -- error
ALTER ROLE "public" WITH NOREPLICATION; -- error
ALTER ROLE NONE WITH NOREPLICATION; -- error
ALTER ROLE "none" WITH NOREPLICATION; -- error
ALTER ROLE nonexistent WITH NOREPLICATION; -- error

--  ALTER USER
BEGIN;
SELECT * FROM chkrolattr();
ALTER USER CURRENT_ROLE WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER USER "current_role" WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER USER CURRENT_ROLE WITH NOREPLICATION;
ALTER USER CURRENT_USER WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER USER "current_user" WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER USER SESSION_USER WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER USER "session_user" WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER USER "Public" WITH REPLICATION;
ALTER USER "None" WITH REPLICATION;
SELECT * FROM chkrolattr();
ALTER USER regress_testrol1 WITH NOREPLICATION;
ALTER USER regress_testrol2 WITH NOREPLICATION;
SELECT * FROM chkrolattr();
ROLLBACK;

ALTER USER USER WITH LOGIN; -- error
ALTER USER ALL WITH REPLICATION; -- error
ALTER USER SESSION_ROLE WITH NOREPLICATION; -- error
ALTER USER PUBLIC WITH NOREPLICATION; -- error
ALTER USER "public" WITH NOREPLICATION; -- error
ALTER USER NONE WITH NOREPLICATION; -- error
ALTER USER "none" WITH NOREPLICATION; -- error
ALTER USER nonexistent WITH NOREPLICATION; -- error

--  ALTER ROLE SET/RESET
SELECT * FROM chksetconfig();
ALTER ROLE CURRENT_ROLE SET application_name to 'BAZ';
ALTER ROLE CURRENT_USER SET application_name to 'FOO';
ALTER ROLE SESSION_USER SET application_name to 'BAR';
ALTER ROLE "current_user" SET application_name to 'FOOFOO';
ALTER ROLE "Public" SET application_name to 'BARBAR';
ALTER ROLE ALL SET application_name to 'SLAP';
SELECT * FROM chksetconfig();
ALTER ROLE regress_testrol1 SET application_name to 'SLAM';
SELECT * FROM chksetconfig();
ALTER ROLE CURRENT_ROLE RESET application_name;
ALTER ROLE CURRENT_USER RESET application_name;
ALTER ROLE SESSION_USER RESET application_name;
ALTER ROLE "current_user" RESET application_name;
ALTER ROLE "Public" RESET application_name;
ALTER ROLE ALL RESET application_name;
SELECT * FROM chksetconfig();


ALTER ROLE USER SET application_name to 'BOOM'; -- error
ALTER ROLE PUBLIC SET application_name to 'BOMB'; -- error
ALTER ROLE nonexistent SET application_name to 'BOMB'; -- error

--  ALTER USER SET/RESET
SELECT * FROM chksetconfig();
ALTER USER CURRENT_ROLE SET application_name to 'BAZ';
ALTER USER CURRENT_USER SET application_name to 'FOO';
ALTER USER SESSION_USER SET application_name to 'BAR';
ALTER USER "current_user" SET application_name to 'FOOFOO';
ALTER USER "Public" SET application_name to 'BARBAR';
ALTER USER ALL SET application_name to 'SLAP';
SELECT * FROM chksetconfig();
ALTER USER regress_testrol1 SET application_name to 'SLAM';
SELECT * FROM chksetconfig();
ALTER USER CURRENT_ROLE RESET application_name;
ALTER USER CURRENT_USER RESET application_name;
ALTER USER SESSION_USER RESET application_name;
ALTER USER "current_user" RESET application_name;
ALTER USER "Public" RESET application_name;
ALTER USER ALL RESET application_name;
SELECT * FROM chksetconfig();


ALTER USER USER SET application_name to 'BOOM'; -- error
ALTER USER PUBLIC SET application_name to 'BOMB'; -- error
ALTER USER NONE SET application_name to 'BOMB'; -- error
ALTER USER nonexistent SET application_name to 'BOMB'; -- error

-- CREATE SCHEMA
CREATE SCHEMA newschema1 AUTHORIZATION CURRENT_USER;
CREATE SCHEMA newschema2 AUTHORIZATION "current_user";
CREATE SCHEMA newschema3 AUTHORIZATION CURRENT_ROLE;
CREATE SCHEMA newschema4 AUTHORIZATION SESSION_USER;
CREATE SCHEMA newschema5 AUTHORIZATION regress_testrolx;
CREATE SCHEMA newschema6 AUTHORIZATION "Public";

CREATE SCHEMA newschemax AUTHORIZATION USER; -- error
CREATE SCHEMA newschemax AUTHORIZATION PUBLIC; -- error
CREATE SCHEMA newschemax AUTHORIZATION "public"; -- error
CREATE SCHEMA newschemax AUTHORIZATION NONE; -- error
CREATE SCHEMA newschemax AUTHORIZATION nonexistent; -- error

SELECT n.nspname, r.rolname FROM pg_namespace n
 JOIN pg_roles r ON (r.oid = n.nspowner)
 WHERE n.nspname LIKE 'newschema_' ORDER BY 1;

CREATE SCHEMA IF NOT EXISTS newschema1 AUTHORIZATION CURRENT_USER;
CREATE SCHEMA IF NOT EXISTS newschema2 AUTHORIZATION "current_user";
CREATE SCHEMA IF NOT EXISTS newschema3 AUTHORIZATION CURRENT_ROLE;
CREATE SCHEMA IF NOT EXISTS newschema4 AUTHORIZATION SESSION_USER;
CREATE SCHEMA IF NOT EXISTS newschema5 AUTHORIZATION regress_testrolx;
CREATE SCHEMA IF NOT EXISTS newschema6 AUTHORIZATION "Public";

CREATE SCHEMA IF NOT EXISTS newschemax AUTHORIZATION USER; -- error
CREATE SCHEMA IF NOT EXISTS newschemax AUTHORIZATION PUBLIC; -- error
CREATE SCHEMA IF NOT EXISTS newschemax AUTHORIZATION "public"; -- error
CREATE SCHEMA IF NOT EXISTS newschemax AUTHORIZATION NONE; -- error
CREATE SCHEMA IF NOT EXISTS newschemax AUTHORIZATION nonexistent; -- error

SELECT n.nspname, r.rolname FROM pg_namespace n
 JOIN pg_roles r ON (r.oid = n.nspowner)
 WHERE n.nspname LIKE 'newschema_' ORDER BY 1;

-- ALTER TABLE OWNER TO
\c -
SET SESSION AUTHORIZATION regress_testrol0;
CREATE TABLE testtab1 (a int);
CREATE TABLE testtab2 (a int);
CREATE TABLE testtab3 (a int);
CREATE TABLE testtab4 (a int);
CREATE TABLE testtab5 (a int);
CREATE TABLE testtab6 (a int);
CREATE TABLE testtab7 (a int);

\c -
SET SESSION AUTHORIZATION regress_testrol1;
SET ROLE regress_testrol2;

ALTER TABLE testtab1 OWNER TO CURRENT_USER;
ALTER TABLE testtab2 OWNER TO "current_user";
ALTER TABLE testtab3 OWNER TO CURRENT_ROLE;
ALTER TABLE testtab4 OWNER TO SESSION_USER;
ALTER TABLE testtab5 OWNER TO regress_testrolx;
ALTER TABLE testtab6 OWNER TO "Public";

ALTER TABLE testtab7 OWNER TO USER; --error
ALTER TABLE testtab7 OWNER TO PUBLIC; -- error
ALTER TABLE testtab7 OWNER TO "public"; -- error
ALTER TABLE testtab7 OWNER TO nonexistent; -- error

SELECT c.relname, r.rolname
 FROM pg_class c JOIN pg_roles r ON (r.oid = c.relowner)
 WHERE relname LIKE 'testtab_'
 ORDER BY 1;

-- ALTER TABLE, VIEW, MATERIALIZED VIEW, FOREIGN TABLE, SEQUENCE are
-- changed their owner in the same way.

-- ALTER AGGREGATE
\c -
SET SESSION AUTHORIZATION regress_testrol0;
CREATE AGGREGATE testagg1(int2) (SFUNC = int2_sum, STYPE = int8);
CREATE AGGREGATE testagg2(int2) (SFUNC = int2_sum, STYPE = int8);
CREATE AGGREGATE testagg3(int2) (SFUNC = int2_sum, STYPE = int8);
CREATE AGGREGATE testagg4(int2) (SFUNC = int2_sum, STYPE = int8);
CREATE AGGREGATE testagg5(int2) (SFUNC = int2_sum, STYPE = int8);
CREATE AGGREGATE testagg6(int2) (SFUNC = int2_sum, STYPE = int8);
CREATE AGGREGATE testagg7(int2) (SFUNC = int2_sum, STYPE = int8);
CREATE AGGREGATE testagg8(int2) (SFUNC = int2_sum, STYPE = int8);
CREATE AGGREGATE testagg9(int2) (SFUNC = int2_sum, STYPE = int8);
CREATE AGGREGATE testagga(int2) (SFUNC = int2_sum, STYPE = int8);

\c -
SET SESSION AUTHORIZATION regress_testrol1;
SET ROLE regress_testrol2;

ALTER AGGREGATE testagg1(int2) OWNER TO CURRENT_USER;
ALTER AGGREGATE testagg2(int2) OWNER TO "current_user";
ALTER AGGREGATE testagg3(int2) OWNER TO CURRENT_ROLE;
ALTER AGGREGATE testagg4(int2) OWNER TO SESSION_USER;
ALTER AGGREGATE testagg5(int2) OWNER TO regress_testrolx;
ALTER AGGREGATE testagg6(int2) OWNER TO "Public";

ALTER AGGREGATE testagg6(int2) OWNER TO USER; -- error
ALTER AGGREGATE testagg6(int2) OWNER TO PUBLIC; -- error
ALTER AGGREGATE testagg6(int2) OWNER TO "public"; -- error
ALTER AGGREGATE testagg6(int2) OWNER TO nonexistent; -- error

SELECT p.proname, r.rolname
 FROM pg_proc p JOIN pg_roles r ON (r.oid = p.proowner)
 WHERE proname LIKE 'testagg_'
 ORDER BY 1;

-- CREATE USER MAPPING
CREATE FOREIGN DATA WRAPPER test_wrapper;
CREATE SERVER sv1 FOREIGN DATA WRAPPER test_wrapper;
CREATE SERVER sv2 FOREIGN DATA WRAPPER test_wrapper;
CREATE SERVER sv3 FOREIGN DATA WRAPPER test_wrapper;
CREATE SERVER sv4 FOREIGN DATA WRAPPER test_wrapper;
CREATE SERVER sv5 FOREIGN DATA WRAPPER test_wrapper;
CREATE SERVER sv6 FOREIGN DATA WRAPPER test_wrapper;
CREATE SERVER sv7 FOREIGN DATA WRAPPER test_wrapper;
CREATE SERVER sv8 FOREIGN DATA WRAPPER test_wrapper;
CREATE SERVER sv9 FOREIGN DATA WRAPPER test_wrapper;
CREATE SERVER sv10 FOREIGN DATA WRAPPER test_wrapper;

CREATE USER MAPPING FOR CURRENT_USER SERVER sv1 OPTIONS (user 'CURRENT_USER');
CREATE USER MAPPING FOR "current_user" SERVER sv2 OPTIONS (user '"current_user"');
CREATE USER MAPPING FOR CURRENT_ROLE SERVER sv3 OPTIONS (user 'CURRENT_ROLE');
CREATE USER MAPPING FOR USER SERVER sv4 OPTIONS (user 'USER');
CREATE USER MAPPING FOR "user" SERVER sv5 OPTIONS (user '"USER"');
CREATE USER MAPPING FOR SESSION_USER SERVER sv6 OPTIONS (user 'SESSION_USER');
CREATE USER MAPPING FOR PUBLIC SERVER sv7 OPTIONS (user 'PUBLIC');
CREATE USER MAPPING FOR "Public" SERVER sv8 OPTIONS (user '"Public"');
CREATE USER MAPPING FOR regress_testrolx SERVER sv9 OPTIONS (user 'regress_testrolx');

CREATE USER MAPPING FOR nonexistent SERVER sv10 OPTIONS (user 'nonexistent'); -- error;

SELECT * FROM chkumapping();

-- ALTER USER MAPPING
ALTER USER MAPPING FOR CURRENT_USER SERVER sv1
 OPTIONS (SET user 'CURRENT_USER_alt');
ALTER USER MAPPING FOR "current_user" SERVER sv2
 OPTIONS (SET user '"current_user"_alt');
ALTER USER MAPPING FOR CURRENT_ROLE SERVER sv3
 OPTIONS (SET user 'CURRENT_ROLE_alt');
ALTER USER MAPPING FOR USER SERVER sv4
 OPTIONS (SET user 'USER_alt');
ALTER USER MAPPING FOR "user" SERVER sv5
 OPTIONS (SET user '"user"_alt');
ALTER USER MAPPING FOR SESSION_USER SERVER sv6
 OPTIONS (SET user 'SESSION_USER_alt');
ALTER USER MAPPING FOR PUBLIC SERVER sv7
 OPTIONS (SET user 'public_alt');
ALTER USER MAPPING FOR "Public" SERVER sv8
 OPTIONS (SET user '"Public"_alt');
ALTER USER MAPPING FOR regress_testrolx SERVER sv9
 OPTIONS (SET user 'regress_testrolx_alt');

ALTER USER MAPPING FOR nonexistent SERVER sv10
 OPTIONS (SET user 'nonexistent_alt'); -- error

SELECT * FROM chkumapping();

-- DROP USER MAPPING
DROP USER MAPPING FOR CURRENT_USER SERVER sv1;
DROP USER MAPPING FOR "current_user" SERVER sv2;
DROP USER MAPPING FOR CURRENT_ROLE SERVER sv3;
DROP USER MAPPING FOR USER SERVER sv4;
DROP USER MAPPING FOR "user" SERVER sv5;
DROP USER MAPPING FOR SESSION_USER SERVER sv6;
DROP USER MAPPING FOR PUBLIC SERVER sv7;
DROP USER MAPPING FOR "Public" SERVER sv8;
DROP USER MAPPING FOR regress_testrolx SERVER sv9;

DROP USER MAPPING FOR nonexistent SERVER sv10;  -- error
SELECT * FROM chkumapping();

CREATE USER MAPPING FOR CURRENT_USER SERVER sv1 OPTIONS (user 'CURRENT_USER');
CREATE USER MAPPING FOR "current_user" SERVER sv2 OPTIONS (user '"current_user"');
CREATE USER MAPPING FOR CURRENT_ROLE SERVER sv3 OPTIONS (user 'CURRENT_ROLE');
CREATE USER MAPPING FOR USER SERVER sv4 OPTIONS (user 'USER');
CREATE USER MAPPING FOR "user" SERVER sv5 OPTIONS (user '"USER"');
CREATE USER MAPPING FOR SESSION_USER SERVER sv6 OPTIONS (user 'SESSION_USER');
CREATE USER MAPPING FOR PUBLIC SERVER sv7 OPTIONS (user 'PUBLIC');
CREATE USER MAPPING FOR "Public" SERVER sv8 OPTIONS (user '"Public"');
CREATE USER MAPPING FOR regress_testrolx SERVER sv9 OPTIONS (user 'regress_testrolx');
SELECT * FROM chkumapping();

-- DROP USER MAPPING IF EXISTS
DROP USER MAPPING IF EXISTS FOR CURRENT_USER SERVER sv1;
SELECT * FROM chkumapping();
DROP USER MAPPING IF EXISTS FOR "current_user" SERVER sv2;
SELECT * FROM chkumapping();
DROP USER MAPPING IF EXISTS FOR CURRENT_USER SERVER sv3;
SELECT * FROM chkumapping();
DROP USER MAPPING IF EXISTS FOR USER SERVER sv4;
SELECT * FROM chkumapping();
DROP USER MAPPING IF EXISTS FOR "user" SERVER sv5;
SELECT * FROM chkumapping();
DROP USER MAPPING IF EXISTS FOR SESSION_USER SERVER sv6;
SELECT * FROM chkumapping();
DROP USER MAPPING IF EXISTS FOR PUBLIC SERVER sv7;
SELECT * FROM chkumapping();
DROP USER MAPPING IF EXISTS FOR "Public" SERVER sv8;
SELECT * FROM chkumapping();
DROP USER MAPPING IF EXISTS FOR regress_testrolx SERVER sv9;
SELECT * FROM chkumapping();

DROP USER MAPPING IF EXISTS FOR nonexistent SERVER sv10;  -- error

-- GRANT/REVOKE
GRANT regress_testrol0 TO pg_signal_backend; -- success

SET ROLE pg_signal_backend; --success
RESET ROLE;
CREATE SCHEMA test_roles_schema AUTHORIZATION pg_signal_backend; --success
SET ROLE regress_testrol2;

UPDATE pg_proc SET proacl = null WHERE proname LIKE 'testagg_';
SELECT proname, proacl FROM pg_proc WHERE proname LIKE 'testagg_';

REVOKE ALL PRIVILEGES ON FUNCTION testagg1(int2) FROM PUBLIC;
REVOKE ALL PRIVILEGES ON FUNCTION testagg2(int2) FROM PUBLIC;
REVOKE ALL PRIVILEGES ON FUNCTION testagg3(int2) FROM PUBLIC;
REVOKE ALL PRIVILEGES ON FUNCTION testagg4(int2) FROM PUBLIC;
REVOKE ALL PRIVILEGES ON FUNCTION testagg5(int2) FROM PUBLIC;
REVOKE ALL PRIVILEGES ON FUNCTION testagg6(int2) FROM PUBLIC;
REVOKE ALL PRIVILEGES ON FUNCTION testagg7(int2) FROM PUBLIC;
REVOKE ALL PRIVILEGES ON FUNCTION testagg8(int2) FROM PUBLIC;

GRANT ALL PRIVILEGES ON FUNCTION testagg1(int2) TO PUBLIC;
GRANT ALL PRIVILEGES ON FUNCTION testagg2(int2) TO CURRENT_USER;
GRANT ALL PRIVILEGES ON FUNCTION testagg3(int2) TO "current_user";
GRANT ALL PRIVILEGES ON FUNCTION testagg4(int2) TO CURRENT_ROLE;
GRANT ALL PRIVILEGES ON FUNCTION testagg5(int2) TO SESSION_USER;
GRANT ALL PRIVILEGES ON FUNCTION testagg6(int2) TO "Public";
GRANT ALL PRIVILEGES ON FUNCTION testagg7(int2) TO regress_testrolx;
GRANT ALL PRIVILEGES ON FUNCTION testagg8(int2) TO "public";
GRANT ALL PRIVILEGES ON FUNCTION testagg9(int2)
 TO current_user, public, regress_testrolx;

SELECT proname, proacl FROM pg_proc WHERE proname LIKE 'testagg_';

GRANT ALL PRIVILEGES ON FUNCTION testagga(int2) TO USER; --error
GRANT ALL PRIVILEGES ON FUNCTION testagga(int2) TO NONE; --error
GRANT ALL PRIVILEGES ON FUNCTION testagga(int2) TO "none"; --error

SELECT proname, proacl FROM pg_proc WHERE proname LIKE 'testagg_';

REVOKE ALL PRIVILEGES ON FUNCTION testagg1(int2) FROM PUBLIC;
REVOKE ALL PRIVILEGES ON FUNCTION testagg2(int2) FROM CURRENT_USER;
REVOKE ALL PRIVILEGES ON FUNCTION testagg3(int2) FROM "current_user";
REVOKE ALL PRIVILEGES ON FUNCTION testagg4(int2) FROM CURRENT_ROLE;
REVOKE ALL PRIVILEGES ON FUNCTION testagg5(int2) FROM SESSION_USER;
REVOKE ALL PRIVILEGES ON FUNCTION testagg6(int2) FROM "Public";
REVOKE ALL PRIVILEGES ON FUNCTION testagg7(int2) FROM regress_testrolx;
REVOKE ALL PRIVILEGES ON FUNCTION testagg8(int2) FROM "public";
REVOKE ALL PRIVILEGES ON FUNCTION testagg9(int2)
 FROM current_user, public, regress_testrolx;

SELECT proname, proacl FROM pg_proc WHERE proname LIKE 'testagg_';

REVOKE ALL PRIVILEGES ON FUNCTION testagga(int2) FROM USER; --error
REVOKE ALL PRIVILEGES ON FUNCTION testagga(int2) FROM NONE; --error
REVOKE ALL PRIVILEGES ON FUNCTION testagga(int2) FROM "none"; --error

SELECT proname, proacl FROM pg_proc WHERE proname LIKE 'testagg_';

-- DEFAULT MONITORING ROLES
CREATE ROLE regress_role_haspriv;
CREATE ROLE regress_role_nopriv;

-- pg_read_all_stats
GRANT pg_read_all_stats TO regress_role_haspriv;
SET SESSION AUTHORIZATION regress_role_haspriv;
-- returns true with role member of pg_read_all_stats
SELECT COUNT(*) = 0 AS haspriv FROM pg_stat_activity
  WHERE query = '<insufficient privilege>';
SET SESSION AUTHORIZATION regress_role_nopriv;
-- returns false with role not member of pg_read_all_stats
SELECT COUNT(*) = 0 AS haspriv FROM pg_stat_activity
  WHERE query = '<insufficient privilege>';
RESET SESSION AUTHORIZATION;
REVOKE pg_read_all_stats FROM regress_role_haspriv;

-- pg_read_all_settings
GRANT pg_read_all_settings TO regress_role_haspriv;
BEGIN;
-- A GUC using GUC_SUPERUSER_ONLY is useful for negative tests.
SET LOCAL session_preload_libraries TO 'path-to-preload-libraries';
SET SESSION AUTHORIZATION regress_role_haspriv;
-- passes with role member of pg_read_all_settings
SHOW session_preload_libraries;
SET SESSION AUTHORIZATION regress_role_nopriv;
-- fails with role not member of pg_read_all_settings
SHOW session_preload_libraries;
RESET SESSION AUTHORIZATION;
ROLLBACK;
REVOKE pg_read_all_settings FROM regress_role_haspriv;

-- clean up
\c

DROP SCHEMA test_roles_schema;
DROP OWNED BY regress_testrol0, "Public", "current_role", "current_user", regress_testrol1, regress_testrol2, regress_testrolx CASCADE;
DROP ROLE regress_testrol0, regress_testrol1, regress_testrol2, regress_testrolx;
DROP ROLE "Public", "None", "current_role", "current_user", "session_user", "user";
DROP ROLE regress_role_haspriv, regress_role_nopriv;
