-- suppress CONTEXT so that function OIDs aren't in output
\set VERBOSITY terse

CREATE TABLE test1 (a int, b text);


CREATE PROCEDURE transaction_test1()
LANGUAGE pltcl
AS $$
for {set i 0} {$i < 10} {incr i} {
    spi_exec "INSERT INTO test1 (a) VALUES ($i)"
    if {$i % 2 == 0} {
        commit
    } else {
        rollback
    }
}
$$;

CALL transaction_test1();

SELECT * FROM test1;


TRUNCATE test1;

-- not allowed in a function
CREATE FUNCTION transaction_test2() RETURNS int
LANGUAGE pltcl
AS $$
for {set i 0} {$i < 10} {incr i} {
    spi_exec "INSERT INTO test1 (a) VALUES ($i)"
    if {$i % 2 == 0} {
        commit
    } else {
        rollback
    }
}
return 1
$$;

SELECT transaction_test2();

SELECT * FROM test1;


-- also not allowed if procedure is called from a function
CREATE FUNCTION transaction_test3() RETURNS int
LANGUAGE pltcl
AS $$
spi_exec "CALL transaction_test1()"
return 1
$$;

SELECT transaction_test3();

SELECT * FROM test1;


-- commit inside cursor loop
CREATE TABLE test2 (x int);
INSERT INTO test2 VALUES (0), (1), (2), (3), (4);

TRUNCATE test1;

CREATE PROCEDURE transaction_test4a()
LANGUAGE pltcl
AS $$
spi_exec -array row "SELECT * FROM test2 ORDER BY x" {
    spi_exec "INSERT INTO test1 (a) VALUES ($row(x))"
    commit
}
$$;

CALL transaction_test4a();

SELECT * FROM test1;


-- rollback inside cursor loop
TRUNCATE test1;

CREATE PROCEDURE transaction_test4b()
LANGUAGE pltcl
AS $$
spi_exec -array row "SELECT * FROM test2 ORDER BY x" {
    spi_exec "INSERT INTO test1 (a) VALUES ($row(x))"
    rollback
}
$$;

CALL transaction_test4b();

SELECT * FROM test1;


-- check handling of an error during COMMIT
CREATE TABLE testpk (id int PRIMARY KEY);
CREATE TABLE testfk(f1 int REFERENCES testpk DEFERRABLE INITIALLY DEFERRED);

CREATE PROCEDURE transaction_testfk()
LANGUAGE pltcl
AS $$
# this insert will fail during commit:
spi_exec "INSERT INTO testfk VALUES (0)"
commit
elog WARNING "should not get here"
$$;

CALL transaction_testfk();

SELECT * FROM testpk;
SELECT * FROM testfk;

CREATE OR REPLACE PROCEDURE transaction_testfk()
LANGUAGE pltcl
AS $$
# this insert will fail during commit:
spi_exec "INSERT INTO testfk VALUES (0)"
if [catch {commit} msg] {
    elog INFO $msg
}
# these inserts should work:
spi_exec "INSERT INTO testpk VALUES (1)"
spi_exec "INSERT INTO testfk VALUES (1)"
$$;

CALL transaction_testfk();

SELECT * FROM testpk;
SELECT * FROM testfk;


DROP TABLE test1;
DROP TABLE test2;
