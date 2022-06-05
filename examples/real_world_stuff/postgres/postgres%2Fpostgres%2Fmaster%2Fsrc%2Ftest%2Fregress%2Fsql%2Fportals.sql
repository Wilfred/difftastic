--
-- Cursor regression tests
--

BEGIN;

DECLARE foo1 SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

DECLARE foo2 SCROLL CURSOR FOR SELECT * FROM tenk2;

DECLARE foo3 SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

DECLARE foo4 SCROLL CURSOR FOR SELECT * FROM tenk2;

DECLARE foo5 SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

DECLARE foo6 SCROLL CURSOR FOR SELECT * FROM tenk2;

DECLARE foo7 SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

DECLARE foo8 SCROLL CURSOR FOR SELECT * FROM tenk2;

DECLARE foo9 SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

DECLARE foo10 SCROLL CURSOR FOR SELECT * FROM tenk2;

DECLARE foo11 SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

DECLARE foo12 SCROLL CURSOR FOR SELECT * FROM tenk2;

DECLARE foo13 SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

DECLARE foo14 SCROLL CURSOR FOR SELECT * FROM tenk2;

DECLARE foo15 SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

DECLARE foo16 SCROLL CURSOR FOR SELECT * FROM tenk2;

DECLARE foo17 SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

DECLARE foo18 SCROLL CURSOR FOR SELECT * FROM tenk2;

DECLARE foo19 SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

DECLARE foo20 SCROLL CURSOR FOR SELECT * FROM tenk2;

DECLARE foo21 SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

DECLARE foo22 SCROLL CURSOR FOR SELECT * FROM tenk2;

DECLARE foo23 SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

FETCH 1 in foo1;

FETCH 2 in foo2;

FETCH 3 in foo3;

FETCH 4 in foo4;

FETCH 5 in foo5;

FETCH 6 in foo6;

FETCH 7 in foo7;

FETCH 8 in foo8;

FETCH 9 in foo9;

FETCH 10 in foo10;

FETCH 11 in foo11;

FETCH 12 in foo12;

FETCH 13 in foo13;

FETCH 14 in foo14;

FETCH 15 in foo15;

FETCH 16 in foo16;

FETCH 17 in foo17;

FETCH 18 in foo18;

FETCH 19 in foo19;

FETCH 20 in foo20;

FETCH 21 in foo21;

FETCH 22 in foo22;

FETCH 23 in foo23;

FETCH backward 1 in foo23;

FETCH backward 2 in foo22;

FETCH backward 3 in foo21;

FETCH backward 4 in foo20;

FETCH backward 5 in foo19;

FETCH backward 6 in foo18;

FETCH backward 7 in foo17;

FETCH backward 8 in foo16;

FETCH backward 9 in foo15;

FETCH backward 10 in foo14;

FETCH backward 11 in foo13;

FETCH backward 12 in foo12;

FETCH backward 13 in foo11;

FETCH backward 14 in foo10;

FETCH backward 15 in foo9;

FETCH backward 16 in foo8;

FETCH backward 17 in foo7;

FETCH backward 18 in foo6;

FETCH backward 19 in foo5;

FETCH backward 20 in foo4;

FETCH backward 21 in foo3;

FETCH backward 22 in foo2;

FETCH backward 23 in foo1;

CLOSE foo1;

CLOSE foo2;

CLOSE foo3;

CLOSE foo4;

CLOSE foo5;

CLOSE foo6;

CLOSE foo7;

CLOSE foo8;

CLOSE foo9;

CLOSE foo10;

CLOSE foo11;

CLOSE foo12;

-- leave some cursors open, to test that auto-close works.

-- record this in the system view as well (don't query the time field there
-- however)
SELECT name, statement, is_holdable, is_binary, is_scrollable FROM pg_cursors ORDER BY 1;

END;

SELECT name, statement, is_holdable, is_binary, is_scrollable FROM pg_cursors;

