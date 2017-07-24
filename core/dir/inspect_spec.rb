require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Dir#inspect" do
  before :each do
    @dir = Dir.new(Dir.getwd)
  end

  after :each do
    @dir.close
  end

  it "returns a String" do
    @dir.inspect.should be_an_instance_of(String)
  end

  it "includes the class name" do
    @dir.inspect.should =~ /Dir/
  end

  it "includes the directory name" do
    @dir.inspect.should include(Dir.getwd)
  end
end
