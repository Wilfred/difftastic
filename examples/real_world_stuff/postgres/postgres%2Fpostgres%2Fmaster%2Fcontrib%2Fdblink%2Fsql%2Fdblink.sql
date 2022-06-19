CREATE EXTENSION dblink;

-- directory paths and dlsuffix are passed to us in environment variables
\getenv abs_srcdir PG_ABS_SRCDIR
\getenv libdir PG_LIBDIR
\getenv dlsuffix PG_DLSUFFIX

\set regresslib :libdir '/regress' :dlsuffix

-- create some functions needed for tests
CREATE FUNCTION setenv(text, text)
   RETURNS void
   AS :'regresslib', 'regress_setenv'
   LANGUAGE C STRICT;

CREATE FUNCTION wait_pid(int)
   RETURNS void
   AS :'regresslib'
   LANGUAGE C STRICT;

\set path :abs_srcdir '/'
\set fnbody 'SELECT setenv(''PGSERVICEFILE'', ' :'path' ' || $1)'
CREATE FUNCTION set_pgservicefile(text) RETURNS void LANGUAGE SQL
    AS :'fnbody';

-- want context for notices
\set SHOW_CONTEXT always

CREATE TABLE foo(f1 int, f2 text, f3 text[], primary key (f1,f2));
INSERT INTO foo VALUES (0,'a','{"a0","b0","c0"}');
INSERT INTO foo VALUES (1,'b','{"a1","b1","c1"}');
INSERT INTO foo VALUES (2,'c','{"a2","b2","c2"}');
INSERT INTO foo VALUES (3,'d','{"a3","b3","c3"}');
INSERT INTO foo VALUES (4,'e','{"a4","b4","c4"}');
INSERT INTO foo VALUES (5,'f','{"a5","b5","c5"}');
INSERT INTO foo VALUES (6,'g','{"a6","b6","c6"}');
INSERT INTO foo VALUES (7,'h','{"a7","b7","c7"}');
INSERT INTO foo VALUES (8,'i','{"a8","b8","c8"}');
INSERT INTO foo VALUES (9,'j','{"a9","b9","c9"}');

-- misc utilities

-- list the primary key fields
SELECT *
FROM dblink_get_pkey('foo');

-- build an insert statement based on a local tuple,
-- replacing the primary key values with new ones
SELECT dblink_build_sql_insert('foo','1 2',2,'{"0", "a"}','{"99", "xyz"}');
-- too many pk fields, should fail
SELECT dblink_build_sql_insert('foo','1 2 3 4',4,'{"0", "a", "{a0,b0,c0}"}','{"99", "xyz", "{za0,zb0,zc0}"}');

-- build an update statement based on a local tuple,
-- replacing the primary key values with new ones
SELECT dblink_build_sql_update('foo','1 2',2,'{"0", "a"}','{"99", "xyz"}');
-- too many pk fields, should fail
SELECT dblink_build_sql_update('foo','1 2 3 4',4,'{"0", "a", "{a0,b0,c0}"}','{"99", "xyz", "{za0,zb0,zc0}"}');

-- build a delete statement based on a local tuple,
SELECT dblink_build_sql_delete('foo','1 2',2,'{"0", "a"}');
-- too many pk fields, should fail
SELECT dblink_build_sql_delete('foo','1 2 3 4',4,'{"0", "a", "{a0,b0,c0}"}');

-- repeat the test for table with primary key index with included columns
CREATE TABLE foo_1(f1 int, f2 text, f3 text[], primary key (f1,f2) include (f3));
INSERT INTO foo_1 VALUES (0,'a','{"a0","b0","c0"}');
INSERT INTO foo_1 VALUES (1,'b','{"a1","b1","c1"}');
INSERT INTO foo_1 VALUES (2,'c','{"a2","b2","c2"}');
INSERT INTO foo_1 VALUES (3,'d','{"a3","b3","c3"}');
INSERT INTO foo_1 VALUES (4,'e','{"a4","b4","c4"}');
INSERT INTO foo_1 VALUES (5,'f','{"a5","b5","c5"}');
INSERT INTO foo_1 VALUES (6,'g','{"a6","b6","c6"}');
INSERT INTO foo_1 VALUES (7,'h','{"a7","b7","c7"}');
INSERT INTO foo_1 VALUES (8,'i','{"a8","b8","c8"}');
INSERT INTO foo_1 VALUES (9,'j','{"a9","b9","c9"}');

