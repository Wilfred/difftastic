require File.expand_path('../spec_helper', __FILE__)

load_extension("fixnum")

describe "CApiFixnumSpecs" do
  before :each do
    @s = CApiFixnumSpecs.new
  end

  platform_is wordsize: 64 do
    describe "rb_fix2uint" do
      it "raises a TypeError if passed nil" do
        lambda { @s.rb_fix2uint(nil) }.should raise_error(TypeError)
      end

      it "converts a Fixnum" do
        @s.rb_fix2uint(1).should == 1
      end

      it "converts the maximum uint value" do
        @s.rb_fix2uint(0xffff_ffff).should == 0xffff_ffff
      end

      it "converts a Float" do
        @s.rb_fix2uint(25.4567).should == 25
      end

      it "raises a RangeError if the value is more than 32bits" do
        lambda { @s.rb_fix2uint(0xffff_ffff+1) }.should raise_error(RangeError)
      end

      it "raises a RangeError if the value is more than 64bits" do
        lambda { @s.rb_fix2uint(0xffff_ffff_ffff_ffff+1) }.should raise_error(RangeError)
      end
    end

    describe "rb_fix2int" do
      it "raises a TypeError if passed nil" do
        lambda { @s.rb_fix2int(nil) }.should raise_error(TypeError)
      end

      it "converts a Fixnum" do
        @s.rb_fix2int(-1).should == -1
        @s.rb_fix2int(1).should == 1
      end

      it "converts the maximum uint value" do
        @s.rb_fix2int(0x7fff_ffff).should == 0x7fff_ffff
      end

      it "converts a Float" do
        @s.rb_fix2int(25.4567).should == 25
      end

      it "converts a negative Bignum into an signed number" do
        @s.rb_fix2int(-2147442171).should == -2147442171
      end

      it "raises a RangeError if the value is more than 32bits" do
        lambda { @s.rb_fix2int(0xffff_ffff+1) }.should raise_error(RangeError)
      end

      it "raises a RangeError if the value is more than 64bits" do
        lambda { @s.rb_fix2int(0xffff_ffff_ffff_ffff+1) }.should raise_error(RangeError)
      end

      it "calls #to_int to coerce the value" do
        obj = mock("number")
        obj.should_receive(:to_int).and_return(2)
        @s.rb_fix2int(obj).should == 2
      end
    end
  end
end
