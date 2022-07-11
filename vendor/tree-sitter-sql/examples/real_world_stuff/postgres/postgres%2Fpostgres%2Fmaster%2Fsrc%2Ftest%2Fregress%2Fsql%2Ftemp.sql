--
-- TEMP
-- Test temp relations and indexes
--

-- test temp table/index masking

CREATE TABLE temptest(col int);

CREATE INDEX i_temptest ON temptest(col);

CREATE TEMP TABLE temptest(tcol int);

CREATE INDEX i_temptest ON temptest(tcol);

SELECT * FROM temptest;

DROP INDEX i_temptest;

DROP TABLE temptest;

SELECT * FROM temptest;

DROP INDEX i_temptest;

DROP TABLE temptest;

-- test temp table selects

CREATE TABLE temptest(col int);

INSERT INTO temptest VALUES (1);

CREATE TEMP TABLE temptest(tcol float);

INSERT INTO temptest VALUES (2.1);

SELECT * FROM temptest;

DROP TABLE temptest;

SELECT * FROM temptest;

DROP TABLE temptest;

-- test temp table deletion

CREATE TEMP TABLE temptest(col int);

\c

SELECT * FROM temptest;

-- Test ON COMMIT DELETE ROWS

CREATE TEMP TABLE temptest(col int) ON COMMIT DELETE ROWS;

-- while we're here, verify successful truncation of index with SQL function
CREATE INDEX ON temptest(bit_length(''));

BEGIN;
INSERT INTO temptest VALUES (1);
INSERT INTO temptest VALUES (2);

SELECT * FROM temptest;
COMMIT;

SELECT * FROM temptest;

DROP TABLE temptest;

BEGIN;
CREATE TEMP TABLE temptest(col) ON COMMIT DELETE ROWS AS SELECT 1;

SELECT * FROM temptest;
COMMIT;

SELECT * FROM temptest;

DROP TABLE temptest;

-- Test ON COMMIT DROP

BEGIN;

CREATE TEMP TABLE temptest(col int) ON COMMIT DROP;

INSERT INTO temptest VALUES (1);
INSERT INTO temptest VALUES (2);

SELECT * FROM temptest;
COMMIT;

SELECT * FROM temptest;

BEGIN;
CREATE TEMP TABLE temptest(col) ON COMMIT DROP AS SELECT 1;

SELECT * FROM temptest;
COMMIT;

SELECT * FROM temptest;

-- ON COMMIT is only allowed for TEMP

CREATE TABLE temptest(col int) ON COMMIT DELETE ROWS;
CREATE TABLE temptest(col) ON COMMIT DELETE ROWS AS SELECT 1;

-- Test foreign keys
BEGIN;
CREATE TEMP TABLE temptest1(col int PRIMARY KEY);
CREATE TEMP TABLE temptest2(col int REFERENCES temptest1)
  ON COMMIT DELETE ROWS;
INSERT INTO temptest1 VALUES (1);
INSERT INTO temptest2 VALUES (1);
COMMIT;
SELECT * FROM temptest1;
SELECT * FROM temptest2;

BEGIN;
CREATE TEMP TABLE temptest3(col int PRIMARY KEY) ON COMMIT DELETE ROWS;
CREATE TEMP TABLE temptest4(col int REFERENCES temptest3);
COMMIT;

-- Test manipulation of temp schema's placement in search path

create table public.whereami (f1 text);
insert into public.whereami values ('public');

create temp table whereami (f1 text);
insert into whereami values ('temp');

create function public.whoami() returns text
  as $$select 'public'::text$$ language sql;

create function pg_temp.whoami() returns text
  as $$select 'temp'::text$$ language sql;

-- default should have pg_temp implicitly first, but only for tables
select * from whereami;
select whoami();

-- can list temp first explicitly, but it still doesn't affect functions
set search_path = pg_temp, public;
select * from whereami;
select whoami();

-- or put it last for security
set search_path = public, pg_temp;
select * from whereami;
select whoami();

-- you can invoke a temp function explicitly, though
select pg_temp.whoami();

drop table public.whereami;

-- types in temp schema
set search_path = pg_temp, public;
create domain pg_temp.nonempty as text check (value <> '');
-- function-syntax invocation of types matches rules for functions
select nonempty('');
select pg_temp.nonempty('');
-- other syntax matches rules for tables
select ''::nonempty;

reset search_path;

-- For partitioned temp tables, ON COMMIT actions ignore storage-less
-- partitioned tables.
begin;
create temp table temp_parted_oncommit (a int)
  partition by list (a) on commit delete rows;
