# These examples hold for BasicObject#equal?, BasicObject#== and Kernel#eql?
describe :object_equal, shared: true do
  it "returns true if other is identical to self" do
    obj = Object.new
    obj.__send__(@method, obj).should be_true
  end

  it "returns false if other is not identical to self" do
    a = Object.new
    b = Object.new
    a.__send__(@method, b).should be_false
  end

  it "returns true only if self and other are the same object" do
    o1 = mock('o1')
    o2 = mock('o2')
    o1.__send__(@method, o1).should == true
    o2.__send__(@method, o2).should == true
    o1.__send__(@method, o2).should == false
  end

  it "returns true for the same immediate object" do
    o1 = 1
    o2 = :hola
    1.__send__(@method, o1).should == true
    :hola.__send__(@method, o2).should == true
  end

  it "returns false for nil and any other object" do
    o1 = mock('o1')
    nil.__send__(@method, nil).should == true
    o1.__send__(@method, nil).should == false
    nil.__send__(@method, o1).should == false
  end

  it "returns false for objects of different classes" do
    :hola.__send__(@method, 1).should == false
  end

  it "returns true only if self and other are the same boolean" do
    true.__send__(@method, true).should == true
    false.__send__(@method, false).should == true

    true.__send__(@method, false).should == false
    false.__send__(@method, true).should == false
  end

  it "returns true for integers of initially different ranges" do
    big42 = (bignum_value * 42 / bignum_value)
    42.__send__(@method, big42).should == true
    long42 = (1 << 35) * 42 / (1 << 35)
    42.__send__(@method, long42).should == true
  end
end
