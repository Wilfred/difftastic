describe "Complex#integer?" do
  it "returns false for a Complex with no imaginary part" do
    Complex(20).integer?.should be_false
  end

  it "returns false for a Complex with an imaginary part" do
    Complex(20,3).integer?.should be_false
  end
end
