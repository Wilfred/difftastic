--
-- PostgreSQL database dump
--

-- Dumped from database version 10.7
-- Dumped by pg_dump version 12beta2

-- Started on 2019-11-01 12:54:15 IST

SET statement_timeout = 0;
SET lock_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET xmloption = content;
SET client_min_messages = warning;

--
-- TOC entry 17 (class 2615 OID 139770)
-- Name: test_schema_diff; Type: SCHEMA; Schema: -; Owner: postgres
--

CREATE SCHEMA test_schema_diff;


ALTER SCHEMA test_schema_diff OWNER TO postgres;

SET default_tablespace = '';


CREATE EXTENSION btree_gist
   SCHEMA test_schema_diff;


--
-- TOC entry 12258 (class 1259 OID 148963)
-- Name: table_for_column; Type: TABLE; Schema: test_schema_diff; Owner: postgres
--

CREATE TABLE test_schema_diff.table_for_column (
    col1 bigint NOT NULL,
    col2 text,
    col3 text
);


ALTER TABLE test_schema_diff.table_for_column OWNER TO postgres;

--
-- TOC entry 12256 (class 1259 OID 148895)
-- Name: table_for_constraints; Type: TABLE; Schema: test_schema_diff; Owner: postgres
--

CREATE TABLE test_schema_diff.table_for_constraints (
    col1 integer NOT NULL,
    col2 text
);


ALTER TABLE test_schema_diff.table_for_constraints OWNER TO postgres;

--
-- TOC entry 61066 (class 0 OID 0)
-- Dependencies: 12256
-- Name: TABLE table_for_constraints; Type: COMMENT; Schema: test_schema_diff; Owner: postgres
--

COMMENT ON TABLE test_schema_diff.table_for_constraints IS 'comments';


--
-- TOC entry 12262 (class 1259 OID 149004)
-- Name: table_for_identical; Type: TABLE; Schema: test_schema_diff; Owner: postgres
--

CREATE TABLE test_schema_diff.table_for_identical (
    col1 integer NOT NULL,
    col2 text
);


ALTER TABLE test_schema_diff.table_for_identical OWNER TO postgres;

--
-- TOC entry 12260 (class 1259 OID 148977)
-- Name: table_for_index; Type: TABLE; Schema: test_schema_diff; Owner: postgres
--

CREATE TABLE test_schema_diff.table_for_index (
    col1 integer NOT NULL,
    col2 text
);


ALTER TABLE test_schema_diff.table_for_index OWNER TO postgres;

--
-- TOC entry 12269 (class 1259 OID 149128)
-- Name: table_for_primary_key; Type: TABLE; Schema: test_schema_diff; Owner: postgres
--

CREATE TABLE test_schema_diff.table_for_primary_key (
    col1 integer NOT NULL,
    col2 text NOT NULL
);


ALTER TABLE test_schema_diff.table_for_primary_key OWNER TO postgres;

--
-- TOC entry 12264 (class 1259 OID 149024)
-- Name: table_for_rule; Type: TABLE; Schema: test_schema_diff; Owner: postgres
--

CREATE TABLE test_schema_diff.table_for_rule (
    col1 bigint NOT NULL,
    col2 text
);


ALTER TABLE test_schema_diff.table_for_rule OWNER TO postgres;

--
-- TOC entry 12266 (class 1259 OID 149048)
-- Name: table_for_trigger; Type: TABLE; Schema: test_schema_diff; Owner: postgres
--

CREATE TABLE test_schema_diff.table_for_trigger (
    col1 bigint NOT NULL,
    col2 text
);


ALTER TABLE test_schema_diff.table_for_trigger OWNER TO postgres;

--
-- TOC entry 56893 (class 2606 OID 148904)
-- Name: table_for_constraints Exclusion; Type: CONSTRAINT; Schema: test_schema_diff; Owner: postgres
--

ALTER TABLE ONLY test_schema_diff.table_for_constraints
    ADD CONSTRAINT "Exclusion" EXCLUDE USING gist (col2 WITH <>) WITH (fillfactor='12') WHERE ((col1 > 1)) DEFERRABLE INITIALLY DEFERRED;


--
-- TOC entry 61067 (class 0 OID 0)
-- Dependencies: 56893
-- Name: CONSTRAINT "Exclusion" ON table_for_constraints; Type: COMMENT; Schema: test_schema_diff; Owner: postgres
--

COMMENT ON CONSTRAINT "Exclusion" ON test_schema_diff.table_for_constraints IS 'comments';


--
-- TOC entry 56891 (class 2606 OID 148911)
-- Name: table_for_constraints check_con; Type: CHECK CONSTRAINT; Schema: test_schema_diff; Owner: postgres
--

ALTER TABLE test_schema_diff.table_for_constraints
    ADD CONSTRAINT check_con CHECK ((col1 > 10)) NOT VALID;


