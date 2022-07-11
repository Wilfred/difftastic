--
-- CONSTRAINTS
-- Constraints can be specified with:
--  - DEFAULT clause
--  - CHECK clauses
--  - PRIMARY KEY clauses
--  - UNIQUE clauses
--  - EXCLUDE clauses
--

-- directory paths are passed to us in environment variables
\getenv abs_srcdir PG_ABS_SRCDIR

--
-- DEFAULT syntax
--

CREATE TABLE DEFAULT_TBL (i int DEFAULT 100,
	x text DEFAULT 'vadim', f float8 DEFAULT 123.456);

INSERT INTO DEFAULT_TBL VALUES (1, 'thomas', 57.0613);
INSERT INTO DEFAULT_TBL VALUES (1, 'bruce');
INSERT INTO DEFAULT_TBL (i, f) VALUES (2, 987.654);
INSERT INTO DEFAULT_TBL (x) VALUES ('marc');
INSERT INTO DEFAULT_TBL VALUES (3, null, 1.0);

SELECT * FROM DEFAULT_TBL;

CREATE SEQUENCE DEFAULT_SEQ;

CREATE TABLE DEFAULTEXPR_TBL (i1 int DEFAULT 100 + (200-199) * 2,
	i2 int DEFAULT nextval('default_seq'));

INSERT INTO DEFAULTEXPR_TBL VALUES (-1, -2);
INSERT INTO DEFAULTEXPR_TBL (i1) VALUES (-3);
INSERT INTO DEFAULTEXPR_TBL (i2) VALUES (-4);
INSERT INTO DEFAULTEXPR_TBL (i2) VALUES (NULL);

SELECT * FROM DEFAULTEXPR_TBL;

-- syntax errors
--  test for extraneous comma
CREATE TABLE error_tbl (i int DEFAULT (100, ));
--  this will fail because gram.y uses b_expr not a_expr for defaults,
--  to avoid a shift/reduce conflict that arises from NOT NULL being
--  part of the column definition syntax:
CREATE TABLE error_tbl (b1 bool DEFAULT 1 IN (1, 2));
--  this should work, however:
CREATE TABLE error_tbl (b1 bool DEFAULT (1 IN (1, 2)));

DROP TABLE error_tbl;

--
-- CHECK syntax
--

CREATE TABLE CHECK_TBL (x int,
	CONSTRAINT CHECK_CON CHECK (x > 3));

INSERT INTO CHECK_TBL VALUES (5);
INSERT INTO CHECK_TBL VALUES (4);
INSERT INTO CHECK_TBL VALUES (3);
INSERT INTO CHECK_TBL VALUES (2);
INSERT INTO CHECK_TBL VALUES (6);
INSERT INTO CHECK_TBL VALUES (1);

SELECT * FROM CHECK_TBL;

CREATE SEQUENCE CHECK_SEQ;

CREATE TABLE CHECK2_TBL (x int, y text, z int,
	CONSTRAINT SEQUENCE_CON
	CHECK (x > 3 and y <> 'check failed' and z < 8));

INSERT INTO CHECK2_TBL VALUES (4, 'check ok', -2);
INSERT INTO CHECK2_TBL VALUES (1, 'x check failed', -2);
INSERT INTO CHECK2_TBL VALUES (5, 'z check failed', 10);
INSERT INTO CHECK2_TBL VALUES (0, 'check failed', -2);
INSERT INTO CHECK2_TBL VALUES (6, 'check failed', 11);
INSERT INTO CHECK2_TBL VALUES (7, 'check ok', 7);

SELECT * from CHECK2_TBL;

--
-- Check constraints on INSERT
--

CREATE SEQUENCE INSERT_SEQ;

CREATE TABLE INSERT_TBL (x INT DEFAULT nextval('insert_seq'),
	y TEXT DEFAULT '-NULL-',
	z INT DEFAULT -1 * currval('insert_seq'),
	CONSTRAINT INSERT_TBL_CON CHECK (x >= 3 AND y <> 'check failed' AND x < 8),
	CHECK (x + z = 0));

