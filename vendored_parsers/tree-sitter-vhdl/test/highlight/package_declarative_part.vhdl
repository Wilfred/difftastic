package pkg is

    procedure p is
 -- ^ error.illegal.declaration
    begin
    end procedure;

    function f return t is
 -- ^ error.illegal.declaration
    begin
    end function;

    for l : c
 -- ^ error.illegal.declaration
        use open;

    procedure p;

    function f return t;

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

    variable s : t;

    shared variable s : t;

    file     f : t;

    alias a is k;

    component c is
    end component;

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

end package;

package pkg is

    type t is
        protected
        end protected;

    type t is
        protected body
     -- ^ error.illegal.declaration
        end protected body;

end package;

procedure p is
    package pkg is
        shared variable sv : t;
     -- ^ error.unexpected.shared

        signal s : t;
     -- ^ error.illegal.declaration

        disconnect s : t after 10 ns;
     -- ^ error.illegal.declaration

        property p is (a -> b);
     -- ^ error.illegal.declaration

        sequence s is {c};
     -- ^ error.illegal.declaration

        default clock is rising_edge(clk);
     -- ^ error.illegal.declaration
    end package;
begin
end procedure;


process
    package pkg is
        shared variable sv : t;
     -- ^ error.unexpected.shared

        signal s : t;
     -- ^ error.illegal.declaration

        disconnect s : t after 10 ns;
     -- ^ error.illegal.declaration

        property p is (a -> b);
     -- ^ error.illegal.declaration

        sequence s is {c};
     -- ^ error.illegal.declaration

        default clock is rising_edge(clk);
     -- ^ error.illegal.declaration
    end package;
begin
end process;


type t is
    protected body
        package pkg is
            shared variable sv : t;
         -- ^ error.unexpected.shared

            signal s : t;
         -- ^ error.illegal.declaration

            disconnect s : t after 10 ns;
         -- ^ error.illegal.declaration

            property p is (a -> b);
         -- ^ error.illegal.declaration

            sequence s is {c};
         -- ^ error.illegal.declaration

            default clock is rising_edge(clk);
         -- ^ error.illegal.declaration
        end package;
end protected body;



