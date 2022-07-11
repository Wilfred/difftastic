--
-- enterprisedbQL database dump
--

-- Dumped from database version 10.7
-- Dumped by pg_dump version 12beta2

-- Started on 2019-11-01 12:55:22 IST

SET statement_timeout = 0;
SET lock_timeout = 0;
SET idle_in_transaction_session_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET xmloption = content;
SET client_min_messages = warning;
SET row_security = off;

--
-- TOC entry 18 (class 2615 OID 139771)
-- Name: test_schema_diff; Type: SCHEMA; Schema: -; Owner: enterprisedb
--

CREATE SCHEMA test_schema_diff;

ALTER SCHEMA test_schema_diff OWNER TO enterprisedb;

SET default_tablespace = '';

CREATE EXTENSION btree_gist
    SCHEMA test_schema_diff;

--
-- TOC entry 12250 (class 1259 OID 139938)
-- Name: MView; Type: MATERIALIZED VIEW; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE MATERIALIZED VIEW test_schema_diff."MView" AS
 SELECT 'tekst'::text AS text
  WITH NO DATA;


ALTER TABLE test_schema_diff."MView" OWNER TO enterprisedb;

--
-- TOC entry 12277 (class 1259 OID 149234)
-- Name: table_for_partition_1; Type: TABLE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE TABLE test_schema_diff.table_for_partition_1 (
    col1 bigint
)
PARTITION BY RANGE (col1);


ALTER TABLE test_schema_diff.table_for_partition_1 OWNER TO enterprisedb;

--
-- TOC entry 12278 (class 1259 OID 149237)
-- Name: part3; Type: TABLE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE TABLE test_schema_diff.part3 (
    col1 bigint
);
ALTER TABLE ONLY test_schema_diff.table_for_partition_1 ATTACH PARTITION test_schema_diff.part3 FOR VALUES FROM ('13') TO ('56');


ALTER TABLE test_schema_diff.part3 OWNER TO enterprisedb;

--
-- TOC entry 12259 (class 1259 OID 148971)
-- Name: table_for_column; Type: TABLE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE TABLE test_schema_diff.table_for_column (
    col1 bigint,
    col2 bigint,
    col4 text
);


ALTER TABLE test_schema_diff.table_for_column OWNER TO enterprisedb;

--
-- TOC entry 12268 (class 1259 OID 149089)
-- Name: table_for_constraints; Type: TABLE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE TABLE test_schema_diff.table_for_constraints (
    col1 integer NOT NULL,
    col2 text,
    CONSTRAINT check_con CHECK ((col1 > 30))
);


ALTER TABLE test_schema_diff.table_for_constraints OWNER TO enterprisedb;

--
-- TOC entry 61066 (class 0 OID 0)
-- Dependencies: 12268
-- Name: TABLE table_for_constraints; Type: COMMENT; Schema: test_schema_diff; Owner: enterprisedb
--

COMMENT ON TABLE test_schema_diff.table_for_constraints IS 'comments';


--
-- TOC entry 61067 (class 0 OID 0)
-- Dependencies: 12268
-- Name: CONSTRAINT check_con ON table_for_constraints; Type: COMMENT; Schema: test_schema_diff; Owner: enterprisedb
--

COMMENT ON CONSTRAINT check_con ON test_schema_diff.table_for_constraints IS 'coment';


--
-- TOC entry 12257 (class 1259 OID 148960)
-- Name: table_for_del; Type: TABLE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE TABLE test_schema_diff.table_for_del (
);


ALTER TABLE test_schema_diff.table_for_del OWNER TO enterprisedb;

--
-- TOC entry 12271 (class 1259 OID 149172)
-- Name: table_for_foreign_key; Type: TABLE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE TABLE test_schema_diff.table_for_foreign_key (
    col1 integer NOT NULL,
    col2 "char",
    col3 bigint
);


ALTER TABLE test_schema_diff.table_for_foreign_key OWNER TO enterprisedb;

--
-- TOC entry 12263 (class 1259 OID 149013)
-- Name: table_for_identical; Type: TABLE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE TABLE test_schema_diff.table_for_identical (
    col1 integer NOT NULL,
    col2 text
);


ALTER TABLE test_schema_diff.table_for_identical OWNER TO enterprisedb;

--
-- TOC entry 12261 (class 1259 OID 148986)
-- Name: table_for_index; Type: TABLE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE TABLE test_schema_diff.table_for_index (
    col1 integer NOT NULL,
    col2 text
);


ALTER TABLE test_schema_diff.table_for_index OWNER TO enterprisedb;

--
-- TOC entry 12270 (class 1259 OID 149144)
-- Name: table_for_primary_key; Type: TABLE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE TABLE test_schema_diff.table_for_primary_key (
    col1 integer NOT NULL,
    col2 text NOT NULL
);


ALTER TABLE test_schema_diff.table_for_primary_key OWNER TO enterprisedb;

--
-- TOC entry 12265 (class 1259 OID 149034)
-- Name: table_for_rule; Type: TABLE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE TABLE test_schema_diff.table_for_rule (
    col1 bigint NOT NULL,
    col2 text
);


ALTER TABLE test_schema_diff.table_for_rule OWNER TO enterprisedb;

--
-- TOC entry 12267 (class 1259 OID 149066)
-- Name: table_for_trigger; Type: TABLE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE TABLE test_schema_diff.table_for_trigger (
    col1 bigint NOT NULL,
    col2 text
);


ALTER TABLE test_schema_diff.table_for_trigger OWNER TO enterprisedb;


