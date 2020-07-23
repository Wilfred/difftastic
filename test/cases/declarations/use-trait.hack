// https://github.com/facebook/hhvm/blob/f878e71f45a23d87c9d757c4bc1f0d687a745ba2

// hphp/hack/test/typecheck/trait_use_precedence_hack.php
class HelloClass {
  use HelloTrait, GoodbyeTrait {
    HelloTrait::genHello insteadof GoodbyeTrait;
  }
}

// hphp/test/slow/traits/traits_and_interfaces11.php
class Thing {
  use A, B {
    B::foo insteadof A;
  }
  // This would throw "unknown trait A" if B were not present in the insteadof.
  use A, B {
    B::foo insteadof A, B;
  }
}

// hphp/test/zend/good/Zend/tests/traits/language009.php
class MyClass {
  use C, A, B {
    B::foo insteadof A, C;
  }
}
