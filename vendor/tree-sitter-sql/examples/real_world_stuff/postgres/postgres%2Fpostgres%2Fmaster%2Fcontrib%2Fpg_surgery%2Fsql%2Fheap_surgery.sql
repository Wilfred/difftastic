create extension pg_surgery;

-- create a normal heap table and insert some rows.
-- use a temp table so that vacuum behavior doesn't depend on global xmin
create temp table htab (a int);
insert into htab values (100), (200), (300), (400), (500);

-- test empty TID array
select heap_force_freeze('htab'::regclass, ARRAY[]::tid[]);

-- nothing should be frozen yet
select * from htab where xmin = 2;

-- freeze forcibly
select heap_force_freeze('htab'::regclass, ARRAY['(0, 4)']::tid[]);

-- now we should have one frozen tuple
select ctid, xmax from htab where xmin = 2;

-- kill forcibly
select heap_force_kill('htab'::regclass, ARRAY['(0, 4)']::tid[]);

-- should be gone now
select * from htab where ctid = '(0, 4)';

-- should now be skipped because it's already dead
select heap_force_kill('htab'::regclass, ARRAY['(0, 4)']::tid[]);
select heap_force_freeze('htab'::regclass, ARRAY['(0, 4)']::tid[]);

-- freeze two TIDs at once while skipping an out-of-range block number
select heap_force_freeze('htab'::regclass,
						 ARRAY['(0, 1)', '(0, 3)', '(1, 1)']::tid[]);

-- we should now have two frozen tuples
select ctid, xmax from htab where xmin = 2;

-- out-of-range TIDs should be skipped
select heap_force_freeze('htab'::regclass, ARRAY['(0, 0)', '(0, 6)']::tid[]);

-- set up a new table with a redirected line pointer
-- use a temp table so that vacuum behavior doesn't depend on global xmin
create temp table htab2(a int);
insert into htab2 values (100);
update htab2 set a = 200;
vacuum htab2;

-- redirected TIDs should be skipped
select heap_force_kill('htab2'::regclass, ARRAY['(0, 1)']::tid[]);

-- now create an unused line pointer
select ctid from htab2;
update htab2 set a = 300;
select ctid from htab2;
vacuum freeze htab2;

-- unused TIDs should be skipped
select heap_force_kill('htab2'::regclass, ARRAY['(0, 2)']::tid[]);

-- multidimensional TID array should be rejected
select heap_force_kill('htab2'::regclass, ARRAY[['(0, 2)']]::tid[]);

-- TID array with nulls should be rejected
select heap_force_kill('htab2'::regclass, ARRAY[NULL]::tid[]);

-- but we should be able to kill the one tuple we have
select heap_force_kill('htab2'::regclass, ARRAY['(0, 3)']::tid[]);

-- materialized view.
-- note that we don't commit the transaction, so autovacuum can't interfere.
begin;
create materialized view mvw as select a from generate_series(1, 3) a;

select * from mvw where xmin = 2;
select heap_force_freeze('mvw'::regclass, ARRAY['(0, 3)']::tid[]);
select * from mvw where xmin = 2;

select heap_force_kill('mvw'::regclass, ARRAY['(0, 3)']::tid[]);
select * from mvw where ctid = '(0, 3)';
rollback;

-- check that it fails on an unsupported relkind
create view vw as select 1;
select heap_force_kill('vw'::regclass, ARRAY['(0, 1)']::tid[]);
select heap_force_freeze('vw'::regclass, ARRAY['(0, 1)']::tid[]);

-- cleanup.
drop view vw;
drop extension pg_surgery;