-- misc utilities

-- list the primary key fields
SELECT *
FROM dblink_get_pkey('foo_1');

-- build an insert statement based on a local tuple,
-- replacing the primary key values with new ones
SELECT dblink_build_sql_insert('foo_1','1 2',2,'{"0", "a"}','{"99", "xyz"}');
-- too many pk fields, should fail
SELECT dblink_build_sql_insert('foo_1','1 2 3 4',4,'{"0", "a", "{a0,b0,c0}"}','{"99", "xyz", "{za0,zb0,zc0}"}');

-- build an update statement based on a local tuple,
-- replacing the primary key values with new ones
SELECT dblink_build_sql_update('foo_1','1 2',2,'{"0", "a"}','{"99", "xyz"}');
-- too many pk fields, should fail
SELECT dblink_build_sql_update('foo_1','1 2 3 4',4,'{"0", "a", "{a0,b0,c0}"}','{"99", "xyz", "{za0,zb0,zc0}"}');

-- build a delete statement based on a local tuple,
SELECT dblink_build_sql_delete('foo_1','1 2',2,'{"0", "a"}');
-- too many pk fields, should fail
SELECT dblink_build_sql_delete('foo_1','1 2 3 4',4,'{"0", "a", "{a0,b0,c0}"}');

DROP TABLE foo_1;

-- retest using a quoted and schema qualified table
CREATE SCHEMA "MySchema";
CREATE TABLE "MySchema"."Foo"(f1 int, f2 text, f3 text[], primary key (f1,f2));
INSERT INTO "MySchema"."Foo" VALUES (0,'a','{"a0","b0","c0"}');

-- list the primary key fields
SELECT *
FROM dblink_get_pkey('"MySchema"."Foo"');

-- build an insert statement based on a local tuple,
-- replacing the primary key values with new ones
SELECT dblink_build_sql_insert('"MySchema"."Foo"','1 2',2,'{"0", "a"}','{"99", "xyz"}');

-- build an update statement based on a local tuple,
-- replacing the primary key values with new ones
SELECT dblink_build_sql_update('"MySchema"."Foo"','1 2',2,'{"0", "a"}','{"99", "xyz"}');

-- build a delete statement based on a local tuple,
SELECT dblink_build_sql_delete('"MySchema"."Foo"','1 2',2,'{"0", "a"}');

CREATE FUNCTION connection_parameters() RETURNS text LANGUAGE SQL AS $f$
       SELECT $$dbname='$$||current_database()||$$' port=$$||current_setting('port');
$f$;

-- regular old dblink
SELECT *
FROM dblink(connection_parameters(),'SELECT * FROM foo') AS t(a int, b text, c text[])
WHERE t.a > 7;

-- should generate "connection not available" error
SELECT *
FROM dblink('SELECT * FROM foo') AS t(a int, b text, c text[])
WHERE t.a > 7;

-- The first-level connection's backend will crash on exit given OpenLDAP
-- [2.4.24, 2.4.31].  We won't see evidence of any crash until the victim
-- process terminates and the postmaster responds.  If process termination
-- entails writing a core dump, that can take awhile.  Wait for the process to
-- vanish.  At that point, the postmaster has called waitpid() on the crashed
-- process, and it will accept no new connections until it has reinitialized
-- the cluster.  (We can't exploit pg_stat_activity, because the crash happens
-- after the backend updates shared memory to reflect its impending exit.)
DO $pl$
DECLARE
	detail text;
BEGIN
	PERFORM wait_pid(crash_pid)
	FROM dblink(connection_parameters(), $$
		SELECT pg_backend_pid() FROM dblink(
			'service=test_ldap '||connection_parameters(),
			-- This string concatenation is a hack to shoehorn a
			-- set_pgservicefile call into the SQL statement.
			'SELECT 1' || set_pgservicefile('pg_service.conf')
		) t(c int)
	$$) AS t(crash_pid int);
EXCEPTION WHEN OTHERS THEN
	GET STACKED DIAGNOSTICS detail = PG_EXCEPTION_DETAIL;
	-- Expected error in a non-LDAP build.
	IF NOT detail LIKE 'syntax error in service file%' THEN RAISE; END IF;
END
$pl$;

-- create a persistent connection
SELECT dblink_connect(connection_parameters());

