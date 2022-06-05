-- FUNCTION: public.Trig1_$%{}[]()&*^!@"'`\/#()

-- DROP FUNCTION IF EXISTS public."Trig1_$%{}[]()&*^!@""'`\/#"();

CREATE OR REPLACE FUNCTION public."Trig1_$%{}[]()&*^!@""'`\/#"()
    RETURNS trigger
    LANGUAGE 'plpgsql'
    COST 123
    IMMUTABLE LEAKPROOF STRICT SECURITY DEFINER
    SET application_name='appname'
    SET search_path=public, pg_temp
AS $BODY$
begin
select 1;
end;
$BODY$;

ALTER FUNCTION public."Trig1_$%{}[]()&*^!@""'`\/#"()
    OWNER TO enterprisedb;

COMMENT ON FUNCTION public."Trig1_$%{}[]()&*^!@""'`\/#"()
    IS 'some comment';
