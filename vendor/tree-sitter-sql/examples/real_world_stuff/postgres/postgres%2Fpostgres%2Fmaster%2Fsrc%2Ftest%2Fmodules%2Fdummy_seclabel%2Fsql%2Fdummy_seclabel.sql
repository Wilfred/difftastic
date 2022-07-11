--
-- Test for facilities of security label
--
CREATE EXTENSION dummy_seclabel;

-- initial setups
SET client_min_messages TO 'warning';

DROP ROLE IF EXISTS regress_dummy_seclabel_user1;
DROP ROLE IF EXISTS regress_dummy_seclabel_user2;

RESET client_min_messages;

CREATE USER regress_dummy_seclabel_user1 WITH CREATEROLE;
CREATE USER regress_dummy_seclabel_user2;

CREATE TABLE dummy_seclabel_tbl1 (a int, b text);
CREATE TABLE dummy_seclabel_tbl2 (x int, y text);
CREATE VIEW dummy_seclabel_view1 AS SELECT * FROM dummy_seclabel_tbl2;
CREATE FUNCTION dummy_seclabel_four() RETURNS integer AS $$SELECT 4$$ language sql;
CREATE DOMAIN dummy_seclabel_domain AS text;

ALTER TABLE dummy_seclabel_tbl1 OWNER TO regress_dummy_seclabel_user1;
ALTER TABLE dummy_seclabel_tbl2 OWNER TO regress_dummy_seclabel_user2;

--
-- Test of SECURITY LABEL statement with a plugin
--
SET SESSION AUTHORIZATION regress_dummy_seclabel_user1;

SECURITY LABEL ON TABLE dummy_seclabel_tbl1 IS 'classified';			-- OK
SECURITY LABEL ON COLUMN dummy_seclabel_tbl1.a IS 'unclassified';		-- OK
SECURITY LABEL ON COLUMN dummy_seclabel_tbl1 IS 'unclassified';	-- fail
SECURITY LABEL ON TABLE dummy_seclabel_tbl1 IS '...invalid label...';	-- fail
SECURITY LABEL FOR 'dummy' ON TABLE dummy_seclabel_tbl1 IS 'unclassified';	-- OK
SECURITY LABEL FOR 'unknown_seclabel' ON TABLE dummy_seclabel_tbl1 IS 'classified';	-- fail
SECURITY LABEL ON TABLE dummy_seclabel_tbl2 IS 'unclassified';	-- fail (not owner)
SECURITY LABEL ON TABLE dummy_seclabel_tbl1 IS 'secret';		-- fail (not superuser)
SECURITY LABEL ON TABLE dummy_seclabel_tbl3 IS 'unclassified';	-- fail (not found)

SET SESSION AUTHORIZATION regress_dummy_seclabel_user2;
SECURITY LABEL ON TABLE dummy_seclabel_tbl1 IS 'unclassified';		-- fail
SECURITY LABEL ON TABLE dummy_seclabel_tbl2 IS 'classified';			-- OK

--
-- Test for shared database object
--
SET SESSION AUTHORIZATION regress_dummy_seclabel_user1;

SECURITY LABEL ON ROLE regress_dummy_seclabel_user1 IS 'classified';			-- OK
SECURITY LABEL ON ROLE regress_dummy_seclabel_user1 IS '...invalid label...';	-- fail
SECURITY LABEL FOR 'dummy' ON ROLE regress_dummy_seclabel_user2 IS 'unclassified';	-- OK
SECURITY LABEL FOR 'unknown_seclabel' ON ROLE regress_dummy_seclabel_user1 IS 'unclassified';	-- fail
SECURITY LABEL ON ROLE regress_dummy_seclabel_user1 IS 'secret';	-- fail (not superuser)
SECURITY LABEL ON ROLE regress_dummy_seclabel_user3 IS 'unclassified';	-- fail (not found)

SET SESSION AUTHORIZATION regress_dummy_seclabel_user2;
SECURITY LABEL ON ROLE regress_dummy_seclabel_user2 IS 'unclassified';	-- fail (not privileged)

RESET SESSION AUTHORIZATION;

--
-- Test for various types of object
--
RESET SESSION AUTHORIZATION;

SECURITY LABEL ON TABLE dummy_seclabel_tbl1 IS 'top secret';			-- OK
SECURITY LABEL ON VIEW dummy_seclabel_view1 IS 'classified';			-- OK
SECURITY LABEL ON FUNCTION dummy_seclabel_four() IS 'classified';		-- OK
SECURITY LABEL ON DOMAIN dummy_seclabel_domain IS 'classified';		-- OK
CREATE SCHEMA dummy_seclabel_test;
SECURITY LABEL ON SCHEMA dummy_seclabel_test IS 'unclassified';		-- OK

SET client_min_messages = error;
CREATE PUBLICATION dummy_pub;
CREATE SUBSCRIPTION dummy_sub CONNECTION '' PUBLICATION foo WITH (connect = false, slot_name = NONE);
RESET client_min_messages;
SECURITY LABEL ON PUBLICATION dummy_pub IS 'classified';
SECURITY LABEL ON SUBSCRIPTION dummy_sub IS 'classified';

SELECT objtype, objname, provider, label FROM pg_seclabels
	ORDER BY objtype, objname;

-- check for event trigger
CREATE FUNCTION event_trigger_test()
RETURNS event_trigger AS $$
  BEGIN RAISE NOTICE 'event %: %', TG_EVENT, TG_TAG; END;
$$ LANGUAGE plpgsql;

CREATE EVENT TRIGGER always_start ON ddl_command_start
EXECUTE PROCEDURE event_trigger_test();

CREATE EVENT TRIGGER always_end ON ddl_command_end
EXECUTE PROCEDURE event_trigger_test();

CREATE EVENT TRIGGER always_drop ON sql_drop
EXECUTE PROCEDURE event_trigger_test();

CREATE EVENT TRIGGER always_rewrite ON table_rewrite
EXECUTE PROCEDURE event_trigger_test();

-- should trigger ddl_command_{start,end}
SECURITY LABEL ON TABLE dummy_seclabel_tbl1 IS 'classified';

-- clean up
DROP EVENT TRIGGER always_start, always_end, always_drop, always_rewrite;

DROP VIEW dummy_seclabel_view1;
DROP TABLE dummy_seclabel_tbl1, dummy_seclabel_tbl2;

DROP SUBSCRIPTION dummy_sub;
DROP PUBLICATION dummy_pub;

DROP ROLE regress_dummy_seclabel_user1;
DROP ROLE regress_dummy_seclabel_user2;
