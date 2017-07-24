require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerable#drop" do
  before :each do
    @enum = EnumerableSpecs::Numerous.new(3, 2, 1, :go)
  end

  it "requires exactly one argument" do
    lambda{ @enum.drop{} }.should raise_error(ArgumentError)
    lambda{ @enum.drop(1, 2){} }.should raise_error(ArgumentError)
  end

  describe "passed a number n as an argument" do
    it "raises ArgumentError if n < 0" do
      lambda{ @enum.drop(-1) }.should raise_error(ArgumentError)
    end

    it "tries to convert n to an Integer using #to_int" do
      @enum.drop(2.3).should == [1, :go]

      obj = mock('to_int')
      obj.should_receive(:to_int).and_return(2)
      @enum.drop(obj).should == [1, :go]
    end

    it "returns [] for empty enumerables" do
      EnumerableSpecs::Empty.new.drop(0).should == []
      EnumerableSpecs::Empty.new.drop(2).should == []
    end

    it "returns [] if dropping all" do
      @enum.drop(5).should == []
      EnumerableSpecs::Numerous.new(3, 2, 1, :go).drop(4).should == []
    end

    it "raises a TypeError when the passed n can be coerced to Integer" do
      lambda{ @enum.drop("hat") }.should raise_error(TypeError)
      lambda{ @enum.drop(nil) }.should raise_error(TypeError)
    end

  end
end
