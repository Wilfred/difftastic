describe :float_to_i, shared: true do
  it "returns self truncated to an Integer" do
    899.2.send(@method).should eql(899)
    -1.122256e-45.send(@method).should eql(0)
    5_213_451.9201.send(@method).should eql(5213451)
    1.233450999123389e+12.send(@method).should eql(1233450999123)
    -9223372036854775808.1.send(@method).should eql(-9223372036854775808)
    9223372036854775808.1.send(@method).should eql(9223372036854775808)
  end
end
