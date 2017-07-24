require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#to_s when given a base" do
  it "returns self converted to a String in the given base" do
    12345.to_s(2).should == "11000000111001"
    12345.to_s(8).should == "30071"
    12345.to_s(10).should == "12345"
    12345.to_s(16).should == "3039"
    95.to_s(16).should == "5f"
    12345.to_s(36).should == "9ix"
  end

  it "raises an ArgumentError if the base is less than 2 or higher than 36" do
    lambda { 123.to_s(-1) }.should raise_error(ArgumentError)
    lambda { 123.to_s(0)  }.should raise_error(ArgumentError)
    lambda { 123.to_s(1)  }.should raise_error(ArgumentError)
    lambda { 123.to_s(37) }.should raise_error(ArgumentError)
  end
end

describe "Fixnum#to_s when no base given" do
  it "returns self converted to a String using base 10" do
    255.to_s.should == '255'
    3.to_s.should == '3'
    0.to_s.should == '0'
    -9002.to_s.should == '-9002'
  end
end

with_feature :encoding do
  describe "Fixnum#to_s" do
    before :each do
      @internal = Encoding.default_internal
    end

    after :each do
      Encoding.default_internal = @internal
    end

    it "returns a String in US-ASCII encoding when Encoding.default_internal is nil" do
      Encoding.default_internal = nil
      1.to_s.encoding.should equal(Encoding::US_ASCII)
    end

    it "returns a String in US-ASCII encoding when Encoding.default_internal is not nil" do
      Encoding.default_internal = Encoding::IBM437
      1.to_s.encoding.should equal(Encoding::US_ASCII)
    end
  end
end