INSERT INTO INSERT_TBL(x,z) VALUES (2, -2);

SELECT * FROM INSERT_TBL;

SELECT 'one' AS one, nextval('insert_seq');

INSERT INTO INSERT_TBL(y) VALUES ('Y');
INSERT INTO INSERT_TBL(y) VALUES ('Y');
INSERT INTO INSERT_TBL(x,z) VALUES (1, -2);
INSERT INTO INSERT_TBL(z,x) VALUES (-7,  7);
INSERT INTO INSERT_TBL VALUES (5, 'check failed', -5);
INSERT INTO INSERT_TBL VALUES (7, '!check failed', -7);
INSERT INTO INSERT_TBL(y) VALUES ('-!NULL-');

SELECT * FROM INSERT_TBL;

INSERT INTO INSERT_TBL(y,z) VALUES ('check failed', 4);
INSERT INTO INSERT_TBL(x,y) VALUES (5, 'check failed');
INSERT INTO INSERT_TBL(x,y) VALUES (5, '!check failed');
INSERT INTO INSERT_TBL(y) VALUES ('-!NULL-');

SELECT * FROM INSERT_TBL;

SELECT 'seven' AS one, nextval('insert_seq');

INSERT INTO INSERT_TBL(y) VALUES ('Y');

SELECT 'eight' AS one, currval('insert_seq');

-- According to SQL, it is OK to insert a record that gives rise to NULL
-- constraint-condition results.  Postgres used to reject this, but it
-- was wrong:
INSERT INTO INSERT_TBL VALUES (null, null, null);

SELECT * FROM INSERT_TBL;

--
-- Check constraints on system columns
--

CREATE TABLE SYS_COL_CHECK_TBL (city text, state text, is_capital bool,
                  altitude int,
                  CHECK (NOT (is_capital AND tableoid::regclass::text = 'sys_col_check_tbl')));

INSERT INTO SYS_COL_CHECK_TBL VALUES ('Seattle', 'Washington', false, 100);
INSERT INTO SYS_COL_CHECK_TBL VALUES ('Olympia', 'Washington', true, 100);

SELECT *, tableoid::regclass::text FROM SYS_COL_CHECK_TBL;

DROP TABLE SYS_COL_CHECK_TBL;

--
-- Check constraints on system columns other then TableOid should return error
--
CREATE TABLE SYS_COL_CHECK_TBL (city text, state text, is_capital bool,
                  altitude int,
				  CHECK (NOT (is_capital AND ctid::text = 'sys_col_check_tbl')));

--
-- Check inheritance of defaults and constraints
--

CREATE TABLE INSERT_CHILD (cx INT default 42,
	cy INT CHECK (cy > x))
	INHERITS (INSERT_TBL);

INSERT INTO INSERT_CHILD(x,z,cy) VALUES (7,-7,11);
INSERT INTO INSERT_CHILD(x,z,cy) VALUES (7,-7,6);
INSERT INTO INSERT_CHILD(x,z,cy) VALUES (6,-7,7);
INSERT INTO INSERT_CHILD(x,y,z,cy) VALUES (6,'check failed',-6,7);

SELECT * FROM INSERT_CHILD;

DROP TABLE INSERT_CHILD;

--
-- Check NO INHERIT type of constraints and inheritance
--

CREATE TABLE ATACC1 (TEST INT
	CHECK (TEST > 0) NO INHERIT);

CREATE TABLE ATACC2 (TEST2 INT) INHERITS (ATACC1);
-- check constraint is not there on child
INSERT INTO ATACC2 (TEST) VALUES (-3);
-- check constraint is there on parent
INSERT INTO ATACC1 (TEST) VALUES (-3);
DROP TABLE ATACC1 CASCADE;

CREATE TABLE ATACC1 (TEST INT, TEST2 INT
	CHECK (TEST > 0), CHECK (TEST2 > 10) NO INHERIT);