--
-- TOC entry 61068 (class 0 OID 0)
-- Dependencies: 56891
-- Name: CONSTRAINT check_con ON table_for_constraints; Type: COMMENT; Schema: test_schema_diff; Owner: postgres
--

COMMENT ON CONSTRAINT check_con ON test_schema_diff.table_for_constraints IS 'coment';


--
-- TOC entry 56899 (class 2606 OID 148970)
-- Name: table_for_column table_for_column_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: postgres
--

ALTER TABLE ONLY test_schema_diff.table_for_column
    ADD CONSTRAINT table_for_column_pkey PRIMARY KEY (col1);


--
-- TOC entry 56895 (class 2606 OID 148902)
-- Name: table_for_constraints table_for_constraints_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: postgres
--

ALTER TABLE ONLY test_schema_diff.table_for_constraints
    ADD CONSTRAINT table_for_constraints_pkey PRIMARY KEY (col1);


--
-- TOC entry 56904 (class 2606 OID 148984)
-- Name: table_for_index table_for_index_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: postgres
--

ALTER TABLE ONLY test_schema_diff.table_for_index
    ADD CONSTRAINT table_for_index_pkey PRIMARY KEY (col1);


--
-- TOC entry 56913 (class 2606 OID 149135)
-- Name: table_for_primary_key table_for_primary_key_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: postgres
--

ALTER TABLE ONLY test_schema_diff.table_for_primary_key
    ADD CONSTRAINT table_for_primary_key_pkey PRIMARY KEY (col1, col2);


--
-- TOC entry 56909 (class 2606 OID 149031)
-- Name: table_for_rule table_for_rule_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: postgres
--

ALTER TABLE ONLY test_schema_diff.table_for_rule
    ADD CONSTRAINT table_for_rule_pkey PRIMARY KEY (col1);


--
-- TOC entry 56907 (class 2606 OID 149011)
-- Name: table_for_identical table_for_table_for_identical_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: postgres
--

ALTER TABLE ONLY test_schema_diff.table_for_identical
    ADD CONSTRAINT table_for_table_for_identical_pkey PRIMARY KEY (col1);


--
-- TOC entry 56911 (class 2606 OID 149055)
-- Name: table_for_trigger table_for_trigger_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: postgres
--

ALTER TABLE ONLY test_schema_diff.table_for_trigger
    ADD CONSTRAINT table_for_trigger_pkey PRIMARY KEY (col1);


--
-- TOC entry 56897 (class 2606 OID 148913)
-- Name: table_for_constraints unique; Type: CONSTRAINT; Schema: test_schema_diff; Owner: postgres
--

ALTER TABLE ONLY test_schema_diff.table_for_constraints
    ADD CONSTRAINT "unique" UNIQUE (col1);


--
-- TOC entry 61069 (class 0 OID 0)
-- Dependencies: 56897
-- Name: CONSTRAINT "unique" ON table_for_constraints; Type: COMMENT; Schema: test_schema_diff; Owner: postgres
--

COMMENT ON CONSTRAINT "unique" ON test_schema_diff.table_for_constraints IS 'cmnt';


--
-- TOC entry 56900 (class 1259 OID 149023)
-- Name: index1; Type: INDEX; Schema: test_schema_diff; Owner: postgres
--

CREATE INDEX index1 ON test_schema_diff.table_for_index USING btree (col2 varchar_pattern_ops);


--
-- TOC entry 56905 (class 1259 OID 149012)
-- Name: index_identical; Type: INDEX; Schema: test_schema_diff; Owner: postgres
--

CREATE INDEX index_identical ON test_schema_diff.table_for_identical USING btree (col2 text_pattern_ops);


--
-- TOC entry 56901 (class 1259 OID 149211)
-- Name: index_same; Type: INDEX; Schema: test_schema_diff; Owner: postgres
--

CREATE INDEX index_same ON test_schema_diff.table_for_index USING btree (col2 text_pattern_ops);


--
-- TOC entry 56902 (class 1259 OID 149022)
-- Name: index_source; Type: INDEX; Schema: test_schema_diff; Owner: postgres
--

CREATE INDEX index_source ON test_schema_diff.table_for_index USING btree (col2 text_pattern_ops);


--
-- TOC entry 61044 (class 2618 OID 149032)
-- Name: table_for_rule rule1; Type: RULE; Schema: test_schema_diff; Owner: postgres
--

CREATE RULE rule1 AS
    ON UPDATE TO test_schema_diff.table_for_rule DO INSTEAD NOTHING;


--
-- TOC entry 61070 (class 0 OID 0)
-- Dependencies: 61044
-- Name: RULE rule1 ON table_for_rule; Type: COMMENT; Schema: test_schema_diff; Owner: postgres
--

