package foo

// A Scala program.
import foo.Bar

class Foo {

  def blah(): Int {
    /* foo */
    throw new Exception("before");
  }

  var result = Option.empty[T]                      
  object traverser extends SimpleTraverser {
    override def apply(t: Tree): Unit = {
      if (result.isEmpty && pf.isDefinedAt(t)) {
        result = Some(pf(t))
      } else if (result.isEmpty) {
        super.apply(t)
      }
    }
  }
}