--
-- NO SCROLL disallows backward fetching
--

BEGIN;

DECLARE foo24 NO SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

FETCH 1 FROM foo24;

FETCH BACKWARD 1 FROM foo24; -- should fail

END;

BEGIN;

DECLARE foo24 NO SCROLL CURSOR FOR SELECT * FROM tenk1 ORDER BY unique2;

FETCH 1 FROM foo24;

FETCH ABSOLUTE 2 FROM foo24; -- allowed

FETCH ABSOLUTE 1 FROM foo24; -- should fail

END;

--
-- Cursors outside transaction blocks
--


SELECT name, statement, is_holdable, is_binary, is_scrollable FROM pg_cursors;

BEGIN;

DECLARE foo25 SCROLL CURSOR WITH HOLD FOR SELECT * FROM tenk2;

FETCH FROM foo25;

FETCH FROM foo25;

COMMIT;

FETCH FROM foo25;

FETCH BACKWARD FROM foo25;

FETCH ABSOLUTE -1 FROM foo25;

SELECT name, statement, is_holdable, is_binary, is_scrollable FROM pg_cursors;

CLOSE foo25;

BEGIN;

DECLARE foo25ns NO SCROLL CURSOR WITH HOLD FOR SELECT * FROM tenk2;

FETCH FROM foo25ns;

FETCH FROM foo25ns;

COMMIT;

FETCH FROM foo25ns;

FETCH ABSOLUTE 4 FROM foo25ns;

FETCH ABSOLUTE 4 FROM foo25ns; -- fail

SELECT name, statement, is_holdable, is_binary, is_scrollable FROM pg_cursors;

CLOSE foo25ns;

--
-- ROLLBACK should close holdable cursors
--

BEGIN;

DECLARE foo26 CURSOR WITH HOLD FOR SELECT * FROM tenk1 ORDER BY unique2;

ROLLBACK;

-- should fail
FETCH FROM foo26;

--
-- Parameterized DECLARE needs to insert param values into the cursor portal
--

BEGIN;

CREATE FUNCTION declares_cursor(text)
   RETURNS void
   AS 'DECLARE c CURSOR FOR SELECT stringu1 FROM tenk1 WHERE stringu1 LIKE $1;'
   LANGUAGE SQL;

SELECT declares_cursor('AB%');

FETCH ALL FROM c;

ROLLBACK;

--
-- Test behavior of both volatile and stable functions inside a cursor;
-- in particular we want to see what happens during commit of a holdable
-- cursor
--

create temp table tt1(f1 int);

create function count_tt1_v() returns int8 as
'select count(*) from tt1' language sql volatile;

create function count_tt1_s() returns int8 as
'select count(*) from tt1' language sql stable;

begin;

insert into tt1 values(1);

declare c1 cursor for select count_tt1_v(), count_tt1_s();

insert into tt1 values(2);

fetch all from c1;

rollback;

begin;

insert into tt1 values(1);

declare c2 cursor with hold for select count_tt1_v(), count_tt1_s();

insert into tt1 values(2);

commit;

delete from tt1;

fetch all from c2;

drop function count_tt1_v();
drop function count_tt1_s();


-- Create a cursor with the BINARY option and check the pg_cursors view
BEGIN;
SELECT name, statement, is_holdable, is_binary, is_scrollable FROM pg_cursors;
DECLARE bc BINARY CURSOR FOR SELECT * FROM tenk1;
SELECT name, statement, is_holdable, is_binary, is_scrollable FROM pg_cursors ORDER BY 1;
ROLLBACK;

-- We should not see the portal that is created internally to
-- implement EXECUTE in pg_cursors
PREPARE cprep AS
  SELECT name, statement, is_holdable, is_binary, is_scrollable FROM pg_cursors;
EXECUTE cprep;

