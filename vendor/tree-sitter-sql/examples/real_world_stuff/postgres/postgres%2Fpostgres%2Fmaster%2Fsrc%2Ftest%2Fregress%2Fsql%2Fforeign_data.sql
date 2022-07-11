--
-- Test foreign-data wrapper and server management.
--

-- directory paths and dlsuffix are passed to us in environment variables
\getenv libdir PG_LIBDIR
\getenv dlsuffix PG_DLSUFFIX

\set regresslib :libdir '/regress' :dlsuffix

CREATE FUNCTION test_fdw_handler()
    RETURNS fdw_handler
    AS :'regresslib', 'test_fdw_handler'
    LANGUAGE C;

-- Clean up in case a prior regression run failed

-- Suppress NOTICE messages when roles don't exist
SET client_min_messages TO 'warning';

DROP ROLE IF EXISTS regress_foreign_data_user, regress_test_role, regress_test_role2, regress_test_role_super, regress_test_indirect, regress_unprivileged_role;

RESET client_min_messages;

CREATE ROLE regress_foreign_data_user LOGIN SUPERUSER;
SET SESSION AUTHORIZATION 'regress_foreign_data_user';

CREATE ROLE regress_test_role;
CREATE ROLE regress_test_role2;
CREATE ROLE regress_test_role_super SUPERUSER;
CREATE ROLE regress_test_indirect;
CREATE ROLE regress_unprivileged_role;

CREATE FOREIGN DATA WRAPPER dummy;
COMMENT ON FOREIGN DATA WRAPPER dummy IS 'useless';
CREATE FOREIGN DATA WRAPPER postgresql VALIDATOR postgresql_fdw_validator;

-- At this point we should have 2 built-in wrappers and no servers.
SELECT fdwname, fdwhandler::regproc, fdwvalidator::regproc, fdwoptions FROM pg_foreign_data_wrapper ORDER BY 1, 2, 3;
SELECT srvname, srvoptions FROM pg_foreign_server;
SELECT * FROM pg_user_mapping;

-- CREATE FOREIGN DATA WRAPPER
CREATE FOREIGN DATA WRAPPER foo VALIDATOR bar;            -- ERROR
CREATE FOREIGN DATA WRAPPER foo;
\dew

CREATE FOREIGN DATA WRAPPER foo; -- duplicate
DROP FOREIGN DATA WRAPPER foo;
CREATE FOREIGN DATA WRAPPER foo OPTIONS (testing '1');
\dew+

DROP FOREIGN DATA WRAPPER foo;
CREATE FOREIGN DATA WRAPPER foo OPTIONS (testing '1', testing '2');   -- ERROR
CREATE FOREIGN DATA WRAPPER foo OPTIONS (testing '1', another '2');
\dew+

DROP FOREIGN DATA WRAPPER foo;
SET ROLE regress_test_role;
CREATE FOREIGN DATA WRAPPER foo; -- ERROR
RESET ROLE;
CREATE FOREIGN DATA WRAPPER foo VALIDATOR postgresql_fdw_validator;
\dew+

-- HANDLER related checks
CREATE FUNCTION invalid_fdw_handler() RETURNS int LANGUAGE SQL AS 'SELECT 1;';
CREATE FOREIGN DATA WRAPPER test_fdw HANDLER invalid_fdw_handler;  -- ERROR
CREATE FOREIGN DATA WRAPPER test_fdw HANDLER test_fdw_handler HANDLER invalid_fdw_handler;  -- ERROR
CREATE FOREIGN DATA WRAPPER test_fdw HANDLER test_fdw_handler;
DROP FOREIGN DATA WRAPPER test_fdw;

-- ALTER FOREIGN DATA WRAPPER
ALTER FOREIGN DATA WRAPPER foo OPTIONS (nonexistent 'fdw');         -- ERROR

ALTER FOREIGN DATA WRAPPER foo;                             -- ERROR
ALTER FOREIGN DATA WRAPPER foo VALIDATOR bar;               -- ERROR
ALTER FOREIGN DATA WRAPPER foo NO VALIDATOR;
\dew+

ALTER FOREIGN DATA WRAPPER foo OPTIONS (a '1', b '2');
ALTER FOREIGN DATA WRAPPER foo OPTIONS (SET c '4');         -- ERROR
ALTER FOREIGN DATA WRAPPER foo OPTIONS (DROP c);            -- ERROR
ALTER FOREIGN DATA WRAPPER foo OPTIONS (ADD x '1', DROP x);
\dew+

ALTER FOREIGN DATA WRAPPER foo OPTIONS (DROP a, SET b '3', ADD c '4');
\dew+

ALTER FOREIGN DATA WRAPPER foo OPTIONS (a '2');
ALTER FOREIGN DATA WRAPPER foo OPTIONS (b '4');             -- ERROR
\dew+

SET ROLE regress_test_role;
ALTER FOREIGN DATA WRAPPER foo OPTIONS (ADD d '5');         -- ERROR
SET ROLE regress_test_role_super;
ALTER FOREIGN DATA WRAPPER foo OPTIONS (ADD d '5');
\dew+

ALTER FOREIGN DATA WRAPPER foo OWNER TO regress_test_role;  -- ERROR
ALTER FOREIGN DATA WRAPPER foo OWNER TO regress_test_role_super;
ALTER ROLE regress_test_role_super NOSUPERUSER;
SET ROLE regress_test_role_super;
ALTER FOREIGN DATA WRAPPER foo OPTIONS (ADD e '6');         -- ERROR
RESET ROLE;
\dew+

ALTER FOREIGN DATA WRAPPER foo RENAME TO foo1;
\dew+
ALTER FOREIGN DATA WRAPPER foo1 RENAME TO foo;

-- HANDLER related checks
ALTER FOREIGN DATA WRAPPER foo HANDLER invalid_fdw_handler;  -- ERROR
ALTER FOREIGN DATA WRAPPER foo HANDLER test_fdw_handler HANDLER anything;  -- ERROR
ALTER FOREIGN DATA WRAPPER foo HANDLER test_fdw_handler;
DROP FUNCTION invalid_fdw_handler();

-- DROP FOREIGN DATA WRAPPER
DROP FOREIGN DATA WRAPPER nonexistent;                      -- ERROR
DROP FOREIGN DATA WRAPPER IF EXISTS nonexistent;
\dew+

