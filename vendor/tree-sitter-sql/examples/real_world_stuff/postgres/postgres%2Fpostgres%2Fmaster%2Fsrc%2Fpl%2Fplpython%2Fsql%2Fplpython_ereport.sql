CREATE FUNCTION elog_test() RETURNS void
AS $$
plpy.debug('debug', detail='some detail')
plpy.log('log', detail='some detail')
plpy.info('info', detail='some detail')
plpy.info()
plpy.info('the question', detail=42);
plpy.info('This is message text.',
          detail='This is detail text',
          hint='This is hint text.',
          sqlstate='XX000',
          schema_name='any info about schema',
          table_name='any info about table',
          column_name='any info about column',
          datatype_name='any info about datatype',
          constraint_name='any info about constraint')
plpy.notice('notice', detail='some detail')
plpy.warning('warning', detail='some detail')
plpy.error('stop on error', detail='some detail', hint='some hint')
$$ LANGUAGE plpython3u;

SELECT elog_test();

DO $$ plpy.info('other types', detail=(10, 20)) $$ LANGUAGE plpython3u;

DO $$
import time;
from datetime import date
plpy.info('other types', detail=date(2016, 2, 26))
$$ LANGUAGE plpython3u;

DO $$
basket = ['apple', 'orange', 'apple', 'pear', 'orange', 'banana']
plpy.info('other types', detail=basket)
$$ LANGUAGE plpython3u;

-- should fail
DO $$ plpy.info('wrong sqlstate', sqlstate='54444A') $$ LANGUAGE plpython3u;
DO $$ plpy.info('unsupported argument', blabla='fooboo') $$ LANGUAGE plpython3u;
DO $$ plpy.info('first message', message='second message') $$ LANGUAGE plpython3u;
DO $$ plpy.info('first message', 'second message', message='third message') $$ LANGUAGE plpython3u;

-- raise exception in python, handle exception in plgsql
CREATE OR REPLACE FUNCTION raise_exception(_message text, _detail text DEFAULT NULL, _hint text DEFAULT NULL,
                                           _sqlstate text DEFAULT NULL,
                                           _schema_name text DEFAULT NULL,
                                           _table_name text DEFAULT NULL,
                                           _column_name text DEFAULT NULL,
                                           _datatype_name text DEFAULT NULL,
                                           _constraint_name text DEFAULT NULL)
RETURNS void AS $$
kwargs = {
    "message": _message, "detail": _detail, "hint": _hint,
    "sqlstate": _sqlstate, "schema_name": _schema_name, "table_name": _table_name,
    "column_name": _column_name, "datatype_name": _datatype_name,
    "constraint_name": _constraint_name
}
# ignore None values
plpy.error(**dict((k, v) for k, v in iter(kwargs.items()) if v))
$$ LANGUAGE plpython3u;

SELECT raise_exception('hello', 'world');
SELECT raise_exception('message text', 'detail text', _sqlstate => 'YY333');
SELECT raise_exception(_message => 'message text',
                       _detail => 'detail text',
                       _hint => 'hint text',
                       _sqlstate => 'XX555',
                       _schema_name => 'schema text',
                       _table_name => 'table text',
                       _column_name => 'column text',
                       _datatype_name => 'datatype text',
                       _constraint_name => 'constraint text');

SELECT raise_exception(_message => 'message text',
                       _hint => 'hint text',
                       _schema_name => 'schema text',
                       _column_name => 'column text',
                       _constraint_name => 'constraint text');

DO $$
DECLARE
  __message text;
  __detail text;
  __hint text;
  __sqlstate text;
  __schema_name text;
  __table_name text;
  __column_name text;
  __datatype_name text;
  __constraint_name text;
BEGIN
  BEGIN
    PERFORM raise_exception(_message => 'message text',
                            _detail => 'detail text',
                            _hint => 'hint text',
                            _sqlstate => 'XX555',
                            _schema_name => 'schema text',
                            _table_name => 'table text',
                            _column_name => 'column text',
                            _datatype_name => 'datatype text',
                            _constraint_name => 'constraint text');
  EXCEPTION WHEN SQLSTATE 'XX555' THEN
    GET STACKED DIAGNOSTICS __message = MESSAGE_TEXT,
                            __detail = PG_EXCEPTION_DETAIL,
                            __hint = PG_EXCEPTION_HINT,
                            __sqlstate = RETURNED_SQLSTATE,
                            __schema_name = SCHEMA_NAME,
                            __table_name = TABLE_NAME,
                            __column_name = COLUMN_NAME,
                            __datatype_name = PG_DATATYPE_NAME,
                            __constraint_name = CONSTRAINT_NAME;
    RAISE NOTICE 'handled exception'
      USING DETAIL = format('message:(%s), detail:(%s), hint: (%s), sqlstate: (%s), '
                            'schema_name:(%s), table_name:(%s), column_name:(%s), datatype_name:(%s), constraint_name:(%s)',
                            __message, __detail, __hint, __sqlstate, __schema_name,
                            __table_name, __column_name, __datatype_name, __constraint_name);
  END;
END;
$$;

DO $$
try:
    plpy.execute("select raise_exception(_message => 'my message', _sqlstate => 'XX987', _hint => 'some hint', _table_name => 'users_tab', _datatype_name => 'user_type')")
except Exception as e:
    plpy.info(e.spidata)
    raise e
$$ LANGUAGE plpython3u;

DO $$
try:
    plpy.error(message  = 'my message', sqlstate = 'XX987', hint = 'some hint', table_name = 'users_tab', datatype_name = 'user_type')
except Exception as e:
    plpy.info('sqlstate: %s, hint: %s, table_name: %s, datatype_name: %s' % (e.sqlstate, e.hint, e.table_name, e.datatype_name))
    raise e
$$ LANGUAGE plpython3u;
