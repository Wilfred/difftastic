module.exports = function(one, two) {
  // <- variable.builtin
  //                      ^ variable.parameter

  if (something()) {
    let module = null, one = 1;
    //  ^ variable
    //                 ^ variable

    console.log(module, one, two);
    // ^ variable.builtin
    //            ^ variable
    //                   ^ variable
    //                        ^ variable.parameter
  }

  console.log(module, one, two);
  // ^ variable.builtin
  //            ^ variable.builtin
  //                   ^ variable.parameter
  //                        ^ variable.parameter
};

console.log(module, one, two);
// ^ variable.builtin
//            ^ variable.builtin
//                   ^ variable
//                        ^ variable
