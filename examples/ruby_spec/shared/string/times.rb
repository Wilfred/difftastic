describe :string_times, shared: true do
  class MyString < String; end

  it "returns a new string containing count copies of self" do
    @object.call("cool", 0).should == ""
    @object.call("cool", 1).should == "cool"
    @object.call("cool", 3).should == "coolcoolcool"
  end

  it "tries to convert the given argument to an integer using to_int" do
    @object.call("cool", 3.1).should == "coolcoolcool"
    @object.call("a", 3.999).should == "aaa"

    a = mock('4')
    a.should_receive(:to_int).and_return(4)

    @object.call("a", a).should == "aaaa"
  end

  it "raises an ArgumentError when given integer is negative" do
    lambda { @object.call("cool", -3)    }.should raise_error(ArgumentError)
    lambda { @object.call("cool", -3.14) }.should raise_error(ArgumentError)
  end

  it "raises a RangeError when given integer is a Bignum" do
    lambda { @object.call("cool", 999999999999999999999) }.should raise_error(RangeError)
  end

  it "returns subclass instances" do
    @object.call(MyString.new("cool"), 0).should be_an_instance_of(MyString)
    @object.call(MyString.new("cool"), 1).should be_an_instance_of(MyString)
    @object.call(MyString.new("cool"), 2).should be_an_instance_of(MyString)
  end

  it "always taints the result when self is tainted" do
    ["", "OK", MyString.new(""), MyString.new("OK")].each do |str|
      str.taint

      [0, 1, 2].each do |arg|
        @object.call(str, arg).tainted?.should == true
      end
    end
  end

  with_feature :encoding do
    it "returns a String in the same encoding as self" do
      str = "\xE3\x81\x82".force_encoding Encoding::UTF_8
      result = @object.call(str, 2)
      result.encoding.should equal(Encoding::UTF_8)
    end
  end

  platform_is wordsize: 32 do
    it "raises an ArgumentError if the length of the resulting string doesn't fit into a long" do
      lambda { @object.call("abc", (2 ** 31) - 1) }.should raise_error(ArgumentError)
    end
  end

  platform_is wordsize: 64 do
    it "raises an ArgumentError if the length of the resulting string doesn't fit into a long" do
      lambda { @object.call("abc", (2 ** 63) - 1) }.should raise_error(ArgumentError)
    end
  end
end
