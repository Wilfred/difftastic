require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/block_scanf.rb', __FILE__)
require 'scanf'

describe "IO#scanf" do
  before :each do
    @hw = File.open(File.dirname(__FILE__) + '/fixtures/helloworld.txt', 'r')
    @data = File.open(File.dirname(__FILE__) + '/fixtures/date.txt', 'r')
  end

  after :each do
    @hw.close unless @hw.closed?
    @data.close unless @data.closed?
  end

  it "returns an array containing the input converted in the specified type" do
    @hw.scanf("%s%s").should == ["hello", "world"]
    @data.scanf("%s%d").should == ["Beethoven", 1770]
  end

  it "returns an array containing the input converted in the specified type with given maximum field width" do
    @hw.scanf("%2s").should == ["he"]
    @data.scanf("%2c").should == ["Be"]
  end

  it "returns an empty array when a wrong specifier is passed" do
    @hw.scanf("%a").should == []
    @hw.scanf("%1").should == []
    @data.scanf("abc").should == []
  end
end

describe "IO#scanf with block" do
  it_behaves_like(:scanf_io_block_scanf, :scanf)
end
