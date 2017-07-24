require File.expand_path('../../../spec_helper', __FILE__)
require 'bigdecimal'

describe "BigDecimal#inspect" do

  before :each do
    @bigdec = BigDecimal.new("1234.5678")
  end

  it "returns String" do
    @bigdec.inspect.kind_of?(String).should == true
  end

  ruby_version_is ""..."2.4" do
    it "returns String starting with #" do
      @bigdec.inspect[0].should == ?#
    end

    it "encloses information in angle brackets" do
      @bigdec.inspect.should =~ /^.<.*>$/
    end

    it "is comma separated list of three items" do
      @bigdec.inspect.should =~ /...*,.*,.*/
    end

    it "value after first comma is value as string" do
      @bigdec.inspect.split(",")[1].should == "\'0.12345678E4\'"
    end

    it "last part is number of significant digits" do
      signific_string = "#{@bigdec.precs[0]}(#{@bigdec.precs[1]})"
      @bigdec.inspect.split(",")[2].should == signific_string + ">"
    end

    it "looks like this" do
      regex = /^\#\<BigDecimal\:.*,'0\.12345678E4',[0-9]+\([0-9]+\)>$/
      @bigdec.inspect.should =~ regex
    end
  end

  ruby_version_is "2.4" do
    it "looks like this" do
      @bigdec.inspect.should == "0.12345678e4"
    end
  end
end
