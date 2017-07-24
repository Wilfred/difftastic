require File.expand_path('../../../spec_helper', __FILE__)

describe :complex_equal_value, shared: true do
  describe "with Complex" do
    it "returns true when self and other have numerical equality" do
      Complex(1, 2).should == Complex(1, 2)
      Complex(3, 9).should == Complex(3, 9)
      Complex(-3, -9).should == Complex(-3, -9)

      Complex(1, 2).should_not == Complex(3, 4)
      Complex(3, 9).should_not == Complex(9, 3)

      Complex(1.0, 2.0).should == Complex(1, 2)
      Complex(3.0, 9.0).should_not == Complex(9.0, 3.0)

      Complex(1.5, 2.5).should == Complex(1.5, 2.5)
      Complex(1.5, 2.5).should == Complex(1.5, 2.5)
      Complex(-1.5, 2.5).should == Complex(-1.5, 2.5)

      Complex(1.5, 2.5).should_not == Complex(2.5, 1.5)
      Complex(3.75, 2.5).should_not == Complex(1.5, 2.5)

      Complex(bignum_value, 2.5).should == Complex(bignum_value, 2.5)
      Complex(3.75, bignum_value).should_not == Complex(1.5, bignum_value)

      Complex(nan_value).should_not == Complex(nan_value)
    end
  end

  describe "with Numeric" do
    it "returns true when self's imaginary part is 0 and the real part and other have numerical equality" do
      Complex(3, 0).should == 3
      Complex(-3, 0).should == -3

      Complex(3.5, 0).should == 3.5
      Complex(-3.5, 0).should == -3.5

      Complex(bignum_value, 0).should == bignum_value
      Complex(-bignum_value, 0).should == -bignum_value

      Complex(3.0, 0).should == 3
      Complex(-3.0, 0).should == -3

      Complex(3, 0).should_not == 4
      Complex(-3, 0).should_not == -4

      Complex(3.5, 0).should_not == -4.5
      Complex(-3.5, 0).should_not == 2.5

      Complex(bignum_value, 0).should_not == bignum_value(10)
      Complex(-bignum_value, 0).should_not == -bignum_value(20)
    end
  end

  describe "with Object" do
    # Fixnum#==, Float#== and Bignum#== only return booleans - Bug?
    it "calls other#== with self" do
      value = Complex(3, 0)

      obj = mock("Object")
      obj.should_receive(:==).with(value).and_return(:expected)

      (value == obj).should_not be_false
    end
  end

  describe "with a Numeric which responds to #real? with true" do
    before do
      @other = mock_numeric('other')
      @other.should_receive(:real?).any_number_of_times.and_return(true)
    end

    it "returns real == other when the imaginary part is zero" do
      real = mock_numeric('real')
      real.should_receive(:==).with(@other).and_return(true)
      (Complex(real, 0) == @other).should be_true
    end

    it "returns false when when the imaginary part is not zero" do
      (Complex(3, 1) == @other).should be_false
    end
  end

  describe "with a Numeric which responds to #real? with false" do
    it "returns other == self" do
      complex = Complex(3, 0)
      other = mock_numeric('other')
      other.should_receive(:real?).any_number_of_times.and_return(false)
      other.should_receive(:==).with(complex).and_return(true)
      (complex == other).should be_true
    end
  end
end
