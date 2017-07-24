require File.expand_path('../../../spec_helper', __FILE__)

describe "LoadError#path" do
  before :each do
    @le = LoadError.new
  end

  it "is nil when constructed directly" do
    @le.path.should == nil
  end
end

describe "LoadError raised by load or require" do
  it "provides the failing path in its #path attribute" do
    begin
      require 'file_that_does_not_exist'
    rescue LoadError => le
      le.path.should == 'file_that_does_not_exist'
    end
  end
end
