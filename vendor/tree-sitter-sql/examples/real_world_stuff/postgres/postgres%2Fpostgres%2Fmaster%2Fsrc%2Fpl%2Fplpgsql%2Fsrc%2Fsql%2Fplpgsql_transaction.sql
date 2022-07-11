CREATE TABLE test1 (a int, b text);


CREATE PROCEDURE transaction_test1(x int, y text)
LANGUAGE plpgsql
AS $$
BEGIN
    FOR i IN 0..x LOOP
        INSERT INTO test1 (a, b) VALUES (i, y);
        IF i % 2 = 0 THEN
            COMMIT;
        ELSE
            ROLLBACK;
        END IF;
    END LOOP;
END
$$;

CALL transaction_test1(9, 'foo');

SELECT * FROM test1;


TRUNCATE test1;

DO
LANGUAGE plpgsql
$$
BEGIN
    FOR i IN 0..9 LOOP
        INSERT INTO test1 (a) VALUES (i);
        IF i % 2 = 0 THEN
            COMMIT;
        ELSE
            ROLLBACK;
        END IF;
    END LOOP;
END
$$;

SELECT * FROM test1;


-- transaction commands not allowed when called in transaction block
START TRANSACTION;
CALL transaction_test1(9, 'error');
COMMIT;

START TRANSACTION;
DO LANGUAGE plpgsql $$ BEGIN COMMIT; END $$;
COMMIT;


TRUNCATE test1;

-- not allowed in a function
CREATE FUNCTION transaction_test2() RETURNS int
LANGUAGE plpgsql
AS $$
BEGIN
    FOR i IN 0..9 LOOP
        INSERT INTO test1 (a) VALUES (i);
        IF i % 2 = 0 THEN
            COMMIT;
        ELSE
            ROLLBACK;
        END IF;
    END LOOP;
    RETURN 1;
END
$$;

SELECT transaction_test2();

SELECT * FROM test1;


-- also not allowed if procedure is called from a function
CREATE FUNCTION transaction_test3() RETURNS int
LANGUAGE plpgsql
AS $$
BEGIN
    CALL transaction_test1(9, 'error');
    RETURN 1;
END;
$$;

SELECT transaction_test3();

SELECT * FROM test1;


-- DO block inside function
CREATE FUNCTION transaction_test4() RETURNS int
LANGUAGE plpgsql
AS $$
BEGIN
    EXECUTE 'DO LANGUAGE plpgsql $x$ BEGIN COMMIT; END $x$';
    RETURN 1;
END;
$$;

SELECT transaction_test4();


-- proconfig settings currently disallow transaction statements
CREATE PROCEDURE transaction_test5()
LANGUAGE plpgsql
SET work_mem = 555
AS $$
BEGIN
    COMMIT;
END;
$$;

CALL transaction_test5();


-- SECURITY DEFINER currently disallow transaction statements
CREATE PROCEDURE transaction_test5b()
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
BEGIN
    COMMIT;
END;
$$;

CALL transaction_test5b();


TRUNCATE test1;

-- nested procedure calls
CREATE PROCEDURE transaction_test6(c text)
LANGUAGE plpgsql
AS $$
BEGIN
    CALL transaction_test1(9, c);
END;
$$;

CALL transaction_test6('bar');

SELECT * FROM test1;

TRUNCATE test1;

CREATE PROCEDURE transaction_test7()
LANGUAGE plpgsql
AS $$
BEGIN
    DO 'BEGIN CALL transaction_test1(9, $x$baz$x$); END;';
END;
$$;

CALL transaction_test7();

SELECT * FROM test1;

CREATE PROCEDURE transaction_test8()
LANGUAGE plpgsql
AS $$
BEGIN
    EXECUTE 'CALL transaction_test1(10, $x$baz$x$)';
END;
$$;

CALL transaction_test8();


-- commit inside cursor loop
CREATE TABLE test2 (x int);
INSERT INTO test2 VALUES (0), (1), (2), (3), (4);

TRUNCATE test1;

