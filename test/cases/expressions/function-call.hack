func();

func<int>(1, inout $arg, ...null);

$arg[func()]();

$arg ==> { return $arg; }(1, ...vec[1,2,3]);

($arg ==> $arg)(func(), inout $arg);
