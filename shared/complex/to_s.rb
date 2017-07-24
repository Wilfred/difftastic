require File.expand_path('../../../spec_helper', __FILE__)

describe :complex_to_s, shared: true do
  describe "when self's real component is 0" do
    it "returns both the real and imaginary component even when the real is 0" do
      Complex(0, 5).to_s.should == "0+5i"
      Complex(0, -3.2).to_s.should == "0-3.2i"
    end
  end

  it "returns self as String" do
    Complex(1, 5).to_s.should == "1+5i"
    Complex(-2.5, 1.5).to_s.should == "-2.5+1.5i"

    Complex(1, -5).to_s.should == "1-5i"
    Complex(-2.5, -1.5).to_s.should == "-2.5-1.5i"

    # Guard against the Mathn library
    conflicts_with :Prime do
      Complex(1, 0).to_s.should == "1+0i"
      Complex(1, -0).to_s.should == "1+0i"
    end
  end

  it "returns 1+0.0i for Complex(1, 0.0)" do
    Complex(1, 0.0).to_s.should == "1+0.0i"
  end

  it "returns 1-0.0i for Complex(1, -0.0)" do
    Complex(1, -0.0).to_s.should == "1-0.0i"
  end

  it "returns 1+Infinity*i for Complex(1, Infinity)" do
    Complex(1, infinity_value).to_s.should == "1+Infinity*i"
  end

  it "returns 1-Infinity*i for Complex(1, -Infinity)" do
    Complex(1, -infinity_value).to_s.should == "1-Infinity*i"
  end

  it "returns 1+NaN*i for Complex(1, NaN)" do
    Complex(1, nan_value).to_s.should == "1+NaN*i"
  end
end