--
-- TOC entry 56906 (class 2606 OID 149097)
-- Name: table_for_constraints Exclusion; Type: CONSTRAINT; Schema: test_schema_diff; Owner: enterprisedb
--

ALTER TABLE ONLY test_schema_diff.table_for_constraints
    ADD CONSTRAINT "Exclusion" EXCLUDE USING gist (col2 WITH <>) WITH (fillfactor='15') WHERE ((col1 > 1)) DEFERRABLE INITIALLY DEFERRED;


--
-- TOC entry 61068 (class 0 OID 0)
-- Dependencies: 56906
-- Name: CONSTRAINT "Exclusion" ON table_for_constraints; Type: COMMENT; Schema: test_schema_diff; Owner: enterprisedb
--

COMMENT ON CONSTRAINT "Exclusion" ON test_schema_diff.table_for_constraints IS 'comments';


--
-- TOC entry 56910 (class 2606 OID 149176)
-- Name: table_for_foreign_key table_for_foreign_key_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: enterprisedb
--

ALTER TABLE ONLY test_schema_diff.table_for_foreign_key
    ADD CONSTRAINT table_for_foreign_key_pkey PRIMARY KEY (col1);


--
-- TOC entry 56897 (class 2606 OID 148993)
-- Name: table_for_index table_for_index_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: enterprisedb
--

ALTER TABLE ONLY test_schema_diff.table_for_index
    ADD CONSTRAINT table_for_index_pkey PRIMARY KEY (col1);


--
-- TOC entry 56908 (class 2606 OID 149151)
-- Name: table_for_primary_key table_for_primary_key_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: enterprisedb
--

ALTER TABLE ONLY test_schema_diff.table_for_primary_key
    ADD CONSTRAINT table_for_primary_key_pkey PRIMARY KEY (col1);


--
-- TOC entry 56902 (class 2606 OID 149041)
-- Name: table_for_rule table_for_rule_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: enterprisedb
--

ALTER TABLE ONLY test_schema_diff.table_for_rule
    ADD CONSTRAINT table_for_rule_pkey PRIMARY KEY (col1);


--
-- TOC entry 56900 (class 2606 OID 149020)
-- Name: table_for_identical table_for_table_for_identical_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: enterprisedb
--

ALTER TABLE ONLY test_schema_diff.table_for_identical
    ADD CONSTRAINT table_for_table_for_identical_pkey PRIMARY KEY (col1);


--
-- TOC entry 56904 (class 2606 OID 149073)
-- Name: table_for_trigger table_for_trigger_pkey; Type: CONSTRAINT; Schema: test_schema_diff; Owner: enterprisedb
--

ALTER TABLE ONLY test_schema_diff.table_for_trigger
    ADD CONSTRAINT table_for_trigger_pkey PRIMARY KEY (col1);


--
-- TOC entry 56893 (class 1259 OID 148994)
-- Name: index1; Type: INDEX; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE INDEX index1 ON test_schema_diff.table_for_index USING btree (col2 text_pattern_ops);


--
-- TOC entry 56894 (class 1259 OID 148995)
-- Name: index2; Type: INDEX; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE INDEX index2 ON test_schema_diff.table_for_index USING btree (col2 text_pattern_ops);


--
-- TOC entry 56898 (class 1259 OID 149021)
-- Name: index_identical; Type: INDEX; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE INDEX index_identical ON test_schema_diff.table_for_identical USING btree (col2 text_pattern_ops);


--
-- TOC entry 56895 (class 1259 OID 149212)
-- Name: index_same; Type: INDEX; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE INDEX index_same ON test_schema_diff.table_for_index USING btree (col2 text_pattern_ops);


--
-- TOC entry 56892 (class 1259 OID 139945)
-- Name: mview_index; Type: INDEX; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE INDEX mview_index ON test_schema_diff."MView" USING btree (text text_pattern_ops);


--
-- TOC entry 61045 (class 2618 OID 149042)
-- Name: table_for_rule rule1; Type: RULE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE RULE rule1 AS
    ON UPDATE TO test_schema_diff.table_for_rule DO INSTEAD NOTHING;


--
-- TOC entry 61069 (class 0 OID 0)
-- Dependencies: 61045
-- Name: RULE rule1 ON table_for_rule; Type: COMMENT; Schema: test_schema_diff; Owner: enterprisedb
--

COMMENT ON RULE rule1 ON test_schema_diff.table_for_rule IS 'comments';


--
-- TOC entry 61046 (class 2618 OID 149043)
-- Name: table_for_rule rule2; Type: RULE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE RULE rule2 AS
    ON UPDATE TO test_schema_diff.table_for_rule DO NOTHING;


--
-- TOC entry 61047 (class 2618 OID 149044)
-- Name: table_for_rule rule3; Type: RULE; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE RULE rule3 AS
    ON INSERT TO test_schema_diff.table_for_rule DO NOTHING;


--
-- TOC entry 61050 (class 0 OID 139938)
-- Dependencies: 12250 61062
-- Name: MView; Type: MATERIALIZED VIEW DATA; Schema: test_schema_diff; Owner: enterprisedb
--

REFRESH MATERIALIZED VIEW test_schema_diff."MView";


--
-- TOC entry 12284 (class 1259 OID 347823)
-- Name: test view; Type: VIEW; Schema: test_schema_diff; Owner: enterprisedb
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
    pg_class.relhasrules,
    pg_class.relhastriggers,
    pg_class.relhassubclass,
    pg_class.relrowsecurity,
    pg_class.relforcerowsecurity,
    pg_class.relispopulated,
    pg_class.relreplident,
    pg_class.relispartition,
    pg_class.relfrozenxid,
    pg_class.relminmxid,
    pg_class.relacl,
    pg_class.reloptions,
    pg_class.relpartbound
   FROM pg_catalog.pg_class
 LIMIT 10;