-- use the persistent connection
SELECT *
FROM dblink('SELECT * FROM foo') AS t(a int, b text, c text[])
WHERE t.a > 7;

-- open a cursor with bad SQL and fail_on_error set to false
SELECT dblink_open('rmt_foo_cursor','SELECT * FROM foobar',false);

-- reset remote transaction state
SELECT dblink_exec('ABORT');

-- open a cursor
SELECT dblink_open('rmt_foo_cursor','SELECT * FROM foo');

-- close the cursor
SELECT dblink_close('rmt_foo_cursor',false);

-- open the cursor again
SELECT dblink_open('rmt_foo_cursor','SELECT * FROM foo');

-- fetch some data
SELECT *
FROM dblink_fetch('rmt_foo_cursor',4) AS t(a int, b text, c text[]);

SELECT *
FROM dblink_fetch('rmt_foo_cursor',4) AS t(a int, b text, c text[]);

-- this one only finds two rows left
SELECT *
FROM dblink_fetch('rmt_foo_cursor',4) AS t(a int, b text, c text[]);

-- intentionally botch a fetch
SELECT *
FROM dblink_fetch('rmt_foobar_cursor',4,false) AS t(a int, b text, c text[]);

-- reset remote transaction state
SELECT dblink_exec('ABORT');

-- close the wrong cursor
SELECT dblink_close('rmt_foobar_cursor',false);

-- should generate 'cursor "rmt_foo_cursor" not found' error
SELECT *
FROM dblink_fetch('rmt_foo_cursor',4) AS t(a int, b text, c text[]);

-- this time, 'cursor "rmt_foo_cursor" not found' as a notice
SELECT *
FROM dblink_fetch('rmt_foo_cursor',4,false) AS t(a int, b text, c text[]);

-- close the persistent connection
SELECT dblink_disconnect();

-- should generate "connection not available" error
SELECT *
FROM dblink('SELECT * FROM foo') AS t(a int, b text, c text[])
WHERE t.a > 7;

-- put more data into our table, first using arbitrary connection syntax
-- but truncate the actual return value so we can use diff to check for success
SELECT substr(dblink_exec(connection_parameters(),'INSERT INTO foo VALUES(10,''k'',''{"a10","b10","c10"}'')'),1,6);

-- create a persistent connection
SELECT dblink_connect(connection_parameters());

-- put more data into our table, using persistent connection syntax
-- but truncate the actual return value so we can use diff to check for success
SELECT substr(dblink_exec('INSERT INTO foo VALUES(11,''l'',''{"a11","b11","c11"}'')'),1,6);

-- let's see it
SELECT *
FROM dblink('SELECT * FROM foo') AS t(a int, b text, c text[]);

-- bad remote select
SELECT *
FROM dblink('SELECT * FROM foobar',false) AS t(a int, b text, c text[]);

-- change some data
SELECT dblink_exec('UPDATE foo SET f3[2] = ''b99'' WHERE f1 = 11');

-- let's see it
SELECT *
FROM dblink('SELECT * FROM foo') AS t(a int, b text, c text[])
WHERE a = 11;

-- botch a change to some other data
SELECT dblink_exec('UPDATE foobar SET f3[2] = ''b99'' WHERE f1 = 11',false);

-- delete some data
SELECT dblink_exec('DELETE FROM foo WHERE f1 = 11');

-- let's see it
SELECT *
FROM dblink('SELECT * FROM foo') AS t(a int, b text, c text[])
WHERE a = 11;

-- close the persistent connection
SELECT dblink_disconnect();

--
-- tests for the new named persistent connection syntax
--

-- should generate "missing "=" after "myconn" in connection info string" error
SELECT *
FROM dblink('myconn','SELECT * FROM foo') AS t(a int, b text, c text[])
WHERE t.a > 7;

-- create a named persistent connection
SELECT dblink_connect('myconn',connection_parameters());

-- use the named persistent connection
SELECT *
FROM dblink('myconn','SELECT * FROM foo') AS t(a int, b text, c text[])
WHERE t.a > 7;

-- use the named persistent connection, but get it wrong
SELECT *
FROM dblink('myconn','SELECT * FROM foobar',false) AS t(a int, b text, c text[])
WHERE t.a > 7;

-- create a second named persistent connection
-- should error with "duplicate connection name"
SELECT dblink_connect('myconn',connection_parameters());

