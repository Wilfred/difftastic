entity e is
begin

    process
    begin
        t <= x;
     -- ^ error.illegal.assignment.in_passive_process

        t <= force x;
     -- ^ error.illegal.assignment.in_passive_process

        t <= release;
     -- ^ error.illegal.assignment.in_passive_process
    end process;

end entity;

entity e is
begin

    L1: block
 -- ^ error.illegal.statement
    begin
    end block;

    L2: component unit;
 -- ^ error.illegal.statement

    t <= x;
 -- ^ error.illegal.statement

    t <= x when c;
 -- ^ error.illegal.statement

    with e select
 -- ^ error.illegal.statement
        t <= x when x;

    G1: for i in r
 -- ^ error.illegal.statement
        generate
        end generate;

    G1: if c generate
 -- ^ error.illegal.statement
        end generate;

    G1: case e generate
 -- ^ error.illegal.statement
        end generate;

    property p is p1;
 -- ^ error.illegal.statement

    sequence s is s1;
 -- ^ error.illegal.statement

    default clock is x;
 -- ^ error.illegal.statement

    p(arg);

    process
    begin
    end process;

    assert x;

    assume x;

    assume_guarantee x;

    restrict x;

    restrict_guarantee x;

    cover x;

    fairness x;

    strong fairness x,x;

end entity;
