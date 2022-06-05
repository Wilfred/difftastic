--
-- Test returning SETOF
--

CREATE FUNCTION test_setof_error() RETURNS SETOF text AS $$
return 37
$$ LANGUAGE plpython3u;

SELECT test_setof_error();


CREATE FUNCTION test_setof_as_list(count integer, content text) RETURNS SETOF text AS $$
return [ content ]*count
$$ LANGUAGE plpython3u;

CREATE FUNCTION test_setof_as_tuple(count integer, content text) RETURNS SETOF text AS $$
t = ()
for i in range(count):
	t += ( content, )
return t
$$ LANGUAGE plpython3u;

CREATE FUNCTION test_setof_as_iterator(count integer, content text) RETURNS SETOF text AS $$
class producer:
	def __init__ (self, icount, icontent):
		self.icontent = icontent
		self.icount = icount
	def __iter__ (self):
		return self
	def __next__ (self):
		if self.icount == 0:
			raise StopIteration
		self.icount -= 1
		return self.icontent
return producer(count, content)
$$ LANGUAGE plpython3u;

CREATE FUNCTION test_setof_spi_in_iterator() RETURNS SETOF text AS
$$
    for s in ('Hello', 'Brave', 'New', 'World'):
        plpy.execute('select 1')
        yield s
        plpy.execute('select 2')
$$
LANGUAGE plpython3u;


-- Test set returning functions
SELECT test_setof_as_list(0, 'list');
SELECT test_setof_as_list(1, 'list');
SELECT test_setof_as_list(2, 'list');
SELECT test_setof_as_list(2, null);

SELECT test_setof_as_tuple(0, 'tuple');
SELECT test_setof_as_tuple(1, 'tuple');
SELECT test_setof_as_tuple(2, 'tuple');
SELECT test_setof_as_tuple(2, null);

SELECT test_setof_as_iterator(0, 'list');
SELECT test_setof_as_iterator(1, 'list');
SELECT test_setof_as_iterator(2, 'list');
SELECT test_setof_as_iterator(2, null);

SELECT test_setof_spi_in_iterator();

-- set-returning function that modifies its parameters
CREATE OR REPLACE FUNCTION ugly(x int, lim int) RETURNS SETOF int AS $$
global x
while x <= lim:
    yield x
    x = x + 1
$$ LANGUAGE plpython3u;

SELECT ugly(1, 5);

-- interleaved execution of such a function
SELECT ugly(1,3), ugly(7,8);

-- returns set of named-composite-type tuples
CREATE OR REPLACE FUNCTION get_user_records()
RETURNS SETOF users
AS $$
    return plpy.execute("SELECT * FROM users ORDER BY username")
$$ LANGUAGE plpython3u;

SELECT get_user_records();
SELECT * FROM get_user_records();

-- same, but returning set of RECORD
CREATE OR REPLACE FUNCTION get_user_records2()
RETURNS TABLE(fname text, lname text, username text, userid int)
AS $$
    return plpy.execute("SELECT * FROM users ORDER BY username")
$$ LANGUAGE plpython3u;

SELECT get_user_records2();
SELECT * FROM get_user_records2();