ALTER TABLE test_schema_diff."test view" OWNER TO enterprisedb;

--
-- TOC entry 12285 (class 1259 OID 347828)
-- Name: test view f; Type: VIEW; Schema: test_schema_diff; Owner: enterprisedb
--

CREATE VIEW test_schema_diff."test view f" WITH (security_barrier='true') AS
 SELECT 2;


ALTER TABLE test_schema_diff."test view f" OWNER TO enterprisedb;

--
-- TOC entry 61105 (class 0 OID 0)
-- Dependencies: 12285
-- Name: VIEW "test view f"; Type: COMMENT; Schema: test_schema_diff; Owner: enterprisedb
--

COMMENT ON VIEW test_schema_diff."test view f" IS 'cmn';

-- Collation scripts
CREATE COLLATION test_schema_diff.coll_tar
    FROM pg_catalog."POSIX";

ALTER COLLATION test_schema_diff.coll_tar
    OWNER TO enterprisedb;

CREATE COLLATION test_schema_diff.coll_diff
    (LC_COLLATE = 'C', LC_CTYPE = 'C');

ALTER COLLATION test_schema_diff.coll_diff
    OWNER TO enterprisedb;

-- FTS Configuration scripts
CREATE TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_tar (
    COPY=german
);

ALTER TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_tar OWNER TO enterprisedb;

CREATE TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_diff (
	PARSER = default
);
ALTER TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_diff ADD MAPPING FOR asciiword WITH dutch_stem;
ALTER TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_diff ADD MAPPING FOR email WITH simple;
ALTER TEXT SEARCH CONFIGURATION test_schema_diff.fts_con_diff ADD MAPPING FOR hword WITH german_stem;

-- FTS Dictionary scripts
CREATE TEXT SEARCH DICTIONARY test_schema_diff.fts_dict_tar (
    TEMPLATE = simple,
    stopwords = 'english'
);

CREATE TEXT SEARCH DICTIONARY test_schema_diff.fts_dict_diff (
    TEMPLATE = simple,
    stopwords = 'german'
);

COMMENT ON TEXT SEARCH DICTIONARY test_schema_diff.fts_dict_diff
    IS 'Comment';

-- FTS Parser scripts
CREATE TEXT SEARCH PARSER test_schema_diff.fts_par_tar (
    START = prsd_start,
    GETTOKEN = prsd_nexttoken,
    END = prsd_end,
    LEXTYPES = prsd_lextype);

CREATE TEXT SEARCH PARSER test_schema_diff.fts_par_diff (
    START = int4_accum,
    GETTOKEN = inet_gist_penalty,
    END = btint2sortsupport,
    LEXTYPES = dispell_init);

COMMENT ON TEXT SEARCH PARSER test_schema_diff.fts_par_diff
      IS 'Comment';

-- FTS Template scripts
CREATE TEXT SEARCH TEMPLATE test_schema_diff.fts_templ_tar (
    INIT = dispell_init,
    LEXIZE = dispell_lexize
);

CREATE TEXT SEARCH TEMPLATE test_schema_diff.fts_templ_diff (
    INIT = dsimple_init,
    LEXIZE = dsimple_lexize
);

COMMENT ON TEXT SEARCH TEMPLATE test_schema_diff.fts_templ_diff IS 'Comment';

-- Domain and Domain Constraint script
CREATE DOMAIN test_schema_diff.dom_tar
    AS bigint
    DEFAULT 100
    NOT NULL;

ALTER DOMAIN test_schema_diff.dom_tar OWNER TO enterprisedb;

ALTER DOMAIN test_schema_diff.dom_tar
    ADD CONSTRAINT con_tar CHECK (VALUE <> 100);

CREATE DOMAIN test_schema_diff.dom_cons_diff
    AS bigint
    DEFAULT 400;

ALTER DOMAIN test_schema_diff.dom_cons_diff OWNER TO enterprisedb;

ALTER DOMAIN test_schema_diff.dom_cons_diff
    ADD CONSTRAINT cons_diff_1 CHECK (VALUE <> 40);

ALTER DOMAIN test_schema_diff.dom_cons_diff
    ADD CONSTRAINT cons_tar_only CHECK (VALUE <> 25);

CREATE DOMAIN test_schema_diff.dom_type_diff
    AS numeric(8,4);

ALTER DOMAIN test_schema_diff.dom_type_diff OWNER TO enterprisedb;

ALTER DOMAIN test_schema_diff.dom_type_diff
    ADD CONSTRAINT cons1 CHECK (VALUE <> 45::numeric);

ALTER DOMAIN test_schema_diff.dom_type_diff
    ADD CONSTRAINT cons2 CHECK (VALUE <> 50::numeric);

COMMENT ON DOMAIN test_schema_diff.dom_type_diff
    IS 'Comment';

-- Type Script composite type
CREATE TYPE test_schema_diff.typ_comp_tar AS
(
	m1 bit(5),
	m2 text COLLATE pg_catalog."POSIX"
);
ALTER TYPE test_schema_diff.typ_comp_tar
    OWNER TO enterprisedb;
CREATE TYPE test_schema_diff.typ_comp_diff AS
(
	m1 bit(5),
	m2 text COLLATE pg_catalog."POSIX"
);
ALTER TYPE test_schema_diff.typ_comp_diff
    OWNER TO enterprisedb;

