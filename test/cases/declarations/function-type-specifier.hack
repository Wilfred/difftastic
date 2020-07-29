type func = (function(int): string);

function func((function(inout int): string) $func): (function(int): string) {}
