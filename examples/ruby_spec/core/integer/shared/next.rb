describe :integer_next, shared: true do
  it "returns the next larger positive Fixnum" do
    2.send(@method).should == 3
  end

  it "returns the next larger negative Fixnum" do
    (-2).send(@method).should == -1
  end

  it "returns the next larger positive Bignum" do
    bignum_value.send(@method).should == bignum_value(1)
  end

  it "returns the next larger negative Bignum" do
    (-bignum_value(1)).send(@method).should == -bignum_value
  end

  it "overflows a Fixnum to a Bignum" do
    fixnum_max.send(@method).should == fixnum_max + 1
  end

  it "underflows a Bignum to a Fixnum" do
    (fixnum_min - 1).send(@method).should == fixnum_min
  end
end
