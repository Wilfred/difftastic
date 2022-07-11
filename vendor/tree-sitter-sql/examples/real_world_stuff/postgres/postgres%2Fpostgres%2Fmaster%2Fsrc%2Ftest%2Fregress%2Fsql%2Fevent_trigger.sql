-- should fail, return type mismatch
create event trigger regress_event_trigger
   on ddl_command_start
   execute procedure pg_backend_pid();

-- OK
create function test_event_trigger() returns event_trigger as $$
BEGIN
    RAISE NOTICE 'test_event_trigger: % %', tg_event, tg_tag;
END
$$ language plpgsql;

-- should fail, can't call it as a plain function
SELECT test_event_trigger();

-- should fail, event triggers cannot have declared arguments
create function test_event_trigger_arg(name text)
returns event_trigger as $$ BEGIN RETURN 1; END $$ language plpgsql;

-- should fail, SQL functions cannot be event triggers
create function test_event_trigger_sql() returns event_trigger as $$
SELECT 1 $$ language sql;

-- should fail, no elephant_bootstrap entry point
create event trigger regress_event_trigger on elephant_bootstrap
   execute procedure test_event_trigger();

-- OK
create event trigger regress_event_trigger on ddl_command_start
   execute procedure test_event_trigger();

-- OK
create event trigger regress_event_trigger_end on ddl_command_end
   execute function test_event_trigger();

-- should fail, food is not a valid filter variable
create event trigger regress_event_trigger2 on ddl_command_start
   when food in ('sandwich')
   execute procedure test_event_trigger();

-- should fail, sandwich is not a valid command tag
create event trigger regress_event_trigger2 on ddl_command_start
   when tag in ('sandwich')
   execute procedure test_event_trigger();

-- should fail, create skunkcabbage is not a valid command tag
create event trigger regress_event_trigger2 on ddl_command_start
   when tag in ('create table', 'create skunkcabbage')
   execute procedure test_event_trigger();

-- should fail, can't have event triggers on event triggers
create event trigger regress_event_trigger2 on ddl_command_start
   when tag in ('DROP EVENT TRIGGER')
   execute procedure test_event_trigger();

-- should fail, can't have event triggers on global objects
create event trigger regress_event_trigger2 on ddl_command_start
   when tag in ('CREATE ROLE')
   execute procedure test_event_trigger();

-- should fail, can't have event triggers on global objects
create event trigger regress_event_trigger2 on ddl_command_start
   when tag in ('CREATE DATABASE')
   execute procedure test_event_trigger();

-- should fail, can't have event triggers on global objects
create event trigger regress_event_trigger2 on ddl_command_start
   when tag in ('CREATE TABLESPACE')
   execute procedure test_event_trigger();

-- should fail, can't have same filter variable twice
create event trigger regress_event_trigger2 on ddl_command_start
   when tag in ('create table') and tag in ('CREATE FUNCTION')
   execute procedure test_event_trigger();

-- should fail, can't have arguments
create event trigger regress_event_trigger2 on ddl_command_start
   execute procedure test_event_trigger('argument not allowed');

-- OK
create event trigger regress_event_trigger2 on ddl_command_start
   when tag in ('create table', 'CREATE FUNCTION')
   execute procedure test_event_trigger();

-- OK
comment on event trigger regress_event_trigger is 'test comment';

-- drop as non-superuser should fail
create role regress_evt_user;
set role regress_evt_user;
create event trigger regress_event_trigger_noperms on ddl_command_start
   execute procedure test_event_trigger();
reset role;

-- test enabling and disabling
alter event trigger regress_event_trigger disable;
-- fires _trigger2 and _trigger_end should fire, but not _trigger
create table event_trigger_fire1 (a int);
alter event trigger regress_event_trigger enable;
set session_replication_role = replica;
-- fires nothing
create table event_trigger_fire2 (a int);
alter event trigger regress_event_trigger enable replica;
-- fires only _trigger
create table event_trigger_fire3 (a int);
alter event trigger regress_event_trigger enable always;
-- fires only _trigger
create table event_trigger_fire4 (a int);
reset session_replication_role;
-- fires all three
create table event_trigger_fire5 (a int);
-- non-top-level command
create function f1() returns int
language plpgsql
as $$
begin
  create table event_trigger_fire6 (a int);
  return 0;
end $$;
select f1();
-- non-top-level command
create procedure p1()
language plpgsql
as $$
begin
  create table event_trigger_fire7 (a int);
end $$;
call p1();

-- clean up
alter event trigger regress_event_trigger disable;
drop table event_trigger_fire2, event_trigger_fire3, event_trigger_fire4, event_trigger_fire5, event_trigger_fire6, event_trigger_fire7;
drop routine f1(), p1();

