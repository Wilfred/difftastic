--
-- IF EXISTS tests
--

-- table (will be really dropped at the end)

DROP TABLE test_exists;

DROP TABLE IF EXISTS test_exists;

CREATE TABLE test_exists (a int, b text);

-- view

DROP VIEW test_view_exists;

DROP VIEW IF EXISTS test_view_exists;

CREATE VIEW test_view_exists AS select * from test_exists;

DROP VIEW IF EXISTS test_view_exists;

DROP VIEW test_view_exists;

-- index

DROP INDEX test_index_exists;

DROP INDEX IF EXISTS test_index_exists;

CREATE INDEX test_index_exists on test_exists(a);

DROP INDEX IF EXISTS test_index_exists;

DROP INDEX test_index_exists;

-- sequence

DROP SEQUENCE test_sequence_exists;

DROP SEQUENCE IF EXISTS test_sequence_exists;

CREATE SEQUENCE test_sequence_exists;

DROP SEQUENCE IF EXISTS test_sequence_exists;

DROP SEQUENCE test_sequence_exists;

-- schema

DROP SCHEMA test_schema_exists;

DROP SCHEMA IF EXISTS test_schema_exists;

CREATE SCHEMA test_schema_exists;

DROP SCHEMA IF EXISTS test_schema_exists;

DROP SCHEMA test_schema_exists;

-- type

DROP TYPE test_type_exists;

DROP TYPE IF EXISTS test_type_exists;

CREATE type test_type_exists as (a int, b text);

DROP TYPE IF EXISTS test_type_exists;

DROP TYPE test_type_exists;

-- domain

DROP DOMAIN test_domain_exists;

DROP DOMAIN IF EXISTS test_domain_exists;

CREATE domain test_domain_exists as int not null check (value > 0);

DROP DOMAIN IF EXISTS test_domain_exists;

DROP DOMAIN test_domain_exists;

---
--- role/user/group
---

CREATE USER regress_test_u1;
CREATE ROLE regress_test_r1;
CREATE GROUP regress_test_g1;

DROP USER regress_test_u2;

DROP USER IF EXISTS regress_test_u1, regress_test_u2;

DROP USER regress_test_u1;

DROP ROLE regress_test_r2;

DROP ROLE IF EXISTS regress_test_r1, regress_test_r2;

DROP ROLE regress_test_r1;

DROP GROUP regress_test_g2;

DROP GROUP IF EXISTS regress_test_g1, regress_test_g2;

DROP GROUP regress_test_g1;

-- collation
DROP COLLATION IF EXISTS test_collation_exists;

-- conversion
DROP CONVERSION test_conversion_exists;
DROP CONVERSION IF EXISTS test_conversion_exists;
CREATE CONVERSION test_conversion_exists
    FOR 'LATIN1' TO 'UTF8' FROM iso8859_1_to_utf8;
DROP CONVERSION test_conversion_exists;

-- text search parser
DROP TEXT SEARCH PARSER test_tsparser_exists;
DROP TEXT SEARCH PARSER IF EXISTS test_tsparser_exists;

-- text search dictionary
DROP TEXT SEARCH DICTIONARY test_tsdict_exists;
DROP TEXT SEARCH DICTIONARY IF EXISTS test_tsdict_exists;
CREATE TEXT SEARCH DICTIONARY test_tsdict_exists (
        Template=ispell,
        DictFile=ispell_sample,
        AffFile=ispell_sample
);
DROP TEXT SEARCH DICTIONARY test_tsdict_exists;

-- test search template
DROP TEXT SEARCH TEMPLATE test_tstemplate_exists;
DROP TEXT SEARCH TEMPLATE IF EXISTS test_tstemplate_exists;

-- text search configuration
DROP TEXT SEARCH CONFIGURATION test_tsconfig_exists;
DROP TEXT SEARCH CONFIGURATION IF EXISTS test_tsconfig_exists;
CREATE TEXT SEARCH CONFIGURATION test_tsconfig_exists (COPY=english);
DROP TEXT SEARCH CONFIGURATION test_tsconfig_exists;