CREATE TABLE ATACC2 () INHERITS (ATACC1);
-- check constraint is there on child
INSERT INTO ATACC2 (TEST) VALUES (-3);
-- check constraint is there on parent
INSERT INTO ATACC1 (TEST) VALUES (-3);
-- check constraint is not there on child
INSERT INTO ATACC2 (TEST2) VALUES (3);
-- check constraint is there on parent
INSERT INTO ATACC1 (TEST2) VALUES (3);
DROP TABLE ATACC1 CASCADE;

--
-- Check constraints on INSERT INTO
--

DELETE FROM INSERT_TBL;

ALTER SEQUENCE INSERT_SEQ RESTART WITH 4;

CREATE TEMP TABLE tmp (xd INT, yd TEXT, zd INT);

INSERT INTO tmp VALUES (null, 'Y', null);
INSERT INTO tmp VALUES (5, '!check failed', null);
INSERT INTO tmp VALUES (null, 'try again', null);
INSERT INTO INSERT_TBL(y) select yd from tmp;

SELECT * FROM INSERT_TBL;

INSERT INTO INSERT_TBL SELECT * FROM tmp WHERE yd = 'try again';
INSERT INTO INSERT_TBL(y,z) SELECT yd, -7 FROM tmp WHERE yd = 'try again';
INSERT INTO INSERT_TBL(y,z) SELECT yd, -8 FROM tmp WHERE yd = 'try again';

SELECT * FROM INSERT_TBL;

DROP TABLE tmp;

--
-- Check constraints on UPDATE
--

UPDATE INSERT_TBL SET x = NULL WHERE x = 5;
UPDATE INSERT_TBL SET x = 6 WHERE x = 6;
UPDATE INSERT_TBL SET x = -z, z = -x;
UPDATE INSERT_TBL SET x = z, z = x;

SELECT * FROM INSERT_TBL;

-- DROP TABLE INSERT_TBL;

--
-- Check constraints on COPY FROM
--

CREATE TABLE COPY_TBL (x INT, y TEXT, z INT,
	CONSTRAINT COPY_CON
	CHECK (x > 3 AND y <> 'check failed' AND x < 7 ));

\set filename :abs_srcdir '/data/constro.data'
COPY COPY_TBL FROM :'filename';

SELECT * FROM COPY_TBL;

\set filename :abs_srcdir '/data/constrf.data'
COPY COPY_TBL FROM :'filename';

SELECT * FROM COPY_TBL;

--
-- Primary keys
--

CREATE TABLE PRIMARY_TBL (i int PRIMARY KEY, t text);

INSERT INTO PRIMARY_TBL VALUES (1, 'one');
INSERT INTO PRIMARY_TBL VALUES (2, 'two');
INSERT INTO PRIMARY_TBL VALUES (1, 'three');
INSERT INTO PRIMARY_TBL VALUES (4, 'three');
INSERT INTO PRIMARY_TBL VALUES (5, 'one');
INSERT INTO PRIMARY_TBL (t) VALUES ('six');

SELECT * FROM PRIMARY_TBL;

DROP TABLE PRIMARY_TBL;

CREATE TABLE PRIMARY_TBL (i int, t text,
	PRIMARY KEY(i,t));

INSERT INTO PRIMARY_TBL VALUES (1, 'one');
INSERT INTO PRIMARY_TBL VALUES (2, 'two');
INSERT INTO PRIMARY_TBL VALUES (1, 'three');
INSERT INTO PRIMARY_TBL VALUES (4, 'three');
INSERT INTO PRIMARY_TBL VALUES (5, 'one');
INSERT INTO PRIMARY_TBL (t) VALUES ('six');

SELECT * FROM PRIMARY_TBL;

DROP TABLE PRIMARY_TBL;

--
-- Unique keys
--

CREATE TABLE UNIQUE_TBL (i int UNIQUE, t text);

INSERT INTO UNIQUE_TBL VALUES (1, 'one');
INSERT INTO UNIQUE_TBL VALUES (2, 'two');
INSERT INTO UNIQUE_TBL VALUES (1, 'three');
INSERT INTO UNIQUE_TBL VALUES (4, 'four');
INSERT INTO UNIQUE_TBL VALUES (5, 'one');
INSERT INTO UNIQUE_TBL (t) VALUES ('six');
INSERT INTO UNIQUE_TBL (t) VALUES ('seven');

