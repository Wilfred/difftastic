--
-- Tests for procedures / CALL syntax
--

CREATE PROCEDURE test_proc1()
LANGUAGE plpgsql
AS $$
BEGIN
    NULL;
END;
$$;

CALL test_proc1();


-- error: can't return non-NULL
CREATE PROCEDURE test_proc2()
LANGUAGE plpgsql
AS $$
BEGIN
    RETURN 5;
END;
$$;


CREATE TABLE test1 (a int);

CREATE PROCEDURE test_proc3(x int)
LANGUAGE plpgsql
AS $$
BEGIN
    INSERT INTO test1 VALUES (x);
END;
$$;

CALL test_proc3(55);

SELECT * FROM test1;


-- nested CALL
TRUNCATE TABLE test1;

CREATE PROCEDURE test_proc4(y int)
LANGUAGE plpgsql
AS $$
BEGIN
    CALL test_proc3(y);
    CALL test_proc3($1);
END;
$$;

CALL test_proc4(66);

SELECT * FROM test1;

CALL test_proc4(66);

SELECT * FROM test1;


-- output arguments

CREATE PROCEDURE test_proc5(INOUT a text)
LANGUAGE plpgsql
AS $$
BEGIN
    a := a || '+' || a;
END;
$$;

CALL test_proc5('abc');


CREATE PROCEDURE test_proc6(a int, INOUT b int, INOUT c int)
LANGUAGE plpgsql
AS $$
BEGIN
    b := b * a;
    c := c * a;
END;
$$;

CALL test_proc6(2, 3, 4);


DO
LANGUAGE plpgsql
$$
DECLARE
    x int := 3;
    y int := 4;
BEGIN
    CALL test_proc6(2, x, y);
    RAISE INFO 'x = %, y = %', x, y;
    CALL test_proc6(2, c => y, b => x);
    RAISE INFO 'x = %, y = %', x, y;
END;
$$;


DO
LANGUAGE plpgsql
$$
DECLARE
    x int := 3;
    y int := 4;
BEGIN
    CALL test_proc6(2, x + 1, y);  -- error
    RAISE INFO 'x = %, y = %', x, y;
END;
$$;


DO
LANGUAGE plpgsql
$$
DECLARE
    x constant int := 3;
    y int := 4;
BEGIN
    CALL test_proc6(2, x, y);  -- error because x is constant
END;
$$;


DO
LANGUAGE plpgsql
$$
DECLARE
    x int := 3;
    y int := 4;
BEGIN
    FOR i IN 1..5 LOOP
        CALL test_proc6(i, x, y);
        RAISE INFO 'x = %, y = %', x, y;
    END LOOP;
END;
$$;


-- recursive with output arguments

CREATE PROCEDURE test_proc7(x int, INOUT a int, INOUT b numeric)
LANGUAGE plpgsql
AS $$
BEGIN
IF x > 1 THEN
    a := x / 10;
    b := x / 2;
    CALL test_proc7(b::int, a, b);
END IF;
END;
$$;

CALL test_proc7(100, -1, -1);

-- inner COMMIT with output arguments

CREATE PROCEDURE test_proc7c(x int, INOUT a int, INOUT b numeric)
LANGUAGE plpgsql
AS $$
BEGIN
  a := x / 10;
  b := x / 2;
  COMMIT;
END;
$$;

CREATE PROCEDURE test_proc7cc(_x int)
LANGUAGE plpgsql
AS $$
DECLARE _a int; _b numeric;
BEGIN
  CALL test_proc7c(_x, _a, _b);
  RAISE NOTICE '_x: %,_a: %, _b: %', _x, _a, _b;
END
$$;

CALL test_proc7cc(10);


-- named parameters and defaults

CREATE PROCEDURE test_proc8a(INOUT a int, INOUT b int)
LANGUAGE plpgsql
AS $$
BEGIN
  RAISE NOTICE 'a: %, b: %', a, b;
  a := a * 10;
  b := b + 10;
END;
$$;

CALL test_proc8a(10, 20);
CALL test_proc8a(b => 20, a => 10);

DO $$
DECLARE _a int; _b int;
BEGIN
  _a := 10; _b := 30;
  CALL test_proc8a(_a, _b);
  RAISE NOTICE '_a: %, _b: %', _a, _b;
  CALL test_proc8a(b => _b, a => _a);
  RAISE NOTICE '_a: %, _b: %', _a, _b;
END
$$;


CREATE PROCEDURE test_proc8b(INOUT a int, INOUT b int, INOUT c int)
LANGUAGE plpgsql
AS $$
BEGIN
  RAISE NOTICE 'a: %, b: %, c: %', a, b, c;
  a := a * 10;
  b := b + 10;
  c := c * -10;
END;
$$;

DO $$
DECLARE _a int; _b int; _c int;
BEGIN
  _a := 10; _b := 30; _c := 50;
  CALL test_proc8b(_a, _b, _c);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;
  CALL test_proc8b(_a, c => _c, b => _b);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;
END
$$;


CREATE PROCEDURE test_proc8c(INOUT a int, INOUT b int, INOUT c int DEFAULT 11)
LANGUAGE plpgsql
AS $$
BEGIN
  RAISE NOTICE 'a: %, b: %, c: %', a, b, c;
  a := a * 10;
  b := b + 10;
  c := c * -10;
