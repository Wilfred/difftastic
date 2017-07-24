require File.expand_path('../../../spec_helper', __FILE__)

describe :complex_exponent, shared: true do
  describe "with Fixnum 0" do
    it "returns Complex(1)" do
      (Complex(3, 4) ** 0).should eql(Complex(1))
    end
  end

  describe "with Float 0.0" do
    it "returns Complex(1.0, 0.0)" do
      (Complex(3, 4) ** 0.0).should eql(Complex(1.0, 0.0))
    end
  end

  describe "with Complex" do
    it "returns self raised to the given power" do
      (Complex(2, 1) ** Complex(2, 1)).should be_close(Complex(-0.504824688978319, 3.10414407699553), TOLERANCE)
      (Complex(2, 1) ** Complex(3, 4)).should be_close(Complex(-0.179174656916581, -1.74071656397662), TOLERANCE)

      (Complex(2, 1) ** Complex(-2, -1)).should be_close(Complex(-0.051041070450869, -0.313849223270419), TOLERANCE)
      (Complex(-2, -1) ** Complex(2, 1)).should be_close(Complex(-11.6819929610857, 71.8320439736158), TOLERANCE)
    end
  end

  describe "with Integer" do
    it "returns self raised to the given power" do
      (Complex(2, 1) ** 2).should == Complex(3, 4)
      (Complex(3, 4) ** 2).should == Complex(-7, 24)
      (Complex(3, 4) ** -2).should be_close(Complex(-0.0112, -0.0384), TOLERANCE)


      (Complex(2, 1) ** 2.5).should be_close(Complex(2.99179707178602, 6.85206901006896), TOLERANCE)
      (Complex(3, 4) ** 2.5).should be_close(Complex(-38.0, 41.0), TOLERANCE)
      (Complex(3, 4) ** -2.5).should be_close(Complex(-0.01216, -0.01312), TOLERANCE)

      (Complex(1) ** 1).should == Complex(1)

      # NOTE: Takes way too long...
      #(Complex(2, 1) ** bignum_value)
    end
  end

  describe "with Rational" do
    it "returns self raised to the given power" do
      (Complex(2, 1) ** Rational(3, 4)).should be_close(Complex(1.71913265276568, 0.623124744394697), TOLERANCE)
      (Complex(2, 1) ** Rational(4, 3)).should be_close(Complex(2.3828547125173, 1.69466313833091), TOLERANCE)
      (Complex(2, 1) ** Rational(-4, 3)).should be_close(Complex(0.278700377879388, -0.198209003071003), TOLERANCE)
    end
  end

  describe "with Object" do
    it "tries to coerce self into other" do
      value = Complex(3, 9)

      obj = mock("Object")
      obj.should_receive(:coerce).with(value).and_return([2, 5])
      (value ** obj).should == 2 ** 5
    end
  end
end