DO LANGUAGE plpgsql $$
DECLARE
    r RECORD;
BEGIN
    FOR r IN SELECT * FROM test2 ORDER BY x LOOP
        INSERT INTO test1 (a) VALUES (r.x);
        COMMIT;
    END LOOP;
END;
$$;

SELECT * FROM test1;

-- check that this doesn't leak a holdable portal
SELECT * FROM pg_cursors;


-- error in cursor loop with commit
TRUNCATE test1;

DO LANGUAGE plpgsql $$
DECLARE
    r RECORD;
BEGIN
    FOR r IN SELECT * FROM test2 ORDER BY x LOOP
        INSERT INTO test1 (a) VALUES (12/(r.x-2));
        COMMIT;
    END LOOP;
END;
$$;

SELECT * FROM test1;

SELECT * FROM pg_cursors;


-- rollback inside cursor loop
TRUNCATE test1;

DO LANGUAGE plpgsql $$
DECLARE
    r RECORD;
BEGIN
    FOR r IN SELECT * FROM test2 ORDER BY x LOOP
        INSERT INTO test1 (a) VALUES (r.x);
        ROLLBACK;
    END LOOP;
END;
$$;

SELECT * FROM test1;

SELECT * FROM pg_cursors;


-- first commit then rollback inside cursor loop
TRUNCATE test1;

DO LANGUAGE plpgsql $$
DECLARE
    r RECORD;
BEGIN
    FOR r IN SELECT * FROM test2 ORDER BY x LOOP
        INSERT INTO test1 (a) VALUES (r.x);
        IF r.x % 2 = 0 THEN
            COMMIT;
        ELSE
            ROLLBACK;
        END IF;
    END LOOP;
END;
$$;

SELECT * FROM test1;

SELECT * FROM pg_cursors;


-- rollback inside cursor loop
TRUNCATE test1;

DO LANGUAGE plpgsql $$
DECLARE
    r RECORD;
BEGIN
    FOR r IN UPDATE test2 SET x = x * 2 RETURNING x LOOP
        INSERT INTO test1 (a) VALUES (r.x);
        ROLLBACK;
    END LOOP;
END;
$$;

SELECT * FROM test1;
SELECT * FROM test2;

SELECT * FROM pg_cursors;


