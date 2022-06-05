CREATE PROCEDURE test_proc1()
LANGUAGE pltcl
AS $$
unset
$$;

CALL test_proc1();


CREATE PROCEDURE test_proc2()
LANGUAGE pltcl
AS $$
return 5
$$;

CALL test_proc2();


CREATE TABLE test1 (a int);

CREATE PROCEDURE test_proc3(x int)
LANGUAGE pltcl
AS $$
spi_exec "INSERT INTO test1 VALUES ($1)"
$$;

CALL test_proc3(55);

SELECT * FROM test1;


-- output arguments

CREATE PROCEDURE test_proc5(INOUT a text)
LANGUAGE pltcl
AS $$
set aa [concat $1 "+" $1]
return [list a $aa]
$$;

CALL test_proc5('abc');


CREATE PROCEDURE test_proc6(a int, INOUT b int, INOUT c int)
LANGUAGE pltcl
AS $$
set bb [expr $2 * $1]
set cc [expr $3 * $1]
return [list b $bb c $cc]
$$;

CALL test_proc6(2, 3, 4);


-- OUT parameters

CREATE PROCEDURE test_proc9(IN a int, OUT b int)
LANGUAGE pltcl
AS $$
elog NOTICE "a: $1"
return [list b [expr {$1 * 2}]]
$$;

DO $$
DECLARE _a int; _b int;
BEGIN
  _a := 10; _b := 30;
  CALL test_proc9(_a, _b);
  RAISE NOTICE '_a: %, _b: %', _a, _b;
END
$$;


DROP PROCEDURE test_proc1;
DROP PROCEDURE test_proc2;
DROP PROCEDURE test_proc3;

DROP TABLE test1;