COMMENT ON RULE rule1 ON test_schema_diff.table_for_rule IS 'comments';


--
-- TOC entry 61045 (class 2618 OID 149033)
-- Name: table_for_rule rule2; Type: RULE; Schema: test_schema_diff; Owner: postgres
--

CREATE RULE rule2 AS
    ON INSERT TO test_schema_diff.table_for_rule DO NOTHING;

--
-- TOC entry 12283 (class 1259 OID 347818)
-- Name: test view; Type: VIEW; Schema: test_schema_diff; Owner: postgres
--

CREATE VIEW test_schema_diff."test view" AS
 SELECT pg_class.relname,
    pg_class.relnamespace,
    pg_class.reltype,
    pg_class.reloftype,
    pg_class.relowner,
    pg_class.relam,
    pg_class.relfilenode,
    pg_class.reltablespace,
    pg_class.relpages,
    pg_class.reltuples,
    pg_class.relallvisible,
    pg_class.reltoastrelid,
    pg_class.relhasindex,
    pg_class.relisshared,
    pg_class.relpersistence,
    pg_class.relkind,
    pg_class.relnatts,
    pg_class.relchecks,
    pg_class.relhasoids,
    pg_class.relhaspkey,
    pg_class.relhasrules,
    pg_class.relhastriggers,
    pg_class.relhassubclass,
    pg_class.relrowsecurity,
    pg_class.relforcerowsecurity,
    pg_class.relispopulated,
    pg_class.relreplident,
    pg_class.relfrozenxid,
    pg_class.relminmxid,
    pg_class.relacl,
    pg_class.reloptions
   FROM pg_class
 LIMIT 10;


ALTER TABLE test_schema_diff."test view" OWNER TO postgres;

--
-- TOC entry 12286 (class 1259 OID 347832)
-- Name: test view f; Type: VIEW; Schema: test_schema_diff; Owner: postgres
--

CREATE VIEW test_schema_diff."test view f" WITH (security_barrier='false') AS
 SELECT 2;


ALTER TABLE test_schema_diff."test view f" OWNER TO postgres;

--
-- TOC entry 61111 (class 0 OID 0)
-- Dependencies: 12286
-- Name: VIEW "test view f"; Type: COMMENT; Schema: test_schema_diff; Owner: postgres
--

COMMENT ON VIEW test_schema_diff."test view f" IS 'cmn';

-- Collation scripts
CREATE COLLATION test_schema_diff.coll_src
    FROM pg_catalog."POSIX";

ALTER COLLATION test_schema_diff.coll_src
    OWNER TO postgres;

COMMENT ON COLLATION test_schema_diff.coll_src
    IS 'Test Comment';

CREATE COLLATION test_schema_diff.coll_diff
    (LC_COLLATE = 'POSIX', LC_CTYPE = 'POSIX');

ALTER COLLATION test_schema_diff.coll_diff
    OWNER TO postgres;

COMMENT ON COLLATION test_schema_diff.coll_diff
    IS 'Test Comment';

-- FTS Configuration scripts
CREATE TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_src (
    COPY=german
);

ALTER TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_src OWNER TO postgres;

COMMENT ON TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_src
    IS 'Test Comment';

CREATE TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_diff (
	PARSER = default
);
ALTER TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_diff ADD MAPPING FOR asciiword WITH german_stem;
ALTER TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_diff ADD MAPPING FOR email WITH simple;
ALTER TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_diff ADD MAPPING FOR hword WITH dutch_stem;

-- FTS Dictionary scripts
CREATE TEXT SEARCH DICTIONARY test_schema_diff.fts_dict_src (
    TEMPLATE = simple,
    stopwords = 'english'
);

COMMENT ON TEXT SEARCH DICTIONARY test_schema_diff.fts_dict_src
    IS 'Test Comment';

CREATE TEXT SEARCH DICTIONARY test_schema_diff.fts_dict_diff (
    TEMPLATE = simple,
    stopwords = 'english'
);

COMMENT ON TEXT SEARCH DICTIONARY test_schema_diff.fts_dict_diff
    IS 'Test Comment';

-- FTS Parser scripts
CREATE TEXT SEARCH PARSER test_schema_diff.fts_par_src (
    START = prsd_start,
    GETTOKEN = prsd_nexttoken,
    END = prsd_end,
    LEXTYPES = prsd_lextype);

COMMENT ON TEXT SEARCH PARSER test_schema_diff.fts_par_src
      IS 'Test Comment';

CREATE TEXT SEARCH PARSER test_schema_diff.fts_par_diff (
    START = prsd_start,
    GETTOKEN = prsd_nexttoken,
    END = prsd_end,
    LEXTYPES = prsd_lextype);

COMMENT ON TEXT SEARCH PARSER test_schema_diff.fts_par_diff
      IS 'Test Comment';

