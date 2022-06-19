/* contrib/citext/citext--1.4.sql */

-- complain if script is sourced in psql, rather than via CREATE EXTENSION
\echo Use "CREATE EXTENSION citext" to load this file. \quit

--
--  PostgreSQL code for CITEXT.
--
-- Most I/O functions, and a few others, piggyback on the "text" type
-- functions via the implicit cast to text.
--

--
-- Shell type to keep things a bit quieter.
--

CREATE TYPE citext;

--
--  Input and output functions.
--
CREATE FUNCTION citextin(cstring)
RETURNS citext
AS 'textin'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION citextout(citext)
RETURNS cstring
AS 'textout'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION citextrecv(internal)
RETURNS citext
AS 'textrecv'
LANGUAGE internal STABLE STRICT PARALLEL SAFE;

CREATE FUNCTION citextsend(citext)
RETURNS bytea
AS 'textsend'
LANGUAGE internal STABLE STRICT PARALLEL SAFE;

--
--  The type itself.
--

CREATE TYPE citext (
    INPUT          = citextin,
    OUTPUT         = citextout,
    RECEIVE        = citextrecv,
    SEND           = citextsend,
    INTERNALLENGTH = VARIABLE,
    STORAGE        = extended,
    -- make it a non-preferred member of string type category
    CATEGORY       = 'S',
    PREFERRED      = false,
    COLLATABLE     = true
);

--
-- Type casting functions for those situations where the I/O casts don't
-- automatically kick in.
--

CREATE FUNCTION citext(bpchar)
RETURNS citext
AS 'rtrim1'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION citext(boolean)
RETURNS citext
AS 'booltext'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION citext(inet)
RETURNS citext
AS 'network_show'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

--
--  Implicit and assignment type casts.
--

CREATE CAST (citext AS text)    WITHOUT FUNCTION AS IMPLICIT;
CREATE CAST (citext AS varchar) WITHOUT FUNCTION AS IMPLICIT;
CREATE CAST (citext AS bpchar)  WITHOUT FUNCTION AS ASSIGNMENT;
CREATE CAST (text AS citext)    WITHOUT FUNCTION AS ASSIGNMENT;
CREATE CAST (varchar AS citext) WITHOUT FUNCTION AS ASSIGNMENT;
CREATE CAST (bpchar AS citext)  WITH FUNCTION citext(bpchar)  AS ASSIGNMENT;
CREATE CAST (boolean AS citext) WITH FUNCTION citext(boolean) AS ASSIGNMENT;
CREATE CAST (inet AS citext)    WITH FUNCTION citext(inet)    AS ASSIGNMENT;

--
-- Operator Functions.
--

CREATE FUNCTION citext_eq( citext, citext )
RETURNS bool
AS 'MODULE_PATHNAME'
LANGUAGE C IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION citext_ne( citext, citext )
RETURNS bool
AS 'MODULE_PATHNAME'
LANGUAGE C IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION citext_lt( citext, citext )
RETURNS bool
AS 'MODULE_PATHNAME'
LANGUAGE C IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION citext_le( citext, citext )
RETURNS bool
AS 'MODULE_PATHNAME'
LANGUAGE C IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION citext_gt( citext, citext )
RETURNS bool
AS 'MODULE_PATHNAME'
LANGUAGE C IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION citext_ge( citext, citext )
RETURNS bool
AS 'MODULE_PATHNAME'
LANGUAGE C IMMUTABLE STRICT PARALLEL SAFE;

--
-- Operators.
--

CREATE OPERATOR = (
    LEFTARG    = CITEXT,
    RIGHTARG   = CITEXT,
    COMMUTATOR = =,
    NEGATOR    = <>,
    PROCEDURE  = citext_eq,
    RESTRICT   = eqsel,
    JOIN       = eqjoinsel,
    HASHES,
    MERGES
);

CREATE OPERATOR <> (
    LEFTARG    = CITEXT,
    RIGHTARG   = CITEXT,
    NEGATOR    = =,
    COMMUTATOR = <>,
    PROCEDURE  = citext_ne,
    RESTRICT   = neqsel,
    JOIN       = neqjoinsel
);