-- create a second named persistent connection with a new name
SELECT dblink_connect('myconn2',connection_parameters());

-- use the second named persistent connection
SELECT *
FROM dblink('myconn2','SELECT * FROM foo') AS t(a int, b text, c text[])
WHERE t.a > 7;

-- close the second named persistent connection
SELECT dblink_disconnect('myconn2');

-- open a cursor incorrectly
SELECT dblink_open('myconn','rmt_foo_cursor','SELECT * FROM foobar',false);

-- reset remote transaction state
SELECT dblink_exec('myconn','ABORT');

-- test opening cursor in a transaction
SELECT dblink_exec('myconn','BEGIN');

-- an open transaction will prevent dblink_open() from opening its own
SELECT dblink_open('myconn','rmt_foo_cursor','SELECT * FROM foo');

-- this should not commit the transaction because the client opened it
SELECT dblink_close('myconn','rmt_foo_cursor');

-- this should succeed because we have an open transaction
SELECT dblink_exec('myconn','DECLARE xact_test CURSOR FOR SELECT * FROM foo');

-- commit remote transaction
SELECT dblink_exec('myconn','COMMIT');

-- test automatic transactions for multiple cursor opens
SELECT dblink_open('myconn','rmt_foo_cursor','SELECT * FROM foo');

-- the second cursor
SELECT dblink_open('myconn','rmt_foo_cursor2','SELECT * FROM foo');

-- this should not commit the transaction
SELECT dblink_close('myconn','rmt_foo_cursor2');

-- this should succeed because we have an open transaction
SELECT dblink_exec('myconn','DECLARE xact_test CURSOR FOR SELECT * FROM foo');

-- this should commit the transaction
SELECT dblink_close('myconn','rmt_foo_cursor');

-- this should fail because there is no open transaction
SELECT dblink_exec('myconn','DECLARE xact_test CURSOR FOR SELECT * FROM foo');

-- reset remote transaction state
SELECT dblink_exec('myconn','ABORT');

-- open a cursor
SELECT dblink_open('myconn','rmt_foo_cursor','SELECT * FROM foo');

-- fetch some data
SELECT *
FROM dblink_fetch('myconn','rmt_foo_cursor',4) AS t(a int, b text, c text[]);

SELECT *
FROM dblink_fetch('myconn','rmt_foo_cursor',4) AS t(a int, b text, c text[]);

-- this one only finds three rows left
SELECT *
FROM dblink_fetch('myconn','rmt_foo_cursor',4) AS t(a int, b text, c text[]);

-- fetch some data incorrectly
SELECT *
FROM dblink_fetch('myconn','rmt_foobar_cursor',4,false) AS t(a int, b text, c text[]);

-- reset remote transaction state
SELECT dblink_exec('myconn','ABORT');

-- should generate 'cursor "rmt_foo_cursor" not found' error
SELECT *
FROM dblink_fetch('myconn','rmt_foo_cursor',4) AS t(a int, b text, c text[]);

-- close the named persistent connection
SELECT dblink_disconnect('myconn');

-- should generate "missing "=" after "myconn" in connection info string" error
SELECT *
FROM dblink('myconn','SELECT * FROM foo') AS t(a int, b text, c text[])
WHERE t.a > 7;

-- create a named persistent connection
SELECT dblink_connect('myconn',connection_parameters());

-- put more data into our table, using named persistent connection syntax
-- but truncate the actual return value so we can use diff to check for success
SELECT substr(dblink_exec('myconn','INSERT INTO foo VALUES(11,''l'',''{"a11","b11","c11"}'')'),1,6);

-- let's see it
SELECT *
FROM dblink('myconn','SELECT * FROM foo') AS t(a int, b text, c text[]);

-- change some data
SELECT dblink_exec('myconn','UPDATE foo SET f3[2] = ''b99'' WHERE f1 = 11');

-- let's see it
SELECT *
FROM dblink('myconn','SELECT * FROM foo') AS t(a int, b text, c text[])
WHERE a = 11;

-- delete some data
SELECT dblink_exec('myconn','DELETE FROM foo WHERE f1 = 11');

-- let's see it
SELECT *
FROM dblink('myconn','SELECT * FROM foo') AS t(a int, b text, c text[])
WHERE a = 11;

-- close the named persistent connection
SELECT dblink_disconnect('myconn');