-- extension
DROP EXTENSION test_extension_exists;
DROP EXTENSION IF EXISTS test_extension_exists;

-- functions
DROP FUNCTION test_function_exists();
DROP FUNCTION IF EXISTS test_function_exists();

DROP FUNCTION test_function_exists(int, text, int[]);
DROP FUNCTION IF EXISTS test_function_exists(int, text, int[]);

-- aggregate
DROP AGGREGATE test_aggregate_exists(*);
DROP AGGREGATE IF EXISTS test_aggregate_exists(*);

DROP AGGREGATE test_aggregate_exists(int);
DROP AGGREGATE IF EXISTS test_aggregate_exists(int);

-- operator
DROP OPERATOR @#@ (int, int);
DROP OPERATOR IF EXISTS @#@ (int, int);
CREATE OPERATOR @#@
        (leftarg = int8, rightarg = int8, procedure = int8xor);
DROP OPERATOR @#@ (int8, int8);

-- language
DROP LANGUAGE test_language_exists;
DROP LANGUAGE IF EXISTS test_language_exists;

-- cast
DROP CAST (text AS text);
DROP CAST IF EXISTS (text AS text);

-- trigger
DROP TRIGGER test_trigger_exists ON test_exists;
DROP TRIGGER IF EXISTS test_trigger_exists ON test_exists;

DROP TRIGGER test_trigger_exists ON no_such_table;
DROP TRIGGER IF EXISTS test_trigger_exists ON no_such_table;

DROP TRIGGER test_trigger_exists ON no_such_schema.no_such_table;
DROP TRIGGER IF EXISTS test_trigger_exists ON no_such_schema.no_such_table;

CREATE TRIGGER test_trigger_exists
    BEFORE UPDATE ON test_exists
    FOR EACH ROW EXECUTE PROCEDURE suppress_redundant_updates_trigger();
DROP TRIGGER test_trigger_exists ON test_exists;

-- rule
DROP RULE test_rule_exists ON test_exists;
DROP RULE IF EXISTS test_rule_exists ON test_exists;

DROP RULE test_rule_exists ON no_such_table;
DROP RULE IF EXISTS test_rule_exists ON no_such_table;

DROP RULE test_rule_exists ON no_such_schema.no_such_table;
DROP RULE IF EXISTS test_rule_exists ON no_such_schema.no_such_table;

CREATE RULE test_rule_exists AS ON INSERT TO test_exists
    DO INSTEAD
    INSERT INTO test_exists VALUES (NEW.a, NEW.b || NEW.a::text);
DROP RULE test_rule_exists ON test_exists;

-- foreign data wrapper
DROP FOREIGN DATA WRAPPER test_fdw_exists;
DROP FOREIGN DATA WRAPPER IF EXISTS test_fdw_exists;

-- foreign server
DROP SERVER test_server_exists;
DROP SERVER IF EXISTS test_server_exists;

-- operator class
DROP OPERATOR CLASS test_operator_class USING btree;
DROP OPERATOR CLASS IF EXISTS test_operator_class USING btree;

DROP OPERATOR CLASS test_operator_class USING no_such_am;
DROP OPERATOR CLASS IF EXISTS test_operator_class USING no_such_am;

-- operator family
DROP OPERATOR FAMILY test_operator_family USING btree;
DROP OPERATOR FAMILY IF EXISTS test_operator_family USING btree;

DROP OPERATOR FAMILY test_operator_family USING no_such_am;
DROP OPERATOR FAMILY IF EXISTS test_operator_family USING no_such_am;

-- access method
DROP ACCESS METHOD no_such_am;
DROP ACCESS METHOD IF EXISTS no_such_am;

-- drop the table

DROP TABLE IF EXISTS test_exists;

DROP TABLE test_exists;

-- be tolerant with missing schemas, types, etc

