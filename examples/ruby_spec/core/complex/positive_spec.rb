describe "Complex#positive?" do
  it "is undefined" do
    c = Complex(1)

    c.methods.should_not include(:positive?)

    lambda {
      c.positive?
    }.should raise_error(NoMethodError)
  end
end