CREATE OPERATOR < (
    LEFTARG    = CITEXT,
    RIGHTARG   = CITEXT,
    NEGATOR    = >=,
    COMMUTATOR = >,
    PROCEDURE  = citext_lt,
    RESTRICT   = scalarltsel,
    JOIN       = scalarltjoinsel
);

CREATE OPERATOR <= (
    LEFTARG    = CITEXT,
    RIGHTARG   = CITEXT,
    NEGATOR    = >,
    COMMUTATOR = >=,
    PROCEDURE  = citext_le,
    RESTRICT   = scalarltsel,
    JOIN       = scalarltjoinsel
);

CREATE OPERATOR >= (
    LEFTARG    = CITEXT,
    RIGHTARG   = CITEXT,
    NEGATOR    = <,
    COMMUTATOR = <=,
    PROCEDURE  = citext_ge,
    RESTRICT   = scalargtsel,
    JOIN       = scalargtjoinsel
);

CREATE OPERATOR > (
    LEFTARG    = CITEXT,
    RIGHTARG   = CITEXT,
    NEGATOR    = <=,
    COMMUTATOR = <,
    PROCEDURE  = citext_gt,
    RESTRICT   = scalargtsel,
    JOIN       = scalargtjoinsel
);

--
-- Support functions for indexing.
--

CREATE FUNCTION citext_cmp(citext, citext)
RETURNS int4
AS 'MODULE_PATHNAME'
LANGUAGE C STRICT IMMUTABLE PARALLEL SAFE;

CREATE FUNCTION citext_hash(citext)
RETURNS int4
AS 'MODULE_PATHNAME'
LANGUAGE C STRICT IMMUTABLE PARALLEL SAFE;

--
-- The btree indexing operator class.
--

CREATE OPERATOR CLASS citext_ops
DEFAULT FOR TYPE CITEXT USING btree AS
    OPERATOR    1   <  (citext, citext),
    OPERATOR    2   <= (citext, citext),
    OPERATOR    3   =  (citext, citext),
    OPERATOR    4   >= (citext, citext),
    OPERATOR    5   >  (citext, citext),
    FUNCTION    1   citext_cmp(citext, citext);

--
-- The hash indexing operator class.
--

CREATE OPERATOR CLASS citext_ops
DEFAULT FOR TYPE citext USING hash AS
    OPERATOR    1   =  (citext, citext),
    FUNCTION    1   citext_hash(citext);

--
-- Aggregates.
--

CREATE FUNCTION citext_smaller(citext, citext)
RETURNS citext
AS 'MODULE_PATHNAME'
LANGUAGE C IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION citext_larger(citext, citext)
RETURNS citext
AS 'MODULE_PATHNAME'
LANGUAGE C IMMUTABLE STRICT PARALLEL SAFE;

CREATE AGGREGATE min(citext)  (
    SFUNC = citext_smaller,
    STYPE = citext,
    SORTOP = <,
    PARALLEL = SAFE,
    COMBINEFUNC = citext_smaller
);

CREATE AGGREGATE max(citext)  (
    SFUNC = citext_larger,
    STYPE = citext,
    SORTOP = >,
    PARALLEL = SAFE,
    COMBINEFUNC = citext_larger
);

--
-- CITEXT pattern matching.
--

CREATE FUNCTION texticlike(citext, citext)
RETURNS bool AS 'texticlike'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION texticnlike(citext, citext)
RETURNS bool AS 'texticnlike'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION texticregexeq(citext, citext)
RETURNS bool AS 'texticregexeq'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION texticregexne(citext, citext)
RETURNS bool AS 'texticregexne'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

CREATE OPERATOR ~ (
    PROCEDURE = texticregexeq,
    LEFTARG   = citext,
    RIGHTARG  = citext,
    NEGATOR   = !~,
    RESTRICT  = icregexeqsel,
    JOIN      = icregexeqjoinsel
);

CREATE OPERATOR ~* (
    PROCEDURE = texticregexeq,
    LEFTARG   = citext,
    RIGHTARG  = citext,
    NEGATOR   = !~*,
    RESTRICT  = icregexeqsel,
    JOIN      = icregexeqjoinsel
);

