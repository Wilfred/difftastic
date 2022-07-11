CREATE ROLE regress_dump_test_role;
CREATE EXTENSION test_pg_dump;

ALTER EXTENSION test_pg_dump ADD DATABASE postgres; -- error

CREATE TABLE test_pg_dump_t1 (c1 int, junk text);
ALTER TABLE test_pg_dump_t1 DROP COLUMN junk;  -- to exercise dropped-col cases
CREATE VIEW test_pg_dump_v1 AS SELECT * FROM test_pg_dump_t1;
CREATE MATERIALIZED VIEW test_pg_dump_mv1 AS SELECT * FROM test_pg_dump_t1;
CREATE SCHEMA test_pg_dump_s1;
CREATE TYPE test_pg_dump_e1 AS ENUM ('abc', 'def');

CREATE AGGREGATE newavg (
   sfunc = int4_avg_accum, basetype = int4, stype = _int8,
   finalfunc = int8_avg,
   initcond1 = '{0,0}'
);

CREATE FUNCTION test_pg_dump(int) RETURNS int AS $$
BEGIN
RETURN abs($1);
END
$$ LANGUAGE plpgsql IMMUTABLE;

CREATE OPERATOR ==== (
    LEFTARG = int,
    RIGHTARG = int,
    PROCEDURE = int4eq,
    COMMUTATOR = ====
);

CREATE ACCESS METHOD gist2 TYPE INDEX HANDLER gisthandler;

CREATE TYPE casttesttype;

CREATE FUNCTION casttesttype_in(cstring)
   RETURNS casttesttype
   AS 'textin'
   LANGUAGE internal STRICT IMMUTABLE;
CREATE FUNCTION casttesttype_out(casttesttype)
   RETURNS cstring
   AS 'textout'
   LANGUAGE internal STRICT IMMUTABLE;

CREATE TYPE casttesttype (
   internallength = variable,
   input = casttesttype_in,
   output = casttesttype_out,
   alignment = int4
);

CREATE CAST (text AS casttesttype) WITHOUT FUNCTION;

CREATE FOREIGN DATA WRAPPER dummy;

CREATE SERVER s0 FOREIGN DATA WRAPPER dummy;

CREATE FOREIGN TABLE ft1 (
        c1 integer OPTIONS ("param 1" 'val1') NOT NULL,
        c2 text OPTIONS (param2 'val2', param3 'val3') CHECK (c2 <> ''),
        c3 date,
        CHECK (c3 BETWEEN '1994-01-01'::date AND '1994-01-31'::date)
) SERVER s0 OPTIONS (delimiter ',', quote '"', "be quoted" 'value');

REVOKE EXECUTE ON FUNCTION test_pg_dump(int) FROM PUBLIC;
GRANT EXECUTE ON FUNCTION test_pg_dump(int) TO regress_dump_test_role;

GRANT SELECT (c1) ON test_pg_dump_t1 TO regress_dump_test_role;
GRANT SELECT ON test_pg_dump_v1 TO regress_dump_test_role;
GRANT USAGE ON FOREIGN DATA WRAPPER dummy TO regress_dump_test_role;
GRANT USAGE ON FOREIGN SERVER s0 TO regress_dump_test_role;
GRANT SELECT (c1) ON ft1 TO regress_dump_test_role;
GRANT SELECT ON ft1 TO regress_dump_test_role;
GRANT UPDATE ON test_pg_dump_mv1 TO regress_dump_test_role;
GRANT USAGE ON SCHEMA test_pg_dump_s1 TO regress_dump_test_role;
GRANT USAGE ON TYPE test_pg_dump_e1 TO regress_dump_test_role;

ALTER EXTENSION test_pg_dump ADD ACCESS METHOD gist2;
ALTER EXTENSION test_pg_dump ADD AGGREGATE newavg(int4);
ALTER EXTENSION test_pg_dump ADD CAST (text AS casttesttype);
ALTER EXTENSION test_pg_dump ADD FOREIGN DATA WRAPPER dummy;
ALTER EXTENSION test_pg_dump ADD FOREIGN TABLE ft1;
ALTER EXTENSION test_pg_dump ADD MATERIALIZED VIEW test_pg_dump_mv1;
ALTER EXTENSION test_pg_dump ADD OPERATOR ==== (int, int);
ALTER EXTENSION test_pg_dump ADD SCHEMA test_pg_dump_s1;
ALTER EXTENSION test_pg_dump ADD SERVER s0;
ALTER EXTENSION test_pg_dump ADD FUNCTION test_pg_dump(int);
ALTER EXTENSION test_pg_dump ADD TABLE test_pg_dump_t1;
ALTER EXTENSION test_pg_dump ADD TYPE test_pg_dump_e1;
ALTER EXTENSION test_pg_dump ADD VIEW test_pg_dump_v1;

REVOKE SELECT (c1) ON test_pg_dump_t1 FROM regress_dump_test_role;
REVOKE SELECT ON test_pg_dump_v1 FROM regress_dump_test_role;
REVOKE USAGE ON FOREIGN DATA WRAPPER dummy FROM regress_dump_test_role;

ALTER EXTENSION test_pg_dump DROP ACCESS METHOD gist2;
ALTER EXTENSION test_pg_dump DROP AGGREGATE newavg(int4);
ALTER EXTENSION test_pg_dump DROP CAST (text AS casttesttype);
ALTER EXTENSION test_pg_dump DROP FOREIGN DATA WRAPPER dummy;
ALTER EXTENSION test_pg_dump DROP FOREIGN TABLE ft1;
ALTER EXTENSION test_pg_dump DROP FUNCTION test_pg_dump(int);
ALTER EXTENSION test_pg_dump DROP MATERIALIZED VIEW test_pg_dump_mv1;
ALTER EXTENSION test_pg_dump DROP OPERATOR ==== (int, int);
ALTER EXTENSION test_pg_dump DROP SCHEMA test_pg_dump_s1;
ALTER EXTENSION test_pg_dump DROP SERVER s0;
ALTER EXTENSION test_pg_dump DROP TABLE test_pg_dump_t1;
ALTER EXTENSION test_pg_dump DROP TYPE test_pg_dump_e1;
ALTER EXTENSION test_pg_dump DROP VIEW test_pg_dump_v1;
