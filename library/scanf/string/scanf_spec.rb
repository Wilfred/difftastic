require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/block_scanf.rb', __FILE__)
require 'scanf'

describe "String#scanf" do
  it "returns an array containing the input converted in the specified type" do
    "hello world".scanf("%s").should == ["hello"]
    "hello world".scanf("%s%d").should == ["hello"]
    "hello world".scanf("%s%c").should == ["hello", " "]
    "hello world".scanf("%c%s").should == ["h", "ello"]
    "hello world".scanf("%s%s").should == ["hello", "world"]
    "hello world".scanf("%c").should == ["h"]
    "123".scanf("%s").should == ["123"]
    "123".scanf("%c").should == ["1"]
    "123".scanf("%d").should == [123]
    "123".scanf("%u").should == [123]
    "123".scanf("%o").should == [83]
    "123".scanf("%x").should == [291]
    "123".scanf("%i").should == [123]
    "0123".scanf("%i").should == [83]
    "123".scanf("%f").should == [123.0]
    "0X123".scanf("%i").should == [291]
    "0x123".scanf("%i").should == [291]
  end

  it "returns an array containing the input converted in the specified type with given maximum field width" do
    "hello world".scanf("%2s").should == ["he"]
    "hello world".scanf("%2c").should == ["he"]
    "123".scanf("%2s").should == ["12"]
    "123".scanf("%2c").should == ["12"]
    "123".scanf("%2d").should == [12]
    "123".scanf("%2u").should == [12]
    "123".scanf("%2o").should == [10]
    "123".scanf("%2x").should == [18]
    "123".scanf("%2i").should == [12]
    "0123".scanf("%2i").should == [1]
    "123".scanf("%2f").should == [12.0]
    "0X123".scanf("%2i").should == [0]
    "0X123".scanf("%3i").should == [1]
    "0X123".scanf("%4i").should == [18]
  end

  it "returns an empty array when a wrong specifier is passed" do
    "hello world".scanf("%a").should == []
    "123".scanf("%1").should == []
    "123".scanf("abc").should == []
    "123".scanf(:d).should == []
  end
end

describe "String#scanf with block" do
  it_behaves_like(:scanf_string_block_scanf, :scanf)
end
