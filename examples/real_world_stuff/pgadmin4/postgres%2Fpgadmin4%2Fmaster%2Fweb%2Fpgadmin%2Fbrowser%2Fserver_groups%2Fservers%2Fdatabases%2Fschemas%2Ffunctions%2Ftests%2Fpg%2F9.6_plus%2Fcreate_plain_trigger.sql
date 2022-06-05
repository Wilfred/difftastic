-- FUNCTION: public.Trig1_$%{}[]()&*^!@"'`\/#()

-- DROP FUNCTION IF EXISTS public."Trig1_$%{}[]()&*^!@""'`\/#"();

CREATE OR REPLACE FUNCTION public."Trig1_$%{}[]()&*^!@""'`\/#"()
    RETURNS trigger
    LANGUAGE 'plpgsql'
    COST 100
    VOLATILE NOT LEAKPROOF
AS $BODY$
begin
select 1;
end;
$BODY$;

ALTER FUNCTION public."Trig1_$%{}[]()&*^!@""'`\/#"()
    OWNER TO postgres;
