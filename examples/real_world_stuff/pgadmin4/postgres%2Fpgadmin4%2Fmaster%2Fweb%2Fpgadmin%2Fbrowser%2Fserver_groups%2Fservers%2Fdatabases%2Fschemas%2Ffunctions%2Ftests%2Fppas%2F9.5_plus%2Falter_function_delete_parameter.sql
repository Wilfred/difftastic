-- FUNCTION: public.Function3_$%{}[]()&*^!@"'`\/#()

-- DROP FUNCTION IF EXISTS public."Function3_$%{}[]()&*^!@""'`\/#"();

CREATE OR REPLACE FUNCTION public."Function3_$%{}[]()&*^!@""'`\/#"(
	)
RETURNS character varying
    LANGUAGE 'plpgsql'
    VOLATILE SECURITY DEFINER WINDOW
    COST 100
    SET enable_sort='true'
AS $BODY$
begin
select '2';
end
$BODY$;

ALTER FUNCTION public."Function3_$%{}[]()&*^!@""'`\/#"()
    OWNER TO enterprisedb;