-- interaction of FOR UPDATE cursor with subsequent updates (bug #17050)
TRUNCATE test1;

INSERT INTO test1 VALUES (1,'one'), (2,'two'), (3,'three');

DO LANGUAGE plpgsql $$
DECLARE
    l_cur CURSOR FOR SELECT a FROM test1 ORDER BY 1 FOR UPDATE;
BEGIN
    FOR r IN l_cur LOOP
      UPDATE test1 SET b = b || ' ' || b WHERE a = r.a;
      COMMIT;
    END LOOP;
END;
$$;

SELECT * FROM test1;

SELECT * FROM pg_cursors;


-- like bug #17050, but with implicit cursor
TRUNCATE test1;

INSERT INTO test1 VALUES (1,'one'), (2,'two'), (3,'three');

DO LANGUAGE plpgsql $$
DECLARE r RECORD;
BEGIN
    FOR r IN SELECT a FROM test1 FOR UPDATE LOOP
      UPDATE test1 SET b = b || ' ' || b WHERE a = r.a;
      COMMIT;
    END LOOP;
END;
$$;

SELECT * FROM test1;

SELECT * FROM pg_cursors;


-- commit inside block with exception handler
TRUNCATE test1;

DO LANGUAGE plpgsql $$
BEGIN
    BEGIN
        INSERT INTO test1 (a) VALUES (1);
        COMMIT;
        INSERT INTO test1 (a) VALUES (1/0);
        COMMIT;
    EXCEPTION
        WHEN division_by_zero THEN
            RAISE NOTICE 'caught division_by_zero';
    END;
END;
$$;

SELECT * FROM test1;


-- rollback inside block with exception handler
TRUNCATE test1;

DO LANGUAGE plpgsql $$
BEGIN
    BEGIN
        INSERT INTO test1 (a) VALUES (1);
        ROLLBACK;
        INSERT INTO test1 (a) VALUES (1/0);
        ROLLBACK;
    EXCEPTION
        WHEN division_by_zero THEN
            RAISE NOTICE 'caught division_by_zero';
    END;
END;
$$;

SELECT * FROM test1;


-- test commit/rollback inside exception handler, too
TRUNCATE test1;

DO LANGUAGE plpgsql $$
BEGIN
    FOR i IN 1..10 LOOP
      BEGIN
        INSERT INTO test1 VALUES (i, 'good');
        INSERT INTO test1 VALUES (i/0, 'bad');
      EXCEPTION
        WHEN division_by_zero THEN
            INSERT INTO test1 VALUES (i, 'exception');
            IF (i % 3) > 0 THEN COMMIT; ELSE ROLLBACK; END IF;
      END;
    END LOOP;
END;
$$;

SELECT * FROM test1;


-- detoast result of simple expression after commit
CREATE TEMP TABLE test4(f1 text);
ALTER TABLE test4 ALTER COLUMN f1 SET STORAGE EXTERNAL; -- disable compression
INSERT INTO test4 SELECT repeat('xyzzy', 2000);

-- immutable mark is a bit of a lie, but it serves to make call a simple expr
-- that will return a still-toasted value
CREATE FUNCTION data_source(i int) RETURNS TEXT LANGUAGE sql
AS 'select f1 from test4' IMMUTABLE;

DO $$
declare x text;
begin
  for i in 1..3 loop
    x := data_source(i);
    commit;
  end loop;
  raise notice 'length(x) = %', length(x);
end $$;


-- operations on composite types vs. internal transactions
DO LANGUAGE plpgsql $$
declare
  c test1 := row(42, 'hello');
  r bool;
begin
  for i in 1..3 loop
    r := c is not null;
    raise notice 'r = %', r;
    commit;
  end loop;
  for i in 1..3 loop
    r := c is null;
    raise notice 'r = %', r;
    rollback;
  end loop;
end
$$;


-- COMMIT failures
DO LANGUAGE plpgsql $$
BEGIN
    CREATE TABLE test3 (y int UNIQUE DEFERRABLE INITIALLY DEFERRED);
    COMMIT;
    INSERT INTO test3 (y) VALUES (1);
    COMMIT;
    INSERT INTO test3 (y) VALUES (1);
    INSERT INTO test3 (y) VALUES (2);
    COMMIT;
    INSERT INTO test3 (y) VALUES (3);  -- won't get here
END;
$$;

SELECT * FROM test3;

-- failure while trying to persist a cursor across a transaction (bug #15703)
CREATE PROCEDURE cursor_fail_during_commit()
 LANGUAGE plpgsql
AS $$
  DECLARE id int;
  BEGIN
    FOR id IN SELECT 1/(x-1000) FROM generate_series(1,1000) x LOOP
        INSERT INTO test1 VALUES(id);
        COMMIT;
    END LOOP;
  END;
$$;

TRUNCATE test1;

CALL cursor_fail_during_commit();

-- note that error occurs during first COMMIT, hence nothing is in test1
SELECT count(*) FROM test1;

CREATE PROCEDURE cursor_fail_during_rollback()
 LANGUAGE plpgsql
AS $$
  DECLARE id int;
  BEGIN
    FOR id IN SELECT 1/(x-1000) FROM generate_series(1,1000) x LOOP
        INSERT INTO test1 VALUES(id);
        ROLLBACK;
    END LOOP;
  END;
$$;

TRUNCATE test1;

CALL cursor_fail_during_rollback();

SELECT count(*) FROM test1;


-- SET TRANSACTION
DO LANGUAGE plpgsql $$
BEGIN
    PERFORM 1;
    RAISE INFO '%', current_setting('transaction_isolation');
    COMMIT;
    SET TRANSACTION ISOLATION LEVEL REPEATABLE READ;
    PERFORM 1;
    RAISE INFO '%', current_setting('transaction_isolation');
    COMMIT;
    SET TRANSACTION ISOLATION LEVEL REPEATABLE READ;
    RESET TRANSACTION ISOLATION LEVEL;
    PERFORM 1;
    RAISE INFO '%', current_setting('transaction_isolation');
    COMMIT;
END;
$$;

-- error cases
DO LANGUAGE plpgsql $$
BEGIN
    SET TRANSACTION ISOLATION LEVEL REPEATABLE READ;
END;
$$;

DO LANGUAGE plpgsql $$
BEGIN
    SAVEPOINT foo;
END;
$$;

DO LANGUAGE plpgsql $$
BEGIN
    EXECUTE 'COMMIT';
END;
$$;


-- snapshot handling test
TRUNCATE test2;

CREATE PROCEDURE transaction_test9()
LANGUAGE SQL
AS $$
INSERT INTO test2 VALUES (42);
$$;

DO LANGUAGE plpgsql $$
BEGIN
  ROLLBACK;
  CALL transaction_test9();
END
$$;

SELECT * FROM test2;


-- another snapshot handling case: argument expressions of a CALL need
-- to be evaluated with an up-to-date snapshot
CREATE FUNCTION report_count() RETURNS int
STABLE LANGUAGE sql
AS $$ SELECT COUNT(*) FROM test2 $$;

CREATE PROCEDURE transaction_test9b(cnt int)
LANGUAGE plpgsql
AS $$
BEGIN
  RAISE NOTICE 'count = %', cnt;
END
$$;

DO $$
BEGIN
    CALL transaction_test9b(report_count());
    INSERT INTO test2 VALUES(43);
    CALL transaction_test9b(report_count());
END
$$;


-- Test transaction in procedure with output parameters.  This uses a
-- different portal strategy and different code paths in pquery.c.
CREATE PROCEDURE transaction_test10a(INOUT x int)
LANGUAGE plpgsql
AS $$
BEGIN
  x := x + 1;
  COMMIT;
END;
$$;

CALL transaction_test10a(10);

CREATE PROCEDURE transaction_test10b(INOUT x int)
LANGUAGE plpgsql
AS $$
BEGIN
  x := x - 1;
  ROLLBACK;
END;
$$;

CALL transaction_test10b(10);


-- transaction timestamp vs. statement timestamp
CREATE PROCEDURE transaction_test11()
LANGUAGE plpgsql
AS $$
DECLARE
  s1 timestamp with time zone;
  s2 timestamp with time zone;
  s3 timestamp with time zone;
  t1 timestamp with time zone;
  t2 timestamp with time zone;
  t3 timestamp with time zone;
BEGIN
  s1 := statement_timestamp();
  t1 := transaction_timestamp();
  ASSERT s1 = t1;
  PERFORM pg_sleep(0.001);
  COMMIT;
  s2 := statement_timestamp();
  t2 := transaction_timestamp();
  ASSERT s2 = s1;
  ASSERT t2 > t1;
  PERFORM pg_sleep(0.001);
  ROLLBACK;
  s3 := statement_timestamp();
  t3 := transaction_timestamp();
  ASSERT s3 = s1;
  ASSERT t3 > t2;
END;
$$;

CALL transaction_test11();


-- transaction chain

TRUNCATE test1;

DO LANGUAGE plpgsql $$
BEGIN
    ROLLBACK;
    SET TRANSACTION ISOLATION LEVEL REPEATABLE READ;
    FOR i IN 0..3 LOOP
        RAISE INFO 'transaction_isolation = %', current_setting('transaction_isolation');
        INSERT INTO test1 (a) VALUES (i);
        IF i % 2 = 0 THEN
            COMMIT AND CHAIN;
        ELSE
            ROLLBACK AND CHAIN;
        END IF;
    END LOOP;
END
$$;

SELECT * FROM test1;


DROP TABLE test1;
DROP TABLE test2;
DROP TABLE test3;
