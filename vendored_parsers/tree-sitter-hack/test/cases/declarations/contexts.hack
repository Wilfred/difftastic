function no_listed_contexts(): void {}
function empty_context()[]: void {}
function one_context()[C]: void {}
function many_context()[C1, C2, Cn]: void {}
function throws_foo_exception()[policied<Foo>]: void {
  throw new FooException();
}
