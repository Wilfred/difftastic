class A {}
interface B {}
trait C {}

abstract final interface D extends B implements C {}
abstract final trait E extends B implements C {}

final class F extends B implements C {
  function method1() {}
  final function method2(): void {}
  abstract function method3();
  abstract final function method4(): void;
}