DROP ROLE regress_test_role_super;                          -- ERROR
SET ROLE regress_test_role_super;
DROP FOREIGN DATA WRAPPER foo;
RESET ROLE;
DROP ROLE regress_test_role_super;
\dew+

CREATE FOREIGN DATA WRAPPER foo;
CREATE SERVER s1 FOREIGN DATA WRAPPER foo;
COMMENT ON SERVER s1 IS 'foreign server';
CREATE USER MAPPING FOR current_user SERVER s1;
CREATE USER MAPPING FOR current_user SERVER s1;				-- ERROR
CREATE USER MAPPING IF NOT EXISTS FOR current_user SERVER s1; -- NOTICE
\dew+
\des+
\deu+
DROP FOREIGN DATA WRAPPER foo;                              -- ERROR
SET ROLE regress_test_role;
DROP FOREIGN DATA WRAPPER foo CASCADE;                      -- ERROR
RESET ROLE;
DROP FOREIGN DATA WRAPPER foo CASCADE;
\dew+
\des+
\deu+

-- exercise CREATE SERVER
CREATE SERVER s1 FOREIGN DATA WRAPPER foo;                  -- ERROR
CREATE FOREIGN DATA WRAPPER foo OPTIONS ("test wrapper" 'true');
CREATE SERVER s1 FOREIGN DATA WRAPPER foo;
CREATE SERVER s1 FOREIGN DATA WRAPPER foo;                  -- ERROR
CREATE SERVER IF NOT EXISTS s1 FOREIGN DATA WRAPPER foo;	-- No ERROR, just NOTICE
CREATE SERVER s2 FOREIGN DATA WRAPPER foo OPTIONS (host 'a', dbname 'b');
CREATE SERVER s3 TYPE 'oracle' FOREIGN DATA WRAPPER foo;
CREATE SERVER s4 TYPE 'oracle' FOREIGN DATA WRAPPER foo OPTIONS (host 'a', dbname 'b');
CREATE SERVER s5 VERSION '15.0' FOREIGN DATA WRAPPER foo;
CREATE SERVER s6 VERSION '16.0' FOREIGN DATA WRAPPER foo OPTIONS (host 'a', dbname 'b');
CREATE SERVER s7 TYPE 'oracle' VERSION '17.0' FOREIGN DATA WRAPPER foo OPTIONS (host 'a', dbname 'b');
CREATE SERVER s8 FOREIGN DATA WRAPPER postgresql OPTIONS (foo '1'); -- ERROR
CREATE SERVER s8 FOREIGN DATA WRAPPER postgresql OPTIONS (host 'localhost', dbname 's8db');
\des+
SET ROLE regress_test_role;
CREATE SERVER t1 FOREIGN DATA WRAPPER foo;                 -- ERROR: no usage on FDW
RESET ROLE;
GRANT USAGE ON FOREIGN DATA WRAPPER foo TO regress_test_role;
SET ROLE regress_test_role;
CREATE SERVER t1 FOREIGN DATA WRAPPER foo;
RESET ROLE;
\des+

REVOKE USAGE ON FOREIGN DATA WRAPPER foo FROM regress_test_role;
GRANT USAGE ON FOREIGN DATA WRAPPER foo TO regress_test_indirect;
SET ROLE regress_test_role;
CREATE SERVER t2 FOREIGN DATA WRAPPER foo;                 -- ERROR
RESET ROLE;
GRANT regress_test_indirect TO regress_test_role;
SET ROLE regress_test_role;
CREATE SERVER t2 FOREIGN DATA WRAPPER foo;
\des+
RESET ROLE;
REVOKE regress_test_indirect FROM regress_test_role;

-- ALTER SERVER
ALTER SERVER s0;                                            -- ERROR
ALTER SERVER s0 OPTIONS (a '1');                            -- ERROR
ALTER SERVER s1 VERSION '1.0' OPTIONS (servername 's1');
ALTER SERVER s2 VERSION '1.1';
ALTER SERVER s3 OPTIONS ("tns name" 'orcl', port '1521');
GRANT USAGE ON FOREIGN SERVER s1 TO regress_test_role;
GRANT USAGE ON FOREIGN SERVER s6 TO regress_test_role2 WITH GRANT OPTION;
\des+
SET ROLE regress_test_role;
ALTER SERVER s1 VERSION '1.1';                              -- ERROR
ALTER SERVER s1 OWNER TO regress_test_role;                 -- ERROR
RESET ROLE;
ALTER SERVER s1 OWNER TO regress_test_role;
GRANT regress_test_role2 TO regress_test_role;
SET ROLE regress_test_role;
ALTER SERVER s1 VERSION '1.1';
ALTER SERVER s1 OWNER TO regress_test_role2;                -- ERROR
RESET ROLE;
ALTER SERVER s8 OPTIONS (foo '1');                          -- ERROR option validation
ALTER SERVER s8 OPTIONS (connect_timeout '30', SET dbname 'db1', DROP host);
SET ROLE regress_test_role;
ALTER SERVER s1 OWNER TO regress_test_indirect;             -- ERROR
RESET ROLE;
GRANT regress_test_indirect TO regress_test_role;
SET ROLE regress_test_role;
ALTER SERVER s1 OWNER TO regress_test_indirect;
RESET ROLE;
GRANT USAGE ON FOREIGN DATA WRAPPER foo TO regress_test_indirect;
SET ROLE regress_test_role;
ALTER SERVER s1 OWNER TO regress_test_indirect;
RESET ROLE;
DROP ROLE regress_test_indirect;                            -- ERROR
\des+

ALTER SERVER s8 RENAME to s8new;
\des+
ALTER SERVER s8new RENAME to s8;

-- DROP SERVER
DROP SERVER nonexistent;                                    -- ERROR
DROP SERVER IF EXISTS nonexistent;
\des
SET ROLE regress_test_role;
DROP SERVER s2;                                             -- ERROR
DROP SERVER s1;
RESET ROLE;
\des
ALTER SERVER s2 OWNER TO regress_test_role;
SET ROLE regress_test_role;
DROP SERVER s2;
RESET ROLE;
\des
CREATE USER MAPPING FOR current_user SERVER s3;
\deu
DROP SERVER s3;                                             -- ERROR
DROP SERVER s3 CASCADE;
\des
\deu

