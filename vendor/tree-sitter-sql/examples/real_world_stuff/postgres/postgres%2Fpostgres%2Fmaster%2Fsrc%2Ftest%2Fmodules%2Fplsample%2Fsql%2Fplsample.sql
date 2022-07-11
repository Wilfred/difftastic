CREATE EXTENSION plsample;
-- Create and test some dummy functions
CREATE FUNCTION plsample_result_text(a1 numeric, a2 text, a3 integer[])
RETURNS TEXT
AS $$
  Example of source with text result.
$$ LANGUAGE plsample;
SELECT plsample_result_text(1.23, 'abc', '{4, 5, 6}');

CREATE FUNCTION plsample_result_void(a1 text[])
RETURNS VOID
AS $$
  Example of source with void result.
$$ LANGUAGE plsample;
SELECT plsample_result_void('{foo, bar, hoge}');

CREATE FUNCTION my_trigger_func() RETURNS trigger AS $$
if TD_event == "INSERT"
    return TD_NEW
elseif TD_event == "UPDATE"
    return TD_NEW
else
    return "OK"
end
$$ language plsample;

CREATE TABLE my_table (num integer, description text);
CREATE TRIGGER my_trigger_func BEFORE INSERT OR UPDATE ON my_table
       FOR EACH ROW EXECUTE FUNCTION my_trigger_func();
CREATE TRIGGER my_trigger_func2 AFTER INSERT OR UPDATE ON my_table
       FOR EACH ROW EXECUTE FUNCTION my_trigger_func(8);

INSERT INTO my_table (num, description)
VALUES (1, 'first');

UPDATE my_table
SET description = 'first, modified once'
WHERE num = 1;