END;
$$;

DO $$
DECLARE _a int; _b int; _c int;
BEGIN
  _a := 10; _b := 30; _c := 50;
  CALL test_proc8c(_a, _b, _c);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;
  _a := 10; _b := 30; _c := 50;
  CALL test_proc8c(_a, c => _c, b => _b);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;
  _a := 10; _b := 30; _c := 50;
  CALL test_proc8c(c => _c, b => _b, a => _a);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;
END
$$;

DO $$
DECLARE _a int; _b int; _c int;
BEGIN
  _a := 10; _b := 30; _c := 50;
  CALL test_proc8c(_a, _b);  -- fail, no output argument for c
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;
END
$$;

DO $$
DECLARE _a int; _b int; _c int;
BEGIN
  _a := 10; _b := 30; _c := 50;
  CALL test_proc8c(_a, b => _b);  -- fail, no output argument for c
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;
END
$$;


-- OUT parameters

CREATE PROCEDURE test_proc9(IN a int, OUT b int)
LANGUAGE plpgsql
AS $$
BEGIN
  RAISE NOTICE 'a: %, b: %', a, b;
  b := a * 2;
END;
$$;

DO $$
DECLARE _a int; _b int;
BEGIN
  _a := 10; _b := 30;
  CALL test_proc9(_a, _b);
  RAISE NOTICE '_a: %, _b: %', _a, _b;
END
$$;

CREATE PROCEDURE test_proc10(IN a int, OUT b int, IN c int DEFAULT 11)
LANGUAGE plpgsql
AS $$
BEGIN
  RAISE NOTICE 'a: %, b: %, c: %', a, b, c;
  b := a - c;
END;
$$;

DO $$
DECLARE _a int; _b int; _c int;
BEGIN
  _a := 10; _b := 30; _c := 7;
  CALL test_proc10(_a, _b, _c);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;

  _a := 10; _b := 30; _c := 7;
  CALL test_proc10(_a, _b, c => _c);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;

  _a := 10; _b := 30; _c := 7;
  CALL test_proc10(a => _a, b => _b, c => _c);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;

  _a := 10; _b := 30; _c := 7;
  CALL test_proc10(_a, c => _c, b => _b);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;

  _a := 10; _b := 30; _c := 7;
  CALL test_proc10(_a, _b);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;

  _a := 10; _b := 30; _c := 7;
  CALL test_proc10(_a, b => _b);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;

  _a := 10; _b := 30; _c := 7;
  CALL test_proc10(b => _b, a => _a);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;
END
$$;

-- OUT + VARIADIC

CREATE PROCEDURE test_proc11(a OUT int, VARIADIC b int[])
LANGUAGE plpgsql
AS $$
BEGIN
  RAISE NOTICE 'a: %, b: %', a, b;
  a := b[1] + b[2];
END;
$$;

DO $$
DECLARE _a int; _b int; _c int;
BEGIN
  _a := 10; _b := 30; _c := 7;
  CALL test_proc11(_a, _b, _c);
  RAISE NOTICE '_a: %, _b: %, _c: %', _a, _b, _c;
END
$$;


-- transition variable assignment

TRUNCATE test1;

CREATE FUNCTION triggerfunc1() RETURNS trigger
LANGUAGE plpgsql
AS $$
DECLARE
    z int := 0;
BEGIN
    CALL test_proc6(2, NEW.a, NEW.a);
    RETURN NEW;
END;
$$;

CREATE TRIGGER t1 BEFORE INSERT ON test1 EXECUTE PROCEDURE triggerfunc1();

INSERT INTO test1 VALUES (1), (2), (3);

UPDATE test1 SET a = 22 WHERE a = 2;

SELECT * FROM test1 ORDER BY a;


DROP PROCEDURE test_proc1;
DROP PROCEDURE test_proc3;
DROP PROCEDURE test_proc4;

DROP TABLE test1;


-- more checks for named-parameter handling

CREATE PROCEDURE p1(v_cnt int, v_Text inout text = NULL)
AS $$
BEGIN
  v_Text := 'v_cnt = ' || v_cnt;
END
$$ LANGUAGE plpgsql;

DO $$
DECLARE
  v_Text text;
  v_cnt  integer := 42;
BEGIN
  CALL p1(v_cnt := v_cnt);  -- error, must supply something for v_Text
  RAISE NOTICE '%', v_Text;
END;
$$;

DO $$
DECLARE
  v_Text text;
  v_cnt  integer := 42;
BEGIN
  CALL p1(v_cnt := v_cnt, v_Text := v_Text);
  RAISE NOTICE '%', v_Text;
END;
$$;

DO $$
DECLARE
  v_Text text;
BEGIN
  CALL p1(10, v_Text := v_Text);
  RAISE NOTICE '%', v_Text;
END;
$$;

DO $$
DECLARE
  v_Text text;
  v_cnt  integer;
BEGIN
  CALL p1(v_Text := v_Text, v_cnt := v_cnt);
  RAISE NOTICE '%', v_Text;
END;
$$;
