--
-- Test the LOCK statement
--

-- directory paths and dlsuffix are passed to us in environment variables
\getenv libdir PG_LIBDIR
\getenv dlsuffix PG_DLSUFFIX

\set regresslib :libdir '/regress' :dlsuffix

-- Setup
CREATE SCHEMA lock_schema1;
SET search_path = lock_schema1;
CREATE TABLE lock_tbl1 (a BIGINT);
CREATE TABLE lock_tbl1a (a BIGINT);
CREATE VIEW lock_view1 AS SELECT * FROM lock_tbl1;
CREATE VIEW lock_view2(a,b) AS SELECT * FROM lock_tbl1, lock_tbl1a;
CREATE VIEW lock_view3 AS SELECT * from lock_view2;
CREATE VIEW lock_view4 AS SELECT (select a from lock_tbl1a limit 1) from lock_tbl1;
CREATE VIEW lock_view5 AS SELECT * from lock_tbl1 where a in (select * from lock_tbl1a);
CREATE VIEW lock_view6 AS SELECT * from (select * from lock_tbl1) sub;
CREATE ROLE regress_rol_lock1;
ALTER ROLE regress_rol_lock1 SET search_path = lock_schema1;
GRANT USAGE ON SCHEMA lock_schema1 TO regress_rol_lock1;

-- Try all valid lock options; also try omitting the optional TABLE keyword.
BEGIN TRANSACTION;
LOCK TABLE lock_tbl1 IN ACCESS SHARE MODE;
LOCK lock_tbl1 IN ROW SHARE MODE;
LOCK TABLE lock_tbl1 IN ROW EXCLUSIVE MODE;
LOCK TABLE lock_tbl1 IN SHARE UPDATE EXCLUSIVE MODE;
LOCK TABLE lock_tbl1 IN SHARE MODE;
LOCK lock_tbl1 IN SHARE ROW EXCLUSIVE MODE;
LOCK TABLE lock_tbl1 IN EXCLUSIVE MODE;
LOCK TABLE lock_tbl1 IN ACCESS EXCLUSIVE MODE;
ROLLBACK;

-- Try using NOWAIT along with valid options.
BEGIN TRANSACTION;
LOCK TABLE lock_tbl1 IN ACCESS SHARE MODE NOWAIT;
LOCK TABLE lock_tbl1 IN ROW SHARE MODE NOWAIT;
LOCK TABLE lock_tbl1 IN ROW EXCLUSIVE MODE NOWAIT;
LOCK TABLE lock_tbl1 IN SHARE UPDATE EXCLUSIVE MODE NOWAIT;
LOCK TABLE lock_tbl1 IN SHARE MODE NOWAIT;
LOCK TABLE lock_tbl1 IN SHARE ROW EXCLUSIVE MODE NOWAIT;
LOCK TABLE lock_tbl1 IN EXCLUSIVE MODE NOWAIT;
LOCK TABLE lock_tbl1 IN ACCESS EXCLUSIVE MODE NOWAIT;
ROLLBACK;

-- Verify that we can lock views.
BEGIN TRANSACTION;
LOCK TABLE lock_view1 IN EXCLUSIVE MODE;
-- lock_view1 and lock_tbl1 are locked.
select relname from pg_locks l, pg_class c
 where l.relation = c.oid and relname like '%lock_%' and mode = 'ExclusiveLock'
 order by relname;
ROLLBACK;
BEGIN TRANSACTION;
LOCK TABLE lock_view2 IN EXCLUSIVE MODE;
-- lock_view1, lock_tbl1, and lock_tbl1a are locked.
select relname from pg_locks l, pg_class c
 where l.relation = c.oid and relname like '%lock_%' and mode = 'ExclusiveLock'
 order by relname;
ROLLBACK;
BEGIN TRANSACTION;
LOCK TABLE lock_view3 IN EXCLUSIVE MODE;
-- lock_view3, lock_view2, lock_tbl1, and lock_tbl1a are locked recursively.
select relname from pg_locks l, pg_class c
 where l.relation = c.oid and relname like '%lock_%' and mode = 'ExclusiveLock'
 order by relname;
ROLLBACK;
BEGIN TRANSACTION;
LOCK TABLE lock_view4 IN EXCLUSIVE MODE;
-- lock_view4, lock_tbl1, and lock_tbl1a are locked.
select relname from pg_locks l, pg_class c
 where l.relation = c.oid and relname like '%lock_%' and mode = 'ExclusiveLock'
 order by relname;
ROLLBACK;
BEGIN TRANSACTION;
LOCK TABLE lock_view5 IN EXCLUSIVE MODE;
-- lock_view5, lock_tbl1, and lock_tbl1a are locked.
select relname from pg_locks l, pg_class c
 where l.relation = c.oid and relname like '%lock_%' and mode = 'ExclusiveLock'
 order by relname;
