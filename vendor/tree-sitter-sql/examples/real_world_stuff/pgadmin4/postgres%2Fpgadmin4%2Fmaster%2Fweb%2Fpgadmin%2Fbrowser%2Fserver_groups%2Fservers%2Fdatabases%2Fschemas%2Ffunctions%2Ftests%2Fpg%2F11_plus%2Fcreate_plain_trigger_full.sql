-- FUNCTION: public.Trig1_$%{}[]()&*^!@"'`\/#()

-- DROP FUNCTION IF EXISTS public."Trig1_$%{}[]()&*^!@""'`\/#"();

CREATE OR REPLACE FUNCTION public."Trig1_$%{}[]()&*^!@""'`\/#"()
    RETURNS SETOF trigger
    LANGUAGE 'plpgsql'
    COST 1234
    VOLATILE LEAKPROOF STRICT SECURITY DEFINER WINDOW
    ROWS 4321
    SET application_name='appname'
    SET search_path=public, pg_temp
AS $BODY$
begin
select 1;
end;
$BODY$;

ALTER FUNCTION public."Trig1_$%{}[]()&*^!@""'`\/#"()
    OWNER TO postgres;

GRANT EXECUTE ON FUNCTION public."Trig1_$%{}[]()&*^!@""'`\/#"() TO postgres WITH GRANT OPTION;

REVOKE ALL ON FUNCTION public."Trig1_$%{}[]()&*^!@""'`\/#"() FROM PUBLIC;

COMMENT ON FUNCTION public."Trig1_$%{}[]()&*^!@""'`\/#"()
    IS 'some comment';
