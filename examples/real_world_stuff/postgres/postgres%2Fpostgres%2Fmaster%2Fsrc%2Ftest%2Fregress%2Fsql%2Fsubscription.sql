--
-- SUBSCRIPTION
--

CREATE ROLE regress_subscription_user LOGIN SUPERUSER;
CREATE ROLE regress_subscription_user2;
CREATE ROLE regress_subscription_user_dummy LOGIN NOSUPERUSER;
SET SESSION AUTHORIZATION 'regress_subscription_user';

-- fail - no publications
CREATE SUBSCRIPTION regress_testsub CONNECTION 'foo';

-- fail - no connection
CREATE SUBSCRIPTION regress_testsub PUBLICATION foo;

-- fail - cannot do CREATE SUBSCRIPTION CREATE SLOT inside transaction block
BEGIN;
CREATE SUBSCRIPTION regress_testsub CONNECTION 'testconn' PUBLICATION testpub WITH (create_slot);
COMMIT;

-- fail - invalid connection string
CREATE SUBSCRIPTION regress_testsub CONNECTION 'testconn' PUBLICATION testpub;

-- fail - duplicate publications
CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION foo, testpub, foo WITH (connect = false);

-- ok
CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false);

COMMENT ON SUBSCRIPTION regress_testsub IS 'test subscription';
SELECT obj_description(s.oid, 'pg_subscription') FROM pg_subscription s;

-- fail - name already exists
CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false);

-- fail - must be superuser
SET SESSION AUTHORIZATION 'regress_subscription_user2';
CREATE SUBSCRIPTION regress_testsub2 CONNECTION 'dbname=regress_doesnotexist' PUBLICATION foo WITH (connect = false);
SET SESSION AUTHORIZATION 'regress_subscription_user';

-- fail - invalid option combinations
CREATE SUBSCRIPTION regress_testsub2 CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false, copy_data = true);
CREATE SUBSCRIPTION regress_testsub2 CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false, enabled = true);
CREATE SUBSCRIPTION regress_testsub2 CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false, create_slot = true);
CREATE SUBSCRIPTION regress_testsub2 CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (slot_name = NONE, enabled = true);
CREATE SUBSCRIPTION regress_testsub2 CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (slot_name = NONE, enabled = false, create_slot = true);
CREATE SUBSCRIPTION regress_testsub2 CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (slot_name = NONE);
CREATE SUBSCRIPTION regress_testsub2 CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (slot_name = NONE, enabled = false);
CREATE SUBSCRIPTION regress_testsub2 CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (slot_name = NONE, create_slot = false);

-- ok - with slot_name = NONE
CREATE SUBSCRIPTION regress_testsub3 CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (slot_name = NONE, connect = false);
-- fail
ALTER SUBSCRIPTION regress_testsub3 ENABLE;
ALTER SUBSCRIPTION regress_testsub3 REFRESH PUBLICATION;

DROP SUBSCRIPTION regress_testsub3;

-- fail - invalid connection string
ALTER SUBSCRIPTION regress_testsub CONNECTION 'foobar';

\dRs+

ALTER SUBSCRIPTION regress_testsub SET PUBLICATION testpub2, testpub3 WITH (refresh = false);
ALTER SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist2';
ALTER SUBSCRIPTION regress_testsub SET (slot_name = 'newname');

-- fail
ALTER SUBSCRIPTION regress_testsub SET (slot_name = '');

-- fail
ALTER SUBSCRIPTION regress_doesnotexist CONNECTION 'dbname=regress_doesnotexist2';
ALTER SUBSCRIPTION regress_testsub SET (create_slot = false);

-- ok
ALTER SUBSCRIPTION regress_testsub SKIP (lsn = '0/12345');

\dRs+

-- ok - with lsn = NONE
ALTER SUBSCRIPTION regress_testsub SKIP (lsn = NONE);

-- fail
ALTER SUBSCRIPTION regress_testsub SKIP (lsn = '0/0');

\dRs+

BEGIN;
ALTER SUBSCRIPTION regress_testsub ENABLE;

\dRs

ALTER SUBSCRIPTION regress_testsub DISABLE;

\dRs

COMMIT;

-- fail - must be owner of subscription
SET ROLE regress_subscription_user_dummy;
ALTER SUBSCRIPTION regress_testsub RENAME TO regress_testsub_dummy;
RESET ROLE;

ALTER SUBSCRIPTION regress_testsub RENAME TO regress_testsub_foo;
ALTER SUBSCRIPTION regress_testsub_foo SET (synchronous_commit = local);
ALTER SUBSCRIPTION regress_testsub_foo SET (synchronous_commit = foobar);

\dRs+

-- rename back to keep the rest simple
ALTER SUBSCRIPTION regress_testsub_foo RENAME TO regress_testsub;

-- fail - new owner must be superuser
ALTER SUBSCRIPTION regress_testsub OWNER TO regress_subscription_user2;
ALTER ROLE regress_subscription_user2 SUPERUSER;
-- now it works
ALTER SUBSCRIPTION regress_testsub OWNER TO regress_subscription_user2;