CREATE OPERATOR !~ (
    PROCEDURE = texticregexne,
    LEFTARG   = citext,
    RIGHTARG  = citext,
    NEGATOR   = ~,
    RESTRICT  = icregexnesel,
    JOIN      = icregexnejoinsel
);

CREATE OPERATOR !~* (
    PROCEDURE = texticregexne,
    LEFTARG   = citext,
    RIGHTARG  = citext,
    NEGATOR   = ~*,
    RESTRICT  = icregexnesel,
    JOIN      = icregexnejoinsel
);

CREATE OPERATOR ~~ (
    PROCEDURE = texticlike,
    LEFTARG   = citext,
    RIGHTARG  = citext,
    NEGATOR   = !~~,
    RESTRICT  = iclikesel,
    JOIN      = iclikejoinsel
);

CREATE OPERATOR ~~* (
    PROCEDURE = texticlike,
    LEFTARG   = citext,
    RIGHTARG  = citext,
    NEGATOR   = !~~*,
    RESTRICT  = iclikesel,
    JOIN      = iclikejoinsel
);

CREATE OPERATOR !~~ (
    PROCEDURE = texticnlike,
    LEFTARG   = citext,
    RIGHTARG  = citext,
    NEGATOR   = ~~,
    RESTRICT  = icnlikesel,
    JOIN      = icnlikejoinsel
);

CREATE OPERATOR !~~* (
    PROCEDURE = texticnlike,
    LEFTARG   = citext,
    RIGHTARG  = citext,
    NEGATOR   = ~~*,
    RESTRICT  = icnlikesel,
    JOIN      = icnlikejoinsel
);

--
-- Matching citext to text.
--

CREATE FUNCTION texticlike(citext, text)
RETURNS bool AS 'texticlike'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION texticnlike(citext, text)
RETURNS bool AS 'texticnlike'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION texticregexeq(citext, text)
RETURNS bool AS 'texticregexeq'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION texticregexne(citext, text)
RETURNS bool AS 'texticregexne'
LANGUAGE internal IMMUTABLE STRICT PARALLEL SAFE;

CREATE OPERATOR ~ (
    PROCEDURE = texticregexeq,
    LEFTARG   = citext,
    RIGHTARG  = text,
    NEGATOR   = !~,
    RESTRICT  = icregexeqsel,
    JOIN      = icregexeqjoinsel
);

CREATE OPERATOR ~* (
    PROCEDURE = texticregexeq,
    LEFTARG   = citext,
    RIGHTARG  = text,
    NEGATOR   = !~*,
    RESTRICT  = icregexeqsel,
    JOIN      = icregexeqjoinsel
);

CREATE OPERATOR !~ (
    PROCEDURE = texticregexne,
    LEFTARG   = citext,
    RIGHTARG  = text,
    NEGATOR   = ~,
    RESTRICT  = icregexnesel,
    JOIN      = icregexnejoinsel
);

CREATE OPERATOR !~* (
    PROCEDURE = texticregexne,
    LEFTARG   = citext,
    RIGHTARG  = text,
    NEGATOR   = ~*,
    RESTRICT  = icregexnesel,
    JOIN      = icregexnejoinsel
);

CREATE OPERATOR ~~ (
    PROCEDURE = texticlike,
    LEFTARG   = citext,
    RIGHTARG  = text,
    NEGATOR   = !~~,
    RESTRICT  = iclikesel,
    JOIN      = iclikejoinsel
);

CREATE OPERATOR ~~* (
    PROCEDURE = texticlike,
    LEFTARG   = citext,
    RIGHTARG  = text,
    NEGATOR   = !~~*,
    RESTRICT  = iclikesel,
    JOIN      = iclikejoinsel
);

CREATE OPERATOR !~~ (
    PROCEDURE = texticnlike,
    LEFTARG   = citext,
    RIGHTARG  = text,
    NEGATOR   = ~~,
    RESTRICT  = icnlikesel,
    JOIN      = icnlikejoinsel
);

CREATE OPERATOR !~~* (
    PROCEDURE = texticnlike,
    LEFTARG   = citext,
    RIGHTARG  = text,
    NEGATOR   = ~~*,
    RESTRICT  = icnlikesel,
    JOIN      = icnlikejoinsel
);

