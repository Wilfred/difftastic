--
-- PORTALS_P2
--

BEGIN;

DECLARE foo13 CURSOR FOR
   SELECT * FROM onek WHERE unique1 = 50;

DECLARE foo14 CURSOR FOR
   SELECT * FROM onek WHERE unique1 = 51;

DECLARE foo15 CURSOR FOR
   SELECT * FROM onek WHERE unique1 = 52;

DECLARE foo16 CURSOR FOR
   SELECT * FROM onek WHERE unique1 = 53;

DECLARE foo17 CURSOR FOR
   SELECT * FROM onek WHERE unique1 = 54;

DECLARE foo18 CURSOR FOR
   SELECT * FROM onek WHERE unique1 = 55;

DECLARE foo19 CURSOR FOR
   SELECT * FROM onek WHERE unique1 = 56;

DECLARE foo20 CURSOR FOR
   SELECT * FROM onek WHERE unique1 = 57;

DECLARE foo21 CURSOR FOR
   SELECT * FROM onek WHERE unique1 = 58;

DECLARE foo22 CURSOR FOR
   SELECT * FROM onek WHERE unique1 = 59;

DECLARE foo23 CURSOR FOR
   SELECT * FROM onek WHERE unique1 = 60;

DECLARE foo24 CURSOR FOR
   SELECT * FROM onek2 WHERE unique1 = 50;

DECLARE foo25 CURSOR FOR
   SELECT * FROM onek2 WHERE unique1 = 60;

FETCH all in foo13;

FETCH all in foo14;

FETCH all in foo15;

FETCH all in foo16;

FETCH all in foo17;

FETCH all in foo18;

FETCH all in foo19;

FETCH all in foo20;

FETCH all in foo21;

FETCH all in foo22;

FETCH all in foo23;

FETCH all in foo24;

FETCH all in foo25;

CLOSE foo13;

CLOSE foo14;

CLOSE foo15;

CLOSE foo16;

CLOSE foo17;

CLOSE foo18;

CLOSE foo19;

CLOSE foo20;

CLOSE foo21;

CLOSE foo22;

CLOSE foo23;

CLOSE foo24;

CLOSE foo25;

END;