-- CREATE USER MAPPING
CREATE USER MAPPING FOR regress_test_missing_role SERVER s1;  -- ERROR
CREATE USER MAPPING FOR current_user SERVER s1;             -- ERROR
CREATE USER MAPPING FOR current_user SERVER s4;
CREATE USER MAPPING FOR user SERVER s4;                     -- ERROR duplicate
CREATE USER MAPPING FOR public SERVER s4 OPTIONS ("this mapping" 'is public');
CREATE USER MAPPING FOR user SERVER s8 OPTIONS (username 'test', password 'secret');    -- ERROR
CREATE USER MAPPING FOR user SERVER s8 OPTIONS (user 'test', password 'secret');
ALTER SERVER s5 OWNER TO regress_test_role;
ALTER SERVER s6 OWNER TO regress_test_indirect;
SET ROLE regress_test_role;
CREATE USER MAPPING FOR current_user SERVER s5;
CREATE USER MAPPING FOR current_user SERVER s6 OPTIONS (username 'test');
CREATE USER MAPPING FOR current_user SERVER s7;             -- ERROR
CREATE USER MAPPING FOR public SERVER s8;                   -- ERROR
RESET ROLE;

ALTER SERVER t1 OWNER TO regress_test_indirect;
SET ROLE regress_test_role;
CREATE USER MAPPING FOR current_user SERVER t1 OPTIONS (username 'bob', password 'boo');
CREATE USER MAPPING FOR public SERVER t1;
RESET ROLE;
\deu

-- ALTER USER MAPPING
ALTER USER MAPPING FOR regress_test_missing_role SERVER s4 OPTIONS (gotcha 'true'); -- ERROR
ALTER USER MAPPING FOR user SERVER ss4 OPTIONS (gotcha 'true'); -- ERROR
ALTER USER MAPPING FOR public SERVER s5 OPTIONS (gotcha 'true');            -- ERROR
ALTER USER MAPPING FOR current_user SERVER s8 OPTIONS (username 'test');    -- ERROR
ALTER USER MAPPING FOR current_user SERVER s8 OPTIONS (DROP user, SET password 'public');
SET ROLE regress_test_role;
ALTER USER MAPPING FOR current_user SERVER s5 OPTIONS (ADD modified '1');
ALTER USER MAPPING FOR public SERVER s4 OPTIONS (ADD modified '1'); -- ERROR
ALTER USER MAPPING FOR public SERVER t1 OPTIONS (ADD modified '1');
RESET ROLE;
\deu+

-- DROP USER MAPPING
DROP USER MAPPING FOR regress_test_missing_role SERVER s4;  -- ERROR
DROP USER MAPPING FOR user SERVER ss4;
DROP USER MAPPING FOR public SERVER s7;                     -- ERROR
DROP USER MAPPING IF EXISTS FOR regress_test_missing_role SERVER s4;
DROP USER MAPPING IF EXISTS FOR user SERVER ss4;
DROP USER MAPPING IF EXISTS FOR public SERVER s7;
CREATE USER MAPPING FOR public SERVER s8;
SET ROLE regress_test_role;
DROP USER MAPPING FOR public SERVER s8;                     -- ERROR
RESET ROLE;
DROP SERVER s7;
\deu

-- CREATE FOREIGN TABLE
CREATE SCHEMA foreign_schema;
CREATE SERVER s0 FOREIGN DATA WRAPPER dummy;
CREATE FOREIGN TABLE ft1 ();                                    -- ERROR
CREATE FOREIGN TABLE ft1 () SERVER no_server;                   -- ERROR
CREATE FOREIGN TABLE ft1 (
	c1 integer OPTIONS ("param 1" 'val1') PRIMARY KEY,
	c2 text OPTIONS (param2 'val2', param3 'val3'),
	c3 date
) SERVER s0 OPTIONS (delimiter ',', quote '"', "be quoted" 'value'); -- ERROR
CREATE TABLE ref_table (id integer PRIMARY KEY);
CREATE FOREIGN TABLE ft1 (
	c1 integer OPTIONS ("param 1" 'val1') REFERENCES ref_table (id),
	c2 text OPTIONS (param2 'val2', param3 'val3'),
	c3 date
) SERVER s0 OPTIONS (delimiter ',', quote '"', "be quoted" 'value'); -- ERROR
DROP TABLE ref_table;
CREATE FOREIGN TABLE ft1 (
	c1 integer OPTIONS ("param 1" 'val1') NOT NULL,
	c2 text OPTIONS (param2 'val2', param3 'val3'),
	c3 date,
	UNIQUE (c3)
) SERVER s0 OPTIONS (delimiter ',', quote '"', "be quoted" 'value'); -- ERROR
CREATE FOREIGN TABLE ft1 (
	c1 integer OPTIONS ("param 1" 'val1') NOT NULL,
	c2 text OPTIONS (param2 'val2', param3 'val3') CHECK (c2 <> ''),
	c3 date,
	CHECK (c3 BETWEEN '1994-01-01'::date AND '1994-01-31'::date)
) SERVER s0 OPTIONS (delimiter ',', quote '"', "be quoted" 'value');
COMMENT ON FOREIGN TABLE ft1 IS 'ft1';
COMMENT ON COLUMN ft1.c1 IS 'ft1.c1';
\d+ ft1
\det+
CREATE INDEX id_ft1_c2 ON ft1 (c2);                             -- ERROR
SELECT * FROM ft1;                                              -- ERROR
EXPLAIN SELECT * FROM ft1;                                      -- ERROR

CREATE TABLE lt1 (a INT) PARTITION BY RANGE (a);
CREATE FOREIGN TABLE ft_part1
  PARTITION OF lt1 FOR VALUES FROM (0) TO (1000) SERVER s0;
CREATE INDEX ON lt1 (a);                              -- skips partition
CREATE UNIQUE INDEX ON lt1 (a);                                 -- ERROR
ALTER TABLE lt1 ADD PRIMARY KEY (a);                            -- ERROR
DROP TABLE lt1;

CREATE TABLE lt1 (a INT) PARTITION BY RANGE (a);
CREATE INDEX ON lt1 (a);
CREATE FOREIGN TABLE ft_part1
  PARTITION OF lt1 FOR VALUES FROM (0) TO (1000) SERVER s0;
