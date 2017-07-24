require File.expand_path('../../../spec_helper', __FILE__)

describe "IO::SEEK_SET" do
  it "is defined" do
    IO.const_defined?(:SEEK_SET).should == true
  end
end

describe "IO::SEEK_CUR" do
  it "is defined" do
    IO.const_defined?(:SEEK_CUR).should == true
  end
end

describe "IO::SEEK_END" do
  it "is defined" do
    IO.const_defined?(:SEEK_END).should == true
  end
end
