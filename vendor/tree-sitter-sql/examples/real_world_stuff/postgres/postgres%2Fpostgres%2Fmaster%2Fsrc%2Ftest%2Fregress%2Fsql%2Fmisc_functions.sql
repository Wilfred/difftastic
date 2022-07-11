-- directory paths and dlsuffix are passed to us in environment variables
\getenv libdir PG_LIBDIR
\getenv dlsuffix PG_DLSUFFIX

\set regresslib :libdir '/regress' :dlsuffix

--
-- num_nulls()
--

SELECT num_nonnulls(NULL);
SELECT num_nonnulls('1');
SELECT num_nonnulls(NULL::text);
SELECT num_nonnulls(NULL::text, NULL::int);
SELECT num_nonnulls(1, 2, NULL::text, NULL::point, '', int8 '9', 1.0 / NULL);
SELECT num_nonnulls(VARIADIC '{1,2,NULL,3}'::int[]);
SELECT num_nonnulls(VARIADIC '{"1","2","3","4"}'::text[]);
SELECT num_nonnulls(VARIADIC ARRAY(SELECT CASE WHEN i <> 40 THEN i END FROM generate_series(1, 100) i));

SELECT num_nulls(NULL);
SELECT num_nulls('1');
SELECT num_nulls(NULL::text);
SELECT num_nulls(NULL::text, NULL::int);
SELECT num_nulls(1, 2, NULL::text, NULL::point, '', int8 '9', 1.0 / NULL);
SELECT num_nulls(VARIADIC '{1,2,NULL,3}'::int[]);
SELECT num_nulls(VARIADIC '{"1","2","3","4"}'::text[]);
SELECT num_nulls(VARIADIC ARRAY(SELECT CASE WHEN i <> 40 THEN i END FROM generate_series(1, 100) i));

-- special cases
SELECT num_nonnulls(VARIADIC NULL::text[]);
SELECT num_nonnulls(VARIADIC '{}'::int[]);
SELECT num_nulls(VARIADIC NULL::text[]);
SELECT num_nulls(VARIADIC '{}'::int[]);

-- should fail, one or more arguments is required
SELECT num_nonnulls();
SELECT num_nulls();

--
-- canonicalize_path()
--

CREATE FUNCTION test_canonicalize_path(text)
   RETURNS text
   AS :'regresslib'
   LANGUAGE C STRICT IMMUTABLE;

SELECT test_canonicalize_path('/');
SELECT test_canonicalize_path('/./abc/def/');
SELECT test_canonicalize_path('/./../abc/def');
SELECT test_canonicalize_path('/./../../abc/def/');
SELECT test_canonicalize_path('/abc/.././def/ghi');
SELECT test_canonicalize_path('/abc/./../def/ghi//');
SELECT test_canonicalize_path('/abc/def/../..');
SELECT test_canonicalize_path('/abc/def/../../..');
SELECT test_canonicalize_path('/abc/def/../../../../ghi/jkl');
SELECT test_canonicalize_path('.');
SELECT test_canonicalize_path('./');
SELECT test_canonicalize_path('./abc/..');
SELECT test_canonicalize_path('abc/../');
SELECT test_canonicalize_path('abc/../def');
SELECT test_canonicalize_path('..');
SELECT test_canonicalize_path('../abc/def');
SELECT test_canonicalize_path('../abc/..');
SELECT test_canonicalize_path('../abc/../def');
SELECT test_canonicalize_path('../abc/../../def/ghi');
SELECT test_canonicalize_path('./abc/./def/.');
SELECT test_canonicalize_path('./abc/././def/.');
SELECT test_canonicalize_path('./abc/./def/.././ghi/../../../jkl/mno');

--
-- pg_log_backend_memory_contexts()
--
-- Memory contexts are logged and they are not returned to the function.
-- Furthermore, their contents can vary depending on the timing. However,
-- we can at least verify that the code doesn't fail, and that the
-- permissions are set properly.
--

SELECT pg_log_backend_memory_contexts(pg_backend_pid());

SELECT pg_log_backend_memory_contexts(pid) FROM pg_stat_activity
  WHERE backend_type = 'checkpointer';

CREATE ROLE regress_log_memory;

SELECT has_function_privilege('regress_log_memory',
  'pg_log_backend_memory_contexts(integer)', 'EXECUTE'); -- no

GRANT EXECUTE ON FUNCTION pg_log_backend_memory_contexts(integer)
  TO regress_log_memory;

SELECT has_function_privilege('regress_log_memory',
  'pg_log_backend_memory_contexts(integer)', 'EXECUTE'); -- yes

