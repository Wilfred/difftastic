require File.expand_path('../../../spec_helper', __FILE__)

describe "File#path" do
  before :each do
    @name = tmp("file_path")
  end

  after :each do
    rm_r @name
  end

  it "returns the pathname used to create file as a string" do
    File.open(@name,'w') { |file| file.path.should == @name }
  end
end

describe "File.path" do
  before :each do
    @name = tmp("file_path")
  end

  after :each do
    rm_r @name
  end

  it "returns the full path for the given file" do
    File.path(@name).should == @name
  end
end