-- test CLOSE ALL;
SELECT name FROM pg_cursors ORDER BY 1;
CLOSE ALL;
SELECT name FROM pg_cursors ORDER BY 1;
BEGIN;
DECLARE foo1 CURSOR WITH HOLD FOR SELECT 1;
DECLARE foo2 CURSOR WITHOUT HOLD FOR SELECT 1;
SELECT name FROM pg_cursors ORDER BY 1;
CLOSE ALL;
SELECT name FROM pg_cursors ORDER BY 1;
COMMIT;

--
-- Tests for updatable cursors
--

CREATE TEMP TABLE uctest(f1 int, f2 text);
INSERT INTO uctest VALUES (1, 'one'), (2, 'two'), (3, 'three');
SELECT * FROM uctest;

-- Check DELETE WHERE CURRENT
BEGIN;
DECLARE c1 CURSOR FOR SELECT * FROM uctest;
FETCH 2 FROM c1;
DELETE FROM uctest WHERE CURRENT OF c1;
-- should show deletion
SELECT * FROM uctest;
-- cursor did not move
FETCH ALL FROM c1;
-- cursor is insensitive
MOVE BACKWARD ALL IN c1;
FETCH ALL FROM c1;
COMMIT;
-- should still see deletion
SELECT * FROM uctest;

-- Check UPDATE WHERE CURRENT; this time use FOR UPDATE
BEGIN;
DECLARE c1 CURSOR FOR SELECT * FROM uctest FOR UPDATE;
FETCH c1;
UPDATE uctest SET f1 = 8 WHERE CURRENT OF c1;
SELECT * FROM uctest;
COMMIT;
SELECT * FROM uctest;

-- Check repeated-update and update-then-delete cases
BEGIN;
DECLARE c1 CURSOR FOR SELECT * FROM uctest;
FETCH c1;
UPDATE uctest SET f1 = f1 + 10 WHERE CURRENT OF c1;
SELECT * FROM uctest;
UPDATE uctest SET f1 = f1 + 10 WHERE CURRENT OF c1;
SELECT * FROM uctest;
-- insensitive cursor should not show effects of updates or deletes
FETCH RELATIVE 0 FROM c1;
DELETE FROM uctest WHERE CURRENT OF c1;
SELECT * FROM uctest;
DELETE FROM uctest WHERE CURRENT OF c1; -- no-op
SELECT * FROM uctest;
UPDATE uctest SET f1 = f1 + 10 WHERE CURRENT OF c1; -- no-op
SELECT * FROM uctest;
FETCH RELATIVE 0 FROM c1;
ROLLBACK;
SELECT * FROM uctest;

BEGIN;
DECLARE c1 CURSOR FOR SELECT * FROM uctest FOR UPDATE;
FETCH c1;
UPDATE uctest SET f1 = f1 + 10 WHERE CURRENT OF c1;
SELECT * FROM uctest;
UPDATE uctest SET f1 = f1 + 10 WHERE CURRENT OF c1;
SELECT * FROM uctest;
DELETE FROM uctest WHERE CURRENT OF c1;
SELECT * FROM uctest;
DELETE FROM uctest WHERE CURRENT OF c1; -- no-op
SELECT * FROM uctest;
UPDATE uctest SET f1 = f1 + 10 WHERE CURRENT OF c1; -- no-op
SELECT * FROM uctest;
--- FOR UPDATE cursors can't currently scroll back, so this is an error:
FETCH RELATIVE 0 FROM c1;
ROLLBACK;
SELECT * FROM uctest;

-- Check insensitive cursor with INSERT
-- (The above tests don't test the SQL notion of an insensitive cursor
-- correctly, because per SQL standard, changes from WHERE CURRENT OF
-- commands should be visible in the cursor.  So here we make the
-- changes with a command that is independent of the cursor.)
BEGIN;
DECLARE c1 INSENSITIVE CURSOR FOR SELECT * FROM uctest;
INSERT INTO uctest VALUES (10, 'ten');
FETCH NEXT FROM c1;
FETCH NEXT FROM c1;
FETCH NEXT FROM c1;  -- insert not visible
COMMIT;
SELECT * FROM uctest;
DELETE FROM uctest WHERE f1 = 10;  -- restore test table state