-- FTS Template scripts
CREATE TEXT SEARCH TEMPLATE test_schema_diff.fts_templ_src (
    INIT = dispell_init,
    LEXIZE = dispell_lexize
);

COMMENT ON TEXT SEARCH TEMPLATE test_schema_diff.fts_templ_src IS 'Test Comment';

CREATE TEXT SEARCH TEMPLATE test_schema_diff.fts_templ_diff (
    INIT = dispell_init,
    LEXIZE = dispell_lexize
);

COMMENT ON TEXT SEARCH TEMPLATE test_schema_diff.fts_templ_diff IS 'Test Comment';

-- Domain and Domain Constraint script
CREATE DOMAIN test_schema_diff.dom_src
    AS bigint
    DEFAULT 100
    NOT NULL;

ALTER DOMAIN test_schema_diff.dom_src OWNER TO postgres;

ALTER DOMAIN test_schema_diff.dom_src
    ADD CONSTRAINT con_src CHECK (VALUE <> 100);

CREATE DOMAIN test_schema_diff.dom_cons_diff
    AS bigint
    DEFAULT 100
    NOT NULL;

ALTER DOMAIN test_schema_diff.dom_cons_diff OWNER TO postgres;

ALTER DOMAIN test_schema_diff.dom_cons_diff
    ADD CONSTRAINT cons_diff_1 CHECK (VALUE <> 50);

ALTER DOMAIN test_schema_diff.dom_cons_diff
    ADD CONSTRAINT cons_src_only CHECK (VALUE <> 25);

CREATE DOMAIN test_schema_diff.dom_type_diff
    AS character varying(40)
    COLLATE pg_catalog."POSIX";

ALTER DOMAIN test_schema_diff.dom_type_diff OWNER TO postgres;

ALTER DOMAIN test_schema_diff.dom_type_diff
    ADD CONSTRAINT cons1 CHECK (VALUE::text <> 'pgAdmin3'::text);

ALTER DOMAIN test_schema_diff.dom_type_diff
    ADD CONSTRAINT cons2 CHECK (VALUE::text <> 'pgAdmin4'::text);

COMMENT ON DOMAIN test_schema_diff.dom_type_diff
    IS 'Test comment';

-- Type Script composite type
CREATE TYPE test_schema_diff.typ_comp_src AS
(
	m1 bit(5),
	m2 text COLLATE pg_catalog."POSIX"
);
ALTER TYPE test_schema_diff.typ_comp_src
    OWNER TO postgres;

CREATE TYPE test_schema_diff.typ_comp_diff AS
(
	m1 numeric(5,2),
	m3 character varying(30) COLLATE pg_catalog."C"
);
ALTER TYPE test_schema_diff.typ_comp_diff
    OWNER TO postgres;
COMMENT ON TYPE test_schema_diff.typ_comp_diff
    IS 'Test Comment';
GRANT USAGE ON TYPE test_schema_diff.typ_comp_diff TO PUBLIC;
GRANT USAGE ON TYPE test_schema_diff.typ_comp_diff TO postgres;

CREATE TYPE test_schema_diff.typ_comp_diff_no_column AS
(
);
ALTER TYPE test_schema_diff.typ_comp_diff_no_column
    OWNER TO postgres;

-- Type Script ENUM type
CREATE TYPE test_schema_diff.typ_enum_src AS ENUM
    ('test_enum');
ALTER TYPE test_schema_diff.typ_enum_src
    OWNER TO postgres;

CREATE TYPE test_schema_diff.typ_enum_diff AS ENUM
    ('test_enum', 'test_enum_1');
ALTER TYPE test_schema_diff.typ_enum_diff
    OWNER TO postgres;
COMMENT ON TYPE test_schema_diff.typ_enum_diff
    IS 'Test Comment';

-- Type Script RANGE type
CREATE TYPE test_schema_diff.typ_range_src AS RANGE
(
    SUBTYPE=text,
    COLLATION = pg_catalog."POSIX",
    SUBTYPE_OPCLASS = text_ops
);
ALTER TYPE test_schema_diff.typ_range_src
    OWNER TO postgres;

CREATE TYPE test_schema_diff.typ_range_col_diff AS RANGE
(
    SUBTYPE=text,
    COLLATION = pg_catalog."C",
    SUBTYPE_OPCLASS = text_ops
);
ALTER TYPE test_schema_diff.typ_range_col_diff
    OWNER TO postgres;
COMMENT ON TYPE test_schema_diff.typ_range_col_diff
    IS 'Test Comment';
GRANT USAGE ON TYPE test_schema_diff.typ_range_col_diff TO PUBLIC;
GRANT USAGE ON TYPE test_schema_diff.typ_range_col_diff TO postgres WITH GRANT OPTION;

