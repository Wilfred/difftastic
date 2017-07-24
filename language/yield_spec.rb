require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/yield', __FILE__)

# Note that these specs use blocks defined as { |*a| ... } to capture the
# arguments with which the block is invoked. This is slightly confusing
# because the outer Array is a consequence of |*a| but it is necessary to
# clearly distinguish some behaviors.

describe "The yield call" do
  before :each do
    @y = YieldSpecs::Yielder.new
  end

  describe "taking no arguments" do
    it "raises a LocalJumpError when the method is not passed a block" do
      lambda { @y.z }.should raise_error(LocalJumpError)
    end

    it "ignores assignment to the explicit block argument and calls the passed block" do
      @y.ze { 42 }.should == 42
    end
  end

  describe "taking a single argument" do
    describe "when no block is given" do
      it "raises a LocalJumpError" do
        lambda { @y.s(1) }.should raise_error(LocalJumpError)
      end
    end

    describe "yielding to a literal block" do
      it "passes an empty Array when the argument is an empty Array" do
        @y.s([]) { |*a| a }.should == [[]]
      end

      it "passes nil as a value" do
        @y.s(nil) { |*a| a }.should == [nil]
      end

      it "passes a single value" do
        @y.s(1) { |*a| a }.should == [1]
      end

      it "passes a single, multi-value Array" do
        @y.s([1, 2, 3]) { |*a| a }.should == [[1, 2, 3]]
      end
    end

    describe "yielding to a lambda" do
      it "passes an empty Array when the argument is an empty Array" do
        @y.s([], &lambda { |*a| a }).should == [[]]
      end

      it "passes nil as a value" do
        @y.s(nil, &lambda { |*a| a }).should == [nil]
      end

      it "passes a single value" do
        @y.s(1, &lambda { |*a| a }).should == [1]
      end

      it "passes a single, multi-value Array" do
        @y.s([1, 2, 3], &lambda { |*a| a }).should == [[1, 2, 3]]
      end

      it "raises an ArgumentError if too few arguments are passed" do
        lambda {
          @y.s(1, &lambda { |a,b| [a,b] })
        }.should raise_error(ArgumentError)
      end

      ruby_bug "#12705", "2.2"..."2.5" do
        it "should not destructure an Array into multiple arguments" do
          lambda {
            @y.s([1, 2], &lambda { |a,b| [a,b] })
          }.should raise_error(ArgumentError)
        end
      end
    end
  end

  describe "taking multiple arguments" do
    it "raises a LocalJumpError when the method is not passed a block" do
      lambda { @y.m(1, 2, 3) }.should raise_error(LocalJumpError)
    end

    it "passes the arguments to the block" do
      @y.m(1, 2, 3) { |*a| a }.should == [1, 2, 3]
    end

    it "passes only the first argument if the block takes one parameter" do
      @y.m(1, 2, 3) { |a| a }.should == 1
    end

    it "raises an ArgumentError if too many arguments are passed to a lambda" do
      lambda {
        @y.m(1, 2, 3, &lambda { |a| })
      }.should raise_error(ArgumentError)
    end

    it "raises an ArgumentError if too few arguments are passed to a lambda" do
      lambda {
        @y.m(1, 2, 3, &lambda { |a,b,c,d| })
      }.should raise_error(ArgumentError)
    end
  end

  describe "taking a single splatted argument" do
    it "raises a LocalJumpError when the method is not passed a block" do
      lambda { @y.r(0) }.should raise_error(LocalJumpError)
    end

    it "passes a single value" do
      @y.r(1) { |*a| a }.should == [1]
    end

    it "passes no arguments when the argument is an empty Array" do
      @y.r([]) { |*a| a }.should == []
    end

    it "passes the value when the argument is an Array containing a single value" do
      @y.r([1]) { |*a| a }.should == [1]
    end

    it "passes the values of the Array as individual arguments" do
      @y.r([1, 2, 3]) { |*a| a }.should == [1, 2, 3]
    end

    it "passes the element of a single element Array" do
      @y.r([[1, 2]]) { |*a| a }.should == [[1, 2]]
      @y.r([nil]) { |*a| a }.should == [nil]
      @y.r([[]]) { |*a| a }.should == [[]]
    end

    it "passes no values when give nil as an argument" do
      @y.r(nil) { |*a| a }.should == []
    end
  end

  describe "taking multiple arguments with a splat" do
    it "raises a LocalJumpError when the method is not passed a block" do
      lambda { @y.rs(1, 2, [3, 4]) }.should raise_error(LocalJumpError)
    end

    it "passes the arguments to the block" do
      @y.rs(1, 2, 3) { |*a| a }.should == [1, 2, 3]
    end

    it "does not pass an argument value if the splatted argument is an empty Array" do
      @y.rs(1, 2, []) { |*a| a }.should == [1, 2]
    end

    it "passes the Array elements as arguments if the splatted argument is a non-empty Array" do
      @y.rs(1, 2, [3]) { |*a| a }.should == [1, 2, 3]
      @y.rs(1, 2, [nil]) { |*a| a }.should == [1, 2, nil]
      @y.rs(1, 2, [[]]) { |*a| a }.should == [1, 2, []]
      @y.rs(1, 2, [3, 4, 5]) { |*a| a }.should == [1, 2, 3, 4, 5]
    end

    it "does not pass an argument value if the splatted argument is nil" do
      @y.rs(1, 2, nil) { |*a| a }.should == [1, 2]
    end
  end

  describe "taking matching arguments with splats and post args" do
    it "raises a LocalJumpError when the method is not passed a block" do
      lambda { @y.rs(1, 2, [3, 4]) }.should raise_error(LocalJumpError)
    end

    it "passes the arguments to the block" do
      @y.rs([1, 2], 3, 4) { |(*a, b), c, d| [a, b, c, d] }.should == [[1], 2, 3, 4]
    end
  end

  it "uses captured block of a block used in define_method" do
    @y.deep(2).should == 4
  end

end
