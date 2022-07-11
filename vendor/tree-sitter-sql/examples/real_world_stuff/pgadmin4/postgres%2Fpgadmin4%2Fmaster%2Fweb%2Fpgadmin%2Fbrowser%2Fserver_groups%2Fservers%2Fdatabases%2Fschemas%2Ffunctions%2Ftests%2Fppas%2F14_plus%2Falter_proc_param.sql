-- PROCEDURE: public.Proc1_$%{}[]()&*^!@"'`\/#(integer)

-- DROP PROCEDURE IF EXISTS public."Proc1_$%{}[]()&*^!@""'`\/#"(integer);

CREATE OR REPLACE PROCEDURE public."Proc1_$%{}[]()&*^!@""'`\/#"(
	IN i1 integer)
LANGUAGE 'plpgsql'
    SET application_name='pgadmin'
AS $BODY$
begin
select 1;
end;
$BODY$;
ALTER PROCEDURE public."Proc1_$%{}[]()&*^!@""'`\/#"(integer)
    OWNER TO enterprisedb;

COMMENT ON PROCEDURE public."Proc1_$%{}[]()&*^!@""'`\/#"(integer)
    IS 'some comment';