-- Check inheritance cases
CREATE TEMP TABLE ucchild () inherits (uctest);
INSERT INTO ucchild values(100, 'hundred');
SELECT * FROM uctest;

BEGIN;
DECLARE c1 CURSOR FOR SELECT * FROM uctest FOR UPDATE;
FETCH 1 FROM c1;
UPDATE uctest SET f1 = f1 + 10 WHERE CURRENT OF c1;
FETCH 1 FROM c1;
UPDATE uctest SET f1 = f1 + 10 WHERE CURRENT OF c1;
FETCH 1 FROM c1;
UPDATE uctest SET f1 = f1 + 10 WHERE CURRENT OF c1;
FETCH 1 FROM c1;
COMMIT;
SELECT * FROM uctest;

-- Can update from a self-join, but only if FOR UPDATE says which to use
BEGIN;
DECLARE c1 CURSOR FOR SELECT * FROM uctest a, uctest b WHERE a.f1 = b.f1 + 5;
FETCH 1 FROM c1;
UPDATE uctest SET f1 = f1 + 10 WHERE CURRENT OF c1;  -- fail
ROLLBACK;
BEGIN;
DECLARE c1 CURSOR FOR SELECT * FROM uctest a, uctest b WHERE a.f1 = b.f1 + 5 FOR UPDATE;
FETCH 1 FROM c1;
UPDATE uctest SET f1 = f1 + 10 WHERE CURRENT OF c1;  -- fail
ROLLBACK;
BEGIN;
DECLARE c1 CURSOR FOR SELECT * FROM uctest a, uctest b WHERE a.f1 = b.f1 + 5 FOR SHARE OF a;
FETCH 1 FROM c1;
UPDATE uctest SET f1 = f1 + 10 WHERE CURRENT OF c1;
SELECT * FROM uctest;
ROLLBACK;

-- Check various error cases

DELETE FROM uctest WHERE CURRENT OF c1;  -- fail, no such cursor
DECLARE cx CURSOR WITH HOLD FOR SELECT * FROM uctest;
DELETE FROM uctest WHERE CURRENT OF cx;  -- fail, can't use held cursor
BEGIN;
DECLARE c CURSOR FOR SELECT * FROM tenk2;
DELETE FROM uctest WHERE CURRENT OF c;  -- fail, cursor on wrong table
ROLLBACK;
BEGIN;
DECLARE c CURSOR FOR SELECT * FROM tenk2 FOR SHARE;
DELETE FROM uctest WHERE CURRENT OF c;  -- fail, cursor on wrong table
ROLLBACK;
BEGIN;
DECLARE c CURSOR FOR SELECT * FROM tenk1 JOIN tenk2 USING (unique1);
DELETE FROM tenk1 WHERE CURRENT OF c;  -- fail, cursor is on a join
ROLLBACK;
BEGIN;
DECLARE c CURSOR FOR SELECT f1,count(*) FROM uctest GROUP BY f1;
DELETE FROM uctest WHERE CURRENT OF c;  -- fail, cursor is on aggregation
ROLLBACK;
BEGIN;
DECLARE c1 CURSOR FOR SELECT * FROM uctest;
DELETE FROM uctest WHERE CURRENT OF c1; -- fail, no current row
ROLLBACK;
BEGIN;
DECLARE c1 CURSOR FOR SELECT MIN(f1) FROM uctest FOR UPDATE;
ROLLBACK;

-- WHERE CURRENT OF may someday work with views, but today is not that day.
-- For now, just make sure it errors out cleanly.
CREATE TEMP VIEW ucview AS SELECT * FROM uctest;
CREATE RULE ucrule AS ON DELETE TO ucview DO INSTEAD
  DELETE FROM uctest WHERE f1 = OLD.f1;
