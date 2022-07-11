/* src/pl/plpgsql/src/plpgsql--1.0.sql */

CREATE FUNCTION plpgsql_call_handler() RETURNS language_handler
  LANGUAGE c AS 'MODULE_PATHNAME';

CREATE FUNCTION plpgsql_inline_handler(internal) RETURNS void
  STRICT LANGUAGE c AS 'MODULE_PATHNAME';

CREATE FUNCTION plpgsql_validator(oid) RETURNS void
  STRICT LANGUAGE c AS 'MODULE_PATHNAME';

CREATE TRUSTED LANGUAGE plpgsql
  HANDLER plpgsql_call_handler
  INLINE plpgsql_inline_handler
  VALIDATOR plpgsql_validator;

-- The language object, but not the functions, can be owned by a non-superuser.
ALTER LANGUAGE plpgsql OWNER TO @extowner@;

COMMENT ON LANGUAGE plpgsql IS 'PL/pgSQL procedural language';