CREATE TYPE test_schema_diff.typ_comp_diff_no_column AS
(
	a "char",
	b "char"
);
ALTER TYPE test_schema_diff.typ_comp_diff_no_column
    OWNER TO enterprisedb;

-- Type Script ENUM type
CREATE TYPE test_schema_diff.typ_enum_tar AS ENUM
    ('test_enum');
ALTER TYPE test_schema_diff.typ_enum_tar
    OWNER TO enterprisedb;

CREATE TYPE test_schema_diff.typ_enum_diff AS ENUM
    ('test_enum', 'test_enum_1');
ALTER TYPE test_schema_diff.typ_enum_diff
    OWNER TO enterprisedb;

-- Type Script RANGE type
CREATE TYPE test_schema_diff.typ_range_tar AS RANGE
(
    SUBTYPE=text,
    COLLATION = pg_catalog."POSIX",
    SUBTYPE_OPCLASS = text_ops
);
ALTER TYPE test_schema_diff.typ_range_tar
    OWNER TO enterprisedb;

CREATE TYPE test_schema_diff.typ_range_col_diff AS RANGE
(
    SUBTYPE=text,
    COLLATION = pg_catalog."POSIX",
    SUBTYPE_OPCLASS = text_ops
);
ALTER TYPE test_schema_diff.typ_range_col_diff
    OWNER TO enterprisedb;

CREATE TYPE test_schema_diff.typ_range_subtype_diff AS RANGE
(
    SUBTYPE=bool,
    SUBTYPE_OPCLASS = bool_ops
);
ALTER TYPE test_schema_diff.typ_range_subtype_diff
    OWNER TO enterprisedb;

-- Type Script SHELL type
CREATE TYPE test_schema_diff.typ_shell_tar;
ALTER TYPE test_schema_diff.typ_shell_tar
    OWNER TO enterprisedb;

CREATE TYPE test_schema_diff.typ_shell_diff;
ALTER TYPE test_schema_diff.typ_shell_diff
    OWNER TO enterprisedb;

-- Type script to test when Type is different
CREATE TYPE test_schema_diff.typ_comp_range_diff AS RANGE
(
    SUBTYPE=text,
    COLLATION = pg_catalog."C",
    SUBTYPE_OPCLASS = text_ops
);
ALTER TYPE test_schema_diff.typ_comp_range_diff
    OWNER TO enterprisedb;

CREATE TYPE test_schema_diff.typ_comp_enum_diff AS ENUM
    ('test_enum', 'test_enum_1');
ALTER TYPE test_schema_diff.typ_comp_enum_diff
    OWNER TO enterprisedb;

CREATE TYPE test_schema_diff.typ_range_comp_diff AS
(
	m1 bigint,
	m2 text[] COLLATE pg_catalog."POSIX"
);
ALTER TYPE test_schema_diff.typ_range_comp_diff
    OWNER TO enterprisedb;

CREATE TYPE test_schema_diff.typ_range_enum_diff AS ENUM
    ('test_enum', 'test_enum_1');
ALTER TYPE test_schema_diff.typ_range_enum_diff
    OWNER TO enterprisedb;

CREATE TYPE test_schema_diff.typ_enum_comp_diff AS
(
	m1 bigint,
	m2 text[] COLLATE pg_catalog."POSIX"
);
ALTER TYPE test_schema_diff.typ_enum_comp_diff
    OWNER TO enterprisedb;

CREATE TYPE test_schema_diff.typ_enum_range_diff AS RANGE
(
    SUBTYPE=text,
    COLLATION = pg_catalog."C",
    SUBTYPE_OPCLASS = text_ops
);
ALTER TYPE test_schema_diff.typ_enum_range_diff
    OWNER TO enterprisedb;

-- Package script (test_schema_diff only)
CREATE OR REPLACE PACKAGE test_schema_diff.pkg_tar
IS
    FUNCTION get_dept_name(p_deptno numeric) RETURN character varying;
    PROCEDURE hire_emp(p_empno numeric, p_ename character varying, p_job character varying, p_sal numeric, p_hiredate timestamp without time zone, p_comm numeric, p_mgr numeric, p_deptno numeric);
END pkg_tar;


CREATE OR REPLACE PACKAGE BODY test_schema_diff.pkg_tar
IS
    FUNCTION get_dept_name(p_deptno numeric) RETURN character varying IS
        v_dname         VARCHAR2(14);
    BEGIN
        SELECT dname INTO v_dname FROM dept WHERE deptno = p_deptno;
        RETURN v_dname;
    EXCEPTION
        WHEN NO_DATA_FOUND THEN
            DBMS_OUTPUT.PUT_LINE('Invalid department number ' || p_deptno);
            RETURN '';
    END;

    PROCEDURE hire_emp(p_empno numeric, p_ename character varying, p_job character varying, p_sal numeric, p_hiredate timestamp without time zone, p_comm numeric, p_mgr numeric, p_deptno numeric) IS
    BEGIN
        INSERT INTO emp(empno, ename, job, sal, hiredate, comm, mgr, deptno)
            VALUES(p_empno, p_ename, p_job, p_sal,
                   p_hiredate, p_comm, p_mgr, p_deptno);
    END;
END pkg_tar;

COMMENT ON PACKAGE test_schema_diff.pkg_tar
    IS 'test_schema_diff';

-- Package script difference in header, acl and comment
CREATE OR REPLACE PACKAGE test_schema_diff.pkg_header_diff
IS
    FUNCTION get_dept_name(p_deptno numeric) RETURN character varying;
END pkg_header_diff;

