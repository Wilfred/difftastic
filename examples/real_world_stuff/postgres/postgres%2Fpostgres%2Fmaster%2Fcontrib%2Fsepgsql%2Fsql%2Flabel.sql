--
-- Regression Tests for Label Management
--

--
-- Setup
--
CREATE TABLE t1 (a int, b text);
INSERT INTO t1 VALUES (1, 'aaa'), (2, 'bbb'), (3, 'ccc');
CREATE TABLE t2 AS SELECT * FROM t1 WHERE a % 2 = 0;

CREATE FUNCTION f1 () RETURNS text
    AS 'SELECT sepgsql_getcon()'
    LANGUAGE sql;

CREATE FUNCTION f2 () RETURNS text
    AS 'SELECT sepgsql_getcon()'
    LANGUAGE sql;
SECURITY LABEL ON FUNCTION f2()
    IS 'system_u:object_r:sepgsql_trusted_proc_exec_t:s0';

CREATE FUNCTION f3 () RETURNS text
    AS 'BEGIN
          RAISE EXCEPTION ''an exception from f3()'';
          RETURN NULL;
        END;' LANGUAGE plpgsql;
SECURITY LABEL ON FUNCTION f3()
    IS 'system_u:object_r:sepgsql_trusted_proc_exec_t:s0';

CREATE FUNCTION f4 () RETURNS text
    AS 'SELECT sepgsql_getcon()'
    LANGUAGE sql;
SECURITY LABEL ON FUNCTION f4()
    IS 'system_u:object_r:sepgsql_nosuch_trusted_proc_exec_t:s0';

CREATE FUNCTION f5 (text) RETURNS bool
	AS 'SELECT sepgsql_setcon($1)'
    LANGUAGE sql;
SECURITY LABEL ON FUNCTION f5(text)
    IS 'system_u:object_r:sepgsql_regtest_trusted_proc_exec_t:s0';

CREATE TABLE auth_tbl(uname text, credential text, label text);
INSERT INTO auth_tbl
    VALUES ('foo', 'acbd18db4cc2f85cedef654fccc4a4d8', 'sepgsql_regtest_foo_t:s0'),
           ('var', 'b2145aac704ce76dbe1ac7adac535b23', 'sepgsql_regtest_var_t:s0'),
           ('baz', 'b2145aac704ce76dbe1ac7adac535b23', 'sepgsql_regtest_baz_t:s0');
SECURITY LABEL ON TABLE auth_tbl
    IS 'system_u:object_r:sepgsql_secret_table_t:s0';

CREATE FUNCTION auth_func(text, text) RETURNS bool
    LANGUAGE sql
    AS 'SELECT sepgsql_setcon(regexp_replace(sepgsql_getcon(), ''_r:.*$'', ''_r:'' || label))
        FROM auth_tbl WHERE uname = $1 AND credential = $2';
SECURITY LABEL ON FUNCTION auth_func(text,text)
    IS 'system_u:object_r:sepgsql_regtest_trusted_proc_exec_t:s0';

CREATE TABLE foo_tbl(a int, b text);
INSERT INTO foo_tbl VALUES (1, 'aaa'), (2,'bbb'), (3,'ccc'), (4,'ddd');
SECURITY LABEL ON TABLE foo_tbl
	IS 'system_u:object_r:sepgsql_regtest_foo_table_t:s0';

CREATE TABLE var_tbl(x int, y text);
INSERT INTO var_tbl VALUES (2,'xxx'), (3,'yyy'), (4,'zzz'), (5,'xyz');
SECURITY LABEL ON TABLE var_tbl
	IS 'system_u:object_r:sepgsql_regtest_var_table_t:s0';

CREATE TABLE foo_ptbl(o int, p text) PARTITION BY RANGE (o);
CREATE TABLE foo_ptbl_ones PARTITION OF foo_ptbl FOR VALUES FROM ('0') TO ('10');
CREATE TABLE foo_ptbl_tens PARTITION OF foo_ptbl FOR VALUES FROM ('10') TO ('100');

INSERT INTO foo_ptbl VALUES (0, 'aaa'), (9,'bbb'), (10,'ccc'), (99,'ddd');
SECURITY LABEL ON TABLE foo_ptbl
	IS 'system_u:object_r:sepgsql_regtest_foo_table_t:s0';

CREATE TABLE var_ptbl(q int, r text) PARTITION BY RANGE (q);
CREATE TABLE var_ptbl_ones PARTITION OF var_ptbl FOR VALUES FROM ('0') TO ('10');
CREATE TABLE var_ptbl_tens PARTITION OF var_ptbl FOR VALUES FROM ('10') TO ('100');

INSERT INTO var_ptbl VALUES (0,'xxx'), (9,'yyy'), (10,'zzz'), (99,'xyz');
SECURITY LABEL ON TABLE var_ptbl
	IS 'system_u:object_r:sepgsql_regtest_var_table_t:s0';