-- fail - cannot do DROP SUBSCRIPTION inside transaction block with slot name
BEGIN;
DROP SUBSCRIPTION regress_testsub;
COMMIT;

ALTER SUBSCRIPTION regress_testsub SET (slot_name = NONE);

-- now it works
BEGIN;
DROP SUBSCRIPTION regress_testsub;
COMMIT;

DROP SUBSCRIPTION IF EXISTS regress_testsub;
DROP SUBSCRIPTION regress_testsub;  -- fail

-- fail - binary must be boolean
CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false, binary = foo);

-- now it works
CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false, binary = true);

\dRs+

ALTER SUBSCRIPTION regress_testsub SET (binary = false);
ALTER SUBSCRIPTION regress_testsub SET (slot_name = NONE);

\dRs+

DROP SUBSCRIPTION regress_testsub;

-- fail - streaming must be boolean
CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false, streaming = foo);

-- now it works
CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false, streaming = true);

\dRs+

ALTER SUBSCRIPTION regress_testsub SET (streaming = false);
ALTER SUBSCRIPTION regress_testsub SET (slot_name = NONE);

\dRs+

-- fail - publication already exists
ALTER SUBSCRIPTION regress_testsub ADD PUBLICATION testpub WITH (refresh = false);

-- fail - publication used more than once
ALTER SUBSCRIPTION regress_testsub ADD PUBLICATION testpub1, testpub1 WITH (refresh = false);

-- ok - add two publications into subscription
ALTER SUBSCRIPTION regress_testsub ADD PUBLICATION testpub1, testpub2 WITH (refresh = false);

-- fail - publications already exist
ALTER SUBSCRIPTION regress_testsub ADD PUBLICATION testpub1, testpub2 WITH (refresh = false);

\dRs+

-- fail - publication used more then once
ALTER SUBSCRIPTION regress_testsub DROP PUBLICATION testpub1, testpub1 WITH (refresh = false);

-- fail - all publications are deleted
ALTER SUBSCRIPTION regress_testsub DROP PUBLICATION testpub, testpub1, testpub2 WITH (refresh = false);

-- fail - publication does not exist in subscription
ALTER SUBSCRIPTION regress_testsub DROP PUBLICATION testpub3 WITH (refresh = false);

-- ok - delete publications
ALTER SUBSCRIPTION regress_testsub DROP PUBLICATION testpub1, testpub2 WITH (refresh = false);

\dRs+

DROP SUBSCRIPTION regress_testsub;

CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION mypub
       WITH (connect = false, create_slot = false, copy_data = false);

ALTER SUBSCRIPTION regress_testsub ENABLE;

-- fail - ALTER SUBSCRIPTION with refresh is not allowed in a transaction
-- block or function
BEGIN;
ALTER SUBSCRIPTION regress_testsub SET PUBLICATION mypub WITH (refresh = true);
END;

BEGIN;
ALTER SUBSCRIPTION regress_testsub REFRESH PUBLICATION;
END;

CREATE FUNCTION func() RETURNS VOID AS
$$ ALTER SUBSCRIPTION regress_testsub SET PUBLICATION mypub WITH (refresh = true) $$ LANGUAGE SQL;
SELECT func();

ALTER SUBSCRIPTION regress_testsub DISABLE;
ALTER SUBSCRIPTION regress_testsub SET (slot_name = NONE);
DROP SUBSCRIPTION regress_testsub;
DROP FUNCTION func;

-- fail - two_phase must be boolean
CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false, two_phase = foo);

-- now it works
CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false, two_phase = true);

\dRs+
--fail - alter of two_phase option not supported.
ALTER SUBSCRIPTION regress_testsub SET (two_phase = false);

-- but can alter streaming when two_phase enabled
ALTER SUBSCRIPTION regress_testsub SET (streaming = true);

\dRs+

ALTER SUBSCRIPTION regress_testsub SET (slot_name = NONE);
DROP SUBSCRIPTION regress_testsub;

-- two_phase and streaming are compatible.
CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false, streaming = true, two_phase = true);

\dRs+

ALTER SUBSCRIPTION regress_testsub SET (slot_name = NONE);
DROP SUBSCRIPTION regress_testsub;

-- fail - disable_on_error must be boolean
CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false, disable_on_error = foo);

-- now it works
CREATE SUBSCRIPTION regress_testsub CONNECTION 'dbname=regress_doesnotexist' PUBLICATION testpub WITH (connect = false, disable_on_error = false);

\dRs+

ALTER SUBSCRIPTION regress_testsub SET (disable_on_error = true);

\dRs+

ALTER SUBSCRIPTION regress_testsub SET (slot_name = NONE);
DROP SUBSCRIPTION regress_testsub;

RESET SESSION AUTHORIZATION;
DROP ROLE regress_subscription_user;
DROP ROLE regress_subscription_user2;
DROP ROLE regress_subscription_user_dummy;
