require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#<=>" do
  describe "with a Fixnum" do
    it "returns -1 when other is larger" do
      (-bignum_value <=> 2).should == -1
    end

    it "returns 1 when other is smaller" do
      (bignum_value <=> 2).should == 1
    end
  end

  describe "with a Bignum" do
    describe "when other is negative" do
      it "returns -1 when self is negative and other is larger" do
        (-bignum_value(42) <=> -bignum_value).should == -1
      end

      it "returns 0 when other is equal" do
        (-bignum_value <=> -bignum_value).should == 0
      end

      it "returns 1 when self is negative and other is smaller" do
        (-bignum_value <=> -bignum_value(94)).should == 1
      end

      it "returns 1 when self is positive" do
        (bignum_value <=> -bignum_value).should == 1
      end
    end

    describe "when other is positive" do
      it "returns -1 when self is negative" do
        (-bignum_value <=> bignum_value).should == -1
      end

      it "returns -1 when self is positive and other is larger" do
        (bignum_value <=> bignum_value(38)).should == -1
      end

      it "returns 0 when other is equal" do
        (bignum_value <=> bignum_value).should == 0
      end

      it "returns 1 when other is smaller" do
        (bignum_value(56) <=> bignum_value).should == 1
      end
    end
  end

  describe "with a Float" do
    describe "when other is negative" do
      it "returns -1 when self is negative and other is larger" do
        (-bignum_value(0xffff) <=> -bignum_value.to_f).should == -1
      end

      it "returns 0 when other is equal" do
        (-bignum_value <=> -bignum_value.to_f).should == 0
      end

      it "returns 1 when self is negative and other is smaller" do
        (-bignum_value <=> -bignum_value(0xffef).to_f).should == 1
      end

      it "returns 1 when self is positive" do
        (bignum_value <=> -bignum_value.to_f).should == 1
      end
    end

    describe "when other is positive" do
      it "returns -1 when self is negative" do
        (-bignum_value <=> bignum_value.to_f).should == -1
      end

      it "returns -1 when self is positive and other is larger" do
        (bignum_value <=> bignum_value(0xfffe).to_f).should == -1
      end

      it "returns 0 when other is equal" do
        (bignum_value <=> bignum_value.to_f).should == 0
      end

      it "returns 1 when other is smaller" do
        (bignum_value(0xfeff) <=> bignum_value.to_f).should == 1
      end
    end
  end

  describe "with an Object" do
    before :each do
      @big = bignum_value
      @num = mock("value for Bignum#<=>")
    end

    it "calls #coerce on other" do
      @num.should_receive(:coerce).with(@big).and_return([@big.to_f, 2.5])
      @big <=> @num
    end

    ruby_version_is ""..."2.5" do
      it "returns nil if #coerce raises an exception" do
        @num.should_receive(:coerce).with(@big).and_raise(RuntimeError)
        lambda {
          @result = (@big <=> @num)
        }.should complain(/Numerical comparison operators will no more rescue exceptions/)
        @result.should be_nil
      end
    end

    ruby_version_is "2.5" do
      it "lets the exception go through if #coerce raises an exception" do
        @num.should_receive(:coerce).with(@big).and_raise(RuntimeError.new("my error"))
        lambda {
          @big <=> @num
        }.should raise_error(RuntimeError, "my error")
      end
    end

    it "raises an exception if #coerce raises a non-StandardError exception" do
      @num.should_receive(:coerce).with(@big).and_raise(Exception)
      lambda { @big <=> @num }.should raise_error(Exception)
    end

    it "returns nil if #coerce does not return an Array" do
      @num.should_receive(:coerce).with(@big).and_return(nil)
      (@big <=> @num).should be_nil
    end

    it "returns -1 if the coerced value is larger" do
      @num.should_receive(:coerce).with(@big).and_return([@big, bignum_value(10)])
      (@big <=> @num).should == -1
    end

    it "returns 0 if the coerced value is equal" do
      @num.should_receive(:coerce).with(@big).and_return([@big, bignum_value])
      (@big <=> @num).should == 0
    end

    it "returns 1 if the coerced value is smaller" do
      @num.should_receive(:coerce).with(@big).and_return([@big, 22])
      (@big <=> @num).should == 1
    end
  end

  # The tests below are taken from matz's revision 23730 for Ruby trunk
  it "returns 1 when self is Infinity and other is a Bignum" do
    (infinity_value <=> Float::MAX.to_i*2).should == 1
  end

  it "returns -1 when self is negative and other is Infinty" do
    (-Float::MAX.to_i*2 <=> infinity_value).should == -1
  end

  it "returns 1 when self is negative and other is -Infinity" do
    (-Float::MAX.to_i*2 <=> -infinity_value).should == 1
  end

  it "returns -1 when self is -Infinity and other is negative" do
    (-infinity_value <=> -Float::MAX.to_i*2).should == -1
  end
end
