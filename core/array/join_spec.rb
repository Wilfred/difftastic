require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/join', __FILE__)

describe "Array#join" do
  it_behaves_like :array_join_with_string_separator,  :join
  it_behaves_like :array_join_with_default_separator, :join

  it "does not separate elements when the passed separator is nil" do
    [1, 2, 3].join(nil).should == '123'
  end

  it "calls #to_str to convert the separator to a String" do
    sep = mock("separator")
    sep.should_receive(:to_str).and_return(", ")
    [1, 2].join(sep).should == "1, 2"
  end

  it "does not call #to_str on the separator if the array is empty" do
    sep = mock("separator")
    sep.should_not_receive(:to_str)
    [].join(sep).should == ""
  end

  it "raises a TypeError if the separator cannot be coerced to a String by calling #to_str" do
    obj = mock("not a string")
    lambda { [1, 2].join(obj) }.should raise_error(TypeError)
  end

  it "raises a TypeError if passed false as the separator" do
    lambda { [1, 2].join(false) }.should raise_error(TypeError)
  end
end

describe "Array#join with $," do
  before :each do
    @before_separator = $,
  end

  after :each do
    $, = @before_separator
  end

  it "separates elements with default separator when the passed separator is nil" do
    $, = "_"
    [1, 2, 3].join(nil).should == '1_2_3'
  end
end
