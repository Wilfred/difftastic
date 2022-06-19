--
-- Test of Row-level security feature
--

-- Clean up in case a prior regression run failed

-- Suppress NOTICE messages when users/groups don't exist
SET client_min_messages TO 'warning';

DROP USER IF EXISTS regress_rls_alice;
DROP USER IF EXISTS regress_rls_bob;
DROP USER IF EXISTS regress_rls_carol;
DROP USER IF EXISTS regress_rls_dave;
DROP USER IF EXISTS regress_rls_exempt_user;
DROP ROLE IF EXISTS regress_rls_group1;
DROP ROLE IF EXISTS regress_rls_group2;

DROP SCHEMA IF EXISTS regress_rls_schema CASCADE;

RESET client_min_messages;

-- initial setup
CREATE USER regress_rls_alice NOLOGIN;
CREATE USER regress_rls_bob NOLOGIN;
CREATE USER regress_rls_carol NOLOGIN;
CREATE USER regress_rls_dave NOLOGIN;
CREATE USER regress_rls_exempt_user BYPASSRLS NOLOGIN;
CREATE ROLE regress_rls_group1 NOLOGIN;
CREATE ROLE regress_rls_group2 NOLOGIN;

GRANT regress_rls_group1 TO regress_rls_bob;
GRANT regress_rls_group2 TO regress_rls_carol;

CREATE SCHEMA regress_rls_schema;
GRANT ALL ON SCHEMA regress_rls_schema to public;
SET search_path = regress_rls_schema;

-- setup of malicious function
CREATE OR REPLACE FUNCTION f_leak(text) RETURNS bool
    COST 0.0000001 LANGUAGE plpgsql
    AS 'BEGIN RAISE NOTICE ''f_leak => %'', $1; RETURN true; END';
GRANT EXECUTE ON FUNCTION f_leak(text) TO public;

-- BASIC Row-Level Security Scenario

SET SESSION AUTHORIZATION regress_rls_alice;
CREATE TABLE uaccount (
    pguser      name primary key,
    seclv       int
);
GRANT SELECT ON uaccount TO public;
INSERT INTO uaccount VALUES
    ('regress_rls_alice', 99),
    ('regress_rls_bob', 1),
    ('regress_rls_carol', 2),
    ('regress_rls_dave', 3);

CREATE TABLE category (
    cid        int primary key,
    cname      text
);
GRANT ALL ON category TO public;
INSERT INTO category VALUES
    (11, 'novel'),
    (22, 'science fiction'),
    (33, 'technology'),
    (44, 'manga');

CREATE TABLE document (
    did         int primary key,
    cid         int references category(cid),
    dlevel      int not null,
    dauthor     name,
    dtitle      text
);
GRANT ALL ON document TO public;
INSERT INTO document VALUES
    ( 1, 11, 1, 'regress_rls_bob', 'my first novel'),
    ( 2, 11, 2, 'regress_rls_bob', 'my second novel'),
    ( 3, 22, 2, 'regress_rls_bob', 'my science fiction'),
    ( 4, 44, 1, 'regress_rls_bob', 'my first manga'),
    ( 5, 44, 2, 'regress_rls_bob', 'my second manga'),
    ( 6, 22, 1, 'regress_rls_carol', 'great science fiction'),
    ( 7, 33, 2, 'regress_rls_carol', 'great technology book'),
    ( 8, 44, 1, 'regress_rls_carol', 'great manga'),
    ( 9, 22, 1, 'regress_rls_dave', 'awesome science fiction'),
    (10, 33, 2, 'regress_rls_dave', 'awesome technology book');

ALTER TABLE document ENABLE ROW LEVEL SECURITY;

-- user's security level must be higher than or equal to document's
CREATE POLICY p1 ON document AS PERMISSIVE
    USING (dlevel <= (SELECT seclv FROM uaccount WHERE pguser = current_user));

-- try to create a policy of bogus type
CREATE POLICY p1 ON document AS UGLY
    USING (dlevel <= (SELECT seclv FROM uaccount WHERE pguser = current_user));

-- but Dave isn't allowed to anything at cid 50 or above
-- this is to make sure that we sort the policies by name first
-- when applying WITH CHECK, a later INSERT by Dave should fail due
-- to p1r first
CREATE POLICY p2r ON document AS RESTRICTIVE TO regress_rls_dave
    USING (cid <> 44 AND cid < 50);

-- and Dave isn't allowed to see manga documents
CREATE POLICY p1r ON document AS RESTRICTIVE TO regress_rls_dave
    USING (cid <> 44);

\dp
\d document
SELECT * FROM pg_policies WHERE schemaname = 'regress_rls_schema' AND tablename = 'document' ORDER BY policyname;

-- viewpoint from regress_rls_bob
SET SESSION AUTHORIZATION regress_rls_bob;
SET row_security TO ON;
SELECT * FROM document WHERE f_leak(dtitle) ORDER BY did;
SELECT * FROM document NATURAL JOIN category WHERE f_leak(dtitle) ORDER BY did;

-- try a sampled version
SELECT * FROM document TABLESAMPLE BERNOULLI(50) REPEATABLE(0)
  WHERE f_leak(dtitle) ORDER BY did;

-- viewpoint from regress_rls_carol
SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM document WHERE f_leak(dtitle) ORDER BY did;
SELECT * FROM document NATURAL JOIN category WHERE f_leak(dtitle) ORDER BY did;

-- try a sampled version
SELECT * FROM document TABLESAMPLE BERNOULLI(50) REPEATABLE(0)
  WHERE f_leak(dtitle) ORDER BY did;

EXPLAIN (COSTS OFF) SELECT * FROM document WHERE f_leak(dtitle);
EXPLAIN (COSTS OFF) SELECT * FROM document NATURAL JOIN category WHERE f_leak(dtitle);

-- viewpoint from regress_rls_dave
SET SESSION AUTHORIZATION regress_rls_dave;
SELECT * FROM document WHERE f_leak(dtitle) ORDER BY did;
SELECT * FROM document NATURAL JOIN category WHERE f_leak(dtitle) ORDER BY did;

EXPLAIN (COSTS OFF) SELECT * FROM document WHERE f_leak(dtitle);
EXPLAIN (COSTS OFF) SELECT * FROM document NATURAL JOIN category WHERE f_leak(dtitle);

-- 44 would technically fail for both p2r and p1r, but we should get an error
-- back from p1r for this because it sorts first
INSERT INTO document VALUES (100, 44, 1, 'regress_rls_dave', 'testing sorting of policies'); -- fail
-- Just to see a p2r error
INSERT INTO document VALUES (100, 55, 1, 'regress_rls_dave', 'testing sorting of policies'); -- fail

-- only owner can change policies
ALTER POLICY p1 ON document USING (true);    --fail
DROP POLICY p1 ON document;                  --fail

SET SESSION AUTHORIZATION regress_rls_alice;
ALTER POLICY p1 ON document USING (dauthor = current_user);

-- viewpoint from regress_rls_bob again
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM document WHERE f_leak(dtitle) ORDER BY did;
SELECT * FROM document NATURAL JOIN category WHERE f_leak(dtitle) ORDER by did;

-- viewpoint from rls_regres_carol again
SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM document WHERE f_leak(dtitle) ORDER BY did;
SELECT * FROM document NATURAL JOIN category WHERE f_leak(dtitle) ORDER by did;

EXPLAIN (COSTS OFF) SELECT * FROM document WHERE f_leak(dtitle);
EXPLAIN (COSTS OFF) SELECT * FROM document NATURAL JOIN category WHERE f_leak(dtitle);

-- interaction of FK/PK constraints
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE POLICY p2 ON category
    USING (CASE WHEN current_user = 'regress_rls_bob' THEN cid IN (11, 33)
           WHEN current_user = 'regress_rls_carol' THEN cid IN (22, 44)
           ELSE false END);

ALTER TABLE category ENABLE ROW LEVEL SECURITY;

-- cannot delete PK referenced by invisible FK
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM document d FULL OUTER JOIN category c on d.cid = c.cid ORDER BY d.did, c.cid;
DELETE FROM category WHERE cid = 33;    -- fails with FK violation

-- can insert FK referencing invisible PK
SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM document d FULL OUTER JOIN category c on d.cid = c.cid ORDER BY d.did, c.cid;
INSERT INTO document VALUES (11, 33, 1, current_user, 'hoge');

-- UNIQUE or PRIMARY KEY constraint violation DOES reveal presence of row
SET SESSION AUTHORIZATION regress_rls_bob;
INSERT INTO document VALUES (8, 44, 1, 'regress_rls_bob', 'my third manga'); -- Must fail with unique violation, revealing presence of did we can't see
SELECT * FROM document WHERE did = 8; -- and confirm we can't see it

-- RLS policies are checked before constraints
INSERT INTO document VALUES (8, 44, 1, 'regress_rls_carol', 'my third manga'); -- Should fail with RLS check violation, not duplicate key violation
UPDATE document SET did = 8, dauthor = 'regress_rls_carol' WHERE did = 5; -- Should fail with RLS check violation, not duplicate key violation

-- database superuser does bypass RLS policy when enabled
RESET SESSION AUTHORIZATION;
SET row_security TO ON;
SELECT * FROM document;
SELECT * FROM category;

-- database superuser does bypass RLS policy when disabled
RESET SESSION AUTHORIZATION;
SET row_security TO OFF;
SELECT * FROM document;
SELECT * FROM category;

-- database non-superuser with bypass privilege can bypass RLS policy when disabled
SET SESSION AUTHORIZATION regress_rls_exempt_user;
SET row_security TO OFF;
SELECT * FROM document;
SELECT * FROM category;

-- RLS policy does not apply to table owner when RLS enabled.
SET SESSION AUTHORIZATION regress_rls_alice;
SET row_security TO ON;
SELECT * FROM document;
SELECT * FROM category;

-- RLS policy does not apply to table owner when RLS disabled.
SET SESSION AUTHORIZATION regress_rls_alice;
SET row_security TO OFF;
SELECT * FROM document;
SELECT * FROM category;

--
-- Table inheritance and RLS policy
--
SET SESSION AUTHORIZATION regress_rls_alice;

SET row_security TO ON;

CREATE TABLE t1 (id int not null primary key, a int, junk1 text, b text);
ALTER TABLE t1 DROP COLUMN junk1;    -- just a disturbing factor
GRANT ALL ON t1 TO public;

COPY t1 FROM stdin WITH ;
101	1	aba
102	2	bbb
103	3	ccc
104	4	dad
\.

CREATE TABLE t2 (c float) INHERITS (t1);
GRANT ALL ON t2 TO public;

COPY t2 FROM stdin;
201	1	abc	1.1
202	2	bcd	2.2
203	3	cde	3.3
204	4	def	4.4
\.

CREATE TABLE t3 (id int not null primary key, c text, b text, a int);
ALTER TABLE t3 INHERIT t1;
GRANT ALL ON t3 TO public;

COPY t3(id, a,b,c) FROM stdin;
301	1	xxx	X
302	2	yyy	Y
303	3	zzz	Z
\.

CREATE POLICY p1 ON t1 FOR ALL TO PUBLIC USING (a % 2 = 0); -- be even number
CREATE POLICY p2 ON t2 FOR ALL TO PUBLIC USING (a % 2 = 1); -- be odd number

ALTER TABLE t1 ENABLE ROW LEVEL SECURITY;
ALTER TABLE t2 ENABLE ROW LEVEL SECURITY;

SET SESSION AUTHORIZATION regress_rls_bob;

SELECT * FROM t1;
EXPLAIN (COSTS OFF) SELECT * FROM t1;

