describe :bignum_equal, shared: true do
  before :each do
    @bignum = bignum_value
  end

  it "returns true if self has the same value as the given argument" do
    @bignum.send(@method, @bignum).should == true
    @bignum.send(@method, @bignum.to_f).should == true

    @bignum.send(@method, @bignum + 1).should == false
    (@bignum + 1).send(@method, @bignum).should == false

    @bignum.send(@method, 9).should == false
    @bignum.send(@method, 9.01).should == false

    @bignum.send(@method, bignum_value(10)).should == false
  end

  it "calls 'other == self' if the given argument is not an Integer" do
    obj = mock('not integer')
    obj.should_receive(:==).and_return(true)
    @bignum.send(@method, obj).should == true
  end

  it "returns the result of 'other == self' as a boolean" do
    obj = mock('not integer')
    obj.should_receive(:==).exactly(2).times.and_return("woot", nil)
    @bignum.send(@method, obj).should == true
    @bignum.send(@method, obj).should == false
  end
end
