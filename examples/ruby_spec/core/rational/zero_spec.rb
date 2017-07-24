describe "Rational#zero?" do
  it "returns true if the numerator is 0" do
    Rational(0,26).zero?.should be_true
  end

  it "returns true if the numerator is 0.0" do
    Rational(0.0,26).zero?.should be_true
  end

  it "returns false if the numerator isn't 0" do
    Rational(26).zero?.should be_false
  end
end
