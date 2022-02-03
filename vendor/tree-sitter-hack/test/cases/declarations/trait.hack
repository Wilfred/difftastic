<<Attribute(R::class), Attribute(1,),>>
trait F<Ta as A, Tb super B<A, C>> implements A\B<A, C>, C\D {
  function method<Ta as A, Tb super B>(): Tc {}
}

