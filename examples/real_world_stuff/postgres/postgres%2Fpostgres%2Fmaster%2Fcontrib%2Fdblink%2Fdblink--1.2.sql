/* contrib/dblink/dblink--1.2.sql */

-- complain if script is sourced in psql, rather than via CREATE EXTENSION
\echo Use "CREATE EXTENSION dblink" to load this file. \quit

-- dblink_connect now restricts non-superusers to password
-- authenticated connections
CREATE FUNCTION dblink_connect (text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_connect'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_connect (text, text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_connect'
LANGUAGE C STRICT PARALLEL RESTRICTED;

-- dblink_connect_u allows non-superusers to use
-- non-password authenticated connections, but initially
-- privileges are revoked from public
CREATE FUNCTION dblink_connect_u (text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_connect'
LANGUAGE C STRICT PARALLEL RESTRICTED SECURITY DEFINER;

CREATE FUNCTION dblink_connect_u (text, text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_connect'
LANGUAGE C STRICT PARALLEL RESTRICTED SECURITY DEFINER;

REVOKE ALL ON FUNCTION dblink_connect_u (text) FROM public;
REVOKE ALL ON FUNCTION dblink_connect_u (text, text) FROM public;

CREATE FUNCTION dblink_disconnect ()
RETURNS text
AS 'MODULE_PATHNAME','dblink_disconnect'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_disconnect (text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_disconnect'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_open (text, text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_open'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_open (text, text, boolean)
RETURNS text
AS 'MODULE_PATHNAME','dblink_open'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_open (text, text, text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_open'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_open (text, text, text, boolean)
RETURNS text
AS 'MODULE_PATHNAME','dblink_open'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_fetch (text, int)
RETURNS setof record
AS 'MODULE_PATHNAME','dblink_fetch'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_fetch (text, int, boolean)
RETURNS setof record
AS 'MODULE_PATHNAME','dblink_fetch'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_fetch (text, text, int)
RETURNS setof record
AS 'MODULE_PATHNAME','dblink_fetch'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_fetch (text, text, int, boolean)
RETURNS setof record
AS 'MODULE_PATHNAME','dblink_fetch'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_close (text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_close'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_close (text, boolean)
RETURNS text
AS 'MODULE_PATHNAME','dblink_close'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_close (text, text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_close'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_close (text, text, boolean)
RETURNS text
AS 'MODULE_PATHNAME','dblink_close'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink (text, text)
RETURNS setof record
AS 'MODULE_PATHNAME','dblink_record'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink (text, text, boolean)
RETURNS setof record
AS 'MODULE_PATHNAME','dblink_record'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink (text)
RETURNS setof record
AS 'MODULE_PATHNAME','dblink_record'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink (text, boolean)
RETURNS setof record
AS 'MODULE_PATHNAME','dblink_record'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_exec (text, text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_exec'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_exec (text, text, boolean)
RETURNS text
AS 'MODULE_PATHNAME','dblink_exec'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_exec (text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_exec'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_exec (text,boolean)
RETURNS text
AS 'MODULE_PATHNAME','dblink_exec'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE TYPE dblink_pkey_results AS (position int, colname text);

CREATE FUNCTION dblink_get_pkey (text)
RETURNS setof dblink_pkey_results
AS 'MODULE_PATHNAME','dblink_get_pkey'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_build_sql_insert (text, int2vector, int, _text, _text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_build_sql_insert'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_build_sql_delete (text, int2vector, int, _text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_build_sql_delete'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_build_sql_update (text, int2vector, int, _text, _text)
RETURNS text
AS 'MODULE_PATHNAME','dblink_build_sql_update'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_current_query ()
RETURNS text
AS 'MODULE_PATHNAME','dblink_current_query'
LANGUAGE C PARALLEL RESTRICTED;

CREATE FUNCTION dblink_send_query(text, text)
RETURNS int4
AS 'MODULE_PATHNAME', 'dblink_send_query'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_is_busy(text)
RETURNS int4
AS 'MODULE_PATHNAME', 'dblink_is_busy'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_get_result(text)
RETURNS SETOF record
AS 'MODULE_PATHNAME', 'dblink_get_result'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_get_result(text, bool)
RETURNS SETOF record
AS 'MODULE_PATHNAME', 'dblink_get_result'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_get_connections()
RETURNS text[]
AS 'MODULE_PATHNAME', 'dblink_get_connections'
LANGUAGE C PARALLEL RESTRICTED;

CREATE FUNCTION dblink_cancel_query(text)
RETURNS text
AS 'MODULE_PATHNAME', 'dblink_cancel_query'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_error_message(text)
RETURNS text
AS 'MODULE_PATHNAME', 'dblink_error_message'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_get_notify(
    OUT notify_name TEXT,
    OUT be_pid INT4,
    OUT extra TEXT
)
RETURNS setof record
AS 'MODULE_PATHNAME', 'dblink_get_notify'
LANGUAGE C STRICT PARALLEL RESTRICTED;

CREATE FUNCTION dblink_get_notify(
    conname TEXT,
    OUT notify_name TEXT,
    OUT be_pid INT4,
    OUT extra TEXT
)
RETURNS setof record
AS 'MODULE_PATHNAME', 'dblink_get_notify'
LANGUAGE C STRICT PARALLEL RESTRICTED;

/* New stuff in 1.1 begins here */

CREATE FUNCTION dblink_fdw_validator(
    options text[],
    catalog oid
)
RETURNS void
AS 'MODULE_PATHNAME', 'dblink_fdw_validator'
LANGUAGE C STRICT PARALLEL SAFE;

CREATE FOREIGN DATA WRAPPER dblink_fdw VALIDATOR dblink_fdw_validator;
