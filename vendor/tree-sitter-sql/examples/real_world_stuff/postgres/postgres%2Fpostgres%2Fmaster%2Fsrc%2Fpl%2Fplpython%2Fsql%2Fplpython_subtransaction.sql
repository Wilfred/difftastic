--
-- Test explicit subtransactions
--

-- Test table to see if transactions get properly rolled back

CREATE TABLE subtransaction_tbl (
    i integer
);

CREATE FUNCTION subtransaction_ctx_test(what_error text = NULL) RETURNS text
AS $$
with plpy.subtransaction():
    plpy.execute("INSERT INTO subtransaction_tbl VALUES (1)")
    plpy.execute("INSERT INTO subtransaction_tbl VALUES (2)")
    if what_error == "SPI":
        plpy.execute("INSERT INTO subtransaction_tbl VALUES ('oops')")
    elif what_error == "Python":
        raise Exception("Python exception")
$$ LANGUAGE plpython3u;

SELECT subtransaction_ctx_test();
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;
SELECT subtransaction_ctx_test('SPI');
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;
SELECT subtransaction_ctx_test('Python');
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;

-- Nested subtransactions

CREATE FUNCTION subtransaction_nested_test(swallow boolean = 'f') RETURNS text
AS $$
plpy.execute("INSERT INTO subtransaction_tbl VALUES (1)")
with plpy.subtransaction():
    plpy.execute("INSERT INTO subtransaction_tbl VALUES (2)")
    try:
        with plpy.subtransaction():
            plpy.execute("INSERT INTO subtransaction_tbl VALUES (3)")
            plpy.execute("error")
    except plpy.SPIError as e:
        if not swallow:
            raise
        plpy.notice("Swallowed %s(%r)" % (e.__class__.__name__, e.args[0]))
return "ok"
$$ LANGUAGE plpython3u;

SELECT subtransaction_nested_test();
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;

SELECT subtransaction_nested_test('t');
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;

-- Nested subtransactions that recursively call code dealing with
-- subtransactions

CREATE FUNCTION subtransaction_deeply_nested_test() RETURNS text
AS $$
plpy.execute("INSERT INTO subtransaction_tbl VALUES (1)")
with plpy.subtransaction():
    plpy.execute("INSERT INTO subtransaction_tbl VALUES (2)")
    plpy.execute("SELECT subtransaction_nested_test('t')")
return "ok"
$$ LANGUAGE plpython3u;

SELECT subtransaction_deeply_nested_test();
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;

-- Error conditions from not opening/closing subtransactions

CREATE FUNCTION subtransaction_exit_without_enter() RETURNS void
AS $$
plpy.subtransaction().__exit__(None, None, None)
$$ LANGUAGE plpython3u;

CREATE FUNCTION subtransaction_enter_without_exit() RETURNS void
AS $$
plpy.subtransaction().__enter__()
$$ LANGUAGE plpython3u;

CREATE FUNCTION subtransaction_exit_twice() RETURNS void
AS $$
plpy.subtransaction().__enter__()
plpy.subtransaction().__exit__(None, None, None)
plpy.subtransaction().__exit__(None, None, None)
$$ LANGUAGE plpython3u;

CREATE FUNCTION subtransaction_enter_twice() RETURNS void
AS $$
plpy.subtransaction().__enter__()
plpy.subtransaction().__enter__()
$$ LANGUAGE plpython3u;

CREATE FUNCTION subtransaction_exit_same_subtransaction_twice() RETURNS void
AS $$
s = plpy.subtransaction()
s.__enter__()
s.__exit__(None, None, None)
s.__exit__(None, None, None)
$$ LANGUAGE plpython3u;

CREATE FUNCTION subtransaction_enter_same_subtransaction_twice() RETURNS void
AS $$
s = plpy.subtransaction()
s.__enter__()
s.__enter__()
s.__exit__(None, None, None)
$$ LANGUAGE plpython3u;

-- No warnings here, as the subtransaction gets indeed closed
CREATE FUNCTION subtransaction_enter_subtransaction_in_with() RETURNS void
AS $$
with plpy.subtransaction() as s:
    s.__enter__()
$$ LANGUAGE plpython3u;

CREATE FUNCTION subtransaction_exit_subtransaction_in_with() RETURNS void
AS $$
try:
    with plpy.subtransaction() as s:
        s.__exit__(None, None, None)
except ValueError as e:
    raise ValueError(e)
$$ LANGUAGE plpython3u;

