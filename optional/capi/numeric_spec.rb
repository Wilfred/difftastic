require File.expand_path('../spec_helper', __FILE__)

load_extension("numeric")

describe "CApiNumericSpecs" do
  before :each do
    @s = CApiNumericSpecs.new
  end

  platform_is wordsize: 64 do
    describe "rb_num2int" do
      it "raises a TypeError if passed nil" do
        lambda { @s.rb_num2int(nil) }.should raise_error(TypeError)
      end

      it "converts a Float" do
        @s.rb_num2int(4.2).should == 4
      end

      it "converts a Bignum" do
        @s.rb_num2int(0x7fff_ffff).should == 0x7fff_ffff
      end

      it "converts a Fixnum" do
        @s.rb_num2int(5).should == 5
      end

      it "converts -1 to an signed number" do
        @s.rb_num2int(-1).should == -1
      end

      it "converts a negative Bignum into an signed number" do
        @s.rb_num2int(-2147442171).should == -2147442171
      end

      it "raises a RangeError if the value is more than 32bits" do
        lambda { @s.rb_num2int(0xffff_ffff+1) }.should raise_error(RangeError)
      end

      it "calls #to_int to coerce the value" do
        obj = mock("number")
        obj.should_receive(:to_int).and_return(2)
        @s.rb_num2long(obj).should == 2
      end
    end
  end

  platform_is wordsize: 64 do
    describe "rb_num2uint" do
      it "raises a TypeError if passed nil" do
        lambda { @s.rb_num2uint(nil) }.should raise_error(TypeError)
      end

      it "converts a Float" do
        @s.rb_num2uint(4.2).should == 4
      end

      it "converts a Bignum" do
        @s.rb_num2uint(0xffff_ffff).should == 0xffff_ffff
      end

      it "converts a Fixnum" do
        @s.rb_num2uint(5).should == 5
      end

      it "converts a negative number to the complement" do
        @s.rb_num2uint(-1).should == 18446744073709551615
      end

      it "converts a signed int value to the complement" do
        @s.rb_num2uint(-0x8000_0000).should == 18446744071562067968
      end

      it "raises a RangeError if the value is more than 32bits" do
        lambda { @s.rb_num2uint(0xffff_ffff+1) }.should raise_error(RangeError)
      end

      it "raises a RangeError if the value is less than 32bits negative" do
        lambda { @s.rb_num2uint(-0x8000_0000-1) }.should raise_error(RangeError)
      end

      it "raises a RangeError if the value is more than 64bits" do
        lambda do
          @s.rb_num2uint(0xffff_ffff_ffff_ffff+1)
        end.should raise_error(RangeError)
      end

      it "calls #to_int to coerce the value" do
        obj = mock("number")
        obj.should_receive(:to_int).and_return(2)
        @s.rb_num2uint(obj).should == 2
      end
    end
  end

  describe "rb_num2long" do
    it "raises a TypeError if passed nil" do
      lambda { @s.rb_num2long(nil) }.should raise_error(TypeError)
    end

    it "converts a Float" do
      @s.rb_num2long(4.2).should == 4
    end

    it "converts a Bignum" do
      @s.rb_num2long(0x7fff_ffff).should == 0x7fff_ffff
    end

    it "converts a Fixnum" do
      @s.rb_num2long(5).should == 5
    end

    platform_is wordsize: 32 do
      it "converts -1 to an signed number" do
        @s.rb_num2long(-1).should == -1
      end

      it "converts a negative Bignum into an signed number" do
        @s.rb_num2long(-2147442171).should == -2147442171
      end

      it "raises a RangeError if the value is more than 32bits" do
        lambda { @s.rb_num2long(0xffff_ffff+1) }.should raise_error(RangeError)
      end
    end

    platform_is wordsize: 64 do
      it "converts -1 to an signed number" do
        @s.rb_num2long(-1).should == -1
      end

      it "converts a negative Bignum into an signed number" do
        @s.rb_num2long(-9223372036854734331).should == -9223372036854734331
      end

      it "raises a RangeError if the value is more than 64bits" do
        lambda do
          @s.rb_num2long(0xffff_ffff_ffff_ffff+1)
        end.should raise_error(RangeError)
      end
    end

    it "calls #to_int to coerce the value" do
      obj = mock("number")
      obj.should_receive(:to_int).and_return(2)
      @s.rb_num2long(obj).should == 2
    end
  end

  describe "rb_int2num" do
    it "raises a TypeError if passed nil" do
      lambda { @s.rb_int2num(nil) }.should raise_error(TypeError)
    end

    it "converts a Float" do
      @s.rb_int2num(4.2).should == 4
    end

    it "raises a RangeError when passed a Bignum" do
      lambda { @s.rb_int2num(bignum_value) }.should raise_error(RangeError)
    end

    it "converts a Fixnum" do
      @s.rb_int2num(5).should == 5
    end

    it "converts a negative Fixnum" do
      @s.rb_int2num(-11).should == -11
    end
  end

  describe "rb_num2ulong" do
    it "raises a TypeError if passed nil" do
      lambda { @s.rb_num2ulong(nil) }.should raise_error(TypeError)
    end

    it "converts a Float" do
      @s.rb_num2ulong(4.2).should == 4
    end

    it "converts a Bignum" do
      @s.rb_num2ulong(0xffff_ffff).should == 0xffff_ffff
    end

    it "converts a Fixnum" do
      @s.rb_num2ulong(5).should == 5
    end

    platform_is wordsize: 32 do
      it "converts -1 to an unsigned number" do
        @s.rb_num2ulong(-1).should == 4294967295
      end

      it "converts a negative Bignum into an unsigned number" do
        @s.rb_num2ulong(-2147442171).should == 2147525125
      end

      it "raises a RangeError if the value is more than 32bits" do
        lambda { @s.rb_num2ulong(0xffff_ffff+1) }.should raise_error(RangeError)
      end
    end

    platform_is wordsize: 64 do
      it "converts -1 to an unsigned number" do
        @s.rb_num2ulong(-1).should == 18446744073709551615
      end

      it "converts a negative Bignum into an unsigned number" do
        @s.rb_num2ulong(-9223372036854734331).should == 9223372036854817285
      end

      it "raises a RangeError if the value is more than 64bits" do
        lambda do
          @s.rb_num2ulong(0xffff_ffff_ffff_ffff+1)
        end.should raise_error(RangeError)
      end
    end

    it "calls #to_int to coerce the value" do
      obj = mock("number")
      obj.should_receive(:to_int).and_return(2)
      @s.rb_num2ulong(obj).should == 2
    end
  end

  describe "rb_Integer" do
    it "creates a new Integer from a String" do
      i = @s.rb_Integer("8675309")
      i.should be_kind_of(Integer)
      i.should eql(8675309)
    end
  end

  describe "rb_ll2inum" do
    it "creates a new Fixnum from a small signed long long" do
      i = @s.rb_ll2inum_14()
      i.should be_kind_of(Fixnum)
      i.should eql(14)
    end
  end

  describe "rb_int2inum" do
    it "creates a new Fixnum from a long" do
      i = @s.rb_int2inum_14()
      i.should be_kind_of(Fixnum)
      i.should eql(14)
    end
  end

  describe "rb_num2dbl" do
    it "raises a TypeError if passed nil" do
      lambda { @s.rb_num2dbl(nil) }.should raise_error(TypeError)
    end

    it "raises a TypeError if passed a String" do
      lambda { @s.rb_num2dbl("1.2") }.should raise_error(TypeError)
    end

    it "converts a Float" do
      @s.rb_num2dbl(4.2).should == 4.2
    end

    it "converts a Bignum" do
      @s.rb_num2dbl(2**70).should == (2**70).to_f
    end

    it "converts a Fixnum" do
      @s.rb_num2dbl(5).should == 5.0
    end

    it "calls #to_f to coerce the value" do
      obj = mock("number")
      obj.should_receive(:to_f).and_return(2.0)
      @s.rb_num2dbl(obj).should == 2.0
    end
  end

  describe "NUM2CHR" do
    it "returns the first character of a String" do
      @s.NUM2CHR("Abc").should == 65
    end

    it "returns the least significant byte of an Integer" do
      @s.NUM2CHR(0xa7c).should == 0x07c
    end

    it "returns the least significant byte of a Float converted to an Integer" do
      @s.NUM2CHR(0xa7c.to_f).should == 0x07c
    end

    it "raises a TypeError when passed an empty String" do
      lambda { @s.NUM2CHR("") }.should raise_error(TypeError)
    end
  end

  describe "rb_num_zerodiv" do
    it "raises a RuntimeError" do
      lambda { @s.rb_num_zerodiv() }.should raise_error(ZeroDivisionError, 'divided by 0')
    end
  end

  describe "rb_cmpint" do
    it "returns a Fixnum if passed one" do
      @s.rb_cmpint(1, 2).should == 1
    end

    it "uses > to check if the value is greater than 1" do
      m = mock("number")
      m.should_receive(:>).and_return(true)
      @s.rb_cmpint(m, 4).should == 1
    end

    it "uses < to check if the value is less than 1" do
      m = mock("number")
      m.should_receive(:>).and_return(false)
      m.should_receive(:<).and_return(true)
      @s.rb_cmpint(m, 4).should == -1
    end

    it "returns 0 if < and > are false" do
      m = mock("number")
      m.should_receive(:>).and_return(false)
      m.should_receive(:<).and_return(false)
      @s.rb_cmpint(m, 4).should == 0
    end

    it "raises an ArgumentError when passed nil" do
      lambda {
        @s.rb_cmpint(nil, 4)
      }.should raise_error(ArgumentError)
    end
  end

  describe "rb_num_coerce_bin" do
    it "calls #coerce on the first argument" do
      obj = mock("rb_num_coerce_bin")
      obj.should_receive(:coerce).with(2).and_return([1, 2])

      @s.rb_num_coerce_bin(2, obj, :+).should == 3
    end

    it "calls the specified method on the first argument returned by #coerce" do
      obj = mock("rb_num_coerce_bin")
      obj.should_receive(:coerce).with(2).and_return([obj, 2])
      obj.should_receive(:+).with(2).and_return(3)

      @s.rb_num_coerce_bin(2, obj, :+).should == 3
    end

    it "raises a TypeError if #coerce does not return an Array" do
      obj = mock("rb_num_coerce_bin")
      obj.should_receive(:coerce).with(2).and_return(nil)

      lambda { @s.rb_num_coerce_bin(2, obj, :+) }.should raise_error(TypeError)
    end
  end

  describe "rb_num_coerce_cmp" do
    it "calls #coerce on the first argument" do
      obj = mock("rb_num_coerce_cmp")
      obj.should_receive(:coerce).with(2).and_return([1, 2])

      @s.rb_num_coerce_cmp(2, obj, :<=>).should == -1
    end

    it "calls the specified method on the first argument returned by #coerce" do
      obj = mock("rb_num_coerce_cmp")
      obj.should_receive(:coerce).with(2).and_return([obj, 2])
      obj.should_receive(:<=>).with(2).and_return(-1)

      @s.rb_num_coerce_cmp(2, obj, :<=>).should == -1
    end

    ruby_version_is ""..."2.5" do
      it "returns nil if passed nil" do
        -> {
          @result = @s.rb_num_coerce_cmp(nil, 2, :<=>)
        }.should complain(/comparison operators will no more rescue exceptions/)
        @result.should be_nil
      end
    end

    ruby_version_is "2.5" do
      it "lets the exception go through if #coerce raises an exception" do
        obj = mock("rb_num_coerce_cmp")
        obj.should_receive(:coerce).with(2).and_raise(RuntimeError.new("my error"))
        -> {
          @s.rb_num_coerce_cmp(2, obj, :<=>)
        }.should raise_error(RuntimeError, "my error")
      end
    end

    it "returns nil if #coerce does not return an Array" do
      obj = mock("rb_num_coerce_cmp")
      obj.should_receive(:coerce).with(2).and_return(nil)

      @s.rb_num_coerce_cmp(2, obj, :<=>).should be_nil
    end
  end

  describe "rb_num_coerce_relop" do
    it "calls #coerce on the first argument" do
      obj = mock("rb_num_coerce_relop")
      obj.should_receive(:coerce).with(2).and_return([1, 2])

      @s.rb_num_coerce_relop(2, obj, :<).should be_true
    end

    it "calls the specified method on the first argument returned by #coerce" do
      obj = mock("rb_num_coerce_relop")
      obj.should_receive(:coerce).with(2).and_return([obj, 2])
      obj.should_receive(:<).with(2).and_return(false)

      @s.rb_num_coerce_relop(2, obj, :<).should be_false
    end

    it "raises an ArgumentError if #<op> returns nil" do
      obj = mock("rb_num_coerce_relop")
      obj.should_receive(:coerce).with(2).and_return([obj, 2])
      obj.should_receive(:<).with(2).and_return(nil)

      lambda { @s.rb_num_coerce_relop(2, obj, :<) }.should raise_error(ArgumentError)
    end

    it "raises an ArgumentError if #coerce does not return an Array" do
      obj = mock("rb_num_coerce_relop")
      obj.should_receive(:coerce).with(2).and_return(nil)

      lambda { @s.rb_num_coerce_relop(2, obj, :<) }.should raise_error(ArgumentError)
    end
  end
end
