describe :bignum_modulo, shared: true do
  before :each do
    @bignum = bignum_value
  end

  it "returns the modulus obtained from dividing self by the given argument" do
    @bignum.send(@method, 5).should == 3
    @bignum.send(@method, -5).should == -2
    @bignum.send(@method, -100).should == -92
    @bignum.send(@method, 2.22).should be_close(0.780180180180252, TOLERANCE)
    @bignum.send(@method, bignum_value(10)).should == 9223372036854775808
  end

  it "raises a ZeroDivisionError when the given argument is 0" do
    lambda { @bignum.send(@method, 0) }.should raise_error(ZeroDivisionError)
    lambda { (-@bignum).send(@method, 0) }.should raise_error(ZeroDivisionError)
  end

  it "raises a ZeroDivisionError when the given argument is 0 and a Float" do
    lambda { @bignum.send(@method, 0.0) }.should raise_error(ZeroDivisionError)
    lambda { -@bignum.send(@method, 0.0) }.should raise_error(ZeroDivisionError)
  end

  it "raises a TypeError when given a non-Integer" do
    lambda { @bignum.send(@method, mock('10')) }.should raise_error(TypeError)
    lambda { @bignum.send(@method, "10") }.should raise_error(TypeError)
    lambda { @bignum.send(@method, :symbol) }.should raise_error(TypeError)
  end
end
