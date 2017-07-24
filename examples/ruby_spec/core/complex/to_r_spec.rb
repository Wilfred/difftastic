require File.expand_path('../../../spec_helper', __FILE__)

describe "Complex#to_r" do
  describe "when the imaginary part is Fixnum 0" do
    it "returns the result of sending #to_r to the real part" do
      real = mock_numeric('real')
      real.should_receive(:to_r).and_return(:r)
      Complex(real, 0).to_r.should == :r
    end
  end

  describe "when the imaginary part is Rational 0" do
    it "returns the result of sending #to_r to the real part" do
      real = mock_numeric('real')
      real.should_receive(:to_r).and_return(:r)
      Complex(real, Rational(0)).to_r.should == :r
    end
  end

  describe "when the imaginary part responds to #== 0 with true" do
    it "returns the result of sending #to_r to the real part" do
      real = mock_numeric('real')
      real.should_receive(:to_r).and_return(:r)
      imag = mock_numeric('imag')
      imag.should_receive(:==).with(0).any_number_of_times.and_return(true)
      Complex(real, imag).to_r.should == :r
    end
  end

  describe "when the imaginary part is non-zero" do
    it "raises RangeError" do
      lambda { Complex(0, 1).to_r }.should raise_error(RangeError)
    end
  end

  describe "when the imaginary part is Float 0.0" do
    it "raises RangeError" do
      lambda { Complex(0, 0.0).to_r }.should raise_error(RangeError)
    end
  end
end
