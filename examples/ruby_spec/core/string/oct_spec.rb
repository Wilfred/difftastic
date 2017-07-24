require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

# Note: We can't completely spec this in terms of to_int() because hex()
# allows the base to be changed by a base specifier in the string.
# See http://groups.google.com/group/ruby-core-google/browse_frm/thread/b53e9c2003425703
describe "String#oct" do
  it "treats numeric digits as base-8 digits by default" do
    "0".oct.should == 0
    "77".oct.should == 077
    "077".oct.should == 077
  end

  it "accepts numbers formatted as binary" do
    "0b1010".oct.should == 0b1010
  end

  it "accepts numbers formatted as hexadecimal" do
    "0xFF".oct.should == 0xFF
  end

  it "accepts numbers formatted as decimal" do
    "0d500".oct.should == 500
  end

  describe "with a leading minus sign" do
    it "treats numeric digits as base-8 digits by default" do
      "-12348".oct.should == -01234
    end

    it "accepts numbers formatted as binary" do
      "-0b0101".oct.should == -0b0101
    end

    it "accepts numbers formatted as hexadecimal" do
      "-0xEE".oct.should == -0xEE
    end

    it "accepts numbers formatted as decimal" do
      "-0d500".oct.should == -500
    end
  end

  describe "with a leading plus sign" do
    it "treats numeric digits as base-8 digits by default" do
      "+12348".oct.should == 01234
    end

    it "accepts numbers formatted as binary" do
      "+0b1010".oct.should == 0b1010
    end

    it "accepts numbers formatted as hexadecimal" do
      "+0xFF".oct.should == 0xFF
    end

    it "accepts numbers formatted as decimal" do
      "+0d500".oct.should == 500
    end
  end

  it "accepts a single underscore separating digits" do
    "755_333".oct.should == 0755_333
  end

  it "does not accept a sequence of underscores as part of a number" do
    "7__3".oct.should == 07
    "7___3".oct.should == 07
    "7__5".oct.should == 07
  end

  it "ignores characters that are incorrect for the base-8 digits" do
    "0o".oct.should == 0
    "5678".oct.should == 0567
  end

  it "returns 0 if no characters can be interpreted as a base-8 number" do
    "".oct.should == 0
    "+-5".oct.should == 0
    "wombat".oct.should == 0
  end

  it "returns 0 for strings with leading underscores" do
    "_7".oct.should == 0
    "_07".oct.should == 0
    " _7".oct.should == 0
  end
end
