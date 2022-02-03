class C {
  use A;

  use B<int>;

  use C, D { D as E; }

  use F, G<vec<int>>, H {
    H::methodG insteadof G;
    G::methodH insteadof H;
  }
}