CREATE TYPE test_schema_diff.typ_range_subtype_diff AS RANGE
(
    SUBTYPE=bpchar,
    COLLATION = pg_catalog."POSIX"
);
ALTER TYPE test_schema_diff.typ_range_subtype_diff
    OWNER TO postgres;

-- Type Script SHELL type
CREATE TYPE test_schema_diff.typ_shell_src;
ALTER TYPE test_schema_diff.typ_shell_src
    OWNER TO postgres;

CREATE TYPE test_schema_diff.typ_shell_diff;
ALTER TYPE test_schema_diff.typ_shell_diff
    OWNER TO postgres;
COMMENT ON TYPE test_schema_diff.typ_shell_diff
    IS 'Test Comment';

-- Type script to test when Type is different
CREATE TYPE test_schema_diff.typ_comp_range_diff AS
(
	m1 bigint,
	m2 text[] COLLATE pg_catalog."POSIX"
);
ALTER TYPE test_schema_diff.typ_comp_range_diff
    OWNER TO postgres;

CREATE TYPE test_schema_diff.typ_comp_enum_diff AS
(
	m1 bigint,
	m2 text[] COLLATE pg_catalog."POSIX"
);
ALTER TYPE test_schema_diff.typ_comp_range_diff
    OWNER TO postgres;

CREATE TYPE test_schema_diff.typ_range_comp_diff AS RANGE
(
    SUBTYPE=text,
    COLLATION = pg_catalog."C",
    SUBTYPE_OPCLASS = text_ops
);
ALTER TYPE test_schema_diff.typ_range_comp_diff
    OWNER TO postgres;

CREATE TYPE test_schema_diff.typ_range_enum_diff AS RANGE
(
    SUBTYPE=text,
    COLLATION = pg_catalog."C",
    SUBTYPE_OPCLASS = text_ops
);
ALTER TYPE test_schema_diff.typ_range_enum_diff
    OWNER TO postgres;

CREATE TYPE test_schema_diff.typ_enum_comp_diff AS ENUM
    ('test_enum', 'test_enum_1');
ALTER TYPE test_schema_diff.typ_enum_comp_diff
    OWNER TO postgres;

CREATE TYPE test_schema_diff.typ_enum_range_diff AS ENUM
    ('test_enum', 'test_enum_1');
ALTER TYPE test_schema_diff.typ_enum_range_diff
    OWNER TO postgres;

-- Sequences Script
CREATE SEQUENCE test_schema_diff.seq_src
    CYCLE
    INCREMENT 1
    START 1
    MINVALUE 1
    MAXVALUE 3
    CACHE 6;
ALTER SEQUENCE test_schema_diff.seq_src
    OWNER TO postgres;
COMMENT ON SEQUENCE test_schema_diff.seq_src
    IS 'Test Comment';
GRANT ALL ON SEQUENCE test_schema_diff.seq_src TO PUBLIC;
GRANT ALL ON SEQUENCE test_schema_diff.seq_src TO postgres;

CREATE SEQUENCE test_schema_diff.seq_diff_comment_acl
    INCREMENT 1
    START 1
    MINVALUE 1
    MAXVALUE 9223372036854775807
    CACHE 1;
ALTER SEQUENCE test_schema_diff.seq_diff_comment_acl
    OWNER TO postgres;
COMMENT ON SEQUENCE test_schema_diff.seq_diff_comment_acl
    IS 'Test Comment';
GRANT ALL ON SEQUENCE test_schema_diff.seq_diff_comment_acl TO PUBLIC;
GRANT ALL ON SEQUENCE test_schema_diff.seq_diff_comment_acl TO postgres;

CREATE SEQUENCE test_schema_diff.seq_diff_comment_acl_remove
    INCREMENT 1
    START 1
    MINVALUE 1
    MAXVALUE 9223372036854775807
    CACHE 1;
ALTER SEQUENCE test_schema_diff.seq_diff_comment_acl_remove
    OWNER TO postgres;

CREATE SEQUENCE test_schema_diff.seq_diff
    CYCLE
    INCREMENT 3
    START 3
    MINVALUE 3
    MAXVALUE 100
    CACHE 2;
ALTER SEQUENCE test_schema_diff.seq_diff
    OWNER TO postgres;

CREATE SEQUENCE test_schema_diff.seq_start_diff
    INCREMENT 5
    START 3
    MINVALUE 3
    MAXVALUE 20;
ALTER SEQUENCE test_schema_diff.seq_start_diff
    OWNER TO postgres;

-- Foreign Data Wrapper to test foreign table
CREATE FOREIGN DATA WRAPPER test_fdw_for_foreign_table;
ALTER FOREIGN DATA WRAPPER test_fdw_for_foreign_table
    OWNER TO postgres;

-- Foreign Server to test foreign table
CREATE SERVER test_fs_for_foreign_table
    FOREIGN DATA WRAPPER test_fdw_for_foreign_table;
