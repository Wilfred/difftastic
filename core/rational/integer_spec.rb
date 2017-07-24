describe "Rational#integer?" do
  it "returns false for a rational with a numerator and no denominator" do
    Rational(20).integer?.should be_false
  end

  it "returns false for a rational with a numerator and a denominator" do
    Rational(20,3).integer?.should be_false
  end
end