SELECT * FROM t1 WHERE f_leak(b);
EXPLAIN (COSTS OFF) SELECT * FROM t1 WHERE f_leak(b);

-- reference to system column
SELECT tableoid::regclass, * FROM t1;
EXPLAIN (COSTS OFF) SELECT *, t1 FROM t1;

-- reference to whole-row reference
SELECT *, t1 FROM t1;
EXPLAIN (COSTS OFF) SELECT *, t1 FROM t1;

-- for share/update lock
SELECT * FROM t1 FOR SHARE;
EXPLAIN (COSTS OFF) SELECT * FROM t1 FOR SHARE;

SELECT * FROM t1 WHERE f_leak(b) FOR SHARE;
EXPLAIN (COSTS OFF) SELECT * FROM t1 WHERE f_leak(b) FOR SHARE;

-- union all query
SELECT a, b, tableoid::regclass FROM t2 UNION ALL SELECT a, b, tableoid::regclass FROM t3;
EXPLAIN (COSTS OFF) SELECT a, b, tableoid::regclass FROM t2 UNION ALL SELECT a, b, tableoid::regclass FROM t3;

-- superuser is allowed to bypass RLS checks
RESET SESSION AUTHORIZATION;
SET row_security TO OFF;
SELECT * FROM t1 WHERE f_leak(b);
EXPLAIN (COSTS OFF) SELECT * FROM t1 WHERE f_leak(b);

-- non-superuser with bypass privilege can bypass RLS policy when disabled
SET SESSION AUTHORIZATION regress_rls_exempt_user;
SET row_security TO OFF;
SELECT * FROM t1 WHERE f_leak(b);
EXPLAIN (COSTS OFF) SELECT * FROM t1 WHERE f_leak(b);

--
-- Partitioned Tables
--

SET SESSION AUTHORIZATION regress_rls_alice;

CREATE TABLE part_document (
    did         int,
    cid         int,
    dlevel      int not null,
    dauthor     name,
    dtitle      text
) PARTITION BY RANGE (cid);
GRANT ALL ON part_document TO public;

-- Create partitions for document categories
CREATE TABLE part_document_fiction PARTITION OF part_document FOR VALUES FROM (11) to (12);
CREATE TABLE part_document_satire PARTITION OF part_document FOR VALUES FROM (55) to (56);
CREATE TABLE part_document_nonfiction PARTITION OF part_document FOR VALUES FROM (99) to (100);

GRANT ALL ON part_document_fiction TO public;
GRANT ALL ON part_document_satire TO public;
GRANT ALL ON part_document_nonfiction TO public;

INSERT INTO part_document VALUES
    ( 1, 11, 1, 'regress_rls_bob', 'my first novel'),
    ( 2, 11, 2, 'regress_rls_bob', 'my second novel'),
    ( 3, 99, 2, 'regress_rls_bob', 'my science textbook'),
    ( 4, 55, 1, 'regress_rls_bob', 'my first satire'),
    ( 5, 99, 2, 'regress_rls_bob', 'my history book'),
    ( 6, 11, 1, 'regress_rls_carol', 'great science fiction'),
    ( 7, 99, 2, 'regress_rls_carol', 'great technology book'),
    ( 8, 55, 2, 'regress_rls_carol', 'great satire'),
    ( 9, 11, 1, 'regress_rls_dave', 'awesome science fiction'),
    (10, 99, 2, 'regress_rls_dave', 'awesome technology book');

ALTER TABLE part_document ENABLE ROW LEVEL SECURITY;

-- Create policy on parent
-- user's security level must be higher than or equal to document's
CREATE POLICY pp1 ON part_document AS PERMISSIVE
    USING (dlevel <= (SELECT seclv FROM uaccount WHERE pguser = current_user));

-- Dave is only allowed to see cid < 55
CREATE POLICY pp1r ON part_document AS RESTRICTIVE TO regress_rls_dave
    USING (cid < 55);

\d+ part_document
SELECT * FROM pg_policies WHERE schemaname = 'regress_rls_schema' AND tablename like '%part_document%' ORDER BY policyname;

-- viewpoint from regress_rls_bob
SET SESSION AUTHORIZATION regress_rls_bob;
SET row_security TO ON;
SELECT * FROM part_document WHERE f_leak(dtitle) ORDER BY did;
EXPLAIN (COSTS OFF) SELECT * FROM part_document WHERE f_leak(dtitle);

-- viewpoint from regress_rls_carol
SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM part_document WHERE f_leak(dtitle) ORDER BY did;
EXPLAIN (COSTS OFF) SELECT * FROM part_document WHERE f_leak(dtitle);

-- viewpoint from regress_rls_dave
SET SESSION AUTHORIZATION regress_rls_dave;
SELECT * FROM part_document WHERE f_leak(dtitle) ORDER BY did;
EXPLAIN (COSTS OFF) SELECT * FROM part_document WHERE f_leak(dtitle);

-- pp1 ERROR
INSERT INTO part_document VALUES (100, 11, 5, 'regress_rls_dave', 'testing pp1'); -- fail
-- pp1r ERROR
INSERT INTO part_document VALUES (100, 99, 1, 'regress_rls_dave', 'testing pp1r'); -- fail

-- Show that RLS policy does not apply for direct inserts to children
-- This should fail with RLS POLICY pp1r violation.
INSERT INTO part_document VALUES (100, 55, 1, 'regress_rls_dave', 'testing RLS with partitions'); -- fail
-- But this should succeed.
INSERT INTO part_document_satire VALUES (100, 55, 1, 'regress_rls_dave', 'testing RLS with partitions'); -- success
-- We still cannot see the row using the parent
SELECT * FROM part_document WHERE f_leak(dtitle) ORDER BY did;
-- But we can if we look directly
SELECT * FROM part_document_satire WHERE f_leak(dtitle) ORDER BY did;

-- Turn on RLS and create policy on child to show RLS is checked before constraints
SET SESSION AUTHORIZATION regress_rls_alice;
ALTER TABLE part_document_satire ENABLE ROW LEVEL SECURITY;
CREATE POLICY pp3 ON part_document_satire AS RESTRICTIVE
    USING (cid < 55);
-- This should fail with RLS violation now.
SET SESSION AUTHORIZATION regress_rls_dave;
INSERT INTO part_document_satire VALUES (101, 55, 1, 'regress_rls_dave', 'testing RLS with partitions'); -- fail
-- And now we cannot see directly into the partition either, due to RLS
SELECT * FROM part_document_satire WHERE f_leak(dtitle) ORDER BY did;
-- The parent looks same as before
-- viewpoint from regress_rls_dave
SELECT * FROM part_document WHERE f_leak(dtitle) ORDER BY did;
EXPLAIN (COSTS OFF) SELECT * FROM part_document WHERE f_leak(dtitle);

-- viewpoint from regress_rls_carol
SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM part_document WHERE f_leak(dtitle) ORDER BY did;
EXPLAIN (COSTS OFF) SELECT * FROM part_document WHERE f_leak(dtitle);

-- only owner can change policies
ALTER POLICY pp1 ON part_document USING (true);    --fail
DROP POLICY pp1 ON part_document;                  --fail

SET SESSION AUTHORIZATION regress_rls_alice;
ALTER POLICY pp1 ON part_document USING (dauthor = current_user);

-- viewpoint from regress_rls_bob again
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM part_document WHERE f_leak(dtitle) ORDER BY did;

-- viewpoint from rls_regres_carol again
SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM part_document WHERE f_leak(dtitle) ORDER BY did;

EXPLAIN (COSTS OFF) SELECT * FROM part_document WHERE f_leak(dtitle);

-- database superuser does bypass RLS policy when enabled
RESET SESSION AUTHORIZATION;
SET row_security TO ON;
SELECT * FROM part_document ORDER BY did;
SELECT * FROM part_document_satire ORDER by did;

-- database non-superuser with bypass privilege can bypass RLS policy when disabled
SET SESSION AUTHORIZATION regress_rls_exempt_user;
SET row_security TO OFF;
SELECT * FROM part_document ORDER BY did;
SELECT * FROM part_document_satire ORDER by did;

-- RLS policy does not apply to table owner when RLS enabled.
SET SESSION AUTHORIZATION regress_rls_alice;
SET row_security TO ON;
SELECT * FROM part_document ORDER by did;
SELECT * FROM part_document_satire ORDER by did;

-- When RLS disabled, other users get ERROR.
SET SESSION AUTHORIZATION regress_rls_dave;
SET row_security TO OFF;
SELECT * FROM part_document ORDER by did;
SELECT * FROM part_document_satire ORDER by did;

-- Check behavior with a policy that uses a SubPlan not an InitPlan.
SET SESSION AUTHORIZATION regress_rls_alice;
SET row_security TO ON;
CREATE POLICY pp3 ON part_document AS RESTRICTIVE
    USING ((SELECT dlevel <= seclv FROM uaccount WHERE pguser = current_user));

SET SESSION AUTHORIZATION regress_rls_carol;
INSERT INTO part_document VALUES (100, 11, 5, 'regress_rls_carol', 'testing pp3'); -- fail

----- Dependencies -----
SET SESSION AUTHORIZATION regress_rls_alice;
SET row_security TO ON;

CREATE TABLE dependee (x integer, y integer);

CREATE TABLE dependent (x integer, y integer);
CREATE POLICY d1 ON dependent FOR ALL
    TO PUBLIC
    USING (x = (SELECT d.x FROM dependee d WHERE d.y = y));

DROP TABLE dependee; -- Should fail without CASCADE due to dependency on row security qual?

DROP TABLE dependee CASCADE;

EXPLAIN (COSTS OFF) SELECT * FROM dependent; -- After drop, should be unqualified

-----   RECURSION    ----

--
-- Simple recursion
--
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE TABLE rec1 (x integer, y integer);
CREATE POLICY r1 ON rec1 USING (x = (SELECT r.x FROM rec1 r WHERE y = r.y));
ALTER TABLE rec1 ENABLE ROW LEVEL SECURITY;
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM rec1; -- fail, direct recursion

--
-- Mutual recursion
--
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE TABLE rec2 (a integer, b integer);
ALTER POLICY r1 ON rec1 USING (x = (SELECT a FROM rec2 WHERE b = y));
CREATE POLICY r2 ON rec2 USING (a = (SELECT x FROM rec1 WHERE y = b));
ALTER TABLE rec2 ENABLE ROW LEVEL SECURITY;

SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM rec1;    -- fail, mutual recursion

--
-- Mutual recursion via views
--
SET SESSION AUTHORIZATION regress_rls_bob;
CREATE VIEW rec1v AS SELECT * FROM rec1;
CREATE VIEW rec2v AS SELECT * FROM rec2;
SET SESSION AUTHORIZATION regress_rls_alice;
ALTER POLICY r1 ON rec1 USING (x = (SELECT a FROM rec2v WHERE b = y));
ALTER POLICY r2 ON rec2 USING (a = (SELECT x FROM rec1v WHERE y = b));

SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM rec1;    -- fail, mutual recursion via views

--
-- Mutual recursion via .s.b views
--
SET SESSION AUTHORIZATION regress_rls_bob;

DROP VIEW rec1v, rec2v CASCADE;

CREATE VIEW rec1v WITH (security_barrier) AS SELECT * FROM rec1;
CREATE VIEW rec2v WITH (security_barrier) AS SELECT * FROM rec2;
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE POLICY r1 ON rec1 USING (x = (SELECT a FROM rec2v WHERE b = y));
CREATE POLICY r2 ON rec2 USING (a = (SELECT x FROM rec1v WHERE y = b));

SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM rec1;    -- fail, mutual recursion via s.b. views

--
-- recursive RLS and VIEWs in policy
--
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE TABLE s1 (a int, b text);
INSERT INTO s1 (SELECT x, md5(x::text) FROM generate_series(-10,10) x);

CREATE TABLE s2 (x int, y text);
INSERT INTO s2 (SELECT x, md5(x::text) FROM generate_series(-6,6) x);

GRANT SELECT ON s1, s2 TO regress_rls_bob;

CREATE POLICY p1 ON s1 USING (a in (select x from s2 where y like '%2f%'));
CREATE POLICY p2 ON s2 USING (x in (select a from s1 where b like '%22%'));
CREATE POLICY p3 ON s1 FOR INSERT WITH CHECK (a = (SELECT a FROM s1));

ALTER TABLE s1 ENABLE ROW LEVEL SECURITY;
ALTER TABLE s2 ENABLE ROW LEVEL SECURITY;

SET SESSION AUTHORIZATION regress_rls_bob;
CREATE VIEW v2 AS SELECT * FROM s2 WHERE y like '%af%';
SELECT * FROM s1 WHERE f_leak(b); -- fail (infinite recursion)

INSERT INTO s1 VALUES (1, 'foo'); -- fail (infinite recursion)

SET SESSION AUTHORIZATION regress_rls_alice;
DROP POLICY p3 on s1;
ALTER POLICY p2 ON s2 USING (x % 2 = 0);

SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM s1 WHERE f_leak(b);	-- OK
EXPLAIN (COSTS OFF) SELECT * FROM only s1 WHERE f_leak(b);

SET SESSION AUTHORIZATION regress_rls_alice;
ALTER POLICY p1 ON s1 USING (a in (select x from v2)); -- using VIEW in RLS policy
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM s1 WHERE f_leak(b);	-- OK
EXPLAIN (COSTS OFF) SELECT * FROM s1 WHERE f_leak(b);

SELECT (SELECT x FROM s1 LIMIT 1) xx, * FROM s2 WHERE y like '%28%';
EXPLAIN (COSTS OFF) SELECT (SELECT x FROM s1 LIMIT 1) xx, * FROM s2 WHERE y like '%28%';

SET SESSION AUTHORIZATION regress_rls_alice;
ALTER POLICY p2 ON s2 USING (x in (select a from s1 where b like '%d2%'));
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM s1 WHERE f_leak(b);	-- fail (infinite recursion via view)

-- prepared statement with regress_rls_alice privilege
PREPARE p1(int) AS SELECT * FROM t1 WHERE a <= $1;
EXECUTE p1(2);
EXPLAIN (COSTS OFF) EXECUTE p1(2);

-- superuser is allowed to bypass RLS checks
RESET SESSION AUTHORIZATION;
SET row_security TO OFF;
SELECT * FROM t1 WHERE f_leak(b);
EXPLAIN (COSTS OFF) SELECT * FROM t1 WHERE f_leak(b);

-- plan cache should be invalidated
EXECUTE p1(2);
EXPLAIN (COSTS OFF) EXECUTE p1(2);

PREPARE p2(int) AS SELECT * FROM t1 WHERE a = $1;
EXECUTE p2(2);
EXPLAIN (COSTS OFF) EXECUTE p2(2);

-- also, case when privilege switch from superuser
SET SESSION AUTHORIZATION regress_rls_bob;
SET row_security TO ON;
EXECUTE p2(2);
EXPLAIN (COSTS OFF) EXECUTE p2(2);

--
-- UPDATE / DELETE and Row-level security
--
SET SESSION AUTHORIZATION regress_rls_bob;
EXPLAIN (COSTS OFF) UPDATE t1 SET b = b || b WHERE f_leak(b);
UPDATE t1 SET b = b || b WHERE f_leak(b);

EXPLAIN (COSTS OFF) UPDATE only t1 SET b = b || '_updt' WHERE f_leak(b);
UPDATE only t1 SET b = b || '_updt' WHERE f_leak(b);

-- returning clause with system column
UPDATE only t1 SET b = b WHERE f_leak(b) RETURNING tableoid::regclass, *, t1;
UPDATE t1 SET b = b WHERE f_leak(b) RETURNING *;
UPDATE t1 SET b = b WHERE f_leak(b) RETURNING tableoid::regclass, *, t1;

-- updates with from clause
EXPLAIN (COSTS OFF) UPDATE t2 SET b=t2.b FROM t3
WHERE t2.a = 3 and t3.a = 2 AND f_leak(t2.b) AND f_leak(t3.b);

UPDATE t2 SET b=t2.b FROM t3
WHERE t2.a = 3 and t3.a = 2 AND f_leak(t2.b) AND f_leak(t3.b);

EXPLAIN (COSTS OFF) UPDATE t1 SET b=t1.b FROM t2
WHERE t1.a = 3 and t2.a = 3 AND f_leak(t1.b) AND f_leak(t2.b);

UPDATE t1 SET b=t1.b FROM t2
WHERE t1.a = 3 and t2.a = 3 AND f_leak(t1.b) AND f_leak(t2.b);

EXPLAIN (COSTS OFF) UPDATE t2 SET b=t2.b FROM t1
WHERE t1.a = 3 and t2.a = 3 AND f_leak(t1.b) AND f_leak(t2.b);

UPDATE t2 SET b=t2.b FROM t1
WHERE t1.a = 3 and t2.a = 3 AND f_leak(t1.b) AND f_leak(t2.b);

-- updates with from clause self join
EXPLAIN (COSTS OFF) UPDATE t2 t2_1 SET b = t2_2.b FROM t2 t2_2
WHERE t2_1.a = 3 AND t2_2.a = t2_1.a AND t2_2.b = t2_1.b
AND f_leak(t2_1.b) AND f_leak(t2_2.b) RETURNING *, t2_1, t2_2;

UPDATE t2 t2_1 SET b = t2_2.b FROM t2 t2_2
WHERE t2_1.a = 3 AND t2_2.a = t2_1.a AND t2_2.b = t2_1.b
AND f_leak(t2_1.b) AND f_leak(t2_2.b) RETURNING *, t2_1, t2_2;

EXPLAIN (COSTS OFF) UPDATE t1 t1_1 SET b = t1_2.b FROM t1 t1_2
WHERE t1_1.a = 4 AND t1_2.a = t1_1.a AND t1_2.b = t1_1.b
AND f_leak(t1_1.b) AND f_leak(t1_2.b) RETURNING *, t1_1, t1_2;

UPDATE t1 t1_1 SET b = t1_2.b FROM t1 t1_2
WHERE t1_1.a = 4 AND t1_2.a = t1_1.a AND t1_2.b = t1_1.b
AND f_leak(t1_1.b) AND f_leak(t1_2.b) RETURNING *, t1_1, t1_2;

RESET SESSION AUTHORIZATION;
SET row_security TO OFF;
SELECT * FROM t1 ORDER BY a,b;

SET SESSION AUTHORIZATION regress_rls_bob;
SET row_security TO ON;
EXPLAIN (COSTS OFF) DELETE FROM only t1 WHERE f_leak(b);
EXPLAIN (COSTS OFF) DELETE FROM t1 WHERE f_leak(b);

DELETE FROM only t1 WHERE f_leak(b) RETURNING tableoid::regclass, *, t1;
DELETE FROM t1 WHERE f_leak(b) RETURNING tableoid::regclass, *, t1;

--
-- S.b. view on top of Row-level security
--
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE TABLE b1 (a int, b text);
INSERT INTO b1 (SELECT x, md5(x::text) FROM generate_series(-10,10) x);

CREATE POLICY p1 ON b1 USING (a % 2 = 0);
ALTER TABLE b1 ENABLE ROW LEVEL SECURITY;
GRANT ALL ON b1 TO regress_rls_bob;

SET SESSION AUTHORIZATION regress_rls_bob;
CREATE VIEW bv1 WITH (security_barrier) AS SELECT * FROM b1 WHERE a > 0 WITH CHECK OPTION;
GRANT ALL ON bv1 TO regress_rls_carol;

SET SESSION AUTHORIZATION regress_rls_carol;

EXPLAIN (COSTS OFF) SELECT * FROM bv1 WHERE f_leak(b);
SELECT * FROM bv1 WHERE f_leak(b);

INSERT INTO bv1 VALUES (-1, 'xxx'); -- should fail view WCO
INSERT INTO bv1 VALUES (11, 'xxx'); -- should fail RLS check
INSERT INTO bv1 VALUES (12, 'xxx'); -- ok

EXPLAIN (COSTS OFF) UPDATE bv1 SET b = 'yyy' WHERE a = 4 AND f_leak(b);
UPDATE bv1 SET b = 'yyy' WHERE a = 4 AND f_leak(b);

EXPLAIN (COSTS OFF) DELETE FROM bv1 WHERE a = 6 AND f_leak(b);
DELETE FROM bv1 WHERE a = 6 AND f_leak(b);

SET SESSION AUTHORIZATION regress_rls_alice;
SELECT * FROM b1;
--
-- INSERT ... ON CONFLICT DO UPDATE and Row-level security
--

SET SESSION AUTHORIZATION regress_rls_alice;
DROP POLICY p1 ON document;
DROP POLICY p1r ON document;

CREATE POLICY p1 ON document FOR SELECT USING (true);
CREATE POLICY p2 ON document FOR INSERT WITH CHECK (dauthor = current_user);
CREATE POLICY p3 ON document FOR UPDATE
  USING (cid = (SELECT cid from category WHERE cname = 'novel'))
  WITH CHECK (dauthor = current_user);

SET SESSION AUTHORIZATION regress_rls_bob;

-- Exists...
SELECT * FROM document WHERE did = 2;

-- ...so violates actual WITH CHECK OPTION within UPDATE (not INSERT, since
-- alternative UPDATE path happens to be taken):
INSERT INTO document VALUES (2, (SELECT cid from category WHERE cname = 'novel'), 1, 'regress_rls_carol', 'my first novel')
    ON CONFLICT (did) DO UPDATE SET dtitle = EXCLUDED.dtitle, dauthor = EXCLUDED.dauthor;

-- Violates USING qual for UPDATE policy p3.
--
-- UPDATE path is taken, but UPDATE fails purely because *existing* row to be
-- updated is not a "novel"/cid 11 (row is not leaked, even though we have
-- SELECT privileges sufficient to see the row in this instance):
INSERT INTO document VALUES (33, 22, 1, 'regress_rls_bob', 'okay science fiction'); -- preparation for next statement
INSERT INTO document VALUES (33, (SELECT cid from category WHERE cname = 'novel'), 1, 'regress_rls_bob', 'Some novel, replaces sci-fi') -- takes UPDATE path
    ON CONFLICT (did) DO UPDATE SET dtitle = EXCLUDED.dtitle;
-- Fine (we UPDATE, since INSERT WCOs and UPDATE security barrier quals + WCOs
-- not violated):
INSERT INTO document VALUES (2, (SELECT cid from category WHERE cname = 'novel'), 1, 'regress_rls_bob', 'my first novel')
    ON CONFLICT (did) DO UPDATE SET dtitle = EXCLUDED.dtitle RETURNING *;
