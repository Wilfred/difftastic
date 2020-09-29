type func = (function(int, ?string,): string);

function func((function(inout int): string) $func): (function(int): string) {}