CREATE OR REPLACE PACKAGE BODY test_schema_diff.pkg_header_diff
IS
    FUNCTION get_dept_name(p_deptno numeric) RETURN character varying IS
        v_dname         VARCHAR2(14);
    BEGIN
        SELECT dname INTO v_dname FROM dept WHERE deptno = p_deptno;
        RETURN v_dname;
    EXCEPTION
        WHEN NO_DATA_FOUND THEN
            DBMS_OUTPUT.PUT_LINE('Invalid department number ' || p_deptno);
            RETURN '';
    END;
END pkg_header_diff;

-- Package script difference in body, acl and comment
CREATE OR REPLACE PACKAGE test_schema_diff.pkg_body_diff
IS
    PROCEDURE hire_emp(p_empno numeric, p_ename character varying, p_job character varying, p_sal numeric, p_hiredate timestamp without time zone, p_comm numeric, p_mgr numeric, p_deptno numeric);
END pkg_body_diff;

CREATE OR REPLACE PACKAGE BODY test_schema_diff.pkg_body_diff
IS
    PROCEDURE hire_emp(p_empno numeric, p_ename character varying, p_job character varying, p_sal numeric, p_hiredate timestamp without time zone, p_comm numeric, p_mgr numeric, p_deptno numeric) IS
    BEGIN
        DBMS_OUTPUT.PUT_LINE('Before Insert ');
        INSERT INTO emp(empno, ename, job, sal, hiredate, comm, mgr, deptno)
            VALUES(p_empno, p_ename, p_job, p_sal,
                   p_hiredate, p_comm, p_mgr, p_deptno);
        DBMS_OUTPUT.PUT_LINE('After Insert ');
    END;
END pkg_body_diff;

COMMENT ON PACKAGE test_schema_diff.pkg_body_diff
    IS 'Header Diff';

GRANT EXECUTE ON PACKAGE test_schema_diff.pkg_body_diff TO PUBLIC;
GRANT EXECUTE ON PACKAGE test_schema_diff.pkg_body_diff TO enterprisedb WITH GRANT OPTION;

-- Synonyms Scripts
-- Prerequisite for synonyms
CREATE OR REPLACE FUNCTION test_schema_diff.fun_for_syn()
RETURNS void
    LANGUAGE 'plpgsql'
    VOLATILE
    COST 100

AS $BODY$BEGIN
SELECT 1;
END;$BODY$;
ALTER FUNCTION test_schema_diff.fun_for_syn()
    OWNER TO enterprisedb;

CREATE OR REPLACE PROCEDURE test_schema_diff.proc_for_syn()
    SECURITY DEFINER VOLATILE
    COST 100
AS $BODY$BEGIN
SELECT 1;
END;$BODY$;

CREATE OR REPLACE PACKAGE test_schema_diff.pkg_for_syn
IS
FUNCTION get_dept_name(p_deptno numeric) RETURN character varying;
END pkg_for_syn;
CREATE OR REPLACE PACKAGE BODY test_schema_diff.pkg_for_syn
IS
FUNCTION get_dept_name(p_deptno numeric) RETURN character varying IS
BEGIN
    RETURN '';
END;
END pkg_for_syn;

CREATE TABLE test_schema_diff.table_for_syn
(
    id bigint,
    name text COLLATE pg_catalog."default"
)
TABLESPACE pg_default;
ALTER TABLE test_schema_diff.table_for_syn
    OWNER to enterprisedb;

CREATE SEQUENCE test_schema_diff.seq_for_syn
    INCREMENT 5
    START 1
    MINVALUE 1
    MAXVALUE 100
    CACHE 1;
ALTER SEQUENCE test_schema_diff.seq_for_syn
    OWNER TO enterprisedb;

CREATE OR REPLACE SYNONYM test_schema_diff.syn_fun_src
    FOR test_schema_diff.fun_for_syn;

CREATE OR REPLACE SYNONYM test_schema_diff.syn_pkg_src
    FOR test_schema_diff.pkg_for_syn;

CREATE OR REPLACE SYNONYM test_schema_diff.syn_proc_src
    FOR test_schema_diff.proc_for_syn;

CREATE OR REPLACE SYNONYM test_schema_diff.syn_seq_src
    FOR test_schema_diff.seq_for_syn;

CREATE OR REPLACE SYNONYM test_schema_diff.syn_table_src
    FOR test_schema_diff.table_for_syn;

CREATE OR REPLACE PROCEDURE public.proc_for_syn()
    SECURITY DEFINER VOLATILE
    COST 100
AS $BODY$BEGIN
SELECT 1;
END;$BODY$;

CREATE OR REPLACE SYNONYM test_schema_diff.syn_diff
    FOR public.proc_for_syn;

-- Sequences Script
CREATE SEQUENCE test_schema_diff.seq_tar
    CYCLE
    INCREMENT 1
    START 1
    MINVALUE 1
    MAXVALUE 3
    CACHE 6;
ALTER SEQUENCE test_schema_diff.seq_tar
    OWNER TO enterprisedb;

CREATE SEQUENCE test_schema_diff.seq_diff_comment_acl
    INCREMENT 1
    START 1
    MINVALUE 1
    MAXVALUE 9223372036854775807
    CACHE 1;

ALTER SEQUENCE test_schema_diff.seq_diff_comment_acl
    OWNER TO enterprisedb;

CREATE SEQUENCE test_schema_diff.seq_diff_comment_acl_remove
    INCREMENT 1
    START 1
    MINVALUE 1
    MAXVALUE 9223372036854775807
    CACHE 1;
ALTER SEQUENCE test_schema_diff.seq_diff_comment_acl_remove
    OWNER TO enterprisedb;
