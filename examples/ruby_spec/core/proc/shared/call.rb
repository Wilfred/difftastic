require File.expand_path('../../fixtures/common', __FILE__)

describe :proc_call, shared: true do
  it "invokes self" do
    Proc.new { "test!" }.send(@method).should == "test!"
    lambda { "test!" }.send(@method).should == "test!"
    proc { "test!" }.send(@method).should == "test!"
  end

  it "sets self's parameters to the given values" do
    Proc.new { |a, b| a + b }.send(@method, 1, 2).should == 3
    Proc.new { |*args| args }.send(@method, 1, 2, 3, 4).should == [1, 2, 3, 4]
    Proc.new { |_, *args| args }.send(@method, 1, 2, 3).should == [2, 3]

    lambda { |a, b| a + b }.send(@method, 1, 2).should == 3
    lambda { |*args| args }.send(@method, 1, 2, 3, 4).should == [1, 2, 3, 4]
    lambda { |_, *args| args }.send(@method, 1, 2, 3).should == [2, 3]

    proc { |a, b| a + b }.send(@method, 1, 2).should == 3
    proc { |*args| args }.send(@method, 1, 2, 3, 4).should == [1, 2, 3, 4]
    proc { |_, *args| args }.send(@method, 1, 2, 3).should == [2, 3]
  end
end


describe :proc_call_on_proc_new, shared: true do
  it "replaces missing arguments with nil" do
    Proc.new { |a, b| [a, b] }.send(@method).should == [nil, nil]
    Proc.new { |a, b| [a, b] }.send(@method, 1).should == [1, nil]
  end

  it "silently ignores extra arguments" do
    Proc.new { |a, b| a + b }.send(@method, 1, 2, 5).should == 3
  end

  it "auto-explodes a single Array argument" do
    p = Proc.new { |a, b| [a, b] }
    p.send(@method, 1, 2).should == [1, 2]
    p.send(@method, [1, 2]).should == [1, 2]
    p.send(@method, [1, 2, 3]).should == [1, 2]
    p.send(@method, [1, 2, 3], 4).should == [[1, 2, 3], 4]
  end
end

describe :proc_call_on_proc_or_lambda, shared: true do
  it "ignores excess arguments when self is a proc" do
    a = proc {|x| x}.send(@method, 1, 2)
    a.should == 1

    a = proc {|x| x}.send(@method, 1, 2, 3)
    a.should == 1
  end

  it "will call #to_ary on argument and return self if return is nil" do
    argument = ProcSpecs::ToAryAsNil.new
    result = proc { |x, _| x }.send(@method, argument)
    result.should == argument
  end

  it "substitutes nil for missing arguments when self is a proc" do
    proc {|x,y| [x,y]}.send(@method).should == [nil,nil]

    a = proc {|x,y| [x, y]}.send(@method, 1)
    a.should == [1,nil]
  end

  it "raises an ArgumentError on excess arguments when self is a lambda" do
    lambda {
      lambda {|x| x}.send(@method, 1, 2)
    }.should raise_error(ArgumentError)

    lambda {
      lambda {|x| x}.send(@method, 1, 2, 3)
    }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError on missing arguments when self is a lambda" do
    lambda {
      lambda {|x| x}.send(@method)
    }.should raise_error(ArgumentError)

    lambda {
      lambda {|x,y| [x,y]}.send(@method, 1)
    }.should raise_error(ArgumentError)
  end

  it "treats a single Array argument as a single argument when self is a lambda" do
    lambda { |a| a }.send(@method, [1, 2]).should == [1, 2]
    lambda { |a, b| [a, b] }.send(@method, [1, 2], 3).should == [[1,2], 3]
  end

  it "treats a single Array argument as a single argument when self is a proc" do
    proc { |a| a }.send(@method, [1, 2]).should == [1, 2]
    proc { |a, b| [a, b] }.send(@method, [1, 2], 3).should == [[1,2], 3]
  end
end