ALTER SERVER test_fs_for_foreign_table
    OWNER TO postgres;
CREATE SERVER test_fs2_for_foreign_table
    FOREIGN DATA WRAPPER test_fdw_for_foreign_table;
ALTER SERVER test_fs2_for_foreign_table
    OWNER TO postgres;

-- Table to test inheritance in foreign table
CREATE TABLE public.test_table_for_foreign_table
(
    tid bigint NOT NULL,
    tname text COLLATE pg_catalog."default",
    CONSTRAINT test_table_for_foreign_table_pkey PRIMARY KEY (tid)
)
WITH (
    OIDS = FALSE
)
TABLESPACE pg_default;
ALTER TABLE public.test_table_for_foreign_table
    OWNER to postgres;

-- Foreign Table scripts
CREATE FOREIGN TABLE test_schema_diff.ft_src(
    fid bigint NULL,
    fname text NULL COLLATE pg_catalog."default"
)
    SERVER test_fs_for_foreign_table;
ALTER FOREIGN TABLE test_schema_diff.ft_src
    OWNER TO postgres;
ALTER FOREIGN TABLE test_schema_diff.ft_src
    ADD CONSTRAINT fcheck CHECK ((fid > 1000)) NO INHERIT;
COMMENT ON FOREIGN TABLE test_schema_diff.ft_src
    IS 'Test Comment';
GRANT INSERT ON TABLE test_schema_diff.ft_src TO PUBLIC;
GRANT ALL ON TABLE test_schema_diff.ft_src TO postgres;

CREATE FOREIGN TABLE test_schema_diff.ft_diff_col(
    fid bigint NULL,
    fname text NULL COLLATE pg_catalog."default",
    fcity character varying(40) NULL COLLATE pg_catalog."POSIX"
)
    SERVER test_fs_for_foreign_table;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_col
    OWNER TO postgres;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_col
    ADD CONSTRAINT fcheck CHECK ((fid > 1000)) NO INHERIT;
COMMENT ON FOREIGN TABLE test_schema_diff.ft_diff_col
    IS 'Test Comment';

CREATE FOREIGN TABLE test_schema_diff.ft_diff_const(
    fid bigint NULL,
    fname text NULL COLLATE pg_catalog."default"
)
    SERVER test_fs_for_foreign_table;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_const
    OWNER TO postgres;

ALTER FOREIGN TABLE test_schema_diff.ft_diff_const
    ADD CONSTRAINT fcheck CHECK ((fid > 1000)) NO INHERIT;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_const
    ADD CONSTRAINT fcheck1 CHECK ((fid > 1000)) NO INHERIT NOT VALID;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_const
    ADD CONSTRAINT fcheck2 CHECK ((fid > 20));
ALTER FOREIGN TABLE test_schema_diff.ft_diff_const
    ADD CONSTRAINT fcheck_src CHECK ((fid > 50));

GRANT INSERT ON TABLE test_schema_diff.ft_diff_const TO PUBLIC;
GRANT ALL ON TABLE test_schema_diff.ft_diff_const TO postgres;

CREATE FOREIGN TABLE test_schema_diff.ft_diff_opt(
    fid bigint NULL,
    fname text NULL COLLATE pg_catalog."default"
)
    SERVER test_fs_for_foreign_table
    OPTIONS (opt1 'val1', opt2 'val20', opt_src 'val_src');
ALTER FOREIGN TABLE test_schema_diff.ft_diff_opt
    OWNER TO postgres;

CREATE FOREIGN TABLE test_schema_diff.ft_diff_foreign_server(
    fid bigint NULL,
    fname text NULL COLLATE pg_catalog."default"
)
    SERVER test_fs_for_foreign_table;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_foreign_server
    OWNER TO postgres;

CREATE FOREIGN TABLE test_schema_diff.ft_diff_foreign_server_1(
    fid bigint NULL,
    fname text NULL COLLATE pg_catalog."default"
)
    SERVER test_fs_for_foreign_table
    OPTIONS (opt1 'val1');
ALTER FOREIGN TABLE test_schema_diff.ft_diff_foreign_server_1
    OWNER TO postgres;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_foreign_server_1
    ADD CONSTRAINT cs1 CHECK ((fid > 200)) NO INHERIT;

-- Test for RM #5350
CREATE TABLE test_schema_diff.events_transactions
(
    event_code integer,
    numerator integer,
    account_token text COLLATE pg_catalog."default",
    transaction_dt timestamp without time zone,
    payment_method integer,
    payment_pin integer,
    approval text COLLATE pg_catalog."default",
    amount integer,
    file_dt timestamp without time zone DEFAULT CURRENT_TIMESTAMP,
    file_name character varying(256) COLLATE pg_catalog."default",
    transfer_dt timestamp without time zone,
    transaction_type integer
);