BEGIN;
DECLARE c1 CURSOR FOR SELECT * FROM ucview;
FETCH FROM c1;
DELETE FROM ucview WHERE CURRENT OF c1; -- fail, views not supported
ROLLBACK;

-- Check WHERE CURRENT OF with an index-only scan
BEGIN;
EXPLAIN (costs off)
DECLARE c1 CURSOR FOR SELECT stringu1 FROM onek WHERE stringu1 = 'DZAAAA';
DECLARE c1 CURSOR FOR SELECT stringu1 FROM onek WHERE stringu1 = 'DZAAAA';
FETCH FROM c1;
DELETE FROM onek WHERE CURRENT OF c1;
SELECT stringu1 FROM onek WHERE stringu1 = 'DZAAAA';
ROLLBACK;

-- Check behavior with rewinding to a previous child scan node,
-- as per bug #15395
BEGIN;
CREATE TABLE current_check (currentid int, payload text);
CREATE TABLE current_check_1 () INHERITS (current_check);
CREATE TABLE current_check_2 () INHERITS (current_check);
INSERT INTO current_check_1 SELECT i, 'p' || i FROM generate_series(1,9) i;
INSERT INTO current_check_2 SELECT i, 'P' || i FROM generate_series(10,19) i;

DECLARE c1 SCROLL CURSOR FOR SELECT * FROM current_check;

-- This tests the fetch-backwards code path
FETCH ABSOLUTE 12 FROM c1;
FETCH ABSOLUTE 8 FROM c1;
DELETE FROM current_check WHERE CURRENT OF c1 RETURNING *;

-- This tests the ExecutorRewind code path
FETCH ABSOLUTE 13 FROM c1;
FETCH ABSOLUTE 1 FROM c1;
DELETE FROM current_check WHERE CURRENT OF c1 RETURNING *;

SELECT * FROM current_check;
ROLLBACK;

-- Make sure snapshot management works okay, per bug report in
-- 235395b90909301035v7228ce63q392931f15aa74b31@mail.gmail.com
BEGIN;
SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
CREATE TABLE cursor (a int);
INSERT INTO cursor VALUES (1);
DECLARE c1 NO SCROLL CURSOR FOR SELECT * FROM cursor FOR UPDATE;
UPDATE cursor SET a = 2;
FETCH ALL FROM c1;
COMMIT;
DROP TABLE cursor;

-- Check rewinding a cursor containing a stable function in LIMIT,
-- per bug report in 8336843.9833.1399385291498.JavaMail.root@quick
begin;
create function nochange(int) returns int
  as 'select $1 limit 1' language sql stable;
declare c cursor for select * from int8_tbl limit nochange(3);
fetch all from c;
move backward all in c;
fetch all from c;
rollback;

-- Check handling of non-backwards-scan-capable plans with scroll cursors
begin;
explain (costs off) declare c1 cursor for select (select 42) as x;
explain (costs off) declare c1 scroll cursor for select (select 42) as x;
declare c1 scroll cursor for select (select 42) as x;
fetch all in c1;
fetch backward all in c1;
rollback;
begin;
explain (costs off) declare c2 cursor for select generate_series(1,3) as g;
explain (costs off) declare c2 scroll cursor for select generate_series(1,3) as g;
declare c2 scroll cursor for select generate_series(1,3) as g;
fetch all in c2;
fetch backward all in c2;
rollback;

-- Check fetching of toasted datums via cursors.
begin;

-- Other compression algorithms may cause the compressed data to be stored
-- inline.  Use pglz to ensure consistent results.
set default_toast_compression = 'pglz';

create table toasted_data (f1 int[]);
insert into toasted_data
  select array_agg(i) from generate_series(12345678, 12345678 + 1000) i;

declare local_portal cursor for select * from toasted_data;
fetch all in local_portal;

declare held_portal cursor with hold for select * from toasted_data;

commit;

drop table toasted_data;

fetch all in held_portal;

reset default_toast_compression;
