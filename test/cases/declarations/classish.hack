class A {}
interface B {}
trait C {}

interface D extends B, R {}
trait E implements C {}

abstract final class F extends B implements C\R, C {
  function method1() {}
  final function method2(): void {}
  abstract function method3();
  abstract function method4(): void;
}