SELECT subtransaction_exit_without_enter();
SELECT subtransaction_enter_without_exit();
SELECT subtransaction_exit_twice();
SELECT subtransaction_enter_twice();
SELECT subtransaction_exit_same_subtransaction_twice();
SELECT subtransaction_enter_same_subtransaction_twice();
SELECT subtransaction_enter_subtransaction_in_with();
SELECT subtransaction_exit_subtransaction_in_with();

-- Make sure we don't get a "current transaction is aborted" error
SELECT 1 as test;

-- Mix explicit subtransactions and normal SPI calls

CREATE FUNCTION subtransaction_mix_explicit_and_implicit() RETURNS void
AS $$
p = plpy.prepare("INSERT INTO subtransaction_tbl VALUES ($1)", ["integer"])
try:
    with plpy.subtransaction():
        plpy.execute("INSERT INTO subtransaction_tbl VALUES (1)")
        plpy.execute(p, [2])
        plpy.execute(p, ["wrong"])
except plpy.SPIError:
    plpy.warning("Caught a SPI error from an explicit subtransaction")

try:
    plpy.execute("INSERT INTO subtransaction_tbl VALUES (1)")
    plpy.execute(p, [2])
    plpy.execute(p, ["wrong"])
except plpy.SPIError:
    plpy.warning("Caught a SPI error")
$$ LANGUAGE plpython3u;

SELECT subtransaction_mix_explicit_and_implicit();
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;

-- Alternative method names for Python <2.6

CREATE FUNCTION subtransaction_alternative_names() RETURNS void
AS $$
s = plpy.subtransaction()
s.enter()
s.exit(None, None, None)
$$ LANGUAGE plpython3u;

SELECT subtransaction_alternative_names();

-- try/catch inside a subtransaction block

CREATE FUNCTION try_catch_inside_subtransaction() RETURNS void
AS $$
with plpy.subtransaction():
     plpy.execute("INSERT INTO subtransaction_tbl VALUES (1)")
     try:
         plpy.execute("INSERT INTO subtransaction_tbl VALUES ('a')")
     except plpy.SPIError:
         plpy.notice("caught")
$$ LANGUAGE plpython3u;

SELECT try_catch_inside_subtransaction();
SELECT * FROM subtransaction_tbl;
TRUNCATE subtransaction_tbl;

ALTER TABLE subtransaction_tbl ADD PRIMARY KEY (i);

CREATE FUNCTION pk_violation_inside_subtransaction() RETURNS void
AS $$
with plpy.subtransaction():
     plpy.execute("INSERT INTO subtransaction_tbl VALUES (1)")
     try:
         plpy.execute("INSERT INTO subtransaction_tbl VALUES (1)")
     except plpy.SPIError:
         plpy.notice("caught")
$$ LANGUAGE plpython3u;

SELECT pk_violation_inside_subtransaction();
SELECT * FROM subtransaction_tbl;

DROP TABLE subtransaction_tbl;

-- cursor/subtransactions interactions

CREATE FUNCTION cursor_in_subxact() RETURNS int AS $$
with plpy.subtransaction():
    cur = plpy.cursor("select * from generate_series(1, 20) as gen(i)")
    cur.fetch(10)
fetched = cur.fetch(10);
return int(fetched[5]["i"])
$$ LANGUAGE plpython3u;

CREATE FUNCTION cursor_aborted_subxact() RETURNS int AS $$
try:
    with plpy.subtransaction():
        cur = plpy.cursor("select * from generate_series(1, 20) as gen(i)")
        cur.fetch(10);
        plpy.execute("select no_such_function()")
except plpy.SPIError:
    fetched = cur.fetch(10)
    return int(fetched[5]["i"])
return 0 # not reached
$$ LANGUAGE plpython3u;

CREATE FUNCTION cursor_plan_aborted_subxact() RETURNS int AS $$
try:
    with plpy.subtransaction():
        plpy.execute('create temporary table tmp(i) '
                     'as select generate_series(1, 10)')
        plan = plpy.prepare("select i from tmp")
        cur = plpy.cursor(plan)
        plpy.execute("select no_such_function()")
except plpy.SPIError:
    fetched = cur.fetch(5)
    return fetched[2]["i"]
return 0 # not reached
$$ LANGUAGE plpython3u;

CREATE FUNCTION cursor_close_aborted_subxact() RETURNS boolean AS $$
try:
    with plpy.subtransaction():
        cur = plpy.cursor('select 1')
        plpy.execute("select no_such_function()")
except plpy.SPIError:
    cur.close()
    return True
return False # not reached
$$ LANGUAGE plpython3u;

SELECT cursor_in_subxact();
SELECT cursor_aborted_subxact();
SELECT cursor_plan_aborted_subxact();
SELECT cursor_close_aborted_subxact();
