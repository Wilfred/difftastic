create table T_comp1 (
    tkey	char(10),
    ref1	int4,
    ref2	char(20)
);

create function tcl_composite_arg_ref1(T_comp1) returns int as '
    return $1(ref1)
' language pltcl;

create function tcl_composite_arg_ref2(T_comp1) returns text as '
    return $1(ref2)
' language pltcl;

create function tcl_argisnull(text) returns bool as '
    argisnull 1
' language pltcl;


create function tcl_int4add(int4,int4) returns int4 as '
    return [expr $1 + $2]
' language pltcl;

-- We use split(n) as a quick-and-dirty way of parsing the input array
-- value, which comes in as a string like '{1,2}'.  There are better ways...

create function tcl_int4_accum(int4[], int4) returns int4[] as '
    set state [split $1 "{,}"]
    set newsum [expr {[lindex $state 1] + $2}]
    set newcnt [expr {[lindex $state 2] + 1}]
    return "{$newsum,$newcnt}"
' language pltcl;

create function tcl_int4_avg(int4[]) returns int4 as '
    set state [split $1 "{,}"]
    if {[lindex $state 2] == 0} { return_null }
    return [expr {[lindex $state 1] / [lindex $state 2]}]
' language pltcl;

create aggregate tcl_avg (
		sfunc = tcl_int4_accum,
		basetype = int4,
		stype = int4[],
		finalfunc = tcl_int4_avg,
		initcond = '{0,0}'
	);

create aggregate tcl_sum (
		sfunc = tcl_int4add,
		basetype = int4,
		stype = int4,
		initcond1 = 0
	);

create function tcl_int4lt(int4,int4) returns bool as '
    if {$1 < $2} {
        return t
    }
    return f
' language pltcl;

create function tcl_int4le(int4,int4) returns bool as '
    if {$1 <= $2} {
        return t
    }
    return f
' language pltcl;

create function tcl_int4eq(int4,int4) returns bool as '
    if {$1 == $2} {
        return t
    }
    return f
' language pltcl;

create function tcl_int4ge(int4,int4) returns bool as '
    if {$1 >= $2} {
        return t
    }
    return f
' language pltcl;

create function tcl_int4gt(int4,int4) returns bool as '
    if {$1 > $2} {
        return t
    }
    return f
' language pltcl;

create operator @< (
		leftarg = int4,
		rightarg = int4,
		procedure = tcl_int4lt
	);

create operator @<= (
		leftarg = int4,
		rightarg = int4,
		procedure = tcl_int4le
	);

create operator @= (
		leftarg = int4,
		rightarg = int4,
		procedure = tcl_int4eq
	);

create operator @>= (
		leftarg = int4,
		rightarg = int4,
		procedure = tcl_int4ge
	);

create operator @> (
		leftarg = int4,
		rightarg = int4,
		procedure = tcl_int4gt
	);

create function tcl_int4cmp(int4,int4) returns int4 as '
    if {$1 < $2} {
        return -1
    }
    if {$1 > $2} {
        return 1
    }
    return 0
' language pltcl;

CREATE OPERATOR CLASS tcl_int4_ops
	FOR TYPE int4 USING btree AS
	OPERATOR 1  @<,
	OPERATOR 2  @<=,
	OPERATOR 3  @=,
	OPERATOR 4  @>=,
	OPERATOR 5  @>,
	FUNCTION 1  tcl_int4cmp(int4,int4) ;

--
-- Test usage of Tcl's "clock" command.  In recent Tcl versions this
-- command fails without working "unknown" support, so it's a good canary
-- for initialization problems.
--
create function tcl_date_week(int4,int4,int4) returns text as $$
    return [clock format [clock scan "$2/$3/$1"] -format "%U"]
$$ language pltcl immutable;

select tcl_date_week(2010,1,26);
select tcl_date_week(2001,10,24);

-- test pltcl event triggers
create function tclsnitch() returns event_trigger language pltcl as $$
  elog NOTICE "tclsnitch: $TG_event $TG_tag"
$$;

create event trigger tcl_a_snitch on ddl_command_start execute procedure tclsnitch();
create event trigger tcl_b_snitch on ddl_command_end execute procedure tclsnitch();

create function foobar() returns int language sql as $$select 1;$$;
alter function foobar() cost 77;
drop function foobar();

create table foo();
drop table foo;

drop event trigger tcl_a_snitch;
drop event trigger tcl_b_snitch;

create function tcl_test_cube_squared(in int, out squared int, out cubed int) as $$
    return [list squared [expr {$1 * $1}] cubed [expr {$1 * $1 * $1}]]
$$ language pltcl;

create function tcl_test_squared_rows(int,int) returns table (x int, y int) as $$
    for {set i $1} {$i < $2} {incr i} {
        return_next [list y [expr {$i * $i}] x $i]
    }
$$ language pltcl;

create function tcl_test_sequence(int,int) returns setof int as $$
    for {set i $1} {$i < $2} {incr i} {
        return_next $i
    }
$$ language pltcl;

create function tcl_eval(string text) returns text as $$
    eval $1
$$ language pltcl;

-- test use of errorCode in error handling
create function tcl_error_handling_test(text) returns text
language pltcl
as $function$
    if {[catch $1 err]} {
        # If not a Postgres error, just return the basic error message
        if {[lindex $::errorCode 0] != "POSTGRES"} {
            return $err
        }

        # Get rid of keys that can't be expected to remain constant
        array set myArray $::errorCode
        unset myArray(POSTGRES)
        unset -nocomplain myArray(funcname)
        unset -nocomplain myArray(filename)
        unset -nocomplain myArray(lineno)

        # Format into something nicer
        set vals []
        foreach {key} [lsort [array names myArray]] {
            set value [string map {"\n" "\n\t"} $myArray($key)]
            lappend vals "$key: $value"
        }
        return [join $vals "\n"]
    } else {
        return "no error"
    }
$function$;

-- test spi_exec and spi_execp with -array
create function tcl_spi_exec(
    prepare boolean,
    action text
)
returns void language pltcl AS $function$
set query "select * from (values (1,'foo'),(2,'bar'),(3,'baz')) v(col1,col2)"
if {$1 == "t"} {
    set prep [spi_prepare $query {}]
    spi_execp -array A $prep {
        elog NOTICE "col1 $A(col1), col2 $A(col2)"

        switch $A(col1) {
            2 {
                elog NOTICE "action: $2"
                switch $2 {
                    break {
                        break
                    }
                    continue {
                        continue
                    }
                    return {
                        return
                    }
                    error {
                        error "error message"
                    }
                }
                error "should not get here"
            }
        }
    }
} else {
    spi_exec -array A $query {
        elog NOTICE "col1 $A(col1), col2 $A(col2)"

        switch $A(col1) {
            2 {
                elog NOTICE "action: $2"
                switch $2 {
                    break {
                        break
                    }
                    continue {
                        continue
                    }
                    return {
                        return
                    }
                    error {
                        error "error message"
                    }
                }
                error "should not get here"
            }
        }
    }
}
elog NOTICE "end of function"
$function$;