-- close the named persistent connection again
-- should get 'connection "myconn" not available' error
SELECT dblink_disconnect('myconn');

-- test asynchronous queries
SELECT dblink_connect('dtest1', connection_parameters());
SELECT * from
 dblink_send_query('dtest1', 'select * from foo where f1 < 3') as t1;

SELECT dblink_connect('dtest2', connection_parameters());
SELECT * from
 dblink_send_query('dtest2', 'select * from foo where f1 > 2 and f1 < 7') as t1;

SELECT dblink_connect('dtest3', connection_parameters());
SELECT * from
 dblink_send_query('dtest3', 'select * from foo where f1 > 6') as t1;

CREATE TEMPORARY TABLE result AS
(SELECT * from dblink_get_result('dtest1') as t1(f1 int, f2 text, f3 text[]))
UNION
(SELECT * from dblink_get_result('dtest2') as t2(f1 int, f2 text, f3 text[]))
UNION
(SELECT * from dblink_get_result('dtest3') as t3(f1 int, f2 text, f3 text[]))
ORDER by f1;

-- dblink_get_connections returns an array with elements in a machine-dependent
-- ordering, so we must resort to unnesting and sorting for a stable result
create function unnest(anyarray) returns setof anyelement
language sql strict immutable as $$
select $1[i] from generate_series(array_lower($1,1), array_upper($1,1)) as i
$$;

SELECT * FROM unnest(dblink_get_connections()) ORDER BY 1;

SELECT dblink_is_busy('dtest1');

SELECT dblink_disconnect('dtest1');
SELECT dblink_disconnect('dtest2');
SELECT dblink_disconnect('dtest3');

SELECT * from result;

SELECT dblink_connect('dtest1', connection_parameters());
SELECT * from
 dblink_send_query('dtest1', 'select * from foo where f1 < 3') as t1;

SELECT dblink_cancel_query('dtest1');
SELECT dblink_error_message('dtest1');
SELECT dblink_disconnect('dtest1');

-- test foreign data wrapper functionality
CREATE ROLE regress_dblink_user;
DO $d$
    BEGIN
        EXECUTE $$CREATE SERVER fdtest FOREIGN DATA WRAPPER dblink_fdw
            OPTIONS (dbname '$$||current_database()||$$',
                     port '$$||current_setting('port')||$$'
            )$$;
    END;
$d$;

CREATE USER MAPPING FOR public SERVER fdtest
  OPTIONS (server 'localhost');  -- fail, can't specify server here
CREATE USER MAPPING FOR public SERVER fdtest OPTIONS (user :'USER');

GRANT USAGE ON FOREIGN SERVER fdtest TO regress_dblink_user;
GRANT EXECUTE ON FUNCTION dblink_connect_u(text, text) TO regress_dblink_user;

SET SESSION AUTHORIZATION regress_dblink_user;
-- should fail
SELECT dblink_connect('myconn', 'fdtest');
-- should succeed
SELECT dblink_connect_u('myconn', 'fdtest');
SELECT * FROM dblink('myconn','SELECT * FROM foo') AS t(a int, b text, c text[]);

\c - -
REVOKE USAGE ON FOREIGN SERVER fdtest FROM regress_dblink_user;
REVOKE EXECUTE ON FUNCTION dblink_connect_u(text, text) FROM regress_dblink_user;
DROP USER regress_dblink_user;
DROP USER MAPPING FOR public SERVER fdtest;
DROP SERVER fdtest;

-- should fail
ALTER FOREIGN DATA WRAPPER dblink_fdw OPTIONS (nonexistent 'fdw');

-- test asynchronous notifications
SELECT dblink_connect(connection_parameters());

--should return listen
SELECT dblink_exec('LISTEN regression');
--should return listen
SELECT dblink_exec('LISTEN foobar');

SELECT dblink_exec('NOTIFY regression');
SELECT dblink_exec('NOTIFY foobar');

SELECT notify_name, be_pid = (select t.be_pid from dblink('select pg_backend_pid()') as t(be_pid int)) AS is_self_notify, extra from dblink_get_notify();

SELECT * from dblink_get_notify();

SELECT dblink_disconnect();

-- test dropped columns in dblink_build_sql_insert, dblink_build_sql_update
CREATE TEMP TABLE test_dropped
(
	col1 INT NOT NULL DEFAULT 111,
	id SERIAL PRIMARY KEY,
	col2 INT NOT NULL DEFAULT 112,
	col2b INT NOT NULL DEFAULT 113
);

