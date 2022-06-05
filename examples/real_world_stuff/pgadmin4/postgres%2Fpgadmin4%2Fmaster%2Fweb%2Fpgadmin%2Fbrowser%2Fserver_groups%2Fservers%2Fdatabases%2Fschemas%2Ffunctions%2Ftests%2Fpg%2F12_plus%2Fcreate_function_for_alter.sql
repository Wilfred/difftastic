-- FUNCTION: public.Function2_$%{}[]()&*^!@"'`\/#()

-- DROP FUNCTION IF EXISTS public."Function2_$%{}[]()&*^!@""'`\/#"();

CREATE OR REPLACE FUNCTION public."Function2_$%{}[]()&*^!@""'`\/#"(
	)
    RETURNS character varying
    LANGUAGE 'plpgsql'
    COST 100
    VOLATILE PARALLEL UNSAFE
    SET enable_sort='true'
AS $BODY$
begin
select '1';
end
$BODY$;

ALTER FUNCTION public."Function2_$%{}[]()&*^!@""'`\/#"()
    OWNER TO postgres;
