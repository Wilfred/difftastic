const TOP_LEVEL_VALUE: i32 = 1;




fn enclosing_function(input: i32) -> i32 {
    let a = input + 1;
    let b = a + 2;
    let c = b + 3;
    let d = c + 4;
    let e = d + 5;
    e
}
