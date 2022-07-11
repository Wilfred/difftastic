-- first some tests of basic functionality
CREATE EXTENSION plpython3u;

-- really stupid function just to get the module loaded
CREATE FUNCTION stupid() RETURNS text AS 'return "zarkon"' LANGUAGE plpython3u;

select stupid();

-- check 2/3 versioning
CREATE FUNCTION stupidn() RETURNS text AS 'return "zarkon"' LANGUAGE plpython3u;

select stupidn();

-- test multiple arguments and odd characters in function name
CREATE FUNCTION "Argument test #1"(u users, a1 text, a2 text) RETURNS text
	AS
'keys = list(u.keys())
keys.sort()
out = []
for key in keys:
    out.append("%s: %s" % (key, u[key]))
words = a1 + " " + a2 + " => {" + ", ".join(out) + "}"
return words'
	LANGUAGE plpython3u;

select "Argument test #1"(users, fname, lname) from users where lname = 'doe' order by 1;


-- check module contents
CREATE FUNCTION module_contents() RETURNS SETOF text AS
$$
contents = list(filter(lambda x: not x.startswith("__"), dir(plpy)))
contents.sort()
return contents
$$ LANGUAGE plpython3u;

select module_contents();

CREATE FUNCTION elog_test_basic() RETURNS void
AS $$
plpy.debug('debug')
plpy.log('log')
plpy.info('info')
plpy.info(37)
plpy.info()
plpy.info('info', 37, [1, 2, 3])
plpy.notice('notice')
plpy.warning('warning')
plpy.error('error')
$$ LANGUAGE plpython3u;

SELECT elog_test_basic();