INSERT INTO test_dropped VALUES(default);

ALTER TABLE test_dropped
	DROP COLUMN col1,
	DROP COLUMN col2,
	ADD COLUMN col3 VARCHAR(10) NOT NULL DEFAULT 'foo',
	ADD COLUMN col4 INT NOT NULL DEFAULT 42;

SELECT dblink_build_sql_insert('test_dropped', '1', 1,
                               ARRAY['1'::TEXT], ARRAY['2'::TEXT]);

SELECT dblink_build_sql_update('test_dropped', '1', 1,
                               ARRAY['1'::TEXT], ARRAY['2'::TEXT]);

SELECT dblink_build_sql_delete('test_dropped', '1', 1,
                               ARRAY['2'::TEXT]);

-- test local mimicry of remote GUC values that affect datatype I/O
SET datestyle = ISO, MDY;
SET intervalstyle = postgres;
SET timezone = UTC;
SELECT dblink_connect('myconn',connection_parameters());
SELECT dblink_exec('myconn', 'SET datestyle = GERMAN, DMY;');

-- single row synchronous case
SELECT *
FROM dblink('myconn',
    'SELECT * FROM (VALUES (''12.03.2013 00:00:00+00'')) t')
  AS t(a timestamptz);

-- multi-row synchronous case
SELECT *
FROM dblink('myconn',
    'SELECT * FROM
     (VALUES (''12.03.2013 00:00:00+00''),
             (''12.03.2013 00:00:00+00'')) t')
  AS t(a timestamptz);

-- single-row asynchronous case
SELECT *
FROM dblink_send_query('myconn',
    'SELECT * FROM
     (VALUES (''12.03.2013 00:00:00+00'')) t');
CREATE TEMPORARY TABLE result AS
(SELECT * from dblink_get_result('myconn') as t(t timestamptz))
UNION ALL
(SELECT * from dblink_get_result('myconn') as t(t timestamptz));
SELECT * FROM result;
DROP TABLE result;

-- multi-row asynchronous case
SELECT *
FROM dblink_send_query('myconn',
    'SELECT * FROM
     (VALUES (''12.03.2013 00:00:00+00''),
             (''12.03.2013 00:00:00+00'')) t');
CREATE TEMPORARY TABLE result AS
(SELECT * from dblink_get_result('myconn') as t(t timestamptz))
UNION ALL
(SELECT * from dblink_get_result('myconn') as t(t timestamptz))
UNION ALL
(SELECT * from dblink_get_result('myconn') as t(t timestamptz));
SELECT * FROM result;
DROP TABLE result;

-- Try an ambiguous interval
SELECT dblink_exec('myconn', 'SET intervalstyle = sql_standard;');
SELECT *
FROM dblink('myconn',
    'SELECT * FROM (VALUES (''-1 2:03:04'')) i')
  AS i(i interval);

-- Try swapping to another format to ensure the GUCs are tracked
-- properly through a change.
CREATE TEMPORARY TABLE result (t timestamptz);

SELECT dblink_exec('myconn', 'SET datestyle = ISO, MDY;');
INSERT INTO result
  SELECT *
  FROM dblink('myconn',
              'SELECT * FROM (VALUES (''03.12.2013 00:00:00+00'')) t')
    AS t(a timestamptz);

SELECT dblink_exec('myconn', 'SET datestyle = GERMAN, DMY;');
INSERT INTO result
  SELECT *
  FROM dblink('myconn',
              'SELECT * FROM (VALUES (''12.03.2013 00:00:00+00'')) t')
    AS t(a timestamptz);

SELECT * FROM result;

DROP TABLE result;

-- Check error throwing in dblink_fetch
SELECT dblink_open('myconn','error_cursor',
       'SELECT * FROM (VALUES (''1''), (''not an int'')) AS t(text);');
SELECT *
FROM dblink_fetch('myconn','error_cursor', 1) AS t(i int);
SELECT *
FROM dblink_fetch('myconn','error_cursor', 1) AS t(i int);

-- Make sure that the local settings have retained their values in spite
-- of shenanigans on the connection.
SHOW datestyle;
SHOW intervalstyle;

-- Clean up GUC-setting tests
SELECT dblink_disconnect('myconn');
RESET datestyle;
RESET intervalstyle;
RESET timezone;
