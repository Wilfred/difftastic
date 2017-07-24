require File.expand_path('../../../shared/complex/real', __FILE__)

describe "Complex#real" do
  it_behaves_like(:complex_real, :real)
end

describe "Complex#real?" do
  it "returns false if there is an imaginary part" do
    Complex(2,3).real?.should be_false
  end

  it "returns false if there is not an imaginary part" do
    Complex(2).real?.should be_false
  end

  it "returns false if the real part is Infinity" do
    Complex(infinity_value).real?.should be_false
  end

  it "returns false if the real part is NaN" do
    Complex(nan_value).real?.should be_false
  end
end
