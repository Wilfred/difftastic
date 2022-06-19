--
-- Test explicit subtransactions
--

CREATE TABLE subtransaction_tbl (
    i integer
);

--
-- We use this wrapper to catch errors and return errormsg only,
-- because values of $::errorinfo variable contain procedure name which
-- includes OID, so it's not stable
--
CREATE FUNCTION pltcl_wrapper(statement text) RETURNS text
AS $$
    if [catch {spi_exec $1} msg] {
        return "ERROR: $msg"
    } else {
        return "SUCCESS: $msg"
    }
$$ LANGUAGE pltcl;

-- Test subtransaction successfully committed

CREATE FUNCTION subtransaction_ctx_success() RETURNS void
AS $$
    spi_exec "INSERT INTO subtransaction_tbl VALUES(1)"
    subtransaction {
        spi_exec "INSERT INTO subtransaction_tbl VALUES(2)"
    }
$$ LANGUAGE pltcl;

BEGIN;
INSERT INTO subtransaction_tbl VALUES(0);
SELECT subtransaction_ctx_success();
COMMIT;
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;

-- Test subtransaction rollback

CREATE FUNCTION subtransaction_ctx_test(what_error text = NULL) RETURNS void
AS $$
    spi_exec "INSERT INTO subtransaction_tbl VALUES (1)"
    subtransaction {
        spi_exec "INSERT INTO subtransaction_tbl VALUES (2)"
        if {$1 == "SPI"} {
            spi_exec "INSERT INTO subtransaction_tbl VALUES ('oops')"
        } elseif { $1 == "Tcl"} {
            elog ERROR "Tcl error"
        }
    }
$$ LANGUAGE pltcl;

SELECT pltcl_wrapper('SELECT subtransaction_ctx_test()');
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;

SELECT pltcl_wrapper('SELECT subtransaction_ctx_test(''SPI'')');
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;

SELECT pltcl_wrapper('SELECT subtransaction_ctx_test(''Tcl'')');
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;

-- Nested subtransactions

CREATE FUNCTION subtransaction_nested_test(swallow boolean = 'f') RETURNS text
AS $$
spi_exec "INSERT INTO subtransaction_tbl VALUES (1)"
subtransaction {
    spi_exec "INSERT INTO subtransaction_tbl VALUES (2)"
    if [catch {
        subtransaction {
            spi_exec "INSERT INTO subtransaction_tbl VALUES (3)"
            spi_exec "error"
        }
    } errormsg] {
        if {$1 != "t"} {
            error $errormsg $::errorInfo $::errorCode
        }
        elog NOTICE "Swallowed $errormsg"
    }
}
return "ok"
$$ LANGUAGE pltcl;

SELECT pltcl_wrapper('SELECT subtransaction_nested_test()');
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;

SELECT pltcl_wrapper('SELECT subtransaction_nested_test(''t'')');
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;