COMMENT ON SEQUENCE test_schema_diff.seq_diff_comment_acl_remove
    IS 'Test Comment';
GRANT ALL ON SEQUENCE test_schema_diff.seq_diff_comment_acl_remove TO PUBLIC;
GRANT ALL ON SEQUENCE test_schema_diff.seq_diff_comment_acl_remove TO enterprisedb;

CREATE SEQUENCE test_schema_diff.seq_diff
    INCREMENT 5
    START 3
    MINVALUE 3
    MAXVALUE 80
    CACHE 1;

ALTER SEQUENCE test_schema_diff.seq_diff
    OWNER TO enterprisedb;

CREATE SEQUENCE test_schema_diff.seq_start_diff
    INCREMENT 5
    START 1
    MINVALUE 1
    MAXVALUE 20;
ALTER SEQUENCE test_schema_diff.seq_start_diff
    OWNER TO enterprisedb;

-- Foreign Data Wrapper to test foreign table
CREATE FOREIGN DATA WRAPPER test_fdw_for_foreign_table;
ALTER FOREIGN DATA WRAPPER test_fdw_for_foreign_table
    OWNER TO enterprisedb;

-- Foreign Server to test foreign table
CREATE SERVER test_fs_for_foreign_table
    FOREIGN DATA WRAPPER test_fdw_for_foreign_table;
ALTER SERVER test_fs_for_foreign_table
    OWNER TO enterprisedb;
CREATE SERVER test_fs2_for_foreign_table
    FOREIGN DATA WRAPPER test_fdw_for_foreign_table;
ALTER SERVER test_fs2_for_foreign_table
    OWNER TO enterprisedb;

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
    OWNER to enterprisedb;

CREATE FOREIGN TABLE test_schema_diff.ft_tar(
    fid bigint NULL,
    fname text NULL COLLATE pg_catalog."default"
)
    SERVER test_fs_for_foreign_table;
ALTER FOREIGN TABLE test_schema_diff.ft_tar
    OWNER TO enterprisedb;
ALTER FOREIGN TABLE test_schema_diff.ft_tar
    ADD CONSTRAINT fcheck CHECK ((fid > 1000)) NO INHERIT;
COMMENT ON FOREIGN TABLE test_schema_diff.ft_tar
    IS 'Test Comment';
GRANT INSERT ON TABLE test_schema_diff.ft_tar TO PUBLIC;
GRANT ALL ON TABLE test_schema_diff.ft_tar TO enterprisedb;

CREATE FOREIGN TABLE test_schema_diff.ft_diff_col(
    fid bigint NULL,
    fname text NOT NULL COLLATE pg_catalog."default"
)
    SERVER test_fs_for_foreign_table;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_col
    OWNER TO enterprisedb;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_col
    ADD CONSTRAINT fcheck CHECK ((fid > 1000)) NO INHERIT;
COMMENT ON FOREIGN TABLE test_schema_diff.ft_diff_col
    IS 'Comment';
GRANT INSERT ON TABLE test_schema_diff.ft_diff_col TO PUBLIC;
GRANT ALL ON TABLE test_schema_diff.ft_diff_col TO enterprisedb;

CREATE FOREIGN TABLE test_schema_diff.ft_diff_const(
    fid bigint NULL,
    fname text NULL COLLATE pg_catalog."default"
)
    SERVER test_fs_for_foreign_table;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_const
    OWNER TO enterprisedb;

ALTER FOREIGN TABLE test_schema_diff.ft_diff_const
    ADD CONSTRAINT fcheck CHECK ((fid > 1000)) NO INHERIT;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_const
    ADD CONSTRAINT fcheck1 CHECK ((fid > 50)) NO INHERIT NOT VALID;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_const
    ADD CONSTRAINT fcheck2 CHECK ((fid > 20)) NO INHERIT;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_const
    ADD CONSTRAINT fcheck_tar CHECK ((fid > 50));

GRANT INSERT ON TABLE test_schema_diff.ft_diff_const TO PUBLIC;
GRANT ALL ON TABLE test_schema_diff.ft_diff_const TO enterprisedb;

CREATE FOREIGN TABLE test_schema_diff.ft_diff_opt(
    fid bigint NULL,
    fname text NULL COLLATE pg_catalog."default"
)
    SERVER test_fs_for_foreign_table
    OPTIONS (debug 'true', opt2 'val30', opt_tar 'val_tar');

ALTER FOREIGN TABLE test_schema_diff.ft_diff_opt
    OWNER TO enterprisedb;

CREATE FOREIGN TABLE test_schema_diff.ft_diff_foreign_server(
    fid bigint NULL,
    fname text NULL COLLATE pg_catalog."default"
)
    SERVER test_fs2_for_foreign_table;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_foreign_server
    OWNER TO enterprisedb;

CREATE FOREIGN TABLE test_schema_diff.ft_diff_foreign_server_1(
    fid bigint NULL,
    fcity text NULL COLLATE pg_catalog."default"
)
    SERVER test_fs2_for_foreign_table
    OPTIONS (opt1 'val1', opt2 'val2');
ALTER FOREIGN TABLE test_schema_diff.ft_diff_foreign_server_1
    OWNER TO enterprisedb;
ALTER FOREIGN TABLE test_schema_diff.ft_diff_foreign_server_1
    ADD CONSTRAINT cs2 CHECK ((fid > 200)) NO INHERIT;