CREATE FOREIGN TABLE ft_part2 (a INT) SERVER s0;
ALTER TABLE lt1 ATTACH PARTITION ft_part2 FOR VALUES FROM (1000) TO (2000);
DROP FOREIGN TABLE ft_part1, ft_part2;
CREATE UNIQUE INDEX ON lt1 (a);
ALTER TABLE lt1 ADD PRIMARY KEY (a);
CREATE FOREIGN TABLE ft_part1
  PARTITION OF lt1 FOR VALUES FROM (0) TO (1000) SERVER s0;     -- ERROR
CREATE FOREIGN TABLE ft_part2 (a INT NOT NULL) SERVER s0;
ALTER TABLE lt1 ATTACH PARTITION ft_part2
  FOR VALUES FROM (1000) TO (2000);                             -- ERROR
DROP TABLE lt1;
DROP FOREIGN TABLE ft_part2;

CREATE TABLE lt1 (a INT) PARTITION BY RANGE (a);
CREATE INDEX ON lt1 (a);
CREATE TABLE lt1_part1
  PARTITION OF lt1 FOR VALUES FROM (0) TO (1000)
  PARTITION BY RANGE (a);
CREATE FOREIGN TABLE ft_part_1_1
  PARTITION OF lt1_part1 FOR VALUES FROM (0) TO (100) SERVER s0;
CREATE FOREIGN TABLE ft_part_1_2 (a INT) SERVER s0;
ALTER TABLE lt1_part1 ATTACH PARTITION ft_part_1_2 FOR VALUES FROM (100) TO (200);
CREATE UNIQUE INDEX ON lt1 (a);
ALTER TABLE lt1 ADD PRIMARY KEY (a);
DROP FOREIGN TABLE ft_part_1_1, ft_part_1_2;
CREATE UNIQUE INDEX ON lt1 (a);
ALTER TABLE lt1 ADD PRIMARY KEY (a);
CREATE FOREIGN TABLE ft_part_1_1
  PARTITION OF lt1_part1 FOR VALUES FROM (0) TO (100) SERVER s0;
CREATE FOREIGN TABLE ft_part_1_2 (a INT NOT NULL) SERVER s0;
ALTER TABLE lt1_part1 ATTACH PARTITION ft_part_1_2 FOR VALUES FROM (100) TO (200);
DROP TABLE lt1;
DROP FOREIGN TABLE ft_part_1_2;

-- ALTER FOREIGN TABLE
COMMENT ON FOREIGN TABLE ft1 IS 'foreign table';
COMMENT ON FOREIGN TABLE ft1 IS NULL;
COMMENT ON COLUMN ft1.c1 IS 'foreign column';
COMMENT ON COLUMN ft1.c1 IS NULL;

ALTER FOREIGN TABLE ft1 ADD COLUMN c4 integer;
ALTER FOREIGN TABLE ft1 ADD COLUMN c5 integer DEFAULT 0;
ALTER FOREIGN TABLE ft1 ADD COLUMN c6 integer;
ALTER FOREIGN TABLE ft1 ADD COLUMN c7 integer NOT NULL;
ALTER FOREIGN TABLE ft1 ADD COLUMN c8 integer;
ALTER FOREIGN TABLE ft1 ADD COLUMN c9 integer;
ALTER FOREIGN TABLE ft1 ADD COLUMN c10 integer OPTIONS (p1 'v1');

ALTER FOREIGN TABLE ft1 ALTER COLUMN c4 SET DEFAULT 0;
ALTER FOREIGN TABLE ft1 ALTER COLUMN c5 DROP DEFAULT;
ALTER FOREIGN TABLE ft1 ALTER COLUMN c6 SET NOT NULL;
ALTER FOREIGN TABLE ft1 ALTER COLUMN c7 DROP NOT NULL;
ALTER FOREIGN TABLE ft1 ALTER COLUMN c8 TYPE char(10) USING '0'; -- ERROR
ALTER FOREIGN TABLE ft1 ALTER COLUMN c8 TYPE char(10);
ALTER FOREIGN TABLE ft1 ALTER COLUMN c8 SET DATA TYPE text;
ALTER FOREIGN TABLE ft1 ALTER COLUMN xmin OPTIONS (ADD p1 'v1'); -- ERROR
ALTER FOREIGN TABLE ft1 ALTER COLUMN c7 OPTIONS (ADD p1 'v1', ADD p2 'v2'),
                        ALTER COLUMN c8 OPTIONS (ADD p1 'v1', ADD p2 'v2');
ALTER FOREIGN TABLE ft1 ALTER COLUMN c8 OPTIONS (SET p2 'V2', DROP p1);
ALTER FOREIGN TABLE ft1 ALTER COLUMN c1 SET STATISTICS 10000;
ALTER FOREIGN TABLE ft1 ALTER COLUMN c1 SET (n_distinct = 100);
ALTER FOREIGN TABLE ft1 ALTER COLUMN c8 SET STATISTICS -1;
ALTER FOREIGN TABLE ft1 ALTER COLUMN c8 SET STORAGE PLAIN;
\d+ ft1
-- can't change the column type if it's used elsewhere
CREATE TABLE use_ft1_column_type (x ft1);
ALTER FOREIGN TABLE ft1 ALTER COLUMN c8 SET DATA TYPE integer;	-- ERROR
DROP TABLE use_ft1_column_type;
ALTER FOREIGN TABLE ft1 ADD PRIMARY KEY (c7);                   -- ERROR
ALTER FOREIGN TABLE ft1 ADD CONSTRAINT ft1_c9_check CHECK (c9 < 0) NOT VALID;
ALTER FOREIGN TABLE ft1 ALTER CONSTRAINT ft1_c9_check DEFERRABLE; -- ERROR
ALTER FOREIGN TABLE ft1 DROP CONSTRAINT ft1_c9_check;
ALTER FOREIGN TABLE ft1 DROP CONSTRAINT no_const;               -- ERROR
ALTER FOREIGN TABLE ft1 DROP CONSTRAINT IF EXISTS no_const;
ALTER FOREIGN TABLE ft1 OWNER TO regress_test_role;
ALTER FOREIGN TABLE ft1 OPTIONS (DROP delimiter, SET quote '~', ADD escape '@');
ALTER FOREIGN TABLE ft1 DROP COLUMN no_column;                  -- ERROR
ALTER FOREIGN TABLE ft1 DROP COLUMN IF EXISTS no_column;
ALTER FOREIGN TABLE ft1 DROP COLUMN c9;
ALTER FOREIGN TABLE ft1 SET SCHEMA foreign_schema;
ALTER FOREIGN TABLE ft1 SET TABLESPACE ts;                      -- ERROR
ALTER FOREIGN TABLE foreign_schema.ft1 RENAME c1 TO foreign_column_1;
ALTER FOREIGN TABLE foreign_schema.ft1 RENAME TO foreign_table_1;
\d foreign_schema.foreign_table_1

