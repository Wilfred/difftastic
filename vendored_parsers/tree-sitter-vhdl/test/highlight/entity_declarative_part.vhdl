entity e is

    variable s : t;
 -- ^ error.illegal.declaration

    component c is
 -- ^ error.illegal.declaration
    end component;

    for l : c
 -- ^ error.illegal.declaration
        use open;

    procedure p;

    function  f return t;

    procedure p is
    begin
    end procedure;

    function f return t is
    begin
    end function;

    procedure p2 is new up;

    function f2 is new uf;

    package pkg is
    end;

    package body pkg is
    end;

    package pkg2 is new upkg;

    type t is range 0 to 7;

    subtype st is t;

    constant k : t;

    signal s : t;

    shared variable s : t;

    file     f : t;

    alias a is k;

    attribute a of e : entity is x;

    attribute a : t;

    disconnect s : t after 10 ns;

    use foo.bar;

    group G1 : E (L2);

    group g is (signal);

    assert c;

    assume c;

    assume_guarantee c;

    restrict c;

    restrict_guarantee c;

    cover c;

    fairness c;

    strong fairness c,c;

    property p is (a -> b);

    sequence s is {c};

    default clock is rising_edge(clk);

end entity;
