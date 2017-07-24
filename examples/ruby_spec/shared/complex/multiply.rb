require File.expand_path('../../../spec_helper', __FILE__)

describe :complex_multiply, shared: true do
  describe "with Complex" do
    it "multiplies according to the usual rule for complex numbers: (a + bi) * (c + di) = ac - bd + (ad + bc)i" do
      (Complex(1, 2) * Complex(10, 20)).should == Complex((1 * 10) - (2 * 20), (1 * 20) + (2 * 10))
      (Complex(1.5, 2.1) * Complex(100.2, -30.3)).should == Complex((1.5 * 100.2) - (2.1 * -30.3), (1.5 * -30.3) + (2.1 * 100.2))
    end
  end

  describe "with Integer" do
    it "multiplies both parts of self by the given Integer" do
      (Complex(3, 2) * 50).should == Complex(150, 100)
      (Complex(-3, 2) * 50.5).should == Complex(-151.5, 101)
    end
  end

  describe "with Object" do
    it "tries to coerce self into other" do
      value = Complex(3, 9)

      obj = mock("Object")
      obj.should_receive(:coerce).with(value).and_return([2, 5])
      (value * obj).should == 2 * 5
    end
  end

  describe "with a Numeric which responds to #real? with true" do
    it "multiples both parts of self by other" do
      other = mock_numeric('other')
      real = mock_numeric('real')
      imag = mock_numeric('imag')
      other.should_receive(:real?).and_return(true)
      real.should_receive(:*).with(other).and_return(1)
      imag.should_receive(:*).with(other).and_return(2)
      (Complex(real, imag) * other).should == Complex(1, 2)
    end

    describe "with a Numeric which responds to #real? with false" do
      it "coerces the passed argument to Complex and multiplies the resulting elements" do
        complex = Complex(3, 0)
        other = mock_numeric('other')
        other.should_receive(:real?).any_number_of_times.and_return(false)
        other.should_receive(:coerce).with(complex).and_return([5, 2])
        (complex * other).should == 10
      end
    end
  end
end
