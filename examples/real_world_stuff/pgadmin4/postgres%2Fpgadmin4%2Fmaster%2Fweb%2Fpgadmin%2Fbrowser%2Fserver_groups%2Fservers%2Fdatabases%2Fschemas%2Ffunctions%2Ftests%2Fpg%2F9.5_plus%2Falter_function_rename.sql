-- FUNCTION: public.Function3_$%{}[]()&*^!@"'`\/#()

-- DROP FUNCTION IF EXISTS public."Function3_$%{}[]()&*^!@""'`\/#"();

CREATE OR REPLACE FUNCTION public."Function3_$%{}[]()&*^!@""'`\/#"(
	)
    RETURNS character varying
    LANGUAGE 'plpgsql'
    COST 100
    VOLATILE WINDOW
    SET enable_sort='true'
AS $BODY$
begin
select '1';
end
$BODY$;

ALTER FUNCTION public."Function3_$%{}[]()&*^!@""'`\/#"()
    OWNER TO postgres;
