describe :bignum_abs, shared: true do
  it "returns the absolute value" do
    bignum_value(39).send(@method).should == 9223372036854775847
    (-bignum_value(18)).send(@method).should == 9223372036854775826
  end
end