DROP AGGREGATE IF EXISTS no_such_schema.foo(int);
DROP AGGREGATE IF EXISTS foo(no_such_type);
DROP AGGREGATE IF EXISTS foo(no_such_schema.no_such_type);
DROP CAST IF EXISTS (INTEGER AS no_such_type2);
DROP CAST IF EXISTS (no_such_type1 AS INTEGER);
DROP CAST IF EXISTS (INTEGER AS no_such_schema.bar);
DROP CAST IF EXISTS (no_such_schema.foo AS INTEGER);
DROP COLLATION IF EXISTS no_such_schema.foo;
DROP CONVERSION IF EXISTS no_such_schema.foo;
DROP DOMAIN IF EXISTS no_such_schema.foo;
DROP FOREIGN TABLE IF EXISTS no_such_schema.foo;
DROP FUNCTION IF EXISTS no_such_schema.foo();
DROP FUNCTION IF EXISTS foo(no_such_type);
DROP FUNCTION IF EXISTS foo(no_such_schema.no_such_type);
DROP INDEX IF EXISTS no_such_schema.foo;
DROP MATERIALIZED VIEW IF EXISTS no_such_schema.foo;
DROP OPERATOR IF EXISTS no_such_schema.+ (int, int);
DROP OPERATOR IF EXISTS + (no_such_type, no_such_type);
DROP OPERATOR IF EXISTS + (no_such_schema.no_such_type, no_such_schema.no_such_type);
DROP OPERATOR IF EXISTS # (NONE, no_such_schema.no_such_type);
DROP OPERATOR CLASS IF EXISTS no_such_schema.widget_ops USING btree;
DROP OPERATOR FAMILY IF EXISTS no_such_schema.float_ops USING btree;
DROP RULE IF EXISTS foo ON no_such_schema.bar;
DROP SEQUENCE IF EXISTS no_such_schema.foo;
DROP TABLE IF EXISTS no_such_schema.foo;
DROP TEXT SEARCH CONFIGURATION IF EXISTS no_such_schema.foo;
DROP TEXT SEARCH DICTIONARY IF EXISTS no_such_schema.foo;
DROP TEXT SEARCH PARSER IF EXISTS no_such_schema.foo;
DROP TEXT SEARCH TEMPLATE IF EXISTS no_such_schema.foo;
DROP TRIGGER IF EXISTS foo ON no_such_schema.bar;
DROP TYPE IF EXISTS no_such_schema.foo;
DROP VIEW IF EXISTS no_such_schema.foo;

-- Check we receive an ambiguous function error when there are
-- multiple matching functions.
CREATE FUNCTION test_ambiguous_funcname(int) returns int as $$ select $1; $$ language sql;
CREATE FUNCTION test_ambiguous_funcname(text) returns text as $$ select $1; $$ language sql;
DROP FUNCTION test_ambiguous_funcname;
DROP FUNCTION IF EXISTS test_ambiguous_funcname;

-- cleanup
DROP FUNCTION test_ambiguous_funcname(int);
DROP FUNCTION test_ambiguous_funcname(text);

-- Likewise for procedures.
CREATE PROCEDURE test_ambiguous_procname(int) as $$ begin end; $$ language plpgsql;
CREATE PROCEDURE test_ambiguous_procname(text) as $$ begin end; $$ language plpgsql;
DROP PROCEDURE test_ambiguous_procname;
DROP PROCEDURE IF EXISTS test_ambiguous_procname;

-- Check we get a similar error if we use ROUTINE instead of PROCEDURE.
DROP ROUTINE IF EXISTS test_ambiguous_procname;

-- cleanup
DROP PROCEDURE test_ambiguous_procname(int);
DROP PROCEDURE test_ambiguous_procname(text);

-- This test checks both the functionality of 'if exists' and the syntax
-- of the drop database command.
drop database test_database_exists (force);
drop database test_database_exists with (force);
drop database if exists test_database_exists (force);
drop database if exists test_database_exists with (force);
