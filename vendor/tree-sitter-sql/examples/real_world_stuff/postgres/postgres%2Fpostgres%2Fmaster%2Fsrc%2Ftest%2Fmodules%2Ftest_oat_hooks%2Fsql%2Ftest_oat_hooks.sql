-- Creating privileges on a placeholder GUC should create entries in the
-- pg_parameter_acl catalog which conservatively grant no privileges to public.
CREATE ROLE regress_role_joe;
GRANT SET ON PARAMETER test_oat_hooks.user_var1 TO regress_role_joe;
GRANT SET ON PARAMETER test_oat_hooks.super_var1 TO regress_role_joe;

-- SET commands fire both the ProcessUtility_hook and the
-- object_access_hook_str.  Since the auditing GUC starts out false, we miss the
-- initial "attempting" audit message from the ProcessUtility_hook, but we
-- should thereafter see the audit messages.
LOAD 'test_oat_hooks';
SET test_oat_hooks.audit = true;

-- Creating privileges on an existent custom GUC should create precisely the
-- right privileges, not overly conservative ones.
GRANT SET ON PARAMETER test_oat_hooks.user_var2 TO regress_role_joe;
GRANT SET ON PARAMETER test_oat_hooks.super_var2 TO regress_role_joe;

-- Granting multiple privileges on a parameter should be reported correctly to
-- the OAT hook, but beware that WITH GRANT OPTION is not represented.
GRANT SET, ALTER SYSTEM ON PARAMETER none.such TO regress_role_joe;
GRANT SET, ALTER SYSTEM ON PARAMETER another.bogus TO regress_role_joe WITH GRANT OPTION;

-- Check when the hooks fire relative to dependency based abort of a drop
DROP ROLE regress_role_joe;

-- Check the behavior of the hooks relative to do-nothing grants and revokes
GRANT SET ON PARAMETER work_mem TO PUBLIC;
REVOKE ALTER SYSTEM ON PARAMETER work_mem FROM PUBLIC;

-- Check the behavior of the hooks relative to unrecognized parameters
GRANT ALL ON PARAMETER "none.such" TO PUBLIC;

-- Check relative to an operation that causes the catalog entry to be deleted
REVOKE ALL ON PARAMETER "none.such" FROM PUBLIC;

-- Create objects for use in the test
CREATE USER regress_test_user;
CREATE TABLE regress_test_table (t text);
GRANT SELECT ON Table regress_test_table TO public;
CREATE FUNCTION regress_test_func (t text) RETURNS text AS $$
	SELECT $1;
$$ LANGUAGE sql;
GRANT EXECUTE ON FUNCTION regress_test_func (text) TO public;

-- Do a few things as superuser
SELECT * FROM regress_test_table;
SELECT regress_test_func('arg');
SET work_mem = 8192;
RESET work_mem;
ALTER SYSTEM SET work_mem = 8192;
ALTER SYSTEM RESET work_mem;

-- Do those same things as non-superuser
SET SESSION AUTHORIZATION regress_test_user;
SELECT * FROM regress_test_table;
SELECT regress_test_func('arg');
SET work_mem = 8192;
RESET work_mem;
ALTER SYSTEM SET work_mem = 8192;
ALTER SYSTEM RESET work_mem;

SET test_oat_hooks.user_var1 = true;
SET test_oat_hooks.super_var1 = true;
ALTER SYSTEM SET test_oat_hooks.user_var1 = true;
ALTER SYSTEM SET test_oat_hooks.super_var1 = true;
SET test_oat_hooks.user_var2 = true;
SET test_oat_hooks.super_var2 = true;
ALTER SYSTEM SET test_oat_hooks.user_var2 = true;
ALTER SYSTEM SET test_oat_hooks.super_var2 = true;

RESET SESSION AUTHORIZATION;

-- Turn off non-superuser permissions
SET test_oat_hooks.deny_set_variable = true;
SET test_oat_hooks.deny_alter_system = true;
SET test_oat_hooks.deny_object_access = true;
SET test_oat_hooks.deny_exec_perms = true;
SET test_oat_hooks.deny_utility_commands = true;

-- Try again as non-superuser with permissions denied
SET SESSION AUTHORIZATION regress_test_user;
SELECT * FROM regress_test_table;
SELECT regress_test_func('arg');
SET work_mem = 8192;
RESET work_mem;
ALTER SYSTEM SET work_mem = 8192;
ALTER SYSTEM RESET work_mem;

-- Clean up
RESET SESSION AUTHORIZATION;

SET test_oat_hooks.audit = false;
DROP ROLE regress_role_joe;  -- fails
REVOKE ALL PRIVILEGES ON PARAMETER
	none.such, another.bogus,
	test_oat_hooks.user_var1, test_oat_hooks.super_var1,
	test_oat_hooks.user_var2, test_oat_hooks.super_var2
	FROM regress_role_joe;
DROP ROLE regress_role_joe;