-- alter noexisting table
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 ADD COLUMN c4 integer;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 ADD COLUMN c6 integer;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 ADD COLUMN c7 integer NOT NULL;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 ADD COLUMN c8 integer;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 ADD COLUMN c9 integer;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 ADD COLUMN c10 integer OPTIONS (p1 'v1');

ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 ALTER COLUMN c6 SET NOT NULL;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 ALTER COLUMN c7 DROP NOT NULL;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 ALTER COLUMN c8 TYPE char(10);
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 ALTER COLUMN c8 SET DATA TYPE text;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 ALTER COLUMN c7 OPTIONS (ADD p1 'v1', ADD p2 'v2'),
                        ALTER COLUMN c8 OPTIONS (ADD p1 'v1', ADD p2 'v2');
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 ALTER COLUMN c8 OPTIONS (SET p2 'V2', DROP p1);

ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 DROP CONSTRAINT IF EXISTS no_const;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 DROP CONSTRAINT ft1_c1_check;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 OWNER TO regress_test_role;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 OPTIONS (DROP delimiter, SET quote '~', ADD escape '@');
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 DROP COLUMN IF EXISTS no_column;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 DROP COLUMN c9;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 SET SCHEMA foreign_schema;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 RENAME c1 TO foreign_column_1;
ALTER FOREIGN TABLE IF EXISTS doesnt_exist_ft1 RENAME TO foreign_table_1;

-- Information schema

SELECT * FROM information_schema.foreign_data_wrappers ORDER BY 1, 2;
SELECT * FROM information_schema.foreign_data_wrapper_options ORDER BY 1, 2, 3;
SELECT * FROM information_schema.foreign_servers ORDER BY 1, 2;
SELECT * FROM information_schema.foreign_server_options ORDER BY 1, 2, 3;
SELECT * FROM information_schema.user_mappings ORDER BY lower(authorization_identifier), 2, 3;
SELECT * FROM information_schema.user_mapping_options ORDER BY lower(authorization_identifier), 2, 3, 4;
SELECT * FROM information_schema.usage_privileges WHERE object_type LIKE 'FOREIGN%' AND object_name IN ('s6', 'foo') ORDER BY 1, 2, 3, 4, 5;
SELECT * FROM information_schema.role_usage_grants WHERE object_type LIKE 'FOREIGN%' AND object_name IN ('s6', 'foo') ORDER BY 1, 2, 3, 4, 5;
SELECT * FROM information_schema.foreign_tables ORDER BY 1, 2, 3;
SELECT * FROM information_schema.foreign_table_options ORDER BY 1, 2, 3, 4;
SET ROLE regress_test_role;
SELECT * FROM information_schema.user_mapping_options ORDER BY 1, 2, 3, 4;
SELECT * FROM information_schema.usage_privileges WHERE object_type LIKE 'FOREIGN%' AND object_name IN ('s6', 'foo') ORDER BY 1, 2, 3, 4, 5;
SELECT * FROM information_schema.role_usage_grants WHERE object_type LIKE 'FOREIGN%' AND object_name IN ('s6', 'foo') ORDER BY 1, 2, 3, 4, 5;
DROP USER MAPPING FOR current_user SERVER t1;
SET ROLE regress_test_role2;
SELECT * FROM information_schema.user_mapping_options ORDER BY 1, 2, 3, 4;
RESET ROLE;


-- has_foreign_data_wrapper_privilege
SELECT has_foreign_data_wrapper_privilege('regress_test_role',
    (SELECT oid FROM pg_foreign_data_wrapper WHERE fdwname='foo'), 'USAGE');
SELECT has_foreign_data_wrapper_privilege('regress_test_role', 'foo', 'USAGE');
SELECT has_foreign_data_wrapper_privilege(
    (SELECT oid FROM pg_roles WHERE rolname='regress_test_role'),
    (SELECT oid FROM pg_foreign_data_wrapper WHERE fdwname='foo'), 'USAGE');
SELECT has_foreign_data_wrapper_privilege(
    (SELECT oid FROM pg_foreign_data_wrapper WHERE fdwname='foo'), 'USAGE');
SELECT has_foreign_data_wrapper_privilege(
    (SELECT oid FROM pg_roles WHERE rolname='regress_test_role'), 'foo', 'USAGE');
SELECT has_foreign_data_wrapper_privilege('foo', 'USAGE');
GRANT USAGE ON FOREIGN DATA WRAPPER foo TO regress_test_role;
SELECT has_foreign_data_wrapper_privilege('regress_test_role', 'foo', 'USAGE');

-- has_server_privilege
SELECT has_server_privilege('regress_test_role',
    (SELECT oid FROM pg_foreign_server WHERE srvname='s8'), 'USAGE');
SELECT has_server_privilege('regress_test_role', 's8', 'USAGE');
SELECT has_server_privilege(
    (SELECT oid FROM pg_roles WHERE rolname='regress_test_role'),
    (SELECT oid FROM pg_foreign_server WHERE srvname='s8'), 'USAGE');
SELECT has_server_privilege(
    (SELECT oid FROM pg_foreign_server WHERE srvname='s8'), 'USAGE');
SELECT has_server_privilege(
    (SELECT oid FROM pg_roles WHERE rolname='regress_test_role'), 's8', 'USAGE');
SELECT has_server_privilege('s8', 'USAGE');
GRANT USAGE ON FOREIGN SERVER s8 TO regress_test_role;
SELECT has_server_privilege('regress_test_role', 's8', 'USAGE');
REVOKE USAGE ON FOREIGN SERVER s8 FROM regress_test_role;

GRANT USAGE ON FOREIGN SERVER s4 TO regress_test_role;
DROP USER MAPPING FOR public SERVER s4;
ALTER SERVER s6 OPTIONS (DROP host, DROP dbname);
ALTER USER MAPPING FOR regress_test_role SERVER s6 OPTIONS (DROP username);
ALTER FOREIGN DATA WRAPPER foo VALIDATOR postgresql_fdw_validator;

