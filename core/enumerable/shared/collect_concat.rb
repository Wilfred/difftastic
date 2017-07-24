require File.expand_path('../enumerable_enumeratorized', __FILE__)

describe :enumerable_collect_concat, shared: true do
  it "yields elements to the block and flattens one level" do
    numerous = EnumerableSpecs::Numerous.new(1, [2, 3], [4, [5, 6]], {foo: :bar})
    numerous.send(@method) { |i| i }.should == [1, 2, 3, 4, [5, 6], {foo: :bar}]
  end

  it "appends non-Array elements that do not define #to_ary" do
    obj = mock("to_ary undefined")

    numerous = EnumerableSpecs::Numerous.new(1, obj, 2)
    numerous.send(@method) { |i| i }.should == [1, obj, 2]
  end

  it "concatenates the result of calling #to_ary if it returns an Array" do
    obj = mock("to_ary defined")
    obj.should_receive(:to_ary).and_return([:a, :b])

    numerous = EnumerableSpecs::Numerous.new(1, obj, 2)
    numerous.send(@method) { |i| i }.should == [1, :a, :b, 2]
  end

  it "does not call #to_a" do
    obj = mock("to_ary undefined")
    obj.should_not_receive(:to_a)

    numerous = EnumerableSpecs::Numerous.new(1, obj, 2)
    numerous.send(@method) { |i| i }.should == [1, obj, 2]
  end

  it "appends an element that defines #to_ary that returns nil" do
    obj = mock("to_ary defined")
    obj.should_receive(:to_ary).and_return(nil)

    numerous = EnumerableSpecs::Numerous.new(1, obj, 2)
    numerous.send(@method) { |i| i }.should == [1, obj, 2]
  end

  it "raises a TypeError if an element defining #to_ary does not return an Array or nil"  do
    obj = mock("to_ary defined")
    obj.should_receive(:to_ary).and_return("array")

    lambda { [1, obj, 3].send(@method) { |i| i } }.should raise_error(TypeError)
  end

  it "returns an enumerator when no block given" do
    enum = EnumerableSpecs::Numerous.new(1, 2).send(@method)
    enum.should be_an_instance_of(Enumerator)
    enum.each{ |i| [i] * i }.should == [1, 2, 2]
  end

  it_should_behave_like :enumerable_enumeratorized_with_origin_size
end