-- regress_event_trigger_end should fire on these commands
grant all on table event_trigger_fire1 to public;
comment on table event_trigger_fire1 is 'here is a comment';
revoke all on table event_trigger_fire1 from public;
drop table event_trigger_fire1;
create foreign data wrapper useless;
create server useless_server foreign data wrapper useless;
create user mapping for regress_evt_user server useless_server;
alter default privileges for role regress_evt_user
 revoke delete on tables from regress_evt_user;

-- alter owner to non-superuser should fail
alter event trigger regress_event_trigger owner to regress_evt_user;

-- alter owner to superuser should work
alter role regress_evt_user superuser;
alter event trigger regress_event_trigger owner to regress_evt_user;

-- should fail, name collision
alter event trigger regress_event_trigger rename to regress_event_trigger2;

-- OK
alter event trigger regress_event_trigger rename to regress_event_trigger3;

-- should fail, doesn't exist any more
drop event trigger regress_event_trigger;

-- should fail, regress_evt_user owns some objects
drop role regress_evt_user;

-- cleanup before next test
-- these are all OK; the second one should emit a NOTICE
drop event trigger if exists regress_event_trigger2;
drop event trigger if exists regress_event_trigger2;
drop event trigger regress_event_trigger3;
drop event trigger regress_event_trigger_end;

-- test support for dropped objects
CREATE SCHEMA schema_one authorization regress_evt_user;
CREATE SCHEMA schema_two authorization regress_evt_user;
CREATE SCHEMA audit_tbls authorization regress_evt_user;
CREATE TEMP TABLE a_temp_tbl ();
SET SESSION AUTHORIZATION regress_evt_user;

CREATE TABLE schema_one.table_one(a int);
CREATE TABLE schema_one."table two"(a int);
CREATE TABLE schema_one.table_three(a int);
CREATE TABLE audit_tbls.schema_one_table_two(the_value text);

CREATE TABLE schema_two.table_two(a int);
CREATE TABLE schema_two.table_three(a int, b text);
CREATE TABLE audit_tbls.schema_two_table_three(the_value text);

CREATE OR REPLACE FUNCTION schema_two.add(int, int) RETURNS int LANGUAGE plpgsql
  CALLED ON NULL INPUT
  AS $$ BEGIN RETURN coalesce($1,0) + coalesce($2,0); END; $$;
CREATE AGGREGATE schema_two.newton
  (BASETYPE = int, SFUNC = schema_two.add, STYPE = int);

RESET SESSION AUTHORIZATION;

CREATE TABLE undroppable_objs (
	object_type text,
	object_identity text
);
INSERT INTO undroppable_objs VALUES
('table', 'schema_one.table_three'),
('table', 'audit_tbls.schema_two_table_three');

CREATE TABLE dropped_objects (
	type text,
	schema text,
	object text
);

-- This tests errors raised within event triggers; the one in audit_tbls
-- uses 2nd-level recursive invocation via test_evtrig_dropped_objects().
CREATE OR REPLACE FUNCTION undroppable() RETURNS event_trigger
LANGUAGE plpgsql AS $$
DECLARE
	obj record;
BEGIN
	PERFORM 1 FROM pg_tables WHERE tablename = 'undroppable_objs';
	IF NOT FOUND THEN
		RAISE NOTICE 'table undroppable_objs not found, skipping';
		RETURN;
	END IF;
	FOR obj IN
		SELECT * FROM pg_event_trigger_dropped_objects() JOIN
			undroppable_objs USING (object_type, object_identity)
	LOOP
		RAISE EXCEPTION 'object % of type % cannot be dropped',
			obj.object_identity, obj.object_type;
	END LOOP;
END;
$$;

CREATE EVENT TRIGGER undroppable ON sql_drop
	EXECUTE PROCEDURE undroppable();

CREATE OR REPLACE FUNCTION test_evtrig_dropped_objects() RETURNS event_trigger
LANGUAGE plpgsql AS $$
DECLARE
    obj record;
BEGIN
    FOR obj IN SELECT * FROM pg_event_trigger_dropped_objects()
    LOOP
        IF obj.object_type = 'table' THEN
                EXECUTE format('DROP TABLE IF EXISTS audit_tbls.%I',
					format('%s_%s', obj.schema_name, obj.object_name));
        END IF;

	INSERT INTO dropped_objects
		(type, schema, object) VALUES
		(obj.object_type, obj.schema_name, obj.object_identity);
    END LOOP;
END
$$;

CREATE EVENT TRIGGER regress_event_trigger_drop_objects ON sql_drop
	WHEN TAG IN ('drop table', 'drop function', 'drop view',
		'drop owned', 'drop schema', 'alter table')
	EXECUTE PROCEDURE test_evtrig_dropped_objects();

