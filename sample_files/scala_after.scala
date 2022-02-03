package foo

// A Scala program.
import foo.Baz

class Foo {

  private def blah(): Other {
    /* foo */
    throw new Exception("after");
  }

  var result = Option.empty[T]
  val fn = pf.lift
  object traverser extends SimpleTraverser {
    override def apply(t: Tree): Unit = {
      result = fn(t).orElse(result)
      if (result.nonEmpty) {
        super.apply(t)
      }
    }
  }
}
