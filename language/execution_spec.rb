require File.expand_path('../../spec_helper', __FILE__)

describe "``" do
  it "returns the output of the executed sub-process" do
    ip = 'world'
    `echo disc #{ip}`.should == "disc world\n"
  end
end

describe "%x" do
  it "is the same as ``" do
    ip = 'world'
    %x(echo disc #{ip}).should == "disc world\n"
  end
end
