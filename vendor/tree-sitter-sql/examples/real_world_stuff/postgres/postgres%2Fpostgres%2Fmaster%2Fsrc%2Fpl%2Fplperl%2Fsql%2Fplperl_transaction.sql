CREATE TABLE test1 (a int, b text);


CREATE PROCEDURE transaction_test1()
LANGUAGE plperl
AS $$
foreach my $i (0..9) {
    spi_exec_query("INSERT INTO test1 (a) VALUES ($i)");
    if ($i % 2 == 0) {
        spi_commit();
    } else {
        spi_rollback();
    }
}
$$;

CALL transaction_test1();

SELECT * FROM test1;


TRUNCATE test1;

DO
LANGUAGE plperl
$$
foreach my $i (0..9) {
    spi_exec_query("INSERT INTO test1 (a) VALUES ($i)");
    if ($i % 2 == 0) {
        spi_commit();
    } else {
        spi_rollback();
    }
}
$$;

SELECT * FROM test1;


TRUNCATE test1;

-- not allowed in a function
CREATE FUNCTION transaction_test2() RETURNS int
LANGUAGE plperl
AS $$
foreach my $i (0..9) {
    spi_exec_query("INSERT INTO test1 (a) VALUES ($i)");
    if ($i % 2 == 0) {
        spi_commit();
    } else {
        spi_rollback();
    }
}
return 1;
$$;

SELECT transaction_test2();

SELECT * FROM test1;


-- also not allowed if procedure is called from a function
CREATE FUNCTION transaction_test3() RETURNS int
LANGUAGE plperl
AS $$
spi_exec_query("CALL transaction_test1()");
return 1;
$$;

SELECT transaction_test3();

SELECT * FROM test1;


-- DO block inside function
CREATE FUNCTION transaction_test4() RETURNS int
LANGUAGE plperl
AS $$
spi_exec_query('DO LANGUAGE plperl $x$ spi_commit(); $x$');
return 1;
$$;

SELECT transaction_test4();


-- commit inside cursor loop
CREATE TABLE test2 (x int);
INSERT INTO test2 VALUES (0), (1), (2), (3), (4);

TRUNCATE test1;

DO LANGUAGE plperl $$
my $sth = spi_query("SELECT * FROM test2 ORDER BY x");
my $row;
while (defined($row = spi_fetchrow($sth))) {
    spi_exec_query("INSERT INTO test1 (a) VALUES (" . $row->{x} . ")");
    spi_commit();
}
$$;

SELECT * FROM test1;

-- check that this doesn't leak a holdable portal
SELECT * FROM pg_cursors;


-- error in cursor loop with commit
TRUNCATE test1;

DO LANGUAGE plperl $$
my $sth = spi_query("SELECT * FROM test2 ORDER BY x");
my $row;
while (defined($row = spi_fetchrow($sth))) {
    spi_exec_query("INSERT INTO test1 (a) VALUES (12/(" . $row->{x} . "-2))");
    spi_commit();
}
$$;

SELECT * FROM test1;

SELECT * FROM pg_cursors;


-- rollback inside cursor loop
TRUNCATE test1;

DO LANGUAGE plperl $$
my $sth = spi_query("SELECT * FROM test2 ORDER BY x");
my $row;
while (defined($row = spi_fetchrow($sth))) {
    spi_exec_query("INSERT INTO test1 (a) VALUES (" . $row->{x} . ")");
    spi_rollback();
}
$$;

SELECT * FROM test1;

SELECT * FROM pg_cursors;


-- first commit then rollback inside cursor loop
TRUNCATE test1;

DO LANGUAGE plperl $$
my $sth = spi_query("SELECT * FROM test2 ORDER BY x");
my $row;
while (defined($row = spi_fetchrow($sth))) {
    spi_exec_query("INSERT INTO test1 (a) VALUES (" . $row->{x} . ")");
    if ($row->{x} % 2 == 0) {
        spi_commit();
    } else {
        spi_rollback();
    }
}
$$;

SELECT * FROM test1;

SELECT * FROM pg_cursors;


-- check handling of an error during COMMIT
CREATE TABLE testpk (id int PRIMARY KEY);
CREATE TABLE testfk(f1 int REFERENCES testpk DEFERRABLE INITIALLY DEFERRED);

DO LANGUAGE plperl $$
# this insert will fail during commit:
spi_exec_query("INSERT INTO testfk VALUES (0)");
spi_commit();
elog(WARNING, 'should not get here');
$$;

SELECT * FROM testpk;
SELECT * FROM testfk;

DO LANGUAGE plperl $$
# this insert will fail during commit:
spi_exec_query("INSERT INTO testfk VALUES (0)");
eval {
    spi_commit();
};
if ($@) {
    elog(INFO, $@);
}
# these inserts should work:
spi_exec_query("INSERT INTO testpk VALUES (1)");
spi_exec_query("INSERT INTO testfk VALUES (1)");
$$;

SELECT * FROM testpk;
SELECT * FROM testfk;


DROP TABLE test1;
DROP TABLE test2;