INSERT INTO UNIQUE_TBL VALUES (5, 'five-upsert-insert') ON CONFLICT (i) DO UPDATE SET t = 'five-upsert-update';
INSERT INTO UNIQUE_TBL VALUES (6, 'six-upsert-insert') ON CONFLICT (i) DO UPDATE SET t = 'six-upsert-update';
-- should fail
INSERT INTO UNIQUE_TBL VALUES (1, 'a'), (2, 'b'), (2, 'b') ON CONFLICT (i) DO UPDATE SET t = 'fails';

SELECT * FROM UNIQUE_TBL;

DROP TABLE UNIQUE_TBL;

CREATE TABLE UNIQUE_TBL (i int UNIQUE NULLS NOT DISTINCT, t text);

INSERT INTO UNIQUE_TBL VALUES (1, 'one');
INSERT INTO UNIQUE_TBL VALUES (2, 'two');
INSERT INTO UNIQUE_TBL VALUES (1, 'three');
INSERT INTO UNIQUE_TBL VALUES (4, 'four');
INSERT INTO UNIQUE_TBL VALUES (5, 'one');
INSERT INTO UNIQUE_TBL (t) VALUES ('six');
INSERT INTO UNIQUE_TBL (t) VALUES ('seven');

SELECT * FROM UNIQUE_TBL;

DROP TABLE UNIQUE_TBL;

CREATE TABLE UNIQUE_TBL (i int, t text,
	UNIQUE(i,t));

INSERT INTO UNIQUE_TBL VALUES (1, 'one');
INSERT INTO UNIQUE_TBL VALUES (2, 'two');
INSERT INTO UNIQUE_TBL VALUES (1, 'three');
INSERT INTO UNIQUE_TBL VALUES (1, 'one');
INSERT INTO UNIQUE_TBL VALUES (5, 'one');
INSERT INTO UNIQUE_TBL (t) VALUES ('six');

SELECT * FROM UNIQUE_TBL;

DROP TABLE UNIQUE_TBL;

--
-- Deferrable unique constraints
--

CREATE TABLE unique_tbl (i int UNIQUE DEFERRABLE, t text);

INSERT INTO unique_tbl VALUES (0, 'one');
INSERT INTO unique_tbl VALUES (1, 'two');
INSERT INTO unique_tbl VALUES (2, 'tree');
INSERT INTO unique_tbl VALUES (3, 'four');
INSERT INTO unique_tbl VALUES (4, 'five');

BEGIN;

-- default is immediate so this should fail right away
UPDATE unique_tbl SET i = 1 WHERE i = 0;

ROLLBACK;

-- check is done at end of statement, so this should succeed
UPDATE unique_tbl SET i = i+1;

SELECT * FROM unique_tbl;

-- explicitly defer the constraint
BEGIN;

SET CONSTRAINTS unique_tbl_i_key DEFERRED;

INSERT INTO unique_tbl VALUES (3, 'three');
DELETE FROM unique_tbl WHERE t = 'tree'; -- makes constraint valid again

COMMIT; -- should succeed

SELECT * FROM unique_tbl;

-- try adding an initially deferred constraint
ALTER TABLE unique_tbl DROP CONSTRAINT unique_tbl_i_key;
ALTER TABLE unique_tbl ADD CONSTRAINT unique_tbl_i_key
	UNIQUE (i) DEFERRABLE INITIALLY DEFERRED;

BEGIN;

INSERT INTO unique_tbl VALUES (1, 'five');
INSERT INTO unique_tbl VALUES (5, 'one');
UPDATE unique_tbl SET i = 4 WHERE i = 2;
UPDATE unique_tbl SET i = 2 WHERE i = 4 AND t = 'four';
DELETE FROM unique_tbl WHERE i = 1 AND t = 'one';
DELETE FROM unique_tbl WHERE i = 5 AND t = 'five';

