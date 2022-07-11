--
-- SELECT_VIEWS
-- test the views defined in CREATE_VIEWS
--

SELECT * FROM street;

SELECT name, #thepath FROM iexit ORDER BY name COLLATE "C", 2;

SELECT * FROM toyemp WHERE name = 'sharon';

--
-- Test for Leaky view scenario
--
CREATE ROLE regress_alice;

CREATE FUNCTION f_leak (text)
       RETURNS bool LANGUAGE 'plpgsql' COST 0.0000001
       AS 'BEGIN RAISE NOTICE ''f_leak => %'', $1; RETURN true; END';

CREATE TABLE customer (
       cid      int primary key,
       name     text not null,
       tel      text,
       passwd	text
);

CREATE TABLE credit_card (
       cid      int references customer(cid),
       cnum     text,
       climit   int
);

CREATE TABLE credit_usage (
       cid      int references customer(cid),
       ymd      date,
       usage    int
);

INSERT INTO customer
       VALUES (101, 'regress_alice', '+81-12-3456-7890', 'passwd123'),
              (102, 'regress_bob',   '+01-234-567-8901', 'beafsteak'),
              (103, 'regress_eve',   '+49-8765-43210',   'hamburger');
INSERT INTO credit_card
       VALUES (101, '1111-2222-3333-4444', 4000),
              (102, '5555-6666-7777-8888', 3000),
              (103, '9801-2345-6789-0123', 2000);
INSERT INTO credit_usage
       VALUES (101, '2011-09-15', 120),
	      (101, '2011-10-05',  90),
	      (101, '2011-10-18', 110),
	      (101, '2011-10-21', 200),
	      (101, '2011-11-10',  80),
	      (102, '2011-09-22', 300),
	      (102, '2011-10-12', 120),
	      (102, '2011-10-28', 200),
	      (103, '2011-10-15', 480);

CREATE VIEW my_property_normal AS
       SELECT * FROM customer WHERE name = current_user;
CREATE VIEW my_property_secure WITH (security_barrier) AS
       SELECT * FROM customer WHERE name = current_user;

CREATE VIEW my_credit_card_normal AS
       SELECT * FROM customer l NATURAL JOIN credit_card r
       WHERE l.name = current_user;
CREATE VIEW my_credit_card_secure WITH (security_barrier) AS
       SELECT * FROM customer l NATURAL JOIN credit_card r
       WHERE l.name = current_user;

CREATE VIEW my_credit_card_usage_normal AS
       SELECT * FROM my_credit_card_secure l NATURAL JOIN credit_usage r;
CREATE VIEW my_credit_card_usage_secure WITH (security_barrier) AS
       SELECT * FROM my_credit_card_secure l NATURAL JOIN credit_usage r;

GRANT SELECT ON my_property_normal TO public;
GRANT SELECT ON my_property_secure TO public;
GRANT SELECT ON my_credit_card_normal TO public;
GRANT SELECT ON my_credit_card_secure TO public;
GRANT SELECT ON my_credit_card_usage_normal TO public;
GRANT SELECT ON my_credit_card_usage_secure TO public;

--
-- Run leaky view scenarios
--
SET SESSION AUTHORIZATION regress_alice;

--
-- scenario: if a qualifier with tiny-cost is given, it shall be launched
--           prior to the security policy of the view.
--
SELECT * FROM my_property_normal WHERE f_leak(passwd);
EXPLAIN (COSTS OFF) SELECT * FROM my_property_normal WHERE f_leak(passwd);

SELECT * FROM my_property_secure WHERE f_leak(passwd);
EXPLAIN (COSTS OFF) SELECT * FROM my_property_secure WHERE f_leak(passwd);

--
-- scenario: qualifiers can be pushed down if they contain leaky functions,
--           provided they aren't passed data from inside the view.
--
SELECT * FROM my_property_normal v
		WHERE f_leak('passwd') AND f_leak(passwd);
EXPLAIN (COSTS OFF) SELECT * FROM my_property_normal v
		WHERE f_leak('passwd') AND f_leak(passwd);

SELECT * FROM my_property_secure v
		WHERE f_leak('passwd') AND f_leak(passwd);
EXPLAIN (COSTS OFF) SELECT * FROM my_property_secure v
		WHERE f_leak('passwd') AND f_leak(passwd);

--
-- scenario: if a qualifier references only one-side of a particular join-
--           tree, it shall be distributed to the most deep scan plan as
--           possible as we can.
--
SELECT * FROM my_credit_card_normal WHERE f_leak(cnum);
EXPLAIN (COSTS OFF) SELECT * FROM my_credit_card_normal WHERE f_leak(cnum);

SELECT * FROM my_credit_card_secure WHERE f_leak(cnum);
EXPLAIN (COSTS OFF) SELECT * FROM my_credit_card_secure WHERE f_leak(cnum);

--
-- scenario: an external qualifier can be pushed-down by in-front-of the
--           views with "security_barrier" attribute, except for operators
--           implemented with leakproof functions.
--
SELECT * FROM my_credit_card_usage_normal
       WHERE f_leak(cnum) AND ymd >= '2011-10-01' AND ymd < '2011-11-01';
EXPLAIN (COSTS OFF) SELECT * FROM my_credit_card_usage_normal
       WHERE f_leak(cnum) AND ymd >= '2011-10-01' AND ymd < '2011-11-01';

SELECT * FROM my_credit_card_usage_secure
       WHERE f_leak(cnum) AND ymd >= '2011-10-01' AND ymd < '2011-11-01';
EXPLAIN (COSTS OFF) SELECT * FROM my_credit_card_usage_secure
       WHERE f_leak(cnum) AND ymd >= '2011-10-01' AND ymd < '2011-11-01';

--
-- Test for the case when security_barrier gets changed between rewriter
-- and planner stage.
--
PREPARE p1 AS SELECT * FROM my_property_normal WHERE f_leak(passwd);
PREPARE p2 AS SELECT * FROM my_property_secure WHERE f_leak(passwd);
EXECUTE p1;
EXECUTE p2;
RESET SESSION AUTHORIZATION;
ALTER VIEW my_property_normal SET (security_barrier=true);
ALTER VIEW my_property_secure SET (security_barrier=false);
SET SESSION AUTHORIZATION regress_alice;
EXECUTE p1;		-- To be perform as a view with security-barrier
EXECUTE p2;		-- To be perform as a view without security-barrier

-- Cleanup.
RESET SESSION AUTHORIZATION;
DROP ROLE regress_alice;
