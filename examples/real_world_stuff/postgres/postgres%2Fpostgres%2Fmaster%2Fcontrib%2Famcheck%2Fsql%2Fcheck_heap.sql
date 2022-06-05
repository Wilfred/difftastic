CREATE TABLE heaptest (a integer, b text);
REVOKE ALL ON heaptest FROM PUBLIC;

-- Check that invalid skip option is rejected
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'rope');

-- Check specifying invalid block ranges when verifying an empty table
SELECT * FROM verify_heapam(relation := 'heaptest', startblock := 0, endblock := 0);
SELECT * FROM verify_heapam(relation := 'heaptest', startblock := 5, endblock := 8);

-- Check that valid options are not rejected nor corruption reported
-- for an empty table, and that skip enum-like parameter is case-insensitive
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'none');
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'all-frozen');
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'all-visible');
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'None');
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'All-Frozen');
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'All-Visible');
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'NONE');
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'ALL-FROZEN');
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'ALL-VISIBLE');

-- Add some data so subsequent tests are not entirely trivial
INSERT INTO heaptest (a, b)
	(SELECT gs, repeat('x', gs)
		FROM generate_series(1,50) gs);

-- Check that valid options are not rejected nor corruption reported
-- for a non-empty table
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'none');
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'all-frozen');
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'all-visible');
SELECT * FROM verify_heapam(relation := 'heaptest', startblock := 0, endblock := 0);

CREATE ROLE regress_heaptest_role;

-- verify permissions are checked (error due to function not callable)
SET ROLE regress_heaptest_role;
SELECT * FROM verify_heapam(relation := 'heaptest');
RESET ROLE;

GRANT EXECUTE ON FUNCTION verify_heapam(regclass, boolean, boolean, text, bigint, bigint) TO regress_heaptest_role;

-- verify permissions are now sufficient
SET ROLE regress_heaptest_role;
SELECT * FROM verify_heapam(relation := 'heaptest');
RESET ROLE;

-- Check specifying invalid block ranges when verifying a non-empty table.
SELECT * FROM verify_heapam(relation := 'heaptest', startblock := 0, endblock := 10000);
SELECT * FROM verify_heapam(relation := 'heaptest', startblock := 10000, endblock := 11000);

-- Vacuum freeze to change the xids encountered in subsequent tests
VACUUM (FREEZE, DISABLE_PAGE_SKIPPING) heaptest;

-- Check that valid options are not rejected nor corruption reported
-- for a non-empty frozen table
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'none');
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'all-frozen');
SELECT * FROM verify_heapam(relation := 'heaptest', skip := 'all-visible');
SELECT * FROM verify_heapam(relation := 'heaptest', startblock := 0, endblock := 0);

-- Check that partitioned tables (the parent ones) which don't have visibility
-- maps are rejected
CREATE TABLE test_partitioned (a int, b text default repeat('x', 5000))
			 PARTITION BY list (a);
SELECT * FROM verify_heapam('test_partitioned',
							startblock := NULL,
							endblock := NULL);

-- Check that valid options are not rejected nor corruption reported
-- for an empty partition table (the child one)
CREATE TABLE test_partition partition OF test_partitioned FOR VALUES IN (1);
SELECT * FROM verify_heapam('test_partition',
							startblock := NULL,
							endblock := NULL);

-- Check that valid options are not rejected nor corruption reported
-- for a non-empty partition table (the child one)
INSERT INTO test_partitioned (a) (SELECT 1 FROM generate_series(1,1000) gs);
SELECT * FROM verify_heapam('test_partition',
							startblock := NULL,
							endblock := NULL);

-- Check that indexes are rejected
CREATE INDEX test_index ON test_partition (a);
SELECT * FROM verify_heapam('test_index',
							startblock := NULL,
							endblock := NULL);

-- Check that views are rejected
CREATE VIEW test_view AS SELECT 1;
SELECT * FROM verify_heapam('test_view',
							startblock := NULL,
							endblock := NULL);

-- Check that sequences are rejected
CREATE SEQUENCE test_sequence;
SELECT * FROM verify_heapam('test_sequence',
							startblock := NULL,
							endblock := NULL);

-- Check that foreign tables are rejected
CREATE FOREIGN DATA WRAPPER dummy;
CREATE SERVER dummy_server FOREIGN DATA WRAPPER dummy;
CREATE FOREIGN TABLE test_foreign_table () SERVER dummy_server;
SELECT * FROM verify_heapam('test_foreign_table',
							startblock := NULL,
							endblock := NULL);

-- cleanup
DROP TABLE heaptest;
DROP TABLE test_partition;
DROP TABLE test_partitioned;
DROP OWNED BY regress_heaptest_role; -- permissions
DROP ROLE regress_heaptest_role;