COMMIT;

SELECT * FROM unique_tbl;

-- should fail at commit-time
BEGIN;
INSERT INTO unique_tbl VALUES (3, 'Three'); -- should succeed for now
COMMIT; -- should fail

-- make constraint check immediate
BEGIN;

SET CONSTRAINTS ALL IMMEDIATE;

INSERT INTO unique_tbl VALUES (3, 'Three'); -- should fail

COMMIT;

-- forced check when SET CONSTRAINTS is called
BEGIN;

SET CONSTRAINTS ALL DEFERRED;

INSERT INTO unique_tbl VALUES (3, 'Three'); -- should succeed for now

SET CONSTRAINTS ALL IMMEDIATE; -- should fail

COMMIT;

-- test deferrable UNIQUE with a partitioned table
CREATE TABLE parted_uniq_tbl (i int UNIQUE DEFERRABLE) partition by range (i);
CREATE TABLE parted_uniq_tbl_1 PARTITION OF parted_uniq_tbl FOR VALUES FROM (0) TO (10);
CREATE TABLE parted_uniq_tbl_2 PARTITION OF parted_uniq_tbl FOR VALUES FROM (20) TO (30);
SELECT conname, conrelid::regclass FROM pg_constraint
  WHERE conname LIKE 'parted_uniq%' ORDER BY conname;
BEGIN;
INSERT INTO parted_uniq_tbl VALUES (1);
SAVEPOINT f;
INSERT INTO parted_uniq_tbl VALUES (1);	-- unique violation
ROLLBACK TO f;
SET CONSTRAINTS parted_uniq_tbl_i_key DEFERRED;
INSERT INTO parted_uniq_tbl VALUES (1);	-- OK now, fail at commit
COMMIT;
DROP TABLE parted_uniq_tbl;

-- test a HOT update that invalidates the conflicting tuple.
-- the trigger should still fire and catch the violation

BEGIN;

INSERT INTO unique_tbl VALUES (3, 'Three'); -- should succeed for now
UPDATE unique_tbl SET t = 'THREE' WHERE i = 3 AND t = 'Three';

COMMIT; -- should fail

SELECT * FROM unique_tbl;

-- test a HOT update that modifies the newly inserted tuple,
-- but should succeed because we then remove the other conflicting tuple.

BEGIN;

INSERT INTO unique_tbl VALUES(3, 'tree'); -- should succeed for now
UPDATE unique_tbl SET t = 'threex' WHERE t = 'tree';
DELETE FROM unique_tbl WHERE t = 'three';

SELECT * FROM unique_tbl;

COMMIT;

SELECT * FROM unique_tbl;

DROP TABLE unique_tbl;

--
-- EXCLUDE constraints
--

CREATE TABLE circles (
  c1 CIRCLE,
  c2 TEXT,
  EXCLUDE USING gist
    (c1 WITH &&, (c2::circle) WITH &&)
    WHERE (circle_center(c1) <> '(0,0)')
);

-- these should succeed because they don't match the index predicate
INSERT INTO circles VALUES('<(0,0), 5>', '<(0,0), 5>');
INSERT INTO circles VALUES('<(0,0), 5>', '<(0,0), 4>');

-- succeed
INSERT INTO circles VALUES('<(10,10), 10>', '<(0,0), 5>');
-- fail, overlaps
INSERT INTO circles VALUES('<(20,20), 10>', '<(0,0), 4>');
-- succeed, because violation is ignored
INSERT INTO circles VALUES('<(20,20), 10>', '<(0,0), 4>')
  ON CONFLICT ON CONSTRAINT circles_c1_c2_excl DO NOTHING;
-- fail, because DO UPDATE variant requires unique index
INSERT INTO circles VALUES('<(20,20), 10>', '<(0,0), 4>')
  ON CONFLICT ON CONSTRAINT circles_c1_c2_excl DO UPDATE SET c2 = EXCLUDED.c2;