--
-- Matching citext in string comparison functions.
-- XXX TODO Ideally these would be implemented in C.
--

CREATE FUNCTION regexp_match( citext, citext ) RETURNS TEXT[] AS $$
    SELECT pg_catalog.regexp_match( $1::pg_catalog.text, $2::pg_catalog.text, 'i' );
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION regexp_match( citext, citext, text ) RETURNS TEXT[] AS $$
    SELECT pg_catalog.regexp_match( $1::pg_catalog.text, $2::pg_catalog.text, CASE WHEN pg_catalog.strpos($3, 'c') = 0 THEN  $3 || 'i' ELSE $3 END );
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION regexp_matches( citext, citext ) RETURNS SETOF TEXT[] AS $$
    SELECT pg_catalog.regexp_matches( $1::pg_catalog.text, $2::pg_catalog.text, 'i' );
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE ROWS 1;

CREATE FUNCTION regexp_matches( citext, citext, text ) RETURNS SETOF TEXT[] AS $$
    SELECT pg_catalog.regexp_matches( $1::pg_catalog.text, $2::pg_catalog.text, CASE WHEN pg_catalog.strpos($3, 'c') = 0 THEN  $3 || 'i' ELSE $3 END );
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE ROWS 10;

CREATE FUNCTION regexp_replace( citext, citext, text ) returns TEXT AS $$
    SELECT pg_catalog.regexp_replace( $1::pg_catalog.text, $2::pg_catalog.text, $3, 'i');
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION regexp_replace( citext, citext, text, text ) returns TEXT AS $$
    SELECT pg_catalog.regexp_replace( $1::pg_catalog.text, $2::pg_catalog.text, $3, CASE WHEN pg_catalog.strpos($4, 'c') = 0 THEN  $4 || 'i' ELSE $4 END);
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION regexp_split_to_array( citext, citext ) RETURNS TEXT[] AS $$
    SELECT pg_catalog.regexp_split_to_array( $1::pg_catalog.text, $2::pg_catalog.text, 'i' );
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION regexp_split_to_array( citext, citext, text ) RETURNS TEXT[] AS $$
    SELECT pg_catalog.regexp_split_to_array( $1::pg_catalog.text, $2::pg_catalog.text, CASE WHEN pg_catalog.strpos($3, 'c') = 0 THEN  $3 || 'i' ELSE $3 END );
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION regexp_split_to_table( citext, citext ) RETURNS SETOF TEXT AS $$
    SELECT pg_catalog.regexp_split_to_table( $1::pg_catalog.text, $2::pg_catalog.text, 'i' );
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION regexp_split_to_table( citext, citext, text ) RETURNS SETOF TEXT AS $$
    SELECT pg_catalog.regexp_split_to_table( $1::pg_catalog.text, $2::pg_catalog.text, CASE WHEN pg_catalog.strpos($3, 'c') = 0 THEN  $3 || 'i' ELSE $3 END );
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION strpos( citext, citext ) RETURNS INT AS $$
    SELECT pg_catalog.strpos( pg_catalog.lower( $1::pg_catalog.text ), pg_catalog.lower( $2::pg_catalog.text ) );
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION replace( citext, citext, citext ) RETURNS TEXT AS $$
    SELECT pg_catalog.regexp_replace( $1::pg_catalog.text, pg_catalog.regexp_replace($2::pg_catalog.text, '([^a-zA-Z_0-9])', E'\\\\\\1', 'g'), $3::pg_catalog.text, 'gi' );
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION split_part( citext, citext, int ) RETURNS TEXT AS $$
    SELECT (pg_catalog.regexp_split_to_array( $1::pg_catalog.text, pg_catalog.regexp_replace($2::pg_catalog.text, '([^a-zA-Z_0-9])', E'\\\\\\1', 'g'), 'i'))[$3];
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE;

CREATE FUNCTION translate( citext, citext, text ) RETURNS TEXT AS $$
    SELECT pg_catalog.translate( pg_catalog.translate( $1::pg_catalog.text, pg_catalog.lower($2::pg_catalog.text), $3), pg_catalog.upper($2::pg_catalog.text), $3);
$$ LANGUAGE SQL IMMUTABLE STRICT PARALLEL SAFE;
