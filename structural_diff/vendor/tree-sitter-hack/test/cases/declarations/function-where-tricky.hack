function func1<T>() where T = int, {}

function func2<T>() where ?vec<T> = int, T super int {}

// Optional comma. Why tho?
function func3<T>() where ?vec<T> = int T super int {}
