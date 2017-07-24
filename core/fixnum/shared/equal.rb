describe :fixnum_equal, shared: true do
  it "returns true if self has the same value as other" do
    1.send(@method, 1).should == true
    9.send(@method, 5).should == false

    # Actually, these call Float#==, Bignum#== etc.
    9.send(@method, 9.0).should == true
    9.send(@method, 9.01).should == false

    10.send(@method, bignum_value).should == false
  end

  it "calls 'other == self' if the given argument is not a Fixnum" do
    1.send(@method, '*').should == false

    obj = mock('one other')
    obj.should_receive(:==).any_number_of_times.and_return(false)
    1.send(@method, obj).should == false

    obj = mock('another')
    obj.should_receive(:==).any_number_of_times.and_return(true)
    2.send(@method, obj).should == true
  end
end