-- Privileges
SET ROLE regress_unprivileged_role;
CREATE FOREIGN DATA WRAPPER foobar;                             -- ERROR
ALTER FOREIGN DATA WRAPPER foo OPTIONS (gotcha 'true');         -- ERROR
ALTER FOREIGN DATA WRAPPER foo OWNER TO regress_unprivileged_role; -- ERROR
DROP FOREIGN DATA WRAPPER foo;                                  -- ERROR
GRANT USAGE ON FOREIGN DATA WRAPPER foo TO regress_test_role;   -- ERROR
CREATE SERVER s9 FOREIGN DATA WRAPPER foo;                      -- ERROR
ALTER SERVER s4 VERSION '0.5';                                  -- ERROR
ALTER SERVER s4 OWNER TO regress_unprivileged_role;             -- ERROR
DROP SERVER s4;                                                 -- ERROR
GRANT USAGE ON FOREIGN SERVER s4 TO regress_test_role;          -- ERROR
CREATE USER MAPPING FOR public SERVER s4;                       -- ERROR
ALTER USER MAPPING FOR regress_test_role SERVER s6 OPTIONS (gotcha 'true'); -- ERROR
DROP USER MAPPING FOR regress_test_role SERVER s6;              -- ERROR
RESET ROLE;

GRANT USAGE ON FOREIGN DATA WRAPPER postgresql TO regress_unprivileged_role;
GRANT USAGE ON FOREIGN DATA WRAPPER foo TO regress_unprivileged_role WITH GRANT OPTION;
SET ROLE regress_unprivileged_role;
CREATE FOREIGN DATA WRAPPER foobar;                             -- ERROR
ALTER FOREIGN DATA WRAPPER foo OPTIONS (gotcha 'true');         -- ERROR
DROP FOREIGN DATA WRAPPER foo;                                  -- ERROR
GRANT USAGE ON FOREIGN DATA WRAPPER postgresql TO regress_test_role; -- WARNING
GRANT USAGE ON FOREIGN DATA WRAPPER foo TO regress_test_role;
CREATE SERVER s9 FOREIGN DATA WRAPPER postgresql;
ALTER SERVER s6 VERSION '0.5';                                  -- ERROR
DROP SERVER s6;                                                 -- ERROR
GRANT USAGE ON FOREIGN SERVER s6 TO regress_test_role;          -- ERROR
GRANT USAGE ON FOREIGN SERVER s9 TO regress_test_role;
CREATE USER MAPPING FOR public SERVER s6;                       -- ERROR
CREATE USER MAPPING FOR public SERVER s9;
ALTER USER MAPPING FOR regress_test_role SERVER s6 OPTIONS (gotcha 'true'); -- ERROR
DROP USER MAPPING FOR regress_test_role SERVER s6;              -- ERROR
RESET ROLE;

REVOKE USAGE ON FOREIGN DATA WRAPPER foo FROM regress_unprivileged_role; -- ERROR
REVOKE USAGE ON FOREIGN DATA WRAPPER foo FROM regress_unprivileged_role CASCADE;
SET ROLE regress_unprivileged_role;
GRANT USAGE ON FOREIGN DATA WRAPPER foo TO regress_test_role;   -- ERROR
CREATE SERVER s10 FOREIGN DATA WRAPPER foo;                     -- ERROR
ALTER SERVER s9 VERSION '1.1';
GRANT USAGE ON FOREIGN SERVER s9 TO regress_test_role;
CREATE USER MAPPING FOR current_user SERVER s9;
DROP SERVER s9 CASCADE;
RESET ROLE;
CREATE SERVER s9 FOREIGN DATA WRAPPER foo;
GRANT USAGE ON FOREIGN SERVER s9 TO regress_unprivileged_role;
SET ROLE regress_unprivileged_role;
ALTER SERVER s9 VERSION '1.2';                                  -- ERROR
GRANT USAGE ON FOREIGN SERVER s9 TO regress_test_role;          -- WARNING
CREATE USER MAPPING FOR current_user SERVER s9;
DROP SERVER s9 CASCADE;                                         -- ERROR

-- Check visibility of user mapping data
SET ROLE regress_test_role;
CREATE SERVER s10 FOREIGN DATA WRAPPER foo;
CREATE USER MAPPING FOR public SERVER s10 OPTIONS (user 'secret');
CREATE USER MAPPING FOR regress_unprivileged_role SERVER s10 OPTIONS (user 'secret');
-- owner of server can see some option fields
\deu+
RESET ROLE;
-- superuser can see all option fields
\deu+
-- unprivileged user cannot see any option field
SET ROLE regress_unprivileged_role;
\deu+
RESET ROLE;
DROP SERVER s10 CASCADE;

-- Triggers
CREATE FUNCTION dummy_trigger() RETURNS TRIGGER AS $$
  BEGIN
    RETURN NULL;
  END
$$ language plpgsql;

CREATE TRIGGER trigtest_before_stmt BEFORE INSERT OR UPDATE OR DELETE
ON foreign_schema.foreign_table_1
FOR EACH STATEMENT
EXECUTE PROCEDURE dummy_trigger();

CREATE TRIGGER trigtest_after_stmt AFTER INSERT OR UPDATE OR DELETE
ON foreign_schema.foreign_table_1
FOR EACH STATEMENT
EXECUTE PROCEDURE dummy_trigger();

CREATE TRIGGER trigtest_after_stmt_tt AFTER INSERT OR UPDATE OR DELETE -- ERROR
ON foreign_schema.foreign_table_1
REFERENCING NEW TABLE AS new_table
FOR EACH STATEMENT
EXECUTE PROCEDURE dummy_trigger();

CREATE TRIGGER trigtest_before_row BEFORE INSERT OR UPDATE OR DELETE
ON foreign_schema.foreign_table_1
FOR EACH ROW
EXECUTE PROCEDURE dummy_trigger();

CREATE TRIGGER trigtest_after_row AFTER INSERT OR UPDATE OR DELETE
ON foreign_schema.foreign_table_1
FOR EACH ROW
EXECUTE PROCEDURE dummy_trigger();

CREATE CONSTRAINT TRIGGER trigtest_constraint AFTER INSERT OR UPDATE OR DELETE
ON foreign_schema.foreign_table_1
FOR EACH ROW
EXECUTE PROCEDURE dummy_trigger();

ALTER FOREIGN TABLE foreign_schema.foreign_table_1
	DISABLE TRIGGER trigtest_before_stmt;