--
-- Tests for default labeling behavior
--
-- @SECURITY-CONTEXT=unconfined_u:unconfined_r:sepgsql_regtest_user_t:s0
CREATE TABLE t3 (s int, t text);
INSERT INTO t3 VALUES (1, 'sss'), (2, 'ttt'), (3, 'uuu');

-- @SECURITY-CONTEXT=unconfined_u:unconfined_r:sepgsql_regtest_dba_t:s0
CREATE TABLE t4 (m int, n text);
INSERT INTO t4 VALUES (1,'mmm'), (2,'nnn'), (3,'ooo');

-- @SECURITY-CONTEXT=unconfined_u:unconfined_r:sepgsql_regtest_user_t:s0
CREATE TABLE tpart (o int, p text) PARTITION BY RANGE (o);

CREATE TABLE tpart_ones PARTITION OF tpart FOR VALUES FROM ('0') TO ('10');
-- @SECURITY-CONTEXT=unconfined_u:unconfined_r:sepgsql_regtest_dba_t:s0
CREATE TABLE tpart_tens PARTITION OF tpart FOR VALUES FROM ('10') TO ('100');

INSERT INTO tpart VALUES (0, 'aaa');
INSERT INTO tpart VALUES (9, 'bbb');
INSERT INTO tpart VALUES (99, 'ccc');

SELECT objtype, objname, label FROM pg_seclabels
    WHERE provider = 'selinux' AND objtype = 'table' AND objname in ('t1', 't2', 't3',
                                                                     'tpart',
																	 'tpart_ones',
																	 'tpart_tens')
    ORDER BY objname COLLATE "C" ASC;
SELECT objtype, objname, label FROM pg_seclabels
    WHERE provider = 'selinux' AND objtype = 'column' AND (objname like 't3.%'
	                                                      OR objname like 't4.%'
														  OR objname like 'tpart.%'
														  OR objname like 'tpart_ones.%'
														  OR objname like 'tpart_tens.%')
    ORDER BY objname COLLATE "C" ASC;

--
-- Tests for SECURITY LABEL
--
-- @SECURITY-CONTEXT=unconfined_u:unconfined_r:sepgsql_regtest_dba_t:s0
SECURITY LABEL ON TABLE t1
    IS 'system_u:object_r:sepgsql_ro_table_t:s0';	-- ok
SECURITY LABEL ON TABLE t2
    IS 'invalid security context';			-- be failed
SECURITY LABEL ON COLUMN t2
    IS 'system_u:object_r:sepgsql_ro_table_t:s0';	-- be failed
SECURITY LABEL ON COLUMN t2.b
    IS 'system_u:object_r:sepgsql_ro_table_t:s0';	-- ok
SECURITY LABEL ON TABLE tpart
    IS 'system_u:object_r:sepgsql_ro_table_t:s0';   -- ok
SECURITY LABEL ON TABLE tpart
    IS 'invalid security context';          -- failed
SECURITY LABEL ON COLUMN tpart
    IS 'system_u:object_r:sepgsql_ro_table_t:s0';   -- failed
SECURITY LABEL ON COLUMN tpart.o
    IS 'system_u:object_r:sepgsql_ro_table_t:s0';   -- ok

--
-- Tests for Trusted Procedures
--
-- @SECURITY-CONTEXT=unconfined_u:unconfined_r:sepgsql_regtest_user_t:s0
SET sepgsql.debug_audit = true;
SET client_min_messages = log;
SELECT f1();			-- normal procedure
SELECT f2();			-- trusted procedure
SELECT f3();			-- trusted procedure that raises an error
SELECT f4();			-- failed on domain transition
SELECT sepgsql_getcon();	-- client's label must be restored

--
-- Test for Dynamic Domain Transition
--

-- validation of transaction aware dynamic-transition
-- @SECURITY-CONTEXT=unconfined_u:unconfined_r:sepgsql_regtest_superuser_t:s0:c0.c25
SELECT sepgsql_setcon('unconfined_u:unconfined_r:sepgsql_regtest_superuser_t:s0:c0.c15');
SELECT sepgsql_getcon();

SELECT sepgsql_setcon(NULL);	-- failed to reset
SELECT sepgsql_getcon();

BEGIN;
SELECT sepgsql_setcon('unconfined_u:unconfined_r:sepgsql_regtest_superuser_t:s0:c0.c12');
SELECT sepgsql_getcon();

SAVEPOINT svpt_1;
SELECT sepgsql_setcon('unconfined_u:unconfined_r:sepgsql_regtest_superuser_t:s0:c0.c9');
SELECT sepgsql_getcon();

SAVEPOINT svpt_2;
SELECT sepgsql_setcon('unconfined_u:unconfined_r:sepgsql_regtest_superuser_t:s0:c0.c6');
SELECT sepgsql_getcon();

SAVEPOINT svpt_3;
SELECT sepgsql_setcon('unconfined_u:unconfined_r:sepgsql_regtest_superuser_t:s0:c0.c3');
SELECT sepgsql_getcon();

