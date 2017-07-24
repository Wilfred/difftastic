require File.expand_path('../../spec_helper', __FILE__)

describe "A Proc" do
  it "captures locals from the surrounding scope" do
    var = 1
    lambda { var }.call.should == 1
  end

  it "does not capture a local when an argument has the same name" do
    var = 1
    lambda { |var| var }.call(2).should == 2
    var.should == 1
  end

  describe "taking zero arguments" do
    before :each do
      @l = lambda { 1 }
    end

    it "does not raise an exception if no values are passed" do
      @l.call.should == 1
    end

    it "raises an ArgumentErro if a value is passed" do
      lambda { @l.call(0) }.should raise_error(ArgumentError)
    end
  end

  describe "taking || arguments" do
    before :each do
      @l = lambda { || 1 }
    end

    it "does not raise an exception when passed no values" do
      @l.call.should == 1
    end

    it "raises an ArgumentError if a value is passed" do
      lambda { @l.call(0) }.should raise_error(ArgumentError)
    end
  end

  describe "taking |a| arguments" do
    before :each do
      @l = lambda { |a| a }
    end

    it "assigns the value passed to the argument" do
      @l.call(2).should == 2
    end

    it "does not destructure a single Array value" do
      @l.call([1, 2]).should == [1, 2]
    end

    it "does not call #to_ary to convert a single passed object to an Array" do
      obj = mock("block yield to_ary")
      obj.should_not_receive(:to_ary)

      @l.call(obj).should equal(obj)
    end

    it "raises an ArgumentError if no value is passed" do
      lambda { @l.call }.should raise_error(ArgumentError)
    end
  end

  describe "taking |a, b| arguments" do
    before :each do
      @l = lambda { |a, b| [a, b] }
    end

    it "raises an ArgumentError if passed no values" do
      lambda { @l.call }.should raise_error(ArgumentError)
    end

    it "raises an ArgumentError if passed one value" do
      lambda { @l.call(0) }.should raise_error(ArgumentError)
    end

    it "assigns the values passed to the arguments" do
      @l.call(1, 2).should == [1, 2]
    end

    it "does not call #to_ary to convert a single passed object to an Array" do
      obj = mock("proc call to_ary")
      obj.should_not_receive(:to_ary)

      lambda { @l.call(obj) }.should raise_error(ArgumentError)
    end
  end

  describe "taking |a, *b| arguments" do
    before :each do
      @l = lambda { |a, *b| [a, b] }
    end

    it "raises an ArgumentError if passed no values" do
      lambda { @l.call }.should raise_error(ArgumentError)
    end

    it "does not destructure a single Array value yielded" do
      @l.call([1, 2, 3]).should == [[1, 2, 3], []]
    end

    it "assigns all passed values after the first to the rest argument" do
        @l.call(1, 2, 3).should == [1, [2, 3]]
    end

    it "does not call #to_ary to convert a single passed object to an Array" do
      obj = mock("block yield to_ary")
      obj.should_not_receive(:to_ary)

      @l.call(obj).should == [obj, []]
    end
  end

  describe "taking |*| arguments" do
    before :each do
      @l = lambda { |*| 1 }
    end

    it "does not raise an exception when passed no values" do
      @l.call.should == 1
    end

    it "does not raise an exception when passed multiple values" do
      @l.call(2, 3, 4).should == 1
    end

    it "does not call #to_ary to convert a single passed object to an Array" do
      obj = mock("block yield to_ary")
      obj.should_not_receive(:to_ary)

      @l.call(obj).should == 1
    end
  end

  describe "taking |*a| arguments" do
    before :each do
      @l = lambda { |*a| a }
    end

    it "assigns [] to the argument when passed no values" do
      @l.call.should == []
    end

    it "assigns the argument an Array wrapping one passed value" do
      @l.call(1).should == [1]
    end

    it "assigns the argument an Array wrapping all values passed" do
      @l.call(1, 2, 3).should == [1, 2, 3]
    end

    it "does not call #to_ary to convert a single passed object to an Array" do
      obj = mock("block yield to_ary")
      obj.should_not_receive(:to_ary)

      @l.call(obj).should == [obj]
    end
  end

  describe "taking |a, | arguments" do
    before :each do
      @l = lambda { |a, | a }
    end

    it "raises an ArgumentError when passed no values" do
      lambda { @l.call }.should raise_error(ArgumentError)
    end

    it "raises an ArgumentError when passed more than one value" do
      lambda { @l.call(1, 2) }.should raise_error(ArgumentError)
    end

    it "assigns the argument the value passed" do
      @l.call(1).should == 1
    end

    it "does not destructure when passed a single Array" do
      @l.call([1,2]).should == [1, 2]
    end

    it "does not call #to_ary to convert a single passed object to an Array" do
      obj = mock("block yield to_ary")
      obj.should_not_receive(:to_ary)

      @l.call(obj).should == obj
    end
  end

  describe "taking |(a, b)| arguments" do
    before :each do
      @l = lambda { |(a, b)| [a, b] }
    end

    it "raises an ArgumentError when passed no values" do
      lambda { @l.call }.should raise_error(ArgumentError)
    end

    it "destructures a single Array value yielded" do
      @l.call([1, 2]).should == [1, 2]
    end

    it "calls #to_ary to convert a single passed object to an Array" do
      obj = mock("block yield to_ary")
      obj.should_receive(:to_ary).and_return([1, 2])

      @l.call(obj).should == [1, 2]
    end

    it "raises a TypeError if #to_ary does not return an Array" do
      obj = mock("block yield to_ary invalid")
      obj.should_receive(:to_ary).and_return(1)

      lambda { @l.call(obj) }.should raise_error(TypeError)
    end
  end
end