-- Test for RM #5350
CREATE TABLE test_schema_diff.events_transactions
(
    event_code integer,
    numerator integer,
    account_token text COLLATE pg_catalog."default",
    transaction_dt timestamp without time zone,
    payment_method integer,
    approval text COLLATE pg_catalog."default",
    amount integer,
    file_dt timestamp without time zone DEFAULT CURRENT_TIMESTAMP,
    file_name character varying(256) COLLATE pg_catalog."default",
    payment_pin integer,
    transfer_dt timestamp without time zone,
    transaction_type integer
);

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
    OWNER TO enterprisedb;

CREATE FUNCTION public.evt_tri_fun2()
    RETURNS event_trigger
    LANGUAGE 'plpgsql'
     NOT LEAKPROOF
AS $BODY$
BEGIN
PERFORM 1;
END;
$BODY$;
ALTER FUNCTION public.evt_tri_fun2()
    OWNER TO enterprisedb;

CREATE EVENT TRIGGER evt_tri_tar ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun();
COMMENT ON EVENT TRIGGER evt_tri_tar
    IS 'Event Trigger Source';
ALTER EVENT TRIGGER evt_tri_tar
    OWNER TO enterprisedb;

CREATE EVENT TRIGGER evt_tri_diff_event1 ON DDL_COMMAND_END
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_event1
    OWNER TO enterprisedb;

CREATE EVENT TRIGGER evt_tri_diff_event2 ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_event2
    OWNER TO enterprisedb;

CREATE EVENT TRIGGER evt_tri_diff_event3 ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_event3
    OWNER TO enterprisedb;

CREATE EVENT TRIGGER evt_tri_diff_enable_status1 ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_enable_status1
    OWNER TO enterprisedb;

CREATE EVENT TRIGGER evt_tri_diff_enable_status2 ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_enable_status2
    DISABLE;
ALTER EVENT TRIGGER evt_tri_diff_enable_status2
    OWNER TO enterprisedb;

CREATE EVENT TRIGGER evt_tri_diff_enable_status3 ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun();
ALTER EVENT TRIGGER evt_tri_diff_enable_status3
    OWNER TO enterprisedb;

CREATE EVENT TRIGGER evt_tri_diff_func ON DDL_COMMAND_START
    EXECUTE PROCEDURE public.evt_tri_fun2();
ALTER EVENT TRIGGER evt_tri_diff_func
    OWNER TO enterprisedb;

-- Extension script
CREATE EXTENSION adminpack
    SCHEMA pg_catalog
    VERSION "1.0";

-- Language script
CREATE TRUSTED PROCEDURAL LANGUAGE tar_language
    HANDLER plpgsql_call_handler
    INLINE plpgsql_inline_handler
    VALIDATOR plpgsql_validator;
ALTER LANGUAGE tar_language
    OWNER TO enterprisedb;
GRANT USAGE ON LANGUAGE tar_language TO PUBLIC;
GRANT USAGE ON LANGUAGE tar_language TO enterprisedb WITH GRANT OPTION;

CREATE TRUSTED PROCEDURAL LANGUAGE lan_diff_acl_add
    HANDLER plpgsql_call_handler
    INLINE plpgsql_inline_handler
    VALIDATOR plpgsql_validator;
ALTER LANGUAGE lan_diff_acl_add
    OWNER TO enterprisedb;

CREATE TRUSTED PROCEDURAL LANGUAGE lan_diff_acl_revoke
    HANDLER plpgsql_call_handler
    INLINE plpgsql_inline_handler
    VALIDATOR plpgsql_validator;
ALTER LANGUAGE lan_diff_acl_revoke
    OWNER TO enterprisedb;
GRANT USAGE ON LANGUAGE lan_diff_acl_revoke TO PUBLIC;
GRANT USAGE ON LANGUAGE lan_diff_acl_revoke TO enterprisedb WITH GRANT OPTION;

CREATE PROCEDURAL LANGUAGE lan_diff_type
    HANDLER plpgsql_call_handler
    INLINE plpgsql_inline_handler
    VALIDATOR plpgsql_validator;
ALTER LANGUAGE lan_diff_type
    OWNER TO enterprisedb;

CREATE TRUSTED PROCEDURAL LANGUAGE lan_diff_inline_validator
    HANDLER plpgsql_call_handler
    INLINE plpgsql_inline_handler
    VALIDATOR plpgsql_validator;
ALTER LANGUAGE lan_diff_type
    OWNER TO enterprisedb;

-- Foreign Data Wrapper Script
CREATE FOREIGN DATA WRAPPER fdw_tar
    VALIDATOR pg_catalog.postgresql_fdw_validator;
ALTER FOREIGN DATA WRAPPER fdw_tar
    OWNER TO enterprisedb;
COMMENT ON FOREIGN DATA WRAPPER fdw_tar
    IS 'Foreign Data Wrapper';

CREATE FOREIGN DATA WRAPPER fdw_diff_acl_add
    VALIDATOR pg_catalog.postgresql_fdw_validator;
ALTER FOREIGN DATA WRAPPER fdw_diff_acl_add
    OWNER TO enterprisedb;

CREATE FOREIGN DATA WRAPPER fdw_diff_acl_revoke
    VALIDATOR pg_catalog.postgresql_fdw_validator;
ALTER FOREIGN DATA WRAPPER fdw_diff_acl_revoke
    OWNER TO enterprisedb;
GRANT USAGE ON FOREIGN DATA WRAPPER fdw_diff_acl_revoke TO PUBLIC;
GRANT USAGE ON FOREIGN DATA WRAPPER fdw_diff_acl_revoke TO enterprisedb WITH GRANT OPTION;

CREATE FOREIGN DATA WRAPPER fdw_diff_add_validator;
ALTER FOREIGN DATA WRAPPER fdw_diff_add_validator
    OWNER TO enterprisedb;