ROLLBACK TO SAVEPOINT svpt_2;
SELECT sepgsql_getcon();		-- should be 's0:c0.c9'

ROLLBACK TO SAVEPOINT svpt_1;
SELECT sepgsql_getcon();		-- should be 's0:c0.c12'

ABORT;
SELECT sepgsql_getcon();		-- should be 's0:c0.c15'

BEGIN;
SELECT sepgsql_setcon('unconfined_u:unconfined_r:sepgsql_regtest_superuser_t:s0:c0.c8');
SELECT sepgsql_getcon();

SAVEPOINT svpt_1;
SELECT sepgsql_setcon('unconfined_u:unconfined_r:sepgsql_regtest_superuser_t:s0:c0.c4');
SELECT sepgsql_getcon();

ROLLBACK TO SAVEPOINT svpt_1;
SELECT sepgsql_getcon();		-- should be 's0:c0.c8'
SELECT sepgsql_setcon('unconfined_u:unconfined_r:sepgsql_regtest_superuser_t:s0:c0.c6');

COMMIT;
SELECT sepgsql_getcon();		-- should be 's0:c0.c6'

-- sepgsql_regtest_user_t is not available dynamic-transition,
-- unless sepgsql_setcon() is called inside of trusted-procedure
-- @SECURITY-CONTEXT=unconfined_u:unconfined_r:sepgsql_regtest_user_t:s0:c0.c15

-- sepgsql_regtest_user_t has no permission to switch current label
SELECT sepgsql_setcon('unconfined_u:unconfined_r:sepgsql_regtest_user_t:s0');	-- failed
SELECT sepgsql_getcon();

-- trusted procedure allows to switch, but unavailable to override MCS rules
SELECT f5('unconfined_u:unconfined_r:sepgsql_regtest_user_t:s0:c0.c7');	-- OK
SELECT sepgsql_getcon();

SELECT f5('unconfined_u:unconfined_r:sepgsql_regtest_user_t:s0:c0.c31');	-- Failed
SELECT sepgsql_getcon();

SELECT f5(NULL);	-- Failed
SELECT sepgsql_getcon();

BEGIN;
SELECT f5('unconfined_u:unconfined_r:sepgsql_regtest_user_t:s0:c0.c3');	-- OK
SELECT sepgsql_getcon();

ABORT;
SELECT sepgsql_getcon();

--
-- Test for simulation of typical connection pooling server
--
-- @SECURITY-CONTEXT=unconfined_u:unconfined_r:sepgsql_regtest_pool_t:s0

-- we shouldn't allow to switch client label without trusted procedure
SELECT sepgsql_setcon('unconfined_u:unconfined_r:sepgsql_regtest_foo_t:s0');

SELECT * FROM auth_tbl;	-- failed, no permission to reference

-- switch to "foo"
SELECT auth_func('foo', 'acbd18db4cc2f85cedef654fccc4a4d8');

SELECT sepgsql_getcon();

SELECT * FROM foo_tbl;	-- OK
SELECT * FROM foo_ptbl;	-- OK

SELECT * FROM var_tbl;	-- failed
SELECT * FROM var_ptbl;	-- failed

SELECT * FROM auth_tbl;	-- failed

SELECT sepgsql_setcon(NULL);	-- end of session
SELECT sepgsql_getcon();

-- the pooler cannot touch these tables directly
SELECT * FROM foo_tbl;	-- failed
SELECT * FROM foo_ptbl;	-- failed

SELECT * FROM var_tbl;	-- failed
SELECT * FROM var_ptbl;	-- failed

-- switch to "var"
SELECT auth_func('var', 'b2145aac704ce76dbe1ac7adac535b23');

SELECT sepgsql_getcon();

SELECT * FROM foo_tbl;  -- failed
SELECT * FROM foo_ptbl;  -- failed

SELECT * FROM var_tbl;  -- OK
SELECT * FROM var_ptbl;  -- OK

SELECT * FROM auth_tbl;	-- failed

SELECT sepgsql_setcon(NULL);    -- end of session

-- misc checks
SELECT auth_func('var', 'invalid credential');	-- not works
SELECT sepgsql_getcon();

--
-- Clean up
--
-- @SECURITY-CONTEXT=unconfined_u:unconfined_r:sepgsql_regtest_superuser_t:s0-s0:c0.c255
DROP TABLE IF EXISTS t1 CASCADE;
DROP TABLE IF EXISTS t2 CASCADE;
DROP TABLE IF EXISTS t3 CASCADE;
DROP TABLE IF EXISTS t4 CASCADE;
DROP TABLE IF EXISTS tpart CASCADE;
DROP FUNCTION IF EXISTS f1() CASCADE;
DROP FUNCTION IF EXISTS f2() CASCADE;
DROP FUNCTION IF EXISTS f3() CASCADE;
DROP FUNCTION IF EXISTS f4() CASCADE;
DROP FUNCTION IF EXISTS f5(text) CASCADE;