-- Fine (we INSERT, so "cid = 33" ("technology") isn't evaluated):
INSERT INTO document VALUES (78, (SELECT cid from category WHERE cname = 'novel'), 1, 'regress_rls_bob', 'some technology novel')
    ON CONFLICT (did) DO UPDATE SET dtitle = EXCLUDED.dtitle, cid = 33 RETURNING *;
-- Fine (same query, but we UPDATE, so "cid = 33", ("technology") is not the
-- case in respect of *existing* tuple):
INSERT INTO document VALUES (78, (SELECT cid from category WHERE cname = 'novel'), 1, 'regress_rls_bob', 'some technology novel')
    ON CONFLICT (did) DO UPDATE SET dtitle = EXCLUDED.dtitle, cid = 33 RETURNING *;
-- Same query a third time, but now fails due to existing tuple finally not
-- passing quals:
INSERT INTO document VALUES (78, (SELECT cid from category WHERE cname = 'novel'), 1, 'regress_rls_bob', 'some technology novel')
    ON CONFLICT (did) DO UPDATE SET dtitle = EXCLUDED.dtitle, cid = 33 RETURNING *;
-- Don't fail just because INSERT doesn't satisfy WITH CHECK option that
-- originated as a barrier/USING() qual from the UPDATE.  Note that the UPDATE
-- path *isn't* taken, and so UPDATE-related policy does not apply:
INSERT INTO document VALUES (79, (SELECT cid from category WHERE cname = 'technology'), 1, 'regress_rls_bob', 'technology book, can only insert')
    ON CONFLICT (did) DO UPDATE SET dtitle = EXCLUDED.dtitle RETURNING *;
-- But this time, the same statement fails, because the UPDATE path is taken,
-- and updating the row just inserted falls afoul of security barrier qual
-- (enforced as WCO) -- what we might have updated target tuple to is
-- irrelevant, in fact.
INSERT INTO document VALUES (79, (SELECT cid from category WHERE cname = 'technology'), 1, 'regress_rls_bob', 'technology book, can only insert')
    ON CONFLICT (did) DO UPDATE SET dtitle = EXCLUDED.dtitle RETURNING *;

-- Test default USING qual enforced as WCO
SET SESSION AUTHORIZATION regress_rls_alice;
DROP POLICY p1 ON document;
DROP POLICY p2 ON document;
DROP POLICY p3 ON document;

CREATE POLICY p3_with_default ON document FOR UPDATE
  USING (cid = (SELECT cid from category WHERE cname = 'novel'));

SET SESSION AUTHORIZATION regress_rls_bob;
-- Just because WCO-style enforcement of USING quals occurs with
-- existing/target tuple does not mean that the implementation can be allowed
-- to fail to also enforce this qual against the final tuple appended to
-- relation (since in the absence of an explicit WCO, this is also interpreted
-- as an UPDATE/ALL WCO in general).
--
-- UPDATE path is taken here (fails due to existing tuple).  Note that this is
-- not reported as a "USING expression", because it's an RLS UPDATE check that originated as
-- a USING qual for the purposes of RLS in general, as opposed to an explicit
-- USING qual that is ordinarily a security barrier.  We leave it up to the
-- UPDATE to make this fail:
INSERT INTO document VALUES (79, (SELECT cid from category WHERE cname = 'technology'), 1, 'regress_rls_bob', 'technology book, can only insert')
    ON CONFLICT (did) DO UPDATE SET dtitle = EXCLUDED.dtitle RETURNING *;

-- UPDATE path is taken here.  Existing tuple passes, since its cid
-- corresponds to "novel", but default USING qual is enforced against
-- post-UPDATE tuple too (as always when updating with a policy that lacks an
-- explicit WCO), and so this fails:
INSERT INTO document VALUES (2, (SELECT cid from category WHERE cname = 'technology'), 1, 'regress_rls_bob', 'my first novel')
    ON CONFLICT (did) DO UPDATE SET cid = EXCLUDED.cid, dtitle = EXCLUDED.dtitle RETURNING *;

SET SESSION AUTHORIZATION regress_rls_alice;
DROP POLICY p3_with_default ON document;

--
-- Test ALL policies with ON CONFLICT DO UPDATE (much the same as existing UPDATE
-- tests)
--
CREATE POLICY p3_with_all ON document FOR ALL
  USING (cid = (SELECT cid from category WHERE cname = 'novel'))
  WITH CHECK (dauthor = current_user);

SET SESSION AUTHORIZATION regress_rls_bob;

-- Fails, since ALL WCO is enforced in insert path:
INSERT INTO document VALUES (80, (SELECT cid from category WHERE cname = 'novel'), 1, 'regress_rls_carol', 'my first novel')
    ON CONFLICT (did) DO UPDATE SET dtitle = EXCLUDED.dtitle, cid = 33;
-- Fails, since ALL policy USING qual is enforced (existing, target tuple is in
-- violation, since it has the "manga" cid):
INSERT INTO document VALUES (4, (SELECT cid from category WHERE cname = 'novel'), 1, 'regress_rls_bob', 'my first novel')
    ON CONFLICT (did) DO UPDATE SET dtitle = EXCLUDED.dtitle;
-- Fails, since ALL WCO are enforced:
INSERT INTO document VALUES (1, (SELECT cid from category WHERE cname = 'novel'), 1, 'regress_rls_bob', 'my first novel')
    ON CONFLICT (did) DO UPDATE SET dauthor = 'regress_rls_carol';

--
-- MERGE
--
RESET SESSION AUTHORIZATION;
DROP POLICY p3_with_all ON document;

ALTER TABLE document ADD COLUMN dnotes text DEFAULT '';
-- all documents are readable
CREATE POLICY p1 ON document FOR SELECT USING (true);
-- one may insert documents only authored by them
CREATE POLICY p2 ON document FOR INSERT WITH CHECK (dauthor = current_user);
-- one may only update documents in 'novel' category
CREATE POLICY p3 ON document FOR UPDATE
  USING (cid = (SELECT cid from category WHERE cname = 'novel'))
  WITH CHECK (dauthor = current_user);
-- one may only delete documents in 'manga' category
CREATE POLICY p4 ON document FOR DELETE
  USING (cid = (SELECT cid from category WHERE cname = 'manga'));

SELECT * FROM document;

SET SESSION AUTHORIZATION regress_rls_bob;

-- Fails, since update violates WITH CHECK qual on dauthor
MERGE INTO document d
USING (SELECT 1 as sdid) s
ON did = s.sdid
WHEN MATCHED THEN
	UPDATE SET dnotes = dnotes || ' notes added by merge1 ', dauthor = 'regress_rls_alice';

-- Should be OK since USING and WITH CHECK quals pass
MERGE INTO document d
USING (SELECT 1 as sdid) s
ON did = s.sdid
WHEN MATCHED THEN
	UPDATE SET dnotes = dnotes || ' notes added by merge2 ';

-- Even when dauthor is updated explicitly, but to the existing value
MERGE INTO document d
USING (SELECT 1 as sdid) s
ON did = s.sdid
WHEN MATCHED THEN
	UPDATE SET dnotes = dnotes || ' notes added by merge3 ', dauthor = 'regress_rls_bob';

-- There is a MATCH for did = 3, but UPDATE's USING qual does not allow
-- updating an item in category 'science fiction'
MERGE INTO document d
USING (SELECT 3 as sdid) s
ON did = s.sdid
WHEN MATCHED THEN
	UPDATE SET dnotes = dnotes || ' notes added by merge ';

-- The same thing with DELETE action, but fails again because no permissions
-- to delete items in 'science fiction' category that did 3 belongs to.
MERGE INTO document d
USING (SELECT 3 as sdid) s
ON did = s.sdid
WHEN MATCHED THEN
	DELETE;

-- Document with did 4 belongs to 'manga' category which is allowed for
-- deletion. But this fails because the UPDATE action is matched first and
-- UPDATE policy does not allow updation in the category.
MERGE INTO document d
USING (SELECT 4 as sdid) s
ON did = s.sdid
WHEN MATCHED AND dnotes = '' THEN
	UPDATE SET dnotes = dnotes || ' notes added by merge '
WHEN MATCHED THEN
	DELETE;

-- UPDATE action is not matched this time because of the WHEN qual.
-- DELETE still fails because role regress_rls_bob does not have SELECT
-- privileges on 'manga' category row in the category table.
MERGE INTO document d
USING (SELECT 4 as sdid) s
ON did = s.sdid
WHEN MATCHED AND dnotes <> '' THEN
	UPDATE SET dnotes = dnotes || ' notes added by merge '
WHEN MATCHED THEN
	DELETE;

SELECT * FROM document WHERE did = 4;

-- Switch to regress_rls_carol role and try the DELETE again. It should succeed
-- this time
RESET SESSION AUTHORIZATION;
SET SESSION AUTHORIZATION regress_rls_carol;

MERGE INTO document d
USING (SELECT 4 as sdid) s
ON did = s.sdid
WHEN MATCHED AND dnotes <> '' THEN
	UPDATE SET dnotes = dnotes || ' notes added by merge '
WHEN MATCHED THEN
	DELETE;

-- Switch back to regress_rls_bob role
RESET SESSION AUTHORIZATION;
SET SESSION AUTHORIZATION regress_rls_bob;

-- Try INSERT action. This fails because we are trying to insert
-- dauthor = regress_rls_dave and INSERT's WITH CHECK does not allow
-- that
MERGE INTO document d
USING (SELECT 12 as sdid) s
ON did = s.sdid
WHEN MATCHED THEN
	DELETE
WHEN NOT MATCHED THEN
	INSERT VALUES (12, 11, 1, 'regress_rls_dave', 'another novel');

-- This should be fine
MERGE INTO document d
USING (SELECT 12 as sdid) s
ON did = s.sdid
WHEN MATCHED THEN
	DELETE
WHEN NOT MATCHED THEN
	INSERT VALUES (12, 11, 1, 'regress_rls_bob', 'another novel');

-- ok
MERGE INTO document d
USING (SELECT 1 as sdid) s
ON did = s.sdid
WHEN MATCHED THEN
	UPDATE SET dnotes = dnotes || ' notes added by merge4 '
WHEN NOT MATCHED THEN
	INSERT VALUES (12, 11, 1, 'regress_rls_bob', 'another novel');

-- drop and create a new SELECT policy which prevents us from reading
-- any document except with category 'magna'
RESET SESSION AUTHORIZATION;
DROP POLICY p1 ON document;
CREATE POLICY p1 ON document FOR SELECT
  USING (cid = (SELECT cid from category WHERE cname = 'manga'));

SET SESSION AUTHORIZATION regress_rls_bob;

-- MERGE can no longer see the matching row and hence attempts the
-- NOT MATCHED action, which results in unique key violation
MERGE INTO document d
USING (SELECT 1 as sdid) s
ON did = s.sdid
WHEN MATCHED THEN
	UPDATE SET dnotes = dnotes || ' notes added by merge5 '
WHEN NOT MATCHED THEN
	INSERT VALUES (12, 11, 1, 'regress_rls_bob', 'another novel');

RESET SESSION AUTHORIZATION;
-- drop the restrictive SELECT policy so that we can look at the
-- final state of the table
DROP POLICY p1 ON document;
-- Just check everything went per plan
SELECT * FROM document;

--
-- ROLE/GROUP
--
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE TABLE z1 (a int, b text);
CREATE TABLE z2 (a int, b text);

GRANT SELECT ON z1,z2 TO regress_rls_group1, regress_rls_group2,
    regress_rls_bob, regress_rls_carol;

INSERT INTO z1 VALUES
    (1, 'aba'),
    (2, 'bbb'),
    (3, 'ccc'),
    (4, 'dad');

CREATE POLICY p1 ON z1 TO regress_rls_group1 USING (a % 2 = 0);
CREATE POLICY p2 ON z1 TO regress_rls_group2 USING (a % 2 = 1);

ALTER TABLE z1 ENABLE ROW LEVEL SECURITY;

SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM z1 WHERE f_leak(b);
EXPLAIN (COSTS OFF) SELECT * FROM z1 WHERE f_leak(b);

PREPARE plancache_test AS SELECT * FROM z1 WHERE f_leak(b);
EXPLAIN (COSTS OFF) EXECUTE plancache_test;

PREPARE plancache_test2 AS WITH q AS MATERIALIZED (SELECT * FROM z1 WHERE f_leak(b)) SELECT * FROM q,z2;
EXPLAIN (COSTS OFF) EXECUTE plancache_test2;

PREPARE plancache_test3 AS WITH q AS MATERIALIZED (SELECT * FROM z2) SELECT * FROM q,z1 WHERE f_leak(z1.b);
EXPLAIN (COSTS OFF) EXECUTE plancache_test3;

SET ROLE regress_rls_group1;
SELECT * FROM z1 WHERE f_leak(b);
EXPLAIN (COSTS OFF) SELECT * FROM z1 WHERE f_leak(b);

EXPLAIN (COSTS OFF) EXECUTE plancache_test;
EXPLAIN (COSTS OFF) EXECUTE plancache_test2;
EXPLAIN (COSTS OFF) EXECUTE plancache_test3;

SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM z1 WHERE f_leak(b);
EXPLAIN (COSTS OFF) SELECT * FROM z1 WHERE f_leak(b);

EXPLAIN (COSTS OFF) EXECUTE plancache_test;
EXPLAIN (COSTS OFF) EXECUTE plancache_test2;
EXPLAIN (COSTS OFF) EXECUTE plancache_test3;

SET ROLE regress_rls_group2;
SELECT * FROM z1 WHERE f_leak(b);
EXPLAIN (COSTS OFF) SELECT * FROM z1 WHERE f_leak(b);

EXPLAIN (COSTS OFF) EXECUTE plancache_test;
EXPLAIN (COSTS OFF) EXECUTE plancache_test2;
EXPLAIN (COSTS OFF) EXECUTE plancache_test3;

--
-- Views should follow policy for view owner.
--
-- View and Table owner are the same.
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE VIEW rls_view AS SELECT * FROM z1 WHERE f_leak(b);
GRANT SELECT ON rls_view TO regress_rls_bob;

-- Query as role that is not owner of view or table.  Should return all records.
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

-- Query as view/table owner.  Should return all records.
SET SESSION AUTHORIZATION regress_rls_alice;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;
DROP VIEW rls_view;

-- View and Table owners are different.
SET SESSION AUTHORIZATION regress_rls_bob;
CREATE VIEW rls_view AS SELECT * FROM z1 WHERE f_leak(b);
GRANT SELECT ON rls_view TO regress_rls_alice;

-- Query as role that is not owner of view but is owner of table.
-- Should return records based on view owner policies.
SET SESSION AUTHORIZATION regress_rls_alice;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

-- Query as role that is not owner of table but is owner of view.
-- Should return records based on view owner policies.
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

-- Query as role that is not the owner of the table or view without permissions.
SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM rls_view; --fail - permission denied.
EXPLAIN (COSTS OFF) SELECT * FROM rls_view; --fail - permission denied.

-- Query as role that is not the owner of the table or view with permissions.
SET SESSION AUTHORIZATION regress_rls_bob;
GRANT SELECT ON rls_view TO regress_rls_carol;

SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

-- Policy requiring access to another table.
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE TABLE z1_blacklist (a int);
INSERT INTO z1_blacklist VALUES (3), (4);
CREATE POLICY p3 ON z1 AS RESTRICTIVE USING (a NOT IN (SELECT a FROM z1_blacklist));

-- Query as role that is not owner of table but is owner of view without permissions.
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM rls_view; --fail - permission denied.
EXPLAIN (COSTS OFF) SELECT * FROM rls_view; --fail - permission denied.

-- Query as role that is not the owner of the table or view without permissions.
SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM rls_view; --fail - permission denied.
EXPLAIN (COSTS OFF) SELECT * FROM rls_view; --fail - permission denied.

-- Query as role that is not owner of table but is owner of view with permissions.
SET SESSION AUTHORIZATION regress_rls_alice;
GRANT SELECT ON z1_blacklist TO regress_rls_bob;

SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

-- Query as role that is not the owner of the table or view with permissions.
SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

SET SESSION AUTHORIZATION regress_rls_alice;
REVOKE SELECT ON z1_blacklist FROM regress_rls_bob;
DROP POLICY p3 ON z1;

SET SESSION AUTHORIZATION regress_rls_bob;
DROP VIEW rls_view;

--
-- Security invoker views should follow policy for current user.
--
-- View and table owner are the same.
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE VIEW rls_view WITH (security_invoker) AS
    SELECT * FROM z1 WHERE f_leak(b);
GRANT SELECT ON rls_view TO regress_rls_bob;
GRANT SELECT ON rls_view TO regress_rls_carol;

-- Query as table owner.  Should return all records.
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

-- Queries as other users.
-- Should return records based on current user's policies.
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

-- View and table owners are different.
SET SESSION AUTHORIZATION regress_rls_alice;
DROP VIEW rls_view;

SET SESSION AUTHORIZATION regress_rls_bob;
CREATE VIEW rls_view WITH (security_invoker) AS
    SELECT * FROM z1 WHERE f_leak(b);
GRANT SELECT ON rls_view TO regress_rls_alice;
GRANT SELECT ON rls_view TO regress_rls_carol;

-- Query as table owner.  Should return all records.
SET SESSION AUTHORIZATION regress_rls_alice;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

-- Queries as other users.
-- Should return records based on current user's policies.
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

-- Policy requiring access to another table.
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE POLICY p3 ON z1 AS RESTRICTIVE USING (a NOT IN (SELECT a FROM z1_blacklist));

-- Query as role that is not owner of table but is owner of view without permissions.
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM rls_view; --fail - permission denied.
EXPLAIN (COSTS OFF) SELECT * FROM rls_view; --fail - permission denied.

-- Query as role that is not the owner of the table or view without permissions.
SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM rls_view; --fail - permission denied.
EXPLAIN (COSTS OFF) SELECT * FROM rls_view; --fail - permission denied.

-- Query as role that is not owner of table but is owner of view with permissions.
SET SESSION AUTHORIZATION regress_rls_alice;
GRANT SELECT ON z1_blacklist TO regress_rls_bob;

SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

-- Query as role that is not the owner of the table or view without permissions.
SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM rls_view; --fail - permission denied.
EXPLAIN (COSTS OFF) SELECT * FROM rls_view; --fail - permission denied.

-- Query as role that is not the owner of the table or view with permissions.
SET SESSION AUTHORIZATION regress_rls_alice;
GRANT SELECT ON z1_blacklist TO regress_rls_carol;

SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM rls_view;
EXPLAIN (COSTS OFF) SELECT * FROM rls_view;

SET SESSION AUTHORIZATION regress_rls_bob;
DROP VIEW rls_view;

--
-- Command specific
--
SET SESSION AUTHORIZATION regress_rls_alice;

CREATE TABLE x1 (a int, b text, c text);
GRANT ALL ON x1 TO PUBLIC;

INSERT INTO x1 VALUES
    (1, 'abc', 'regress_rls_bob'),
    (2, 'bcd', 'regress_rls_bob'),
    (3, 'cde', 'regress_rls_carol'),
    (4, 'def', 'regress_rls_carol'),
    (5, 'efg', 'regress_rls_bob'),
    (6, 'fgh', 'regress_rls_bob'),
    (7, 'fgh', 'regress_rls_carol'),
    (8, 'fgh', 'regress_rls_carol');

CREATE POLICY p0 ON x1 FOR ALL USING (c = current_user);
CREATE POLICY p1 ON x1 FOR SELECT USING (a % 2 = 0);
CREATE POLICY p2 ON x1 FOR INSERT WITH CHECK (a % 2 = 1);
CREATE POLICY p3 ON x1 FOR UPDATE USING (a % 2 = 0);
CREATE POLICY p4 ON x1 FOR DELETE USING (a < 8);

ALTER TABLE x1 ENABLE ROW LEVEL SECURITY;

SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM x1 WHERE f_leak(b) ORDER BY a ASC;
UPDATE x1 SET b = b || '_updt' WHERE f_leak(b) RETURNING *;

SET SESSION AUTHORIZATION regress_rls_carol;
SELECT * FROM x1 WHERE f_leak(b) ORDER BY a ASC;
UPDATE x1 SET b = b || '_updt' WHERE f_leak(b) RETURNING *;
DELETE FROM x1 WHERE f_leak(b) RETURNING *;

--
-- Duplicate Policy Names
--
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE TABLE y1 (a int, b text);
CREATE TABLE y2 (a int, b text);

GRANT ALL ON y1, y2 TO regress_rls_bob;

CREATE POLICY p1 ON y1 FOR ALL USING (a % 2 = 0);
CREATE POLICY p2 ON y1 FOR SELECT USING (a > 2);
CREATE POLICY p1 ON y1 FOR SELECT USING (a % 2 = 1);  --fail
CREATE POLICY p1 ON y2 FOR ALL USING (a % 2 = 0);  --OK

ALTER TABLE y1 ENABLE ROW LEVEL SECURITY;
ALTER TABLE y2 ENABLE ROW LEVEL SECURITY;

--
-- Expression structure with SBV
--
-- Create view as table owner.  RLS should NOT be applied.
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE VIEW rls_sbv WITH (security_barrier) AS
    SELECT * FROM y1 WHERE f_leak(b);
EXPLAIN (COSTS OFF) SELECT * FROM rls_sbv WHERE (a = 1);
DROP VIEW rls_sbv;

-- Create view as role that does not own table.  RLS should be applied.
SET SESSION AUTHORIZATION regress_rls_bob;
CREATE VIEW rls_sbv WITH (security_barrier) AS
    SELECT * FROM y1 WHERE f_leak(b);
EXPLAIN (COSTS OFF) SELECT * FROM rls_sbv WHERE (a = 1);
DROP VIEW rls_sbv;

--
-- Expression structure
--
SET SESSION AUTHORIZATION regress_rls_alice;
INSERT INTO y2 (SELECT x, md5(x::text) FROM generate_series(0,20) x);
CREATE POLICY p2 ON y2 USING (a % 3 = 0);
CREATE POLICY p3 ON y2 USING (a % 4 = 0);

SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM y2 WHERE f_leak(b);
EXPLAIN (COSTS OFF) SELECT * FROM y2 WHERE f_leak(b);

--
-- Qual push-down of leaky functions, when not referring to table
--
SELECT * FROM y2 WHERE f_leak('abc');
EXPLAIN (COSTS OFF) SELECT * FROM y2 WHERE f_leak('abc');

CREATE TABLE test_qual_pushdown (
    abc text
);

INSERT INTO test_qual_pushdown VALUES ('abc'),('def');

SELECT * FROM y2 JOIN test_qual_pushdown ON (b = abc) WHERE f_leak(abc);
EXPLAIN (COSTS OFF) SELECT * FROM y2 JOIN test_qual_pushdown ON (b = abc) WHERE f_leak(abc);

SELECT * FROM y2 JOIN test_qual_pushdown ON (b = abc) WHERE f_leak(b);
EXPLAIN (COSTS OFF) SELECT * FROM y2 JOIN test_qual_pushdown ON (b = abc) WHERE f_leak(b);

DROP TABLE test_qual_pushdown;

--
-- Plancache invalidate on user change.
--
RESET SESSION AUTHORIZATION;

DROP TABLE t1 CASCADE;

CREATE TABLE t1 (a integer);

GRANT SELECT ON t1 TO regress_rls_bob, regress_rls_carol;

CREATE POLICY p1 ON t1 TO regress_rls_bob USING ((a % 2) = 0);
CREATE POLICY p2 ON t1 TO regress_rls_carol USING ((a % 4) = 0);

ALTER TABLE t1 ENABLE ROW LEVEL SECURITY;

-- Prepare as regress_rls_bob
SET ROLE regress_rls_bob;
PREPARE role_inval AS SELECT * FROM t1;
-- Check plan
EXPLAIN (COSTS OFF) EXECUTE role_inval;

-- Change to regress_rls_carol
SET ROLE regress_rls_carol;
-- Check plan- should be different
EXPLAIN (COSTS OFF) EXECUTE role_inval;

-- Change back to regress_rls_bob
SET ROLE regress_rls_bob;
-- Check plan- should be back to original
EXPLAIN (COSTS OFF) EXECUTE role_inval;

--
-- CTE and RLS
--
RESET SESSION AUTHORIZATION;
DROP TABLE t1 CASCADE;
CREATE TABLE t1 (a integer, b text);
CREATE POLICY p1 ON t1 USING (a % 2 = 0);

ALTER TABLE t1 ENABLE ROW LEVEL SECURITY;

GRANT ALL ON t1 TO regress_rls_bob;

INSERT INTO t1 (SELECT x, md5(x::text) FROM generate_series(0,20) x);

SET SESSION AUTHORIZATION regress_rls_bob;

WITH cte1 AS MATERIALIZED (SELECT * FROM t1 WHERE f_leak(b)) SELECT * FROM cte1;
EXPLAIN (COSTS OFF)
WITH cte1 AS MATERIALIZED (SELECT * FROM t1 WHERE f_leak(b)) SELECT * FROM cte1;

WITH cte1 AS (UPDATE t1 SET a = a + 1 RETURNING *) SELECT * FROM cte1; --fail
WITH cte1 AS (UPDATE t1 SET a = a RETURNING *) SELECT * FROM cte1; --ok

WITH cte1 AS (INSERT INTO t1 VALUES (21, 'Fail') RETURNING *) SELECT * FROM cte1; --fail
WITH cte1 AS (INSERT INTO t1 VALUES (20, 'Success') RETURNING *) SELECT * FROM cte1; --ok

--
-- Rename Policy
--
RESET SESSION AUTHORIZATION;
ALTER POLICY p1 ON t1 RENAME TO p1; --fail

SELECT polname, relname
    FROM pg_policy pol
    JOIN pg_class pc ON (pc.oid = pol.polrelid)
    WHERE relname = 't1';

ALTER POLICY p1 ON t1 RENAME TO p2; --ok

SELECT polname, relname
    FROM pg_policy pol
    JOIN pg_class pc ON (pc.oid = pol.polrelid)
    WHERE relname = 't1';

--
-- Check INSERT SELECT
--
SET SESSION AUTHORIZATION regress_rls_bob;
CREATE TABLE t2 (a integer, b text);
INSERT INTO t2 (SELECT * FROM t1);
EXPLAIN (COSTS OFF) INSERT INTO t2 (SELECT * FROM t1);
SELECT * FROM t2;
EXPLAIN (COSTS OFF) SELECT * FROM t2;
CREATE TABLE t3 AS SELECT * FROM t1;
SELECT * FROM t3;
SELECT * INTO t4 FROM t1;
SELECT * FROM t4;

--
-- RLS with JOIN
--
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE TABLE blog (id integer, author text, post text);
CREATE TABLE comment (blog_id integer, message text);

GRANT ALL ON blog, comment TO regress_rls_bob;

CREATE POLICY blog_1 ON blog USING (id % 2 = 0);

ALTER TABLE blog ENABLE ROW LEVEL SECURITY;

INSERT INTO blog VALUES
    (1, 'alice', 'blog #1'),
    (2, 'bob', 'blog #1'),
    (3, 'alice', 'blog #2'),
    (4, 'alice', 'blog #3'),
    (5, 'john', 'blog #1');

INSERT INTO comment VALUES
    (1, 'cool blog'),
    (1, 'fun blog'),
    (3, 'crazy blog'),
    (5, 'what?'),
    (4, 'insane!'),
    (2, 'who did it?');

SET SESSION AUTHORIZATION regress_rls_bob;
-- Check RLS JOIN with Non-RLS.
SELECT id, author, message FROM blog JOIN comment ON id = blog_id;
-- Check Non-RLS JOIN with RLS.
SELECT id, author, message FROM comment JOIN blog ON id = blog_id;

SET SESSION AUTHORIZATION regress_rls_alice;
CREATE POLICY comment_1 ON comment USING (blog_id < 4);

ALTER TABLE comment ENABLE ROW LEVEL SECURITY;

SET SESSION AUTHORIZATION regress_rls_bob;
-- Check RLS JOIN RLS
SELECT id, author, message FROM blog JOIN comment ON id = blog_id;
SELECT id, author, message FROM comment JOIN blog ON id = blog_id;

SET SESSION AUTHORIZATION regress_rls_alice;
DROP TABLE blog, comment;

--
-- Default Deny Policy
--
RESET SESSION AUTHORIZATION;
DROP POLICY p2 ON t1;
ALTER TABLE t1 OWNER TO regress_rls_alice;

-- Check that default deny does not apply to superuser.
RESET SESSION AUTHORIZATION;
SELECT * FROM t1;
EXPLAIN (COSTS OFF) SELECT * FROM t1;

-- Check that default deny does not apply to table owner.
SET SESSION AUTHORIZATION regress_rls_alice;
SELECT * FROM t1;
EXPLAIN (COSTS OFF) SELECT * FROM t1;

-- Check that default deny applies to non-owner/non-superuser when RLS on.
SET SESSION AUTHORIZATION regress_rls_bob;
SET row_security TO ON;
SELECT * FROM t1;
EXPLAIN (COSTS OFF) SELECT * FROM t1;
SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM t1;
EXPLAIN (COSTS OFF) SELECT * FROM t1;

--
-- COPY TO/FROM
--

RESET SESSION AUTHORIZATION;
DROP TABLE copy_t CASCADE;
CREATE TABLE copy_t (a integer, b text);
CREATE POLICY p1 ON copy_t USING (a % 2 = 0);

ALTER TABLE copy_t ENABLE ROW LEVEL SECURITY;

GRANT ALL ON copy_t TO regress_rls_bob, regress_rls_exempt_user;

INSERT INTO copy_t (SELECT x, md5(x::text) FROM generate_series(0,10) x);

-- Check COPY TO as Superuser/owner.
RESET SESSION AUTHORIZATION;
SET row_security TO OFF;
COPY (SELECT * FROM copy_t ORDER BY a ASC) TO STDOUT WITH DELIMITER ',';
SET row_security TO ON;
COPY (SELECT * FROM copy_t ORDER BY a ASC) TO STDOUT WITH DELIMITER ',';

-- Check COPY TO as user with permissions.
SET SESSION AUTHORIZATION regress_rls_bob;
SET row_security TO OFF;
COPY (SELECT * FROM copy_t ORDER BY a ASC) TO STDOUT WITH DELIMITER ','; --fail - would be affected by RLS
SET row_security TO ON;
COPY (SELECT * FROM copy_t ORDER BY a ASC) TO STDOUT WITH DELIMITER ','; --ok

-- Check COPY TO as user with permissions and BYPASSRLS
SET SESSION AUTHORIZATION regress_rls_exempt_user;
SET row_security TO OFF;
COPY (SELECT * FROM copy_t ORDER BY a ASC) TO STDOUT WITH DELIMITER ','; --ok
SET row_security TO ON;
COPY (SELECT * FROM copy_t ORDER BY a ASC) TO STDOUT WITH DELIMITER ','; --ok

-- Check COPY TO as user without permissions. SET row_security TO OFF;
SET SESSION AUTHORIZATION regress_rls_carol;
SET row_security TO OFF;
COPY (SELECT * FROM copy_t ORDER BY a ASC) TO STDOUT WITH DELIMITER ','; --fail - would be affected by RLS
SET row_security TO ON;
COPY (SELECT * FROM copy_t ORDER BY a ASC) TO STDOUT WITH DELIMITER ','; --fail - permission denied

-- Check COPY relation TO; keep it just one row to avoid reordering issues
RESET SESSION AUTHORIZATION;
SET row_security TO ON;
CREATE TABLE copy_rel_to (a integer, b text);
CREATE POLICY p1 ON copy_rel_to USING (a % 2 = 0);

ALTER TABLE copy_rel_to ENABLE ROW LEVEL SECURITY;

GRANT ALL ON copy_rel_to TO regress_rls_bob, regress_rls_exempt_user;

INSERT INTO copy_rel_to VALUES (1, md5('1'));

-- Check COPY TO as Superuser/owner.
RESET SESSION AUTHORIZATION;
SET row_security TO OFF;
COPY copy_rel_to TO STDOUT WITH DELIMITER ',';
SET row_security TO ON;
COPY copy_rel_to TO STDOUT WITH DELIMITER ',';

-- Check COPY TO as user with permissions.
SET SESSION AUTHORIZATION regress_rls_bob;
SET row_security TO OFF;
COPY copy_rel_to TO STDOUT WITH DELIMITER ','; --fail - would be affected by RLS
SET row_security TO ON;
COPY copy_rel_to TO STDOUT WITH DELIMITER ','; --ok

-- Check COPY TO as user with permissions and BYPASSRLS
SET SESSION AUTHORIZATION regress_rls_exempt_user;
SET row_security TO OFF;
COPY copy_rel_to TO STDOUT WITH DELIMITER ','; --ok
SET row_security TO ON;
COPY copy_rel_to TO STDOUT WITH DELIMITER ','; --ok

-- Check COPY TO as user without permissions. SET row_security TO OFF;
SET SESSION AUTHORIZATION regress_rls_carol;
SET row_security TO OFF;
COPY copy_rel_to TO STDOUT WITH DELIMITER ','; --fail - permission denied
SET row_security TO ON;
COPY copy_rel_to TO STDOUT WITH DELIMITER ','; --fail - permission denied

-- Check COPY FROM as Superuser/owner.
RESET SESSION AUTHORIZATION;
SET row_security TO OFF;
COPY copy_t FROM STDIN; --ok
1	abc
2	bcd
3	cde
4	def
\.
SET row_security TO ON;
COPY copy_t FROM STDIN; --ok
1	abc
2	bcd
3	cde
4	def
\.

-- Check COPY FROM as user with permissions.
SET SESSION AUTHORIZATION regress_rls_bob;
SET row_security TO OFF;
COPY copy_t FROM STDIN; --fail - would be affected by RLS.
SET row_security TO ON;
COPY copy_t FROM STDIN; --fail - COPY FROM not supported by RLS.

-- Check COPY FROM as user with permissions and BYPASSRLS
SET SESSION AUTHORIZATION regress_rls_exempt_user;
SET row_security TO ON;
COPY copy_t FROM STDIN; --ok
1	abc
2	bcd
3	cde
4	def
\.

-- Check COPY FROM as user without permissions.
SET SESSION AUTHORIZATION regress_rls_carol;
SET row_security TO OFF;
COPY copy_t FROM STDIN; --fail - permission denied.
SET row_security TO ON;
COPY copy_t FROM STDIN; --fail - permission denied.

RESET SESSION AUTHORIZATION;
DROP TABLE copy_t;
DROP TABLE copy_rel_to CASCADE;

-- Check WHERE CURRENT OF
SET SESSION AUTHORIZATION regress_rls_alice;

CREATE TABLE current_check (currentid int, payload text, rlsuser text);
GRANT ALL ON current_check TO PUBLIC;

INSERT INTO current_check VALUES
    (1, 'abc', 'regress_rls_bob'),
    (2, 'bcd', 'regress_rls_bob'),
    (3, 'cde', 'regress_rls_bob'),
    (4, 'def', 'regress_rls_bob');

CREATE POLICY p1 ON current_check FOR SELECT USING (currentid % 2 = 0);
CREATE POLICY p2 ON current_check FOR DELETE USING (currentid = 4 AND rlsuser = current_user);
CREATE POLICY p3 ON current_check FOR UPDATE USING (currentid = 4) WITH CHECK (rlsuser = current_user);

ALTER TABLE current_check ENABLE ROW LEVEL SECURITY;

SET SESSION AUTHORIZATION regress_rls_bob;

-- Can SELECT even rows
SELECT * FROM current_check;

-- Cannot UPDATE row 2
UPDATE current_check SET payload = payload || '_new' WHERE currentid = 2 RETURNING *;

BEGIN;

DECLARE current_check_cursor SCROLL CURSOR FOR SELECT * FROM current_check;
-- Returns rows that can be seen according to SELECT policy, like plain SELECT
-- above (even rows)
FETCH ABSOLUTE 1 FROM current_check_cursor;
-- Still cannot UPDATE row 2 through cursor
UPDATE current_check SET payload = payload || '_new' WHERE CURRENT OF current_check_cursor RETURNING *;
-- Can update row 4 through cursor, which is the next visible row
FETCH RELATIVE 1 FROM current_check_cursor;
UPDATE current_check SET payload = payload || '_new' WHERE CURRENT OF current_check_cursor RETURNING *;
SELECT * FROM current_check;
-- Plan should be a subquery TID scan
EXPLAIN (COSTS OFF) UPDATE current_check SET payload = payload WHERE CURRENT OF current_check_cursor;
-- Similarly can only delete row 4
FETCH ABSOLUTE 1 FROM current_check_cursor;
DELETE FROM current_check WHERE CURRENT OF current_check_cursor RETURNING *;
FETCH RELATIVE 1 FROM current_check_cursor;
DELETE FROM current_check WHERE CURRENT OF current_check_cursor RETURNING *;
SELECT * FROM current_check;

COMMIT;

--
-- check pg_stats view filtering
--
SET row_security TO ON;
SET SESSION AUTHORIZATION regress_rls_alice;
ANALYZE current_check;
-- Stats visible
SELECT row_security_active('current_check');
SELECT attname, most_common_vals FROM pg_stats
  WHERE tablename = 'current_check'
  ORDER BY 1;

SET SESSION AUTHORIZATION regress_rls_bob;
-- Stats not visible
SELECT row_security_active('current_check');
SELECT attname, most_common_vals FROM pg_stats
  WHERE tablename = 'current_check'
  ORDER BY 1;

--
-- Collation support
--
BEGIN;
CREATE TABLE coll_t (c) AS VALUES ('bar'::text);
CREATE POLICY coll_p ON coll_t USING (c < ('foo'::text COLLATE "C"));
ALTER TABLE coll_t ENABLE ROW LEVEL SECURITY;
GRANT SELECT ON coll_t TO regress_rls_alice;
SELECT (string_to_array(polqual, ':'))[7] AS inputcollid FROM pg_policy WHERE polrelid = 'coll_t'::regclass;
SET SESSION AUTHORIZATION regress_rls_alice;
SELECT * FROM coll_t;
ROLLBACK;

--
-- Shared Object Dependencies
--
RESET SESSION AUTHORIZATION;
BEGIN;
CREATE ROLE regress_rls_eve;
CREATE ROLE regress_rls_frank;
CREATE TABLE tbl1 (c) AS VALUES ('bar'::text);
GRANT SELECT ON TABLE tbl1 TO regress_rls_eve;
CREATE POLICY P ON tbl1 TO regress_rls_eve, regress_rls_frank USING (true);
SELECT refclassid::regclass, deptype
  FROM pg_depend
  WHERE classid = 'pg_policy'::regclass
  AND refobjid = 'tbl1'::regclass;
SELECT refclassid::regclass, deptype
  FROM pg_shdepend
  WHERE classid = 'pg_policy'::regclass
  AND refobjid IN ('regress_rls_eve'::regrole, 'regress_rls_frank'::regrole);

SAVEPOINT q;
DROP ROLE regress_rls_eve; --fails due to dependency on POLICY p
ROLLBACK TO q;

ALTER POLICY p ON tbl1 TO regress_rls_frank USING (true);
SAVEPOINT q;
DROP ROLE regress_rls_eve; --fails due to dependency on GRANT SELECT
ROLLBACK TO q;

REVOKE ALL ON TABLE tbl1 FROM regress_rls_eve;
SAVEPOINT q;
DROP ROLE regress_rls_eve; --succeeds
ROLLBACK TO q;

SAVEPOINT q;
DROP ROLE regress_rls_frank; --fails due to dependency on POLICY p
ROLLBACK TO q;

DROP POLICY p ON tbl1;
SAVEPOINT q;
DROP ROLE regress_rls_frank; -- succeeds
ROLLBACK TO q;

ROLLBACK; -- cleanup

--
-- Converting table to view
--
BEGIN;
CREATE TABLE t (c int);
CREATE POLICY p ON t USING (c % 2 = 1);
ALTER TABLE t ENABLE ROW LEVEL SECURITY;

SAVEPOINT q;
CREATE RULE "_RETURN" AS ON SELECT TO t DO INSTEAD
  SELECT * FROM generate_series(1,5) t0(c); -- fails due to row-level security enabled
ROLLBACK TO q;

ALTER TABLE t DISABLE ROW LEVEL SECURITY;
SAVEPOINT q;
CREATE RULE "_RETURN" AS ON SELECT TO t DO INSTEAD
  SELECT * FROM generate_series(1,5) t0(c); -- fails due to policy p on t
ROLLBACK TO q;

DROP POLICY p ON t;
CREATE RULE "_RETURN" AS ON SELECT TO t DO INSTEAD
  SELECT * FROM generate_series(1,5) t0(c); -- succeeds
ROLLBACK;

--
-- Policy expression handling
--
BEGIN;
CREATE TABLE t (c) AS VALUES ('bar'::text);
CREATE POLICY p ON t USING (max(c)); -- fails: aggregate functions are not allowed in policy expressions
ROLLBACK;

--
-- Non-target relations are only subject to SELECT policies
--
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE TABLE r1 (a int);
CREATE TABLE r2 (a int);
INSERT INTO r1 VALUES (10), (20);
INSERT INTO r2 VALUES (10), (20);

GRANT ALL ON r1, r2 TO regress_rls_bob;

CREATE POLICY p1 ON r1 USING (true);
ALTER TABLE r1 ENABLE ROW LEVEL SECURITY;

CREATE POLICY p1 ON r2 FOR SELECT USING (true);
CREATE POLICY p2 ON r2 FOR INSERT WITH CHECK (false);
CREATE POLICY p3 ON r2 FOR UPDATE USING (false);
CREATE POLICY p4 ON r2 FOR DELETE USING (false);
ALTER TABLE r2 ENABLE ROW LEVEL SECURITY;

SET SESSION AUTHORIZATION regress_rls_bob;
SELECT * FROM r1;
SELECT * FROM r2;

-- r2 is read-only
INSERT INTO r2 VALUES (2); -- Not allowed
UPDATE r2 SET a = 2 RETURNING *; -- Updates nothing
DELETE FROM r2 RETURNING *; -- Deletes nothing

-- r2 can be used as a non-target relation in DML
INSERT INTO r1 SELECT a + 1 FROM r2 RETURNING *; -- OK
UPDATE r1 SET a = r2.a + 2 FROM r2 WHERE r1.a = r2.a RETURNING *; -- OK
DELETE FROM r1 USING r2 WHERE r1.a = r2.a + 2 RETURNING *; -- OK
SELECT * FROM r1;
SELECT * FROM r2;

SET SESSION AUTHORIZATION regress_rls_alice;
DROP TABLE r1;
DROP TABLE r2;

--
-- FORCE ROW LEVEL SECURITY applies RLS to owners too
--
SET SESSION AUTHORIZATION regress_rls_alice;
SET row_security = on;
CREATE TABLE r1 (a int);
INSERT INTO r1 VALUES (10), (20);

CREATE POLICY p1 ON r1 USING (false);
ALTER TABLE r1 ENABLE ROW LEVEL SECURITY;
ALTER TABLE r1 FORCE ROW LEVEL SECURITY;

-- No error, but no rows
TABLE r1;

-- RLS error
INSERT INTO r1 VALUES (1);

-- No error (unable to see any rows to update)
UPDATE r1 SET a = 1;
TABLE r1;

-- No error (unable to see any rows to delete)
DELETE FROM r1;
TABLE r1;

SET row_security = off;
-- these all fail, would be affected by RLS
TABLE r1;
UPDATE r1 SET a = 1;
DELETE FROM r1;

DROP TABLE r1;

--
-- FORCE ROW LEVEL SECURITY does not break RI
--
SET SESSION AUTHORIZATION regress_rls_alice;
SET row_security = on;
CREATE TABLE r1 (a int PRIMARY KEY);
CREATE TABLE r2 (a int REFERENCES r1);
INSERT INTO r1 VALUES (10), (20);
INSERT INTO r2 VALUES (10), (20);

-- Create policies on r2 which prevent the
-- owner from seeing any rows, but RI should
-- still see them.
CREATE POLICY p1 ON r2 USING (false);
ALTER TABLE r2 ENABLE ROW LEVEL SECURITY;
ALTER TABLE r2 FORCE ROW LEVEL SECURITY;

-- Errors due to rows in r2
DELETE FROM r1;

-- Reset r2 to no-RLS
DROP POLICY p1 ON r2;
ALTER TABLE r2 NO FORCE ROW LEVEL SECURITY;
ALTER TABLE r2 DISABLE ROW LEVEL SECURITY;

-- clean out r2 for INSERT test below
DELETE FROM r2;

-- Change r1 to not allow rows to be seen
CREATE POLICY p1 ON r1 USING (false);
ALTER TABLE r1 ENABLE ROW LEVEL SECURITY;
ALTER TABLE r1 FORCE ROW LEVEL SECURITY;

-- No rows seen
TABLE r1;

-- No error, RI still sees that row exists in r1
INSERT INTO r2 VALUES (10);

DROP TABLE r2;
DROP TABLE r1;

-- Ensure cascaded DELETE works
CREATE TABLE r1 (a int PRIMARY KEY);
CREATE TABLE r2 (a int REFERENCES r1 ON DELETE CASCADE);
INSERT INTO r1 VALUES (10), (20);
INSERT INTO r2 VALUES (10), (20);

-- Create policies on r2 which prevent the
-- owner from seeing any rows, but RI should
-- still see them.
CREATE POLICY p1 ON r2 USING (false);
ALTER TABLE r2 ENABLE ROW LEVEL SECURITY;
ALTER TABLE r2 FORCE ROW LEVEL SECURITY;

-- Deletes all records from both
DELETE FROM r1;

-- Remove FORCE from r2
ALTER TABLE r2 NO FORCE ROW LEVEL SECURITY;

-- As owner, we now bypass RLS
-- verify no rows in r2 now
TABLE r2;

DROP TABLE r2;
DROP TABLE r1;

-- Ensure cascaded UPDATE works
CREATE TABLE r1 (a int PRIMARY KEY);
CREATE TABLE r2 (a int REFERENCES r1 ON UPDATE CASCADE);
INSERT INTO r1 VALUES (10), (20);
INSERT INTO r2 VALUES (10), (20);

-- Create policies on r2 which prevent the
-- owner from seeing any rows, but RI should
-- still see them.
CREATE POLICY p1 ON r2 USING (false);
ALTER TABLE r2 ENABLE ROW LEVEL SECURITY;
ALTER TABLE r2 FORCE ROW LEVEL SECURITY;

-- Updates records in both
UPDATE r1 SET a = a+5;

-- Remove FORCE from r2
ALTER TABLE r2 NO FORCE ROW LEVEL SECURITY;

-- As owner, we now bypass RLS
-- verify records in r2 updated
TABLE r2;

DROP TABLE r2;
DROP TABLE r1;

--
-- Test INSERT+RETURNING applies SELECT policies as
-- WithCheckOptions (meaning an error is thrown)
--
SET SESSION AUTHORIZATION regress_rls_alice;
SET row_security = on;
CREATE TABLE r1 (a int);

CREATE POLICY p1 ON r1 FOR SELECT USING (false);
CREATE POLICY p2 ON r1 FOR INSERT WITH CHECK (true);
ALTER TABLE r1 ENABLE ROW LEVEL SECURITY;
ALTER TABLE r1 FORCE ROW LEVEL SECURITY;

-- Works fine
INSERT INTO r1 VALUES (10), (20);

-- No error, but no rows
TABLE r1;

SET row_security = off;
-- fail, would be affected by RLS
TABLE r1;

SET row_security = on;

-- Error
INSERT INTO r1 VALUES (10), (20) RETURNING *;

DROP TABLE r1;

--
-- Test UPDATE+RETURNING applies SELECT policies as
-- WithCheckOptions (meaning an error is thrown)
--
SET SESSION AUTHORIZATION regress_rls_alice;
SET row_security = on;
CREATE TABLE r1 (a int PRIMARY KEY);

CREATE POLICY p1 ON r1 FOR SELECT USING (a < 20);
CREATE POLICY p2 ON r1 FOR UPDATE USING (a < 20) WITH CHECK (true);
CREATE POLICY p3 ON r1 FOR INSERT WITH CHECK (true);
INSERT INTO r1 VALUES (10);
ALTER TABLE r1 ENABLE ROW LEVEL SECURITY;
ALTER TABLE r1 FORCE ROW LEVEL SECURITY;

-- Works fine
UPDATE r1 SET a = 30;

-- Show updated rows
ALTER TABLE r1 NO FORCE ROW LEVEL SECURITY;
TABLE r1;
-- reset value in r1 for test with RETURNING
UPDATE r1 SET a = 10;

-- Verify row reset
TABLE r1;

ALTER TABLE r1 FORCE ROW LEVEL SECURITY;

-- Error
UPDATE r1 SET a = 30 RETURNING *;

-- UPDATE path of INSERT ... ON CONFLICT DO UPDATE should also error out
INSERT INTO r1 VALUES (10)
    ON CONFLICT (a) DO UPDATE SET a = 30 RETURNING *;

-- Should still error out without RETURNING (use of arbiter always requires
-- SELECT permissions)
INSERT INTO r1 VALUES (10)
    ON CONFLICT (a) DO UPDATE SET a = 30;
INSERT INTO r1 VALUES (10)
    ON CONFLICT ON CONSTRAINT r1_pkey DO UPDATE SET a = 30;

DROP TABLE r1;

-- Check dependency handling
RESET SESSION AUTHORIZATION;
CREATE TABLE dep1 (c1 int);
CREATE TABLE dep2 (c1 int);

CREATE POLICY dep_p1 ON dep1 TO regress_rls_bob USING (c1 > (select max(dep2.c1) from dep2));
ALTER POLICY dep_p1 ON dep1 TO regress_rls_bob,regress_rls_carol;

-- Should return one
SELECT count(*) = 1 FROM pg_depend
				   WHERE objid = (SELECT oid FROM pg_policy WHERE polname = 'dep_p1')
					 AND refobjid = (SELECT oid FROM pg_class WHERE relname = 'dep2');

ALTER POLICY dep_p1 ON dep1 USING (true);

-- Should return one
SELECT count(*) = 1 FROM pg_shdepend
				   WHERE objid = (SELECT oid FROM pg_policy WHERE polname = 'dep_p1')
					 AND refobjid = (SELECT oid FROM pg_authid WHERE rolname = 'regress_rls_bob');

-- Should return one
SELECT count(*) = 1 FROM pg_shdepend
				   WHERE objid = (SELECT oid FROM pg_policy WHERE polname = 'dep_p1')
					 AND refobjid = (SELECT oid FROM pg_authid WHERE rolname = 'regress_rls_carol');

-- Should return zero
SELECT count(*) = 0 FROM pg_depend
				   WHERE objid = (SELECT oid FROM pg_policy WHERE polname = 'dep_p1')
					 AND refobjid = (SELECT oid FROM pg_class WHERE relname = 'dep2');

-- DROP OWNED BY testing
RESET SESSION AUTHORIZATION;

CREATE ROLE regress_rls_dob_role1;
CREATE ROLE regress_rls_dob_role2;

CREATE TABLE dob_t1 (c1 int);
CREATE TABLE dob_t2 (c1 int) PARTITION BY RANGE (c1);

CREATE POLICY p1 ON dob_t1 TO regress_rls_dob_role1 USING (true);
DROP OWNED BY regress_rls_dob_role1;
DROP POLICY p1 ON dob_t1; -- should fail, already gone

CREATE POLICY p1 ON dob_t1 TO regress_rls_dob_role1,regress_rls_dob_role2 USING (true);
DROP OWNED BY regress_rls_dob_role1;
DROP POLICY p1 ON dob_t1; -- should succeed

-- same cases with duplicate polroles entries
CREATE POLICY p1 ON dob_t1 TO regress_rls_dob_role1,regress_rls_dob_role1 USING (true);
DROP OWNED BY regress_rls_dob_role1;
DROP POLICY p1 ON dob_t1; -- should fail, already gone

CREATE POLICY p1 ON dob_t1 TO regress_rls_dob_role1,regress_rls_dob_role1,regress_rls_dob_role2 USING (true);
DROP OWNED BY regress_rls_dob_role1;
DROP POLICY p1 ON dob_t1; -- should succeed

-- partitioned target
CREATE POLICY p1 ON dob_t2 TO regress_rls_dob_role1,regress_rls_dob_role2 USING (true);
DROP OWNED BY regress_rls_dob_role1;
DROP POLICY p1 ON dob_t2; -- should succeed

DROP USER regress_rls_dob_role1;
DROP USER regress_rls_dob_role2;

-- Bug #15708: view + table with RLS should check policies as view owner
CREATE TABLE ref_tbl (a int);
INSERT INTO ref_tbl VALUES (1);

CREATE TABLE rls_tbl (a int);
INSERT INTO rls_tbl VALUES (10);
ALTER TABLE rls_tbl ENABLE ROW LEVEL SECURITY;
CREATE POLICY p1 ON rls_tbl USING (EXISTS (SELECT 1 FROM ref_tbl));

GRANT SELECT ON ref_tbl TO regress_rls_bob;
GRANT SELECT ON rls_tbl TO regress_rls_bob;

CREATE VIEW rls_view AS SELECT * FROM rls_tbl;
ALTER VIEW rls_view OWNER TO regress_rls_bob;
GRANT SELECT ON rls_view TO regress_rls_alice;

SET SESSION AUTHORIZATION regress_rls_alice;
SELECT * FROM ref_tbl; -- Permission denied
SELECT * FROM rls_tbl; -- Permission denied
SELECT * FROM rls_view; -- OK
RESET SESSION AUTHORIZATION;

DROP VIEW rls_view;
DROP TABLE rls_tbl;
DROP TABLE ref_tbl;

-- Leaky operator test
CREATE TABLE rls_tbl (a int);
INSERT INTO rls_tbl SELECT x/10 FROM generate_series(1, 100) x;
ANALYZE rls_tbl;

ALTER TABLE rls_tbl ENABLE ROW LEVEL SECURITY;
GRANT SELECT ON rls_tbl TO regress_rls_alice;

SET SESSION AUTHORIZATION regress_rls_alice;
CREATE FUNCTION op_leak(int, int) RETURNS bool
    AS 'BEGIN RAISE NOTICE ''op_leak => %, %'', $1, $2; RETURN $1 < $2; END'
    LANGUAGE plpgsql;
CREATE OPERATOR <<< (procedure = op_leak, leftarg = int, rightarg = int,
                     restrict = scalarltsel);
SELECT * FROM rls_tbl WHERE a <<< 1000;
DROP OPERATOR <<< (int, int);
DROP FUNCTION op_leak(int, int);
RESET SESSION AUTHORIZATION;
DROP TABLE rls_tbl;

-- Bug #16006: whole-row Vars in a policy don't play nice with sub-selects
SET SESSION AUTHORIZATION regress_rls_alice;
CREATE TABLE rls_tbl (a int, b int, c int);
CREATE POLICY p1 ON rls_tbl USING (rls_tbl >= ROW(1,1,1));

ALTER TABLE rls_tbl ENABLE ROW LEVEL SECURITY;
ALTER TABLE rls_tbl FORCE ROW LEVEL SECURITY;

INSERT INTO rls_tbl SELECT 10, 20, 30;
EXPLAIN (VERBOSE, COSTS OFF)
INSERT INTO rls_tbl
  SELECT * FROM (SELECT b, c FROM rls_tbl ORDER BY a) ss;
INSERT INTO rls_tbl
  SELECT * FROM (SELECT b, c FROM rls_tbl ORDER BY a) ss;
SELECT * FROM rls_tbl;

DROP TABLE rls_tbl;
RESET SESSION AUTHORIZATION;

--
-- Clean up objects
--
RESET SESSION AUTHORIZATION;

DROP SCHEMA regress_rls_schema CASCADE;

DROP USER regress_rls_alice;
DROP USER regress_rls_bob;
DROP USER regress_rls_carol;
DROP USER regress_rls_dave;
DROP USER regress_rls_exempt_user;
DROP ROLE regress_rls_group1;
DROP ROLE regress_rls_group2;

-- Arrange to have a few policies left over, for testing
-- pg_dump/pg_restore
CREATE SCHEMA regress_rls_schema;
CREATE TABLE rls_tbl (c1 int);
ALTER TABLE rls_tbl ENABLE ROW LEVEL SECURITY;
CREATE POLICY p1 ON rls_tbl USING (c1 > 5);
CREATE POLICY p2 ON rls_tbl FOR SELECT USING (c1 <= 3);
CREATE POLICY p3 ON rls_tbl FOR UPDATE USING (c1 <= 3) WITH CHECK (c1 > 5);
CREATE POLICY p4 ON rls_tbl FOR DELETE USING (c1 <= 3);

CREATE TABLE rls_tbl_force (c1 int);
ALTER TABLE rls_tbl_force ENABLE ROW LEVEL SECURITY;
ALTER TABLE rls_tbl_force FORCE ROW LEVEL SECURITY;
CREATE POLICY p1 ON rls_tbl_force USING (c1 = 5) WITH CHECK (c1 < 5);
CREATE POLICY p2 ON rls_tbl_force FOR SELECT USING (c1 = 8);
CREATE POLICY p3 ON rls_tbl_force FOR UPDATE USING (c1 = 8) WITH CHECK (c1 >= 5);
CREATE POLICY p4 ON rls_tbl_force FOR DELETE USING (c1 = 8);
