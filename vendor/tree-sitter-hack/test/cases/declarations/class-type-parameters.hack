abstract final class F<Ta as A, Tb super B<A, C>> extends B implements A\B<A, C>, C\D {
  function method<Ta as A, Tb super B>(): Tc {}
}