create temp table temp_parted_oncommit_1
  partition of temp_parted_oncommit
  for values in (1) on commit delete rows;
insert into temp_parted_oncommit values (1);
commit;
-- partitions are emptied by the previous commit
select * from temp_parted_oncommit;
drop table temp_parted_oncommit;

-- Check dependencies between ON COMMIT actions with a partitioned
-- table and its partitions.  Using ON COMMIT DROP on a parent removes
-- the whole set.
begin;
create temp table temp_parted_oncommit_test (a int)
  partition by list (a) on commit drop;
create temp table temp_parted_oncommit_test1
  partition of temp_parted_oncommit_test
  for values in (1) on commit delete rows;
create temp table temp_parted_oncommit_test2
  partition of temp_parted_oncommit_test
  for values in (2) on commit drop;
insert into temp_parted_oncommit_test values (1), (2);
commit;
-- no relations remain in this case.
select relname from pg_class where relname ~ '^temp_parted_oncommit_test';
-- Using ON COMMIT DELETE on a partitioned table does not remove
-- all rows if partitions preserve their data.
begin;
create temp table temp_parted_oncommit_test (a int)
  partition by list (a) on commit delete rows;
create temp table temp_parted_oncommit_test1
  partition of temp_parted_oncommit_test
  for values in (1) on commit preserve rows;
create temp table temp_parted_oncommit_test2
  partition of temp_parted_oncommit_test
  for values in (2) on commit drop;
insert into temp_parted_oncommit_test values (1), (2);
commit;
-- Data from the remaining partition is still here as its rows are
-- preserved.
select * from temp_parted_oncommit_test;
-- two relations remain in this case.
select relname from pg_class where relname ~ '^temp_parted_oncommit_test'
  order by relname;
drop table temp_parted_oncommit_test;

-- Check dependencies between ON COMMIT actions with inheritance trees.
-- Using ON COMMIT DROP on a parent removes the whole set.
begin;
create temp table temp_inh_oncommit_test (a int) on commit drop;
create temp table temp_inh_oncommit_test1 ()
  inherits(temp_inh_oncommit_test) on commit delete rows;
insert into temp_inh_oncommit_test1 values (1);
commit;
-- no relations remain in this case
select relname from pg_class where relname ~ '^temp_inh_oncommit_test';
-- Data on the parent is removed, and the child goes away.
begin;
create temp table temp_inh_oncommit_test (a int) on commit delete rows;
create temp table temp_inh_oncommit_test1 ()
  inherits(temp_inh_oncommit_test) on commit drop;
insert into temp_inh_oncommit_test1 values (1);
insert into temp_inh_oncommit_test values (1);
commit;
select * from temp_inh_oncommit_test;
-- one relation remains
select relname from pg_class where relname ~ '^temp_inh_oncommit_test';
drop table temp_inh_oncommit_test;

-- Tests with two-phase commit
-- Transactions creating objects in a temporary namespace cannot be used
-- with two-phase commit.

-- These cases generate errors about temporary namespace.
-- Function creation
begin;
create function pg_temp.twophase_func() returns void as
  $$ select '2pc_func'::text $$ language sql;
prepare transaction 'twophase_func';
-- Function drop
create function pg_temp.twophase_func() returns void as
  $$ select '2pc_func'::text $$ language sql;
begin;
drop function pg_temp.twophase_func();
prepare transaction 'twophase_func';
-- Operator creation
begin;
create operator pg_temp.@@ (leftarg = int4, rightarg = int4, procedure = int4mi);
prepare transaction 'twophase_operator';

-- These generate errors about temporary tables.
begin;
create type pg_temp.twophase_type as (a int);
prepare transaction 'twophase_type';
begin;
create view pg_temp.twophase_view as select 1;
prepare transaction 'twophase_view';
begin;
create sequence pg_temp.twophase_seq;
prepare transaction 'twophase_sequence';

-- Temporary tables cannot be used with two-phase commit.
create temp table twophase_tab (a int);
begin;
select a from twophase_tab;
prepare transaction 'twophase_tab';
begin;
insert into twophase_tab values (1);
prepare transaction 'twophase_tab';
begin;
lock twophase_tab in access exclusive mode;
prepare transaction 'twophase_tab';
begin;
drop table twophase_tab;
prepare transaction 'twophase_tab';

-- Corner case: current_schema may create a temporary schema if namespace
-- creation is pending, so check after that.  First reset the connection
-- to remove the temporary namespace.
\c -
SET search_path TO 'pg_temp';
BEGIN;
SELECT current_schema() ~ 'pg_temp' AS is_temp_schema;
PREPARE TRANSACTION 'twophase_search';