ALTER TABLE schema_one.table_one DROP COLUMN a;
DROP SCHEMA schema_one, schema_two CASCADE;
DELETE FROM undroppable_objs WHERE object_identity = 'audit_tbls.schema_two_table_three';
DROP SCHEMA schema_one, schema_two CASCADE;
DELETE FROM undroppable_objs WHERE object_identity = 'schema_one.table_three';
DROP SCHEMA schema_one, schema_two CASCADE;

SELECT * FROM dropped_objects WHERE schema IS NULL OR schema <> 'pg_toast';

DROP OWNED BY regress_evt_user;
SELECT * FROM dropped_objects WHERE type = 'schema';

DROP ROLE regress_evt_user;

DROP EVENT TRIGGER regress_event_trigger_drop_objects;
DROP EVENT TRIGGER undroppable;

-- Event triggers on relations.
CREATE OR REPLACE FUNCTION event_trigger_report_dropped()
 RETURNS event_trigger
 LANGUAGE plpgsql
AS $$
DECLARE r record;
BEGIN
    FOR r IN SELECT * from pg_event_trigger_dropped_objects()
    LOOP
    IF NOT r.normal AND NOT r.original THEN
        CONTINUE;
    END IF;
    RAISE NOTICE 'NORMAL: orig=% normal=% istemp=% type=% identity=% name=% args=%',
        r.original, r.normal, r.is_temporary, r.object_type,
        r.object_identity, r.address_names, r.address_args;
    END LOOP;
END; $$;
CREATE EVENT TRIGGER regress_event_trigger_report_dropped ON sql_drop
    EXECUTE PROCEDURE event_trigger_report_dropped();
CREATE OR REPLACE FUNCTION event_trigger_report_end()
 RETURNS event_trigger
 LANGUAGE plpgsql
AS $$
DECLARE r RECORD;
BEGIN
    FOR r IN SELECT * FROM pg_event_trigger_ddl_commands()
    LOOP
        RAISE NOTICE 'END: command_tag=% type=% identity=%',
            r.command_tag, r.object_type, r.object_identity;
    END LOOP;
END; $$;
CREATE EVENT TRIGGER regress_event_trigger_report_end ON ddl_command_end
  EXECUTE PROCEDURE event_trigger_report_end();

CREATE SCHEMA evttrig
	CREATE TABLE one (col_a SERIAL PRIMARY KEY, col_b text DEFAULT 'forty two', col_c SERIAL)
	CREATE INDEX one_idx ON one (col_b)
	CREATE TABLE two (col_c INTEGER CHECK (col_c > 0) REFERENCES one DEFAULT 42)
	CREATE TABLE id (col_d int NOT NULL GENERATED ALWAYS AS IDENTITY);

-- Partitioned tables with a partitioned index
CREATE TABLE evttrig.parted (
    id int PRIMARY KEY)
    PARTITION BY RANGE (id);
CREATE TABLE evttrig.part_1_10 PARTITION OF evttrig.parted (id)
  FOR VALUES FROM (1) TO (10);
CREATE TABLE evttrig.part_10_20 PARTITION OF evttrig.parted (id)
  FOR VALUES FROM (10) TO (20) PARTITION BY RANGE (id);
CREATE TABLE evttrig.part_10_15 PARTITION OF evttrig.part_10_20 (id)
  FOR VALUES FROM (10) TO (15);
CREATE TABLE evttrig.part_15_20 PARTITION OF evttrig.part_10_20 (id)
  FOR VALUES FROM (15) TO (20);

ALTER TABLE evttrig.two DROP COLUMN col_c;
ALTER TABLE evttrig.one ALTER COLUMN col_b DROP DEFAULT;
ALTER TABLE evttrig.one DROP CONSTRAINT one_pkey;
ALTER TABLE evttrig.one DROP COLUMN col_c;
ALTER TABLE evttrig.id ALTER COLUMN col_d SET DATA TYPE bigint;
ALTER TABLE evttrig.id ALTER COLUMN col_d DROP IDENTITY,
  ALTER COLUMN col_d SET DATA TYPE int;
DROP INDEX evttrig.one_idx;
DROP SCHEMA evttrig CASCADE;
DROP TABLE a_temp_tbl;

-- CREATE OPERATOR CLASS without FAMILY clause should report
-- both CREATE OPERATOR FAMILY and CREATE OPERATOR CLASS
CREATE OPERATOR CLASS evttrigopclass FOR TYPE int USING btree AS STORAGE int;

DROP EVENT TRIGGER regress_event_trigger_report_dropped;
DROP EVENT TRIGGER regress_event_trigger_report_end;

-- only allowed from within an event trigger function, should fail
select pg_event_trigger_table_rewrite_oid();

