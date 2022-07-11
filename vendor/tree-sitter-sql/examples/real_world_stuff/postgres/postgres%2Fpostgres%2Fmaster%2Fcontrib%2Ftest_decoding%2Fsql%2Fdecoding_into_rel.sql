-- test that we can insert the result of a get_changes call into a
-- logged relation. That's really not a good idea in practical terms,
-- but provides a nice test.

-- predictability
SET synchronous_commit = on;

SELECT 'init' FROM pg_create_logical_replication_slot('regression_slot', 'test_decoding');

-- slot works
SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

-- create some changes
CREATE TABLE somechange(id serial primary key);
INSERT INTO somechange DEFAULT VALUES;

CREATE TABLE changeresult AS
    SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

SELECT * FROM changeresult;

INSERT INTO changeresult
    SELECT data FROM pg_logical_slot_peek_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');
INSERT INTO changeresult
    SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

SELECT * FROM changeresult;
DROP TABLE changeresult;
DROP TABLE somechange;

-- check calling logical decoding from pl/pgsql
CREATE FUNCTION slot_changes_wrapper(slot_name name) RETURNS SETOF TEXT AS $$
BEGIN
  RETURN QUERY
    SELECT data FROM pg_logical_slot_peek_changes(slot_name, NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');
END$$ LANGUAGE plpgsql;

SELECT * FROM slot_changes_wrapper('regression_slot');

SELECT data FROM pg_logical_slot_get_changes('regression_slot', NULL, NULL, 'include-xids', '0', 'skip-empty-xacts', '1');

SELECT 'stop' FROM pg_drop_replication_slot('regression_slot');