-- Casts script
CREATE CAST (money AS bigint)
    WITHOUT FUNCTION
    AS IMPLICIT;

COMMENT ON CAST (money AS bigint) IS 'money -> bigint';

-- Event Trigger script
CREATE FUNCTION public.evt_tri_fun()
    RETURNS event_trigger
    LANGUAGE 'plpgsql'
     NOT LEAKPROOF
AS $BODY$
BEGIN
PERFORM 1;
END;
$BODY$;
ALTER FUNCTION public.evt_tri_fun()
    OWNER TO postgres;

CREATE EVENT TRIGGER evt_tri_src ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun();
COMMENT ON EVENT TRIGGER evt_tri_src
    IS 'Event Trigger Source';
ALTER EVENT TRIGGER evt_tri_src
    OWNER TO postgres;

CREATE EVENT TRIGGER evt_tri_diff_event1 ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_event1
    OWNER TO postgres;

CREATE EVENT TRIGGER evt_tri_diff_event2 ON DDL_COMMAND_END
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_event2
    OWNER TO postgres;

CREATE EVENT TRIGGER evt_tri_diff_event3 ON SQL_DROP
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_event3
    OWNER TO postgres;

CREATE EVENT TRIGGER evt_tri_diff_enable_status1 ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_enable_status1
    DISABLE;
ALTER EVENT TRIGGER evt_tri_diff_enable_status1
    OWNER TO postgres;

CREATE EVENT TRIGGER evt_tri_diff_enable_status2 ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_enable_status2
    ENABLE REPLICA;
ALTER EVENT TRIGGER evt_tri_diff_enable_status2
    OWNER TO postgres;

CREATE EVENT TRIGGER evt_tri_diff_enable_status3 ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_enable_status3
    ENABLE ALWAYS;
ALTER EVENT TRIGGER evt_tri_diff_enable_status3
    OWNER TO postgres;

CREATE EVENT TRIGGER evt_tri_diff_func ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_func
    OWNER TO postgres;

-- Extension script
CREATE EXTENSION adminpack
    SCHEMA pg_catalog
    VERSION "1.0";

-- Language script
CREATE TRUSTED PROCEDURAL LANGUAGE src_trusted_language
    HANDLER plpgsql_call_handler
    INLINE plpgsql_inline_handler
    VALIDATOR plpgsql_validator;
ALTER LANGUAGE src_trusted_language
    OWNER TO postgres;
COMMENT ON LANGUAGE src_trusted_language
    IS 'Custom Trusted Language';
GRANT USAGE ON LANGUAGE src_trusted_language TO PUBLIC;
GRANT USAGE ON LANGUAGE src_trusted_language TO postgres WITH GRANT OPTION;

CREATE PROCEDURAL LANGUAGE src_proc_language
    HANDLER plpgsql_call_handler
    INLINE plpgsql_inline_handler
    VALIDATOR plpgsql_validator;
ALTER LANGUAGE src_proc_language
    OWNER TO postgres;
COMMENT ON LANGUAGE src_proc_language
    IS 'Custom Procedural Language';

CREATE TRUSTED PROCEDURAL LANGUAGE lan_diff_acl_add
    HANDLER plpgsql_call_handler
    INLINE plpgsql_inline_handler
    VALIDATOR plpgsql_validator;
ALTER LANGUAGE lan_diff_acl_add
    OWNER TO postgres;
GRANT USAGE ON LANGUAGE lan_diff_acl_add TO PUBLIC;
GRANT USAGE ON LANGUAGE lan_diff_acl_add TO postgres WITH GRANT OPTION;

CREATE TRUSTED PROCEDURAL LANGUAGE lan_diff_acl_revoke
    HANDLER plpgsql_call_handler
    INLINE plpgsql_inline_handler
    VALIDATOR plpgsql_validator;
ALTER LANGUAGE lan_diff_acl_revoke
    OWNER TO postgres;

CREATE TRUSTED PROCEDURAL LANGUAGE lan_diff_type
    HANDLER plpgsql_call_handler
    INLINE plpgsql_inline_handler
    VALIDATOR plpgsql_validator;
ALTER LANGUAGE lan_diff_type
    OWNER TO postgres;

CREATE TRUSTED PROCEDURAL LANGUAGE lan_diff_inline_validator
    HANDLER plpgsql_call_handler
    INLINE prsd_end
    VALIDATOR pg_stat_reset_single_table_counters;
ALTER LANGUAGE lan_diff_type
    OWNER TO postgres;

-- Foreign Data Wrapper Script
CREATE FOREIGN DATA WRAPPER fdw_src
    VALIDATOR pg_catalog.postgresql_fdw_validator;
ALTER FOREIGN DATA WRAPPER fdw_src
    OWNER TO postgres;