-- test Table Rewrite Event Trigger
CREATE OR REPLACE FUNCTION test_evtrig_no_rewrite() RETURNS event_trigger
LANGUAGE plpgsql AS $$
BEGIN
  RAISE EXCEPTION 'rewrites not allowed';
END;
$$;

create event trigger no_rewrite_allowed on table_rewrite
  execute procedure test_evtrig_no_rewrite();

create table rewriteme (id serial primary key, foo float, bar timestamptz);
insert into rewriteme
     select x * 1.001 from generate_series(1, 500) as t(x);
alter table rewriteme alter column foo type numeric;
alter table rewriteme add column baz int default 0;

-- test with more than one reason to rewrite a single table
CREATE OR REPLACE FUNCTION test_evtrig_no_rewrite() RETURNS event_trigger
LANGUAGE plpgsql AS $$
BEGIN
  RAISE NOTICE 'Table ''%'' is being rewritten (reason = %)',
               pg_event_trigger_table_rewrite_oid()::regclass,
               pg_event_trigger_table_rewrite_reason();
END;
$$;

alter table rewriteme
 add column onemore int default 0,
 add column another int default -1,
 alter column foo type numeric(10,4);

-- shouldn't trigger a table_rewrite event
alter table rewriteme alter column foo type numeric(12,4);
begin;
set timezone to 'UTC';
alter table rewriteme alter column bar type timestamp;
set timezone to '0';
alter table rewriteme alter column bar type timestamptz;
set timezone to 'Europe/London';
alter table rewriteme alter column bar type timestamp; -- does rewrite
rollback;

-- typed tables are rewritten when their type changes.  Don't emit table
-- name, because firing order is not stable.
CREATE OR REPLACE FUNCTION test_evtrig_no_rewrite() RETURNS event_trigger
LANGUAGE plpgsql AS $$
BEGIN
  RAISE NOTICE 'Table is being rewritten (reason = %)',
               pg_event_trigger_table_rewrite_reason();
END;
$$;

create type rewritetype as (a int);
create table rewritemetoo1 of rewritetype;
create table rewritemetoo2 of rewritetype;
alter type rewritetype alter attribute a type text cascade;

-- but this doesn't work
create table rewritemetoo3 (a rewritetype);
alter type rewritetype alter attribute a type varchar cascade;

drop table rewriteme;
drop event trigger no_rewrite_allowed;
drop function test_evtrig_no_rewrite();

-- test Row Security Event Trigger
RESET SESSION AUTHORIZATION;
CREATE TABLE event_trigger_test (a integer, b text);

CREATE OR REPLACE FUNCTION start_command()
RETURNS event_trigger AS $$
BEGIN
RAISE NOTICE '% - ddl_command_start', tg_tag;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION end_command()
RETURNS event_trigger AS $$
BEGIN
RAISE NOTICE '% - ddl_command_end', tg_tag;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION drop_sql_command()
RETURNS event_trigger AS $$
BEGIN
RAISE NOTICE '% - sql_drop', tg_tag;
END;
$$ LANGUAGE plpgsql;

CREATE EVENT TRIGGER start_rls_command ON ddl_command_start
    WHEN TAG IN ('CREATE POLICY', 'ALTER POLICY', 'DROP POLICY') EXECUTE PROCEDURE start_command();

CREATE EVENT TRIGGER end_rls_command ON ddl_command_end
    WHEN TAG IN ('CREATE POLICY', 'ALTER POLICY', 'DROP POLICY') EXECUTE PROCEDURE end_command();

CREATE EVENT TRIGGER sql_drop_command ON sql_drop
    WHEN TAG IN ('DROP POLICY') EXECUTE PROCEDURE drop_sql_command();

CREATE POLICY p1 ON event_trigger_test USING (FALSE);
ALTER POLICY p1 ON event_trigger_test USING (TRUE);
ALTER POLICY p1 ON event_trigger_test RENAME TO p2;
DROP POLICY p2 ON event_trigger_test;

-- Check the object addresses of all the event triggers.
SELECT
    e.evtname,
    pg_describe_object('pg_event_trigger'::regclass, e.oid, 0) as descr,
    b.type, b.object_names, b.object_args,
    pg_identify_object(a.classid, a.objid, a.objsubid) as ident
  FROM pg_event_trigger as e,
    LATERAL pg_identify_object_as_address('pg_event_trigger'::regclass, e.oid, 0) as b,
    LATERAL pg_get_object_address(b.type, b.object_names, b.object_args) as a
  ORDER BY e.evtname;

DROP EVENT TRIGGER start_rls_command;
DROP EVENT TRIGGER end_rls_command;
DROP EVENT TRIGGER sql_drop_command;
