require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/enumeratorized', __FILE__)

describe "Enumerable#cycle" do
  describe "passed no argument or nil" do
    it "loops indefinitely" do
      [[],[nil]].each do |args|
        bomb = 10
        EnumerableSpecs::Numerous.new.cycle(*args) do
          bomb -= 1
          break 42 if bomb <= 0
        end.should == 42
        bomb.should == 0
      end
    end

    it "returns nil if there are no elements" do
      out = EnumerableSpecs::Empty.new.cycle { break :nope }
      out.should be_nil
    end

    it "yields successive elements of the array repeatedly" do
      b = []
      EnumerableSpecs::Numerous.new(1,2,3).cycle do |elem|
        b << elem
        break if b.size == 7
      end
      b.should == [1,2,3,1,2,3,1]
    end

    it "calls each at most once" do
      enum = EnumerableSpecs::EachCounter.new(1, 2)
      enum.cycle.first(6).should == [1,2,1,2,1,2]
      enum.times_called.should == 1
    end

    it "yields only when necessary" do
      enum = EnumerableSpecs::EachCounter.new(10, 20, 30)
      enum.cycle { |x| break if x == 20}
      enum.times_yielded.should == 2
    end
  end

  describe "passed a number n as an argument" do
    it "returns nil and does nothing for non positive n" do
      EnumerableSpecs::ThrowingEach.new.cycle(0) {}.should be_nil
      EnumerableSpecs::NoEach.new.cycle(-22) {}.should be_nil
    end

    it "calls each at most once" do
      enum = EnumerableSpecs::EachCounter.new(1, 2)
      enum.cycle(3).to_a.should == [1,2,1,2,1,2]
      enum.times_called.should == 1
    end

    it "yields only when necessary" do
      enum = EnumerableSpecs::EachCounter.new(10, 20, 30)
      enum.cycle(3) { |x| break if x == 20}
      enum.times_yielded.should == 2
    end

    it "tries to convert n to an Integer using #to_int" do
      enum = EnumerableSpecs::Numerous.new(3, 2, 1)
      enum.cycle(2.3).to_a.should == [3, 2, 1, 3, 2, 1]

      obj = mock('to_int')
      obj.should_receive(:to_int).and_return(2)
      enum.cycle(obj).to_a.should == [3, 2, 1, 3, 2, 1]
    end

    it "raises a TypeError when the passed n can be coerced to Integer" do
      enum = EnumerableSpecs::Numerous.new
      lambda{ enum.cycle("cat"){} }.should raise_error(TypeError)
    end

    it "raises an ArgumentError if more arguments are passed" do
      enum = EnumerableSpecs::Numerous.new
      lambda{ enum.cycle(1, 2) {} }.should raise_error(ArgumentError)
    end

    it "gathers whole arrays as elements when each yields multiple" do
      multi = EnumerableSpecs::YieldsMulti.new
      multi.cycle(2).to_a.should == [[1, 2], [3, 4, 5], [6, 7, 8, 9], [1, 2], [3, 4, 5], [6, 7, 8, 9]]
    end
  end

  describe "Enumerable with size" do
    before :all do
      @object = EnumerableSpecs::NumerousWithSize.new(1, 2, 3, 4)
      @empty_object = EnumerableSpecs::EmptyWithSize.new
    end
    it_should_behave_like :enumeratorized_with_cycle_size
  end

  describe "Enumerable with no size" do
    before :all do
      @object = EnumerableSpecs::Numerous.new(1, 2, 3, 4)
      @method = :cycle
    end
    it_should_behave_like :enumeratorized_with_unknown_size
  end

end
