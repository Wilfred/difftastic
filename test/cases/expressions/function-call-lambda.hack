// (lambda (call (awaitable)))
$var = $arg ==> async { return $arg; }(1, ...vec[1,2,3]);

// (call (lambda))
$var = async $arg ==> { return $arg; }(1, ...vec[1,2,3]);

($arg ==> $arg)(func(), inout $arg);