CREATE FOREIGN DATA WRAPPER fdw_diff_remove_validator
    VALIDATOR pg_catalog.postgresql_fdw_validator;
ALTER FOREIGN DATA WRAPPER fdw_diff_remove_validator
    OWNER TO enterprisedb;

CREATE FOREIGN DATA WRAPPER fdw_diff_add_options;
ALTER FOREIGN DATA WRAPPER fdw_diff_add_options
    OWNER TO enterprisedb;

CREATE FOREIGN DATA WRAPPER fdw_diff_remove_options
    OPTIONS (debug 'true');
ALTER FOREIGN DATA WRAPPER fdw_diff_remove_options
    OWNER TO enterprisedb;

CREATE FOREIGN DATA WRAPPER fdw_diff_options
    OPTIONS (debug 'true');
ALTER FOREIGN DATA WRAPPER fdw_diff_options
    OWNER TO enterprisedb;

-- Foreign Server Script
CREATE FOREIGN DATA WRAPPER test_fdw_for_foreign_server
    VALIDATOR pg_catalog.postgresql_fdw_validator;
ALTER FOREIGN DATA WRAPPER test_fdw_for_foreign_server
    OWNER TO enterprisedb;

CREATE SERVER fs_tar
    TYPE 'PG'
    VERSION '10'
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server
    OPTIONS (host '127.0.0.1', port '5432');
ALTER SERVER fs_tar
    OWNER TO enterprisedb;
COMMENT ON SERVER fs_tar
    IS 'Foreign Server';

CREATE SERVER fs_diff_acl_add
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server;
ALTER SERVER fs_diff_acl_add
    OWNER TO enterprisedb;

CREATE SERVER fs_diff_acl_revoke
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server;
ALTER SERVER fs_diff_acl_revoke
    OWNER TO enterprisedb;
GRANT USAGE ON FOREIGN SERVER fs_diff_acl_revoke TO PUBLIC;
GRANT USAGE ON FOREIGN SERVER fs_diff_acl_revoke TO enterprisedb WITH GRANT OPTION;

CREATE SERVER fs_diff_type_version_add
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server;
ALTER SERVER fs_diff_type_version_add
    OWNER TO enterprisedb;

CREATE SERVER fs_diff_type_version_remove
    TYPE 'PG'
    VERSION '10'
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server;
ALTER SERVER fs_diff_type_version_remove
    OWNER TO enterprisedb;

CREATE SERVER fs_diff_type_version_modify
    TYPE 'EPAS'
    VERSION '11'
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server;
ALTER SERVER fs_diff_type_version_modify
    OWNER TO enterprisedb;

CREATE SERVER fs_diff_options_add
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server;
ALTER SERVER fs_diff_options_add
    OWNER TO enterprisedb;

CREATE SERVER fs_diff_options_remove
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server
    OPTIONS (host '127.0.0.1', port '5432');
ALTER SERVER fs_diff_options_remove
    OWNER TO enterprisedb;

CREATE SERVER fs_diff_options_modify
    FOREIGN DATA WRAPPER test_fdw_for_foreign_server
    OPTIONS (host '127.0.0.1', port '5432');
ALTER SERVER fs_diff_options_modify
    OWNER TO enterprisedb;

-- User Mapping Script
CREATE FOREIGN DATA WRAPPER test_fdw_for_user_mapping
    VALIDATOR pg_catalog.postgresql_fdw_validator;
ALTER FOREIGN DATA WRAPPER test_fdw_for_user_mapping
    OWNER TO enterprisedb;

CREATE SERVER test_fs_for_user_mapping
    FOREIGN DATA WRAPPER test_fdw_for_user_mapping;
ALTER SERVER test_fs_for_user_mapping
    OWNER TO enterprisedb;

CREATE USER MAPPING FOR public SERVER test_fs_for_user_mapping
    OPTIONS (password 'admin123');

CREATE USER MAPPING FOR enterprisedb SERVER test_fs_for_user_mapping;

-- Publication script

CREATE TABLE test_schema_diff.table_for_publication (
    col1 integer NOT NULL,
    col2 text
);

CREATE TABLE test_schema_diff.table_for_publication_in_target (
    col1 integer NOT NULL,
    col2 text
);

CREATE PUBLICATION for_all_table
    FOR ALL TABLES
    WITH (publish = 'insert, delete');

CREATE PUBLICATION with_one_table_in_target
    FOR TABLE test_schema_diff.table_for_publication_in_target
    WITH (publish = 'insert, delete');

ALTER PUBLICATION with_one_table_in_target
    RENAME TO with_one_table_in_target_alter;

ALTER PUBLICATION with_one_table_in_target_alter SET
    (publish = 'insert, update, truncate');

-- Subscription script

CREATE SUBSCRIPTION "subscription_test1_in_target"
    CONNECTION 'host=localhost port=5432 user=postgres dbname=edb password=samplepassword'
    PUBLICATION sample_publication
    WITH (connect = false, enabled = false, create_slot = false, slot_name = None, synchronous_commit = 'off');

ALTER SUBSCRIPTION subscription_test1_in_target
    CONNECTION 'host=localhost port=5432 user=postgres dbname=postgres';

ALTER SUBSCRIPTION subscription_test1_in_target
    SET (synchronous_commit = 'remote_apply');

ALTER SUBSCRIPTION subscription_test1_in_target
    SET PUBLICATION edb WITH (refresh = false);

ALTER SUBSCRIPTION subscription_test1_in_target
    RENAME TO subscription_test_in_target;

DROP SUBSCRIPTION subscription_test_in_target;