ROLLBACK;
BEGIN TRANSACTION;
LOCK TABLE lock_view6 IN EXCLUSIVE MODE;
-- lock_view6 an lock_tbl1 are locked.
select relname from pg_locks l, pg_class c
 where l.relation = c.oid and relname like '%lock_%' and mode = 'ExclusiveLock'
 order by relname;
ROLLBACK;
-- Verify that we cope with infinite recursion in view definitions.
CREATE OR REPLACE VIEW lock_view2 AS SELECT * from lock_view3;
BEGIN TRANSACTION;
LOCK TABLE lock_view2 IN EXCLUSIVE MODE;
ROLLBACK;
CREATE VIEW lock_view7 AS SELECT * from lock_view2;
BEGIN TRANSACTION;
LOCK TABLE lock_view7 IN EXCLUSIVE MODE;
ROLLBACK;

-- Verify that we can lock a table with inheritance children.
CREATE TABLE lock_tbl2 (b BIGINT) INHERITS (lock_tbl1);
CREATE TABLE lock_tbl3 () INHERITS (lock_tbl2);
BEGIN TRANSACTION;
LOCK TABLE lock_tbl1 * IN ACCESS EXCLUSIVE MODE;
ROLLBACK;

-- Child tables are locked without granting explicit permission to do so as
-- long as we have permission to lock the parent.
GRANT UPDATE ON TABLE lock_tbl1 TO regress_rol_lock1;
SET ROLE regress_rol_lock1;
-- fail when child locked directly
BEGIN;
LOCK TABLE lock_tbl2;
ROLLBACK;
BEGIN;
LOCK TABLE lock_tbl1 * IN ACCESS EXCLUSIVE MODE;
ROLLBACK;
BEGIN;
LOCK TABLE ONLY lock_tbl1;
ROLLBACK;
RESET ROLE;
REVOKE UPDATE ON TABLE lock_tbl1 FROM regress_rol_lock1;

-- Tables referred to by views are locked without explicit permission to do so
-- as long as we have permission to lock the view itself.
SET ROLE regress_rol_lock1;
-- fail without permissions on the view
BEGIN;
LOCK TABLE lock_view1;
ROLLBACK;
RESET ROLE;
GRANT UPDATE ON TABLE lock_view1 TO regress_rol_lock1;
SET ROLE regress_rol_lock1;
BEGIN;
LOCK TABLE lock_view1 IN ACCESS EXCLUSIVE MODE;
-- lock_view1 and lock_tbl1 (plus children lock_tbl2 and lock_tbl3) are locked.
select relname from pg_locks l, pg_class c
 where l.relation = c.oid and relname like '%lock_%' and mode = 'AccessExclusiveLock'
 order by relname;
ROLLBACK;
RESET ROLE;
REVOKE UPDATE ON TABLE lock_view1 FROM regress_rol_lock1;

-- Tables referred to by security invoker views require explicit permission to
-- be locked.
CREATE VIEW lock_view8 WITH (security_invoker) AS SELECT * FROM lock_tbl1;
SET ROLE regress_rol_lock1;
-- fail without permissions on the view
BEGIN;
LOCK TABLE lock_view8;
ROLLBACK;
RESET ROLE;
GRANT UPDATE ON TABLE lock_view8 TO regress_rol_lock1;
SET ROLE regress_rol_lock1;
-- fail without permissions on the table referenced by the view
BEGIN;
LOCK TABLE lock_view8;
ROLLBACK;
RESET ROLE;
GRANT UPDATE ON TABLE lock_tbl1 TO regress_rol_lock1;
BEGIN;
LOCK TABLE lock_view8 IN ACCESS EXCLUSIVE MODE;
-- lock_view8 and lock_tbl1 (plus children lock_tbl2 and lock_tbl3) are locked.
select relname from pg_locks l, pg_class c
 where l.relation = c.oid and relname like '%lock_%' and mode = 'AccessExclusiveLock'
 order by relname;
ROLLBACK;
RESET ROLE;
REVOKE UPDATE ON TABLE lock_view8 FROM regress_rol_lock1;

--
-- Clean up
--
DROP VIEW lock_view8;
DROP VIEW lock_view7;
DROP VIEW lock_view6;
DROP VIEW lock_view5;
DROP VIEW lock_view4;
DROP VIEW lock_view3 CASCADE;
DROP VIEW lock_view1;
DROP TABLE lock_tbl3;
DROP TABLE lock_tbl2;
DROP TABLE lock_tbl1;
DROP TABLE lock_tbl1a;
DROP SCHEMA lock_schema1 CASCADE;
DROP ROLE regress_rol_lock1;


-- atomic ops tests
RESET search_path;

CREATE FUNCTION test_atomic_ops()
    RETURNS bool
    AS :'regresslib'
    LANGUAGE C;

SELECT test_atomic_ops();
