CALL nonexistent();  -- error
CALL random();  -- error

CREATE FUNCTION cp_testfunc1(a int) RETURNS int LANGUAGE SQL AS $$ SELECT a $$;

CREATE TABLE cp_test (a int, b text);

CREATE PROCEDURE ptest1(x text)
LANGUAGE SQL
AS $$
INSERT INTO cp_test VALUES (1, x);
$$;

\df ptest1
SELECT pg_get_functiondef('ptest1'::regproc);

-- show only normal functions
\dfn public.*test*1

-- show only procedures
\dfp public.*test*1

SELECT ptest1('x');  -- error
CALL ptest1('a');  -- ok
CALL ptest1('xy' || 'zzy');  -- ok, constant-folded arg
CALL ptest1(substring(random()::numeric(20,15)::text, 1, 1));  -- ok, volatile arg

SELECT * FROM cp_test ORDER BY b COLLATE "C";


-- SQL-standard body
CREATE PROCEDURE ptest1s(x text)
LANGUAGE SQL
BEGIN ATOMIC
  INSERT INTO cp_test VALUES (1, x);
END;

\df ptest1s
SELECT pg_get_functiondef('ptest1s'::regproc);

CALL ptest1s('b');

SELECT * FROM cp_test ORDER BY b COLLATE "C";

-- utitlity functions currently not supported here
CREATE PROCEDURE ptestx()
LANGUAGE SQL
BEGIN ATOMIC
  CREATE TABLE x (a int);
END;


CREATE PROCEDURE ptest2()
LANGUAGE SQL
AS $$
SELECT 5;
$$;

CALL ptest2();


-- nested CALL
TRUNCATE cp_test;

CREATE PROCEDURE ptest3(y text)
LANGUAGE SQL
AS $$
CALL ptest1(y);
CALL ptest1($1);
$$;

CALL ptest3('b');

SELECT * FROM cp_test;


-- output arguments

CREATE PROCEDURE ptest4a(INOUT a int, INOUT b int)
LANGUAGE SQL
AS $$
SELECT 1, 2;
$$;

CALL ptest4a(NULL, NULL);

CREATE PROCEDURE ptest4b(INOUT b int, INOUT a int)
LANGUAGE SQL
AS $$
CALL ptest4a(a, b);  -- error, not supported
$$;

DROP PROCEDURE ptest4a;


-- named and default parameters

CREATE OR REPLACE PROCEDURE ptest5(a int, b text, c int default 100)
LANGUAGE SQL
AS $$
INSERT INTO cp_test VALUES(a, b);
INSERT INTO cp_test VALUES(c, b);
$$;

TRUNCATE cp_test;

CALL ptest5(10, 'Hello', 20);
CALL ptest5(10, 'Hello');
CALL ptest5(10, b => 'Hello');
CALL ptest5(b => 'Hello', a => 10);

SELECT * FROM cp_test;


-- polymorphic types

CREATE PROCEDURE ptest6(a int, b anyelement)
LANGUAGE SQL
AS $$
SELECT NULL::int;
$$;

CALL ptest6(1, 2);


-- collation assignment

CREATE PROCEDURE ptest7(a text, b text)
LANGUAGE SQL
AS $$
SELECT a = b;
$$;

CALL ptest7(least('a', 'b'), 'a');


-- empty body
CREATE PROCEDURE ptest8(x text)
BEGIN ATOMIC
END;

\df ptest8
SELECT pg_get_functiondef('ptest8'::regproc);
CALL ptest8('');


-- OUT parameters

CREATE PROCEDURE ptest9(OUT a int)
LANGUAGE SQL
AS $$
INSERT INTO cp_test VALUES (1, 'a');
SELECT 1;
$$;

-- standard way to do a call:
CALL ptest9(NULL);
-- you can write an expression, but it's not evaluated
CALL ptest9(1/0);  -- no error
-- ... and it had better match the type of the parameter
CALL ptest9(1./0.);  -- error

-- check named-parameter matching
CREATE PROCEDURE ptest10(OUT a int, IN b int, IN c int)
LANGUAGE SQL AS $$ SELECT b - c $$;

CALL ptest10(null, 7, 4);
CALL ptest10(a => null, b => 8, c => 2);
CALL ptest10(null, 7, c => 2);
CALL ptest10(null, c => 4, b => 11);
CALL ptest10(b => 8, c => 2, a => 0);

CREATE PROCEDURE ptest11(a OUT int, VARIADIC b int[]) LANGUAGE SQL
  AS $$ SELECT b[1] + b[2] $$;

CALL ptest11(null, 11, 12, 13);

-- check resolution of ambiguous DROP commands

CREATE PROCEDURE ptest10(IN a int, IN b int, IN c int)
LANGUAGE SQL AS $$ SELECT a + b - c $$;

\df ptest10

drop procedure ptest10;  -- fail
drop procedure ptest10(int, int, int);  -- fail
begin;
drop procedure ptest10(out int, int, int);
\df ptest10
drop procedure ptest10(int, int, int);  -- now this would work
rollback;
begin;
drop procedure ptest10(in int, int, int);
\df ptest10
drop procedure ptest10(int, int, int);  -- now this would work
rollback;

-- various error cases

CALL version();  -- error: not a procedure
CALL sum(1);  -- error: not a procedure

CREATE PROCEDURE ptestx() LANGUAGE SQL WINDOW AS $$ INSERT INTO cp_test VALUES (1, 'a') $$;
CREATE PROCEDURE ptestx() LANGUAGE SQL STRICT AS $$ INSERT INTO cp_test VALUES (1, 'a') $$;
CREATE PROCEDURE ptestx(a VARIADIC int[], b OUT int) LANGUAGE SQL
  AS $$ SELECT a[1] $$;
CREATE PROCEDURE ptestx(a int DEFAULT 42, b OUT int) LANGUAGE SQL
  AS $$ SELECT a $$;

ALTER PROCEDURE ptest1(text) STRICT;
ALTER FUNCTION ptest1(text) VOLATILE;  -- error: not a function
ALTER PROCEDURE cp_testfunc1(int) VOLATILE;  -- error: not a procedure
ALTER PROCEDURE nonexistent() VOLATILE;

DROP FUNCTION ptest1(text);  -- error: not a function
DROP PROCEDURE cp_testfunc1(int);  -- error: not a procedure
DROP PROCEDURE nonexistent();


-- privileges

CREATE USER regress_cp_user1;
GRANT INSERT ON cp_test TO regress_cp_user1;
REVOKE EXECUTE ON PROCEDURE ptest1(text) FROM PUBLIC;
SET ROLE regress_cp_user1;
CALL ptest1('a');  -- error
RESET ROLE;
GRANT EXECUTE ON PROCEDURE ptest1(text) TO regress_cp_user1;
SET ROLE regress_cp_user1;
CALL ptest1('a');  -- ok
RESET ROLE;


-- ROUTINE syntax

ALTER ROUTINE cp_testfunc1(int) RENAME TO cp_testfunc1a;
ALTER ROUTINE cp_testfunc1a RENAME TO cp_testfunc1;

ALTER ROUTINE ptest1(text) RENAME TO ptest1a;
ALTER ROUTINE ptest1a RENAME TO ptest1;

DROP ROUTINE cp_testfunc1(int);


-- cleanup

DROP PROCEDURE ptest1;
DROP PROCEDURE ptest1s;
DROP PROCEDURE ptest2;

DROP TABLE cp_test;

DROP USER regress_cp_user1;
