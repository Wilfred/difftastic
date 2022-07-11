---
--- CREATE_TRIGGER
---

CREATE FUNCTION plpgsql_function_trigger_1()
  RETURNS TRIGGER
  LANGUAGE plpgsql
AS $$
BEGIN
  RETURN NEW;
END;
$$;

CREATE TRIGGER trigger_1
  BEFORE INSERT OR UPDATE
  ON datatype_table
  FOR EACH ROW
  EXECUTE PROCEDURE plpgsql_function_trigger_1();
