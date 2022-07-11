--
-- COPY
--

-- directory paths are passed to us in environment variables
\getenv abs_srcdir PG_ABS_SRCDIR
\getenv abs_builddir PG_ABS_BUILDDIR

--- test copying in CSV mode with various styles
--- of embedded line ending characters

create temp table copytest (
	style	text,
	test 	text,
	filler	int);

insert into copytest values('DOS',E'abc\r\ndef',1);
insert into copytest values('Unix',E'abc\ndef',2);
insert into copytest values('Mac',E'abc\rdef',3);
insert into copytest values(E'esc\\ape',E'a\\r\\\r\\\n\\nb',4);

\set filename :abs_builddir '/results/copytest.csv'
copy copytest to :'filename' csv;

create temp table copytest2 (like copytest);

copy copytest2 from :'filename' csv;

select * from copytest except select * from copytest2;

truncate copytest2;

--- same test but with an escape char different from quote char

copy copytest to :'filename' csv quote '''' escape E'\\';

copy copytest2 from :'filename' csv quote '''' escape E'\\';

select * from copytest except select * from copytest2;


-- test header line feature

create temp table copytest3 (
	c1 int,
	"col with , comma" text,
	"col with "" quote"  int);

copy copytest3 from stdin csv header;
this is just a line full of junk that would error out if parsed
1,a,1
2,b,2
\.

copy copytest3 to stdout csv header;

create temp table copytest4 (
	c1 int,
	"colname with tab: 	" text);

copy copytest4 from stdin (header);
this is just a line full of junk that would error out if parsed
1	a
2	b
\.

copy copytest4 to stdout (header);

-- test copy from with a partitioned table
create table parted_copytest (
	a int,
	b int,
	c text
) partition by list (b);

create table parted_copytest_a1 (c text, b int, a int);
create table parted_copytest_a2 (a int, c text, b int);

alter table parted_copytest attach partition parted_copytest_a1 for values in(1);
alter table parted_copytest attach partition parted_copytest_a2 for values in(2);

-- We must insert enough rows to trigger multi-inserts.  These are only
-- enabled adaptively when there are few enough partition changes.
insert into parted_copytest select x,1,'One' from generate_series(1,1000) x;
insert into parted_copytest select x,2,'Two' from generate_series(1001,1010) x;
insert into parted_copytest select x,1,'One' from generate_series(1011,1020) x;

\set filename :abs_builddir '/results/parted_copytest.csv'
copy (select * from parted_copytest order by a) to :'filename';

truncate parted_copytest;

copy parted_copytest from :'filename';

-- Ensure COPY FREEZE errors for partitioned tables.
begin;
truncate parted_copytest;
copy parted_copytest from :'filename' (freeze);
rollback;

select tableoid::regclass,count(*),sum(a) from parted_copytest
group by tableoid order by tableoid::regclass::name;

truncate parted_copytest;

-- create before insert row trigger on parted_copytest_a2
create function part_ins_func() returns trigger language plpgsql as $$
begin
  return new;
end;
$$;

create trigger part_ins_trig
	before insert on parted_copytest_a2
	for each row
	execute procedure part_ins_func();

copy parted_copytest from :'filename';

select tableoid::regclass,count(*),sum(a) from parted_copytest
group by tableoid order by tableoid::regclass::name;

truncate table parted_copytest;
create index on parted_copytest (b);
drop trigger part_ins_trig on parted_copytest_a2;

copy parted_copytest from stdin;
1	1	str1
2	2	str2
\.

-- Ensure index entries were properly added during the copy.
select * from parted_copytest where b = 1;
select * from parted_copytest where b = 2;

drop table parted_copytest;

--
-- Progress reporting for COPY
--
create table tab_progress_reporting (
	name text,
	age int4,
	location point,
	salary int4,
	manager name
);

-- Add a trigger to catch and print the contents of the catalog view
-- pg_stat_progress_copy during data insertion.  This allows to test
-- the validation of some progress reports for COPY FROM where the trigger
-- would fire.
create function notice_after_tab_progress_reporting() returns trigger AS
$$
declare report record;
begin
  -- The fields ignored here are the ones that may not remain
  -- consistent across multiple runs.  The sizes reported may differ
  -- across platforms, so just check if these are strictly positive.
  with progress_data as (
    select
       relid::regclass::text as relname,
       command,
       type,
       bytes_processed > 0 as has_bytes_processed,
       bytes_total > 0 as has_bytes_total,
       tuples_processed,
       tuples_excluded
      from pg_stat_progress_copy
      where pid = pg_backend_pid())
  select into report (to_jsonb(r)) as value
    from progress_data r;

  raise info 'progress: %', report.value::text;
  return new;
end;
$$ language plpgsql;

create trigger check_after_tab_progress_reporting
	after insert on tab_progress_reporting
	for each statement
	execute function notice_after_tab_progress_reporting();

-- Generate COPY FROM report with PIPE.
copy tab_progress_reporting from stdin;
sharon	25	(15,12)	1000	sam
sam	30	(10,5)	2000	bill
bill	20	(11,10)	1000	sharon
\.

-- Generate COPY FROM report with FILE, with some excluded tuples.
truncate tab_progress_reporting;
\set filename :abs_srcdir '/data/emp.data'
copy tab_progress_reporting from :'filename'
	where (salary < 2000);

drop trigger check_after_tab_progress_reporting on tab_progress_reporting;
drop function notice_after_tab_progress_reporting();
drop table tab_progress_reporting;

-- Test header matching feature
create table header_copytest (
	a int,
	b int,
	c text
);
copy header_copytest from stdin with (header wrong_choice);
copy header_copytest from stdin with (header match);
a	b	c
1	2	foo
\.
copy header_copytest from stdin with (header match);
a	b	\N
1	2	foo
\.
copy header_copytest from stdin with (header match);
a	b
1	2
\.
copy header_copytest from stdin with (header match);
a	b	c	d
1	2	foo	bar
\.
copy header_copytest from stdin with (header match);
a	b	d
1	2	foo
\.
copy header_copytest from stdin with (header match, format csv);
a,b,c
1,2,foo
\.
drop table header_copytest;
