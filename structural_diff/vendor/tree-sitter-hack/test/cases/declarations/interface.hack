<<Attribute(R::class), Attribute(1,),>>
interface F<Ta as A, Tb super B<A, C>> extends B, A\B<A, C>, C\D {
  function method<Ta as A, Tb super B>(): Tc {}
}
