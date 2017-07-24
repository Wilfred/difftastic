describe :integer_to_i, shared: true do
  it "returns self" do
    10.send(@method).should eql(10)
    (-15).send(@method).should eql(-15)
    bignum_value.send(@method).should eql(bignum_value)
    (-bignum_value).send(@method).should eql(-bignum_value)
  end
end