ALTER FOREIGN TABLE foreign_schema.foreign_table_1
	ENABLE TRIGGER trigtest_before_stmt;

DROP TRIGGER trigtest_before_stmt ON foreign_schema.foreign_table_1;
DROP TRIGGER trigtest_before_row ON foreign_schema.foreign_table_1;
DROP TRIGGER trigtest_after_stmt ON foreign_schema.foreign_table_1;
DROP TRIGGER trigtest_after_row ON foreign_schema.foreign_table_1;

DROP FUNCTION dummy_trigger();

-- Table inheritance
CREATE TABLE fd_pt1 (
	c1 integer NOT NULL,
	c2 text,
	c3 date
);
CREATE FOREIGN TABLE ft2 () INHERITS (fd_pt1)
  SERVER s0 OPTIONS (delimiter ',', quote '"', "be quoted" 'value');
\d+ fd_pt1
\d+ ft2
DROP FOREIGN TABLE ft2;
\d+ fd_pt1
CREATE FOREIGN TABLE ft2 (
	c1 integer NOT NULL,
	c2 text,
	c3 date
) SERVER s0 OPTIONS (delimiter ',', quote '"', "be quoted" 'value');
\d+ ft2
ALTER FOREIGN TABLE ft2 INHERIT fd_pt1;
\d+ fd_pt1
\d+ ft2
CREATE TABLE ct3() INHERITS(ft2);
CREATE FOREIGN TABLE ft3 (
	c1 integer NOT NULL,
	c2 text,
	c3 date
) INHERITS(ft2)
  SERVER s0;
\d+ ft2
\d+ ct3
\d+ ft3

-- add attributes recursively
ALTER TABLE fd_pt1 ADD COLUMN c4 integer;
ALTER TABLE fd_pt1 ADD COLUMN c5 integer DEFAULT 0;
ALTER TABLE fd_pt1 ADD COLUMN c6 integer;
ALTER TABLE fd_pt1 ADD COLUMN c7 integer NOT NULL;
ALTER TABLE fd_pt1 ADD COLUMN c8 integer;
\d+ fd_pt1
\d+ ft2
\d+ ct3
\d+ ft3

-- alter attributes recursively
ALTER TABLE fd_pt1 ALTER COLUMN c4 SET DEFAULT 0;
ALTER TABLE fd_pt1 ALTER COLUMN c5 DROP DEFAULT;
ALTER TABLE fd_pt1 ALTER COLUMN c6 SET NOT NULL;
ALTER TABLE fd_pt1 ALTER COLUMN c7 DROP NOT NULL;
ALTER TABLE fd_pt1 ALTER COLUMN c8 TYPE char(10) USING '0';        -- ERROR
ALTER TABLE fd_pt1 ALTER COLUMN c8 TYPE char(10);
ALTER TABLE fd_pt1 ALTER COLUMN c8 SET DATA TYPE text;
ALTER TABLE fd_pt1 ALTER COLUMN c1 SET STATISTICS 10000;
ALTER TABLE fd_pt1 ALTER COLUMN c1 SET (n_distinct = 100);
ALTER TABLE fd_pt1 ALTER COLUMN c8 SET STATISTICS -1;
ALTER TABLE fd_pt1 ALTER COLUMN c8 SET STORAGE EXTERNAL;
\d+ fd_pt1
\d+ ft2

-- drop attributes recursively
ALTER TABLE fd_pt1 DROP COLUMN c4;
ALTER TABLE fd_pt1 DROP COLUMN c5;
ALTER TABLE fd_pt1 DROP COLUMN c6;
ALTER TABLE fd_pt1 DROP COLUMN c7;
ALTER TABLE fd_pt1 DROP COLUMN c8;
\d+ fd_pt1
\d+ ft2

-- add constraints recursively
ALTER TABLE fd_pt1 ADD CONSTRAINT fd_pt1chk1 CHECK (c1 > 0) NO INHERIT;
ALTER TABLE fd_pt1 ADD CONSTRAINT fd_pt1chk2 CHECK (c2 <> '');
-- connoinherit should be true for NO INHERIT constraint
SELECT relname, conname, contype, conislocal, coninhcount, connoinherit
  FROM pg_class AS pc JOIN pg_constraint AS pgc ON (conrelid = pc.oid)
  WHERE pc.relname = 'fd_pt1'
  ORDER BY 1,2;
-- child does not inherit NO INHERIT constraints
\d+ fd_pt1
\d+ ft2
DROP FOREIGN TABLE ft2; -- ERROR
DROP FOREIGN TABLE ft2 CASCADE;
CREATE FOREIGN TABLE ft2 (
	c1 integer NOT NULL,
	c2 text,
	c3 date
) SERVER s0 OPTIONS (delimiter ',', quote '"', "be quoted" 'value');
-- child must have parent's INHERIT constraints
ALTER FOREIGN TABLE ft2 INHERIT fd_pt1;                            -- ERROR
ALTER FOREIGN TABLE ft2 ADD CONSTRAINT fd_pt1chk2 CHECK (c2 <> '');
ALTER FOREIGN TABLE ft2 INHERIT fd_pt1;
-- child does not inherit NO INHERIT constraints
\d+ fd_pt1
\d+ ft2

-- drop constraints recursively
ALTER TABLE fd_pt1 DROP CONSTRAINT fd_pt1chk1 CASCADE;
ALTER TABLE fd_pt1 DROP CONSTRAINT fd_pt1chk2 CASCADE;

-- NOT VALID case
INSERT INTO fd_pt1 VALUES (1, 'fd_pt1'::text, '1994-01-01'::date);
ALTER TABLE fd_pt1 ADD CONSTRAINT fd_pt1chk3 CHECK (c2 <> '') NOT VALID;
\d+ fd_pt1
\d+ ft2
-- VALIDATE CONSTRAINT need do nothing on foreign tables
ALTER TABLE fd_pt1 VALIDATE CONSTRAINT fd_pt1chk3;
\d+ fd_pt1
\d+ ft2

-- changes name of an attribute recursively
ALTER TABLE fd_pt1 RENAME COLUMN c1 TO f1;
ALTER TABLE fd_pt1 RENAME COLUMN c2 TO f2;
ALTER TABLE fd_pt1 RENAME COLUMN c3 TO f3;
-- changes name of a constraint recursively
ALTER TABLE fd_pt1 RENAME CONSTRAINT fd_pt1chk3 TO f2_check;
\d+ fd_pt1
\d+ ft2

