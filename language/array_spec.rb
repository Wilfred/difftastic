require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/array', __FILE__)

describe "Array literals" do
  it "[] should return a new array populated with the given elements" do
    array = [1, 'a', nil]
    array.should be_kind_of(Array)
    array[0].should == 1
    array[1].should == 'a'
    array[2].should == nil
  end

  it "[] treats empty expressions as nil elements" do
    array = [0, (), 2, (), 4]
    array.should be_kind_of(Array)
    array[0].should == 0
    array[1].should == nil
    array[2].should == 2
    array[3].should == nil
    array[4].should == 4
  end

  it "[] accepts a literal hash without curly braces as its only parameter" do
    ["foo" => :bar, baz: 42].should == [{"foo" => :bar, baz: 42}]
  end

  it "[] accepts a literal hash without curly braces as its last parameter" do
    ["foo", "bar" => :baz].should == ["foo", {"bar" => :baz}]
    [1, 2, 3 => 6, 4 => 24].should == [1, 2, {3 => 6, 4 => 24}]
  end

  it "[] treats splatted nil as no element" do
    [*nil].should == []
    [1, *nil].should == [1]
    [1, 2, *nil].should == [1, 2]
    [1, *nil, 3].should == [1, 3]
    [*nil, *nil, *nil].should == []
  end
end

describe "Bareword array literal" do
  it "%w() transforms unquoted barewords into an array" do
    a = 3
    %w(a #{3+a} 3).should == ["a", '#{3+a}', "3"]
  end

  it "%W() transforms unquoted barewords into an array, supporting interpolation" do
    a = 3
    %W(a #{3+a} 3).should == ["a", '6', "3"]
  end

  it "%W() always treats interpolated expressions as a single word" do
    a = "hello world"
    %W(a b c #{a} d e).should == ["a", "b", "c", "hello world", "d", "e"]
  end

  it "treats consecutive whitespace characters the same as one" do
    %w(a  b c  d).should == ["a", "b", "c", "d"]
    %W(hello
       world).should == ["hello", "world"]
  end

  it "treats whitespace as literals characters when escaped by a backslash" do
    %w(a b\ c d e).should == ["a", "b c", "d", "e"]
    %w(a b\
c d).should == ["a", "b\nc", "d"]
    %W(a\  b\tc).should == ["a ", "b\tc"]
    %W(white\  \  \ \  \ space).should == ["white ", " ", "  ", " space"]
  end
end

describe "The unpacking splat operator (*)" do
  it "when applied to a literal nested array, unpacks its elements into the containing array" do
    [1, 2, *[3, 4, 5]].should == [1, 2, 3, 4, 5]
  end

  it "when applied to a nested referenced array, unpacks its elements into the containing array" do
    splatted_array = [3, 4, 5]
    [1, 2, *splatted_array].should == [1, 2, 3, 4, 5]
  end

  it "returns a new array containing the same values when applied to an array inside an empty array" do
    splatted_array = [3, 4, 5]
    [*splatted_array].should == splatted_array
    [*splatted_array].should_not equal(splatted_array)
  end

  it "unpacks the start and count arguments in an array slice assignment" do
    alphabet_1 = ['a'..'z'].to_a
    alphabet_2 = alphabet_1.dup
    start_and_count_args = [1, 10]

    alphabet_1[1, 10] = 'a'
    alphabet_2[*start_and_count_args] = 'a'

    alphabet_1.should == alphabet_2
  end

  it "unpacks arguments as if they were listed statically" do
    static = [1,2,3,4]
    receiver = static.dup
    args = [0,1]
    static[0,1] = []
    static.should == [2,3,4]
    receiver[*args] = []
    receiver.should == static
  end

  it "unpacks a literal array into arguments in a method call" do
    tester = ArraySpec::Splat.new
    tester.unpack_3args(*[1, 2, 3]).should == [1, 2, 3]
    tester.unpack_4args(1, 2, *[3, 4]).should == [1, 2, 3, 4]
    tester.unpack_4args("a", %w(b c), *%w(d e)).should == ["a", ["b", "c"], "d", "e"]
  end

  it "unpacks a referenced array into arguments in a method call" do
    args = [1, 2, 3]
    tester = ArraySpec::Splat.new
    tester.unpack_3args(*args).should == [1, 2, 3]
    tester.unpack_4args(0, *args).should == [0, 1, 2, 3]
  end

  it "when applied to a non-Array value attempts to coerce it to Array if the object respond_to?(:to_a)" do
    obj = mock("pseudo-array")
    obj.should_receive(:to_a).and_return([2, 3, 4])
    [1, *obj].should == [1, 2, 3, 4]
  end

  it "when applied to a non-Array value uses it unchanged if it does not respond_to?(:to_a)" do
    obj = Object.new
    obj.should_not respond_to(:to_a)
    [1, *obj].should == [1, obj]
  end

  it "when applied to a BasicObject coerces it to Array if it respond_to?(:to_a)" do
    obj = BasicObject.new
    def obj.to_a; [2, 3, 4]; end
    [1, *obj].should == [1, 2, 3, 4]
  end

  it "can be used before other non-splat elements" do
    a = [1, 2]
    [0, *a, 3].should == [0, 1, 2, 3]
  end

  it "can be used multiple times in the same containing array" do
    a = [1, 2]
    b = [1, 0]
    [*a, 3, *a, *b].should == [1, 2, 3, 1, 2, 1, 0]
  end
end

describe "The packing splat operator (*)" do

end