-- succeed because c1 doesn't overlap
INSERT INTO circles VALUES('<(20,20), 1>', '<(0,0), 5>');
-- succeed because c2 doesn't overlap
INSERT INTO circles VALUES('<(20,20), 10>', '<(10,10), 5>');

-- should fail on existing data without the WHERE clause
ALTER TABLE circles ADD EXCLUDE USING gist
  (c1 WITH &&, (c2::circle) WITH &&);

-- try reindexing an existing constraint
REINDEX INDEX circles_c1_c2_excl;

DROP TABLE circles;

-- Check deferred exclusion constraint

CREATE TABLE deferred_excl (
  f1 int,
  f2 int,
  CONSTRAINT deferred_excl_con EXCLUDE (f1 WITH =) INITIALLY DEFERRED
);

INSERT INTO deferred_excl VALUES(1);
INSERT INTO deferred_excl VALUES(2);
INSERT INTO deferred_excl VALUES(1); -- fail
INSERT INTO deferred_excl VALUES(1) ON CONFLICT ON CONSTRAINT deferred_excl_con DO NOTHING; -- fail
BEGIN;
INSERT INTO deferred_excl VALUES(2); -- no fail here
COMMIT; -- should fail here
BEGIN;
INSERT INTO deferred_excl VALUES(3);
INSERT INTO deferred_excl VALUES(3); -- no fail here
COMMIT; -- should fail here

-- bug #13148: deferred constraint versus HOT update
BEGIN;
INSERT INTO deferred_excl VALUES(2, 1); -- no fail here
DELETE FROM deferred_excl WHERE f1 = 2 AND f2 IS NULL; -- remove old row
UPDATE deferred_excl SET f2 = 2 WHERE f1 = 2;
COMMIT; -- should not fail

SELECT * FROM deferred_excl;

ALTER TABLE deferred_excl DROP CONSTRAINT deferred_excl_con;

-- This should fail, but worth testing because of HOT updates
UPDATE deferred_excl SET f1 = 3;

ALTER TABLE deferred_excl ADD EXCLUDE (f1 WITH =);

DROP TABLE deferred_excl;

-- Comments
-- Setup a low-level role to enforce non-superuser checks.
CREATE ROLE regress_constraint_comments;
SET SESSION AUTHORIZATION regress_constraint_comments;

CREATE TABLE constraint_comments_tbl (a int CONSTRAINT the_constraint CHECK (a > 0));
CREATE DOMAIN constraint_comments_dom AS int CONSTRAINT the_constraint CHECK (value > 0);

COMMENT ON CONSTRAINT the_constraint ON constraint_comments_tbl IS 'yes, the comment';
COMMENT ON CONSTRAINT the_constraint ON DOMAIN constraint_comments_dom IS 'yes, another comment';

-- no such constraint
COMMENT ON CONSTRAINT no_constraint ON constraint_comments_tbl IS 'yes, the comment';
COMMENT ON CONSTRAINT no_constraint ON DOMAIN constraint_comments_dom IS 'yes, another comment';

-- no such table/domain
COMMENT ON CONSTRAINT the_constraint ON no_comments_tbl IS 'bad comment';
COMMENT ON CONSTRAINT the_constraint ON DOMAIN no_comments_dom IS 'another bad comment';

COMMENT ON CONSTRAINT the_constraint ON constraint_comments_tbl IS NULL;
COMMENT ON CONSTRAINT the_constraint ON DOMAIN constraint_comments_dom IS NULL;

-- unauthorized user
RESET SESSION AUTHORIZATION;
CREATE ROLE regress_constraint_comments_noaccess;
SET SESSION AUTHORIZATION regress_constraint_comments_noaccess;
COMMENT ON CONSTRAINT the_constraint ON constraint_comments_tbl IS 'no, the comment';
COMMENT ON CONSTRAINT the_constraint ON DOMAIN constraint_comments_dom IS 'no, another comment';
RESET SESSION AUTHORIZATION;

DROP TABLE constraint_comments_tbl;
DROP DOMAIN constraint_comments_dom;

DROP ROLE regress_constraint_comments;
DROP ROLE regress_constraint_comments_noaccess;
