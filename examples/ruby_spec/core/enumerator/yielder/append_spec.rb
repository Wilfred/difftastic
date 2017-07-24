require File.expand_path('../../../../spec_helper', __FILE__)

describe "Enumerator::Yielder#<<" do
  # TODO: There's some common behavior between yield and <<; move to a shared spec
  it "yields the value to the block" do
    ary = []
    y = Enumerator::Yielder.new {|x| ary << x}
    y << 1

    ary.should == [1]
  end

  it "doesn't double-wrap Arrays" do
    yields = []
    y = Enumerator::Yielder.new {|args| yields << args }
    y << [1]
    yields.should == [[1]]
  end

  it "returns self" do
    y = Enumerator::Yielder.new {|x| x + 1}
    (y << 1).should equal(y)
  end

  it "requires multiple arguments" do
    Enumerator::Yielder.instance_method(:<<).arity.should < 0
  end

  it "yields with passed arguments" do
    yields = []
    y = Enumerator::Yielder.new {|*args| yields << args }
    y.<<(1, 2)
    yields.should == [[1, 2]]
  end
end