COMMENT ON FOREIGN DATA WRAPPER fdw_src
    IS 'Foreign Data Wrapper';

CREATE FOREIGN DATA WRAPPER fdw_diff_acl_add
    VALIDATOR pg_catalog.postgresql_fdw_validator;
ALTER FOREIGN DATA WRAPPER fdw_diff_acl_add
    OWNER TO postgres;
GRANT USAGE ON FOREIGN DATA WRAPPER fdw_diff_acl_add TO PUBLIC;
GRANT USAGE ON FOREIGN DATA WRAPPER fdw_diff_acl_add TO postgres WITH GRANT OPTION;

CREATE FOREIGN DATA WRAPPER fdw_diff_acl_revoke
    VALIDATOR pg_catalog.postgresql_fdw_validator;
ALTER FOREIGN DATA WRAPPER fdw_diff_acl_revoke
    OWNER TO postgres;

CREATE FOREIGN DATA WRAPPER fdw_diff_add_validator
    VALIDATOR pg_catalog.postgresql_fdw_validator;
ALTER FOREIGN DATA WRAPPER fdw_diff_add_validator
    OWNER TO postgres;

CREATE FOREIGN DATA WRAPPER fdw_diff_remove_validator;
ALTER FOREIGN DATA WRAPPER fdw_diff_remove_validator
    OWNER TO postgres;

CREATE FOREIGN DATA WRAPPER fdw_diff_add_options
    OPTIONS (debug 'true');
ALTER FOREIGN DATA WRAPPER fdw_diff_add_options
    OWNER TO postgres;

CREATE FOREIGN DATA WRAPPER fdw_diff_remove_options;
ALTER FOREIGN DATA WRAPPER fdw_diff_remove_options
    OWNER TO postgres;

CREATE FOREIGN DATA WRAPPER fdw_diff_options
    OPTIONS (debug 'false');
ALTER FOREIGN DATA WRAPPER fdw_diff_options
    OWNER TO postgres;

-- Foreign Server Script
CREATE FOREIGN DATA WRAPPER test_fdw_for_foreign_server
    VALIDATOR pg_catalog.postgresql_fdw_validator;
ALTER FOREIGN DATA WRAPPER test_fdw_for_foreign_server
    OWNER TO postgres;

CREATE SERVER fs_src
    TYPE 'PG'
    VERSION '10'
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server
    OPTIONS (host '127.0.0.1', port '5432');
ALTER SERVER fs_src
    OWNER TO postgres;
COMMENT ON SERVER fs_src
    IS 'Foreign Server';

CREATE SERVER fs_diff_acl_add
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server;
ALTER SERVER fs_diff_acl_add
    OWNER TO postgres;
GRANT USAGE ON FOREIGN SERVER fs_diff_acl_add TO PUBLIC;
GRANT USAGE ON FOREIGN SERVER fs_diff_acl_add TO postgres WITH GRANT OPTION;

CREATE SERVER fs_diff_acl_revoke
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server;
ALTER SERVER fs_diff_acl_revoke
    OWNER TO postgres;

CREATE SERVER fs_diff_type_version_add
    TYPE 'PG'
    VERSION '10'
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server;
ALTER SERVER fs_diff_type_version_add
    OWNER TO postgres;

CREATE SERVER fs_diff_type_version_remove
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server;
ALTER SERVER fs_diff_type_version_remove
    OWNER TO postgres;

CREATE SERVER fs_diff_type_version_modify
    TYPE 'PG'
    VERSION '10'
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server;
ALTER SERVER fs_diff_type_version_modify
    OWNER TO postgres;

CREATE SERVER fs_diff_options_add
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server
    OPTIONS (host '127.0.0.1', port '5432');
ALTER SERVER fs_diff_options_add
    OWNER TO postgres;

CREATE SERVER fs_diff_options_remove
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server;
ALTER SERVER fs_diff_options_remove
    OWNER TO postgres;

CREATE SERVER fs_diff_options_modify
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server
    OPTIONS (host '192.168.1.1', port '8080');
ALTER SERVER fs_diff_options_modify
    OWNER TO postgres;

-- User Mapping Script
CREATE FOREIGN DATA WRAPPER test_fdw_for_user_mapping
    VALIDATOR pg_catalog.postgresql_fdw_validator;
ALTER FOREIGN DATA WRAPPER test_fdw_for_user_mapping
    OWNER TO postgres;

CREATE SERVER test_fs_for_user_mapping
    FOREIGN DATA WRAPPER test_fdw_for_user_mapping;
ALTER SERVER test_fs_for_user_mapping
    OWNER TO postgres;

CREATE USER MAPPING FOR public SERVER test_fs_for_user_mapping;

CREATE USER MAPPING FOR postgres SERVER test_fs_for_user_mapping
    OPTIONS (password 'admin123');