SET ROLE regress_log_memory;
SELECT pg_log_backend_memory_contexts(pg_backend_pid());
RESET ROLE;

REVOKE EXECUTE ON FUNCTION pg_log_backend_memory_contexts(integer)
  FROM regress_log_memory;

DROP ROLE regress_log_memory;

--
-- Test some built-in SRFs
--
-- The outputs of these are variable, so we can't just print their results
-- directly, but we can at least verify that the code doesn't fail.
--
select setting as segsize
from pg_settings where name = 'wal_segment_size'
\gset

select count(*) > 0 as ok from pg_ls_waldir();
-- Test ProjectSet as well as FunctionScan
select count(*) > 0 as ok from (select pg_ls_waldir()) ss;
-- Test not-run-to-completion cases.
select * from pg_ls_waldir() limit 0;
select count(*) > 0 as ok from (select * from pg_ls_waldir() limit 1) ss;
select (w).size = :segsize as ok
from (select pg_ls_waldir() w) ss where length((w).name) = 24 limit 1;

select count(*) >= 0 as ok from pg_ls_archive_statusdir();

select * from (select pg_ls_dir('.') a) a where a = 'base' limit 1;
-- Test missing_ok (second argument)
select pg_ls_dir('does not exist', false, false); -- error
select pg_ls_dir('does not exist', true, false); -- ok
-- Test include_dot_dirs (third argument)
select count(*) = 1 as dot_found
  from pg_ls_dir('.', false, true) as ls where ls = '.';
select count(*) = 1 as dot_found
  from pg_ls_dir('.', false, false) as ls where ls = '.';

select * from (select (pg_timezone_names()).name) ptn where name='UTC' limit 1;

select count(*) > 0 from
  (select pg_tablespace_databases(oid) as pts from pg_tablespace
   where spcname = 'pg_default') pts
  join pg_database db on pts.pts = db.oid;

--
-- Test replication slot directory functions
--
CREATE ROLE regress_slot_dir_funcs;
-- Not available by default.
SELECT has_function_privilege('regress_slot_dir_funcs',
  'pg_ls_logicalsnapdir()', 'EXECUTE');
SELECT has_function_privilege('regress_slot_dir_funcs',
  'pg_ls_logicalmapdir()', 'EXECUTE');
SELECT has_function_privilege('regress_slot_dir_funcs',
  'pg_ls_replslotdir(text)', 'EXECUTE');
GRANT pg_monitor TO regress_slot_dir_funcs;
-- Role is now part of pg_monitor, so these are available.
SELECT has_function_privilege('regress_slot_dir_funcs',
  'pg_ls_logicalsnapdir()', 'EXECUTE');
SELECT has_function_privilege('regress_slot_dir_funcs',
  'pg_ls_logicalmapdir()', 'EXECUTE');
SELECT has_function_privilege('regress_slot_dir_funcs',
  'pg_ls_replslotdir(text)', 'EXECUTE');
DROP ROLE regress_slot_dir_funcs;

--
-- Test adding a support function to a subject function
--

CREATE FUNCTION my_int_eq(int, int) RETURNS bool
  LANGUAGE internal STRICT IMMUTABLE PARALLEL SAFE
  AS $$int4eq$$;

-- By default, planner does not think that's selective
EXPLAIN (COSTS OFF)
SELECT * FROM tenk1 a JOIN tenk1 b ON a.unique1 = b.unique1
WHERE my_int_eq(a.unique2, 42);

-- With support function that knows it's int4eq, we get a different plan
CREATE FUNCTION test_support_func(internal)
    RETURNS internal
    AS :'regresslib', 'test_support_func'
    LANGUAGE C STRICT;

ALTER FUNCTION my_int_eq(int, int) SUPPORT test_support_func;

EXPLAIN (COSTS OFF)
SELECT * FROM tenk1 a JOIN tenk1 b ON a.unique1 = b.unique1
WHERE my_int_eq(a.unique2, 42);

-- Also test non-default rowcount estimate
CREATE FUNCTION my_gen_series(int, int) RETURNS SETOF integer
  LANGUAGE internal STRICT IMMUTABLE PARALLEL SAFE
  AS $$generate_series_int4$$
  SUPPORT test_support_func;

EXPLAIN (COSTS OFF)
SELECT * FROM tenk1 a JOIN my_gen_series(1,1000) g ON a.unique1 = g;

EXPLAIN (COSTS OFF)
SELECT * FROM tenk1 a JOIN my_gen_series(1,10) g ON a.unique1 = g;
