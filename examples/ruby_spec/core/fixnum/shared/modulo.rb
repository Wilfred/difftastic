describe :fixnum_modulo, shared: true do
  it "returns the modulus obtained from dividing self by the given argument" do
    13.send(@method, 4).should == 1
    4.send(@method, 13).should == 4

    13.send(@method, 4.0).should == 1
    4.send(@method, 13.0).should == 4

    (-200).send(@method, 256).should == 56
    (-1000).send(@method, 512).should == 24

    (-200).send(@method, -256).should == -200
    (-1000).send(@method, -512).should == -488

    (200).send(@method, -256).should == -56
    (1000).send(@method, -512).should == -24

    1.send(@method, 2.0).should == 1.0
    200.send(@method, bignum_value).should == 200
  end

  it "raises a ZeroDivisionError when the given argument is 0" do
    lambda { 13.send(@method, 0)  }.should raise_error(ZeroDivisionError)
    lambda { 0.send(@method, 0)   }.should raise_error(ZeroDivisionError)
    lambda { -10.send(@method, 0) }.should raise_error(ZeroDivisionError)
  end

  it "raises a ZeroDivisionError when the given argument is 0 and a Float" do
    lambda { 0.send(@method, 0.0) }.should raise_error(ZeroDivisionError)
    lambda { 10.send(@method, 0.0) }.should raise_error(ZeroDivisionError)
    lambda { -10.send(@method, 0.0) }.should raise_error(ZeroDivisionError)
  end

  it "raises a TypeError when given a non-Integer" do
    lambda {
      (obj = mock('10')).should_receive(:to_int).any_number_of_times.and_return(10)
      13.send(@method, obj)
    }.should raise_error(TypeError)
    lambda { 13.send(@method, "10")    }.should raise_error(TypeError)
    lambda { 13.send(@method, :symbol) }.should raise_error(TypeError)
  end
end
