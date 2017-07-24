require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "String.new" do
  it "returns an instance of String" do
    str = String.new
    str.should be_an_instance_of(String)
  end

  ruby_version_is "2.3" do
    it "accepts an encoding argument" do
      xA4xA2 = [0xA4, 0xA2].pack('CC').force_encoding 'utf-8'
      str = String.new(xA4xA2, encoding: 'euc-jp')
      str.encoding.should == Encoding::EUC_JP
    end
  end

  it "returns a fully-formed String" do
    str = String.new
    str.size.should == 0
    str << "more"
    str.should == "more"
  end

  it "returns a new string given a string argument" do
    str1 = "test"
    str = String.new(str1)
    str.should be_an_instance_of(String)
    str.should == str1
    str << "more"
    str.should == "testmore"
  end

  it "returns an instance of a subclass" do
    a = StringSpecs::MyString.new("blah")
    a.should be_an_instance_of(StringSpecs::MyString)
    a.should == "blah"
  end

  it "is called on subclasses" do
    s = StringSpecs::SubString.new
    s.special.should == nil
    s.should == ""

    s = StringSpecs::SubString.new "subclass"
    s.special.should == "subclass"
    s.should == ""
  end

  it "raises TypeError on inconvertible object" do
    lambda { String.new 5 }.should raise_error(TypeError)
    lambda { String.new nil }.should raise_error(TypeError)
  end

  it "returns a binary String" do
    String.new.encoding.should == Encoding::BINARY
  end
end
