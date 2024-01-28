type physical_t is range l to h
    units
    end units foo;
           -- ^ error.misspeling.name

type physical_t is range l to h
    units
        a;
        b = 1.0 a;
         -- ^ error.illegal.floating_point
    end units;


type physical_t is range l to h
    units
        a;
        a = 1 a;
     -- ^ error.repeated.unit
    end units;

type physical_t is range l to h
    units
        a;
        b = 1 a;
        b = 1 a;
     -- ^ error.repeated.unit
    end units;

type physical_t is range l to h
    units
        a;
        b = 1 a;
        c = 1 a;
        b = 1 a;
     -- ^ error.repeated.unit
    end units;