DROP TABLE fd_pt1 CASCADE;

-- IMPORT FOREIGN SCHEMA
IMPORT FOREIGN SCHEMA s1 FROM SERVER s9 INTO public; -- ERROR
IMPORT FOREIGN SCHEMA s1 LIMIT TO (t1) FROM SERVER s9 INTO public; --ERROR
IMPORT FOREIGN SCHEMA s1 EXCEPT (t1) FROM SERVER s9 INTO public; -- ERROR
IMPORT FOREIGN SCHEMA s1 EXCEPT (t1, t2) FROM SERVER s9 INTO public
OPTIONS (option1 'value1', option2 'value2'); -- ERROR

-- DROP FOREIGN TABLE
DROP FOREIGN TABLE no_table;                                    -- ERROR
DROP FOREIGN TABLE IF EXISTS no_table;
DROP FOREIGN TABLE foreign_schema.foreign_table_1;

-- REASSIGN OWNED/DROP OWNED of foreign objects
REASSIGN OWNED BY regress_test_role TO regress_test_role2;
DROP OWNED BY regress_test_role2;
DROP OWNED BY regress_test_role2 CASCADE;

-- Foreign partition DDL stuff
CREATE TABLE fd_pt2 (
	c1 integer NOT NULL,
	c2 text,
	c3 date
) PARTITION BY LIST (c1);
CREATE FOREIGN TABLE fd_pt2_1 PARTITION OF fd_pt2 FOR VALUES IN (1)
  SERVER s0 OPTIONS (delimiter ',', quote '"', "be quoted" 'value');
\d+ fd_pt2
\d+ fd_pt2_1

-- partition cannot have additional columns
DROP FOREIGN TABLE fd_pt2_1;
CREATE FOREIGN TABLE fd_pt2_1 (
	c1 integer NOT NULL,
	c2 text,
	c3 date,
	c4 char
) SERVER s0 OPTIONS (delimiter ',', quote '"', "be quoted" 'value');
\d+ fd_pt2_1
ALTER TABLE fd_pt2 ATTACH PARTITION fd_pt2_1 FOR VALUES IN (1);       -- ERROR

DROP FOREIGN TABLE fd_pt2_1;
\d+ fd_pt2
CREATE FOREIGN TABLE fd_pt2_1 (
	c1 integer NOT NULL,
	c2 text,
	c3 date
) SERVER s0 OPTIONS (delimiter ',', quote '"', "be quoted" 'value');
\d+ fd_pt2_1
-- no attach partition validation occurs for foreign tables
ALTER TABLE fd_pt2 ATTACH PARTITION fd_pt2_1 FOR VALUES IN (1);
\d+ fd_pt2
\d+ fd_pt2_1

-- cannot add column to a partition
ALTER TABLE fd_pt2_1 ADD c4 char;

-- ok to have a partition's own constraints though
ALTER TABLE fd_pt2_1 ALTER c3 SET NOT NULL;
ALTER TABLE fd_pt2_1 ADD CONSTRAINT p21chk CHECK (c2 <> '');
\d+ fd_pt2
\d+ fd_pt2_1

-- cannot drop inherited NOT NULL constraint from a partition
ALTER TABLE fd_pt2_1 ALTER c1 DROP NOT NULL;

-- partition must have parent's constraints
ALTER TABLE fd_pt2 DETACH PARTITION fd_pt2_1;
ALTER TABLE fd_pt2 ALTER c2 SET NOT NULL;
\d+ fd_pt2
\d+ fd_pt2_1
ALTER TABLE fd_pt2 ATTACH PARTITION fd_pt2_1 FOR VALUES IN (1);       -- ERROR
ALTER FOREIGN TABLE fd_pt2_1 ALTER c2 SET NOT NULL;
ALTER TABLE fd_pt2 ATTACH PARTITION fd_pt2_1 FOR VALUES IN (1);

ALTER TABLE fd_pt2 DETACH PARTITION fd_pt2_1;
ALTER TABLE fd_pt2 ADD CONSTRAINT fd_pt2chk1 CHECK (c1 > 0);
\d+ fd_pt2
\d+ fd_pt2_1
ALTER TABLE fd_pt2 ATTACH PARTITION fd_pt2_1 FOR VALUES IN (1);       -- ERROR
ALTER FOREIGN TABLE fd_pt2_1 ADD CONSTRAINT fd_pt2chk1 CHECK (c1 > 0);
ALTER TABLE fd_pt2 ATTACH PARTITION fd_pt2_1 FOR VALUES IN (1);

DROP FOREIGN TABLE fd_pt2_1;
DROP TABLE fd_pt2;

-- foreign table cannot be part of partition tree made of temporary
-- relations.
CREATE TEMP TABLE temp_parted (a int) PARTITION BY LIST (a);
CREATE FOREIGN TABLE foreign_part PARTITION OF temp_parted DEFAULT
  SERVER s0;  -- ERROR
CREATE FOREIGN TABLE foreign_part (a int) SERVER s0;
ALTER TABLE temp_parted ATTACH PARTITION foreign_part DEFAULT;  -- ERROR
DROP FOREIGN TABLE foreign_part;
DROP TABLE temp_parted;

-- Cleanup
DROP SCHEMA foreign_schema CASCADE;
DROP ROLE regress_test_role;                                -- ERROR
DROP SERVER t1 CASCADE;
DROP USER MAPPING FOR regress_test_role SERVER s6;
DROP FOREIGN DATA WRAPPER foo CASCADE;
DROP SERVER s8 CASCADE;
DROP ROLE regress_test_indirect;
DROP ROLE regress_test_role;
DROP ROLE regress_unprivileged_role;                        -- ERROR
REVOKE ALL ON FOREIGN DATA WRAPPER postgresql FROM regress_unprivileged_role;
DROP ROLE regress_unprivileged_role;
DROP ROLE regress_test_role2;
DROP FOREIGN DATA WRAPPER postgresql CASCADE;
DROP FOREIGN DATA WRAPPER dummy CASCADE;
\c
DROP ROLE regress_foreign_data_user;

-- At this point we should have no wrappers, no servers, and no mappings.
SELECT fdwname, fdwhandler, fdwvalidator, fdwoptions FROM pg_foreign_data_wrapper;
SELECT srvname, srvoptions FROM pg_foreign_server;
SELECT * FROM pg_user_mapping;
