((function(): void) $test): void ==> {
};

(  ( /*test*/ function ( ) : void ) $test ) : void ==> {
};

(  ( function (  )  /*test*/  : void ) $test ) : void ==> {
};

// TODO: The line below should not error as it is valid Hack.
//       See PR #8 for details.
// (  ( function /*test*/ (  )  : void ) $test ) : void ==> {
// };
