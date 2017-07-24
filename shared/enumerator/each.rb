# -*- encoding: us-ascii -*-

describe :enum_each, shared: true do
  before :each do
    object_each_with_arguments = Object.new
    def object_each_with_arguments.each_with_arguments(arg, *args)
      yield arg, *args
      :method_returned
    end

    @enum_with_arguments = object_each_with_arguments.to_enum(:each_with_arguments, :arg0, :arg1, :arg2)

    @enum_with_yielder = Enumerator.new {|y| y.yield :ok}
  end

  it "yields each element of self to the given block" do
    acc = []
    [1,2,3].to_enum.each {|e| acc << e }
    acc.should == [1,2,3]
  end

  it "calls #each on the object given in the constructor by default" do
    each = mock('each')
    each.should_receive(:each)
    each.to_enum.each {|e| e }
  end

  it "calls #each on the underlying object until it's exhausted" do
    each = mock('each')
    each.should_receive(:each).and_yield(1).and_yield(2).and_yield(3)
    acc = []
    each.to_enum.each {|e| acc << e }
    acc.should == [1,2,3]
  end

  it "calls the method given in the constructor instead of #each" do
    each = mock('peach')
    each.should_receive(:peach)
    each.to_enum(:peach).each {|e| e }
  end

  it "calls the method given in the constructor until it's exhausted" do
    each = mock('each')
    each.should_receive(:each).and_yield(1).and_yield(2).and_yield(3)
    acc = []
    each.to_enum.each {|e| acc << e }
    acc.should == [1,2,3]
  end

  it "raises a NoMethodError if the object doesn't respond to #each" do
    enum = Object.new.to_enum
    lambda do
      enum.each { |e| e }
    end.should raise_error(NoMethodError)
  end

  it "returns self if not given arguments and not given a block" do
    @enum_with_arguments.each.should equal(@enum_with_arguments)

    @enum_with_yielder.each.should equal(@enum_with_yielder)
  end

  it "returns the same value from receiver.each if block is given" do
    @enum_with_arguments.each {}.should equal(:method_returned)
  end

  it "passes given arguments at initialized to receiver.each" do
    @enum_with_arguments.each.to_a.should == [[:arg0, :arg1, :arg2]]
  end

  it "requires multiple arguments" do
    Enumerator.instance_method(:each).arity.should < 0
  end

  it "appends given arguments to receiver.each" do
    @enum_with_arguments.each(:each0, :each1).to_a.should == [[:arg0, :arg1, :arg2, :each0, :each1]]
    @enum_with_arguments.each(:each2, :each3).to_a.should == [[:arg0, :arg1, :arg2, :each2, :each3]]
  end

  it "returns the same value from receiver.each if block and arguments are given" do
    @enum_with_arguments.each(:each1, :each2) {}.should equal(:method_returned)
  end

  it "returns new Enumerator if given arguments but not given a block" do
    ret = @enum_with_arguments.each 1
    ret.should be_an_instance_of(Enumerator)
    ret.should_not equal(@enum_with_arguments)
  end
end
