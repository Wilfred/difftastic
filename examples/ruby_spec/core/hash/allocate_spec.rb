require File.expand_path('../../../spec_helper', __FILE__)

describe "Hash.allocate" do
  it "returns an instance of Hash" do
    hsh = Hash.allocate
    hsh.should be_an_instance_of(Hash)
  end

  it "returns a fully-formed instance of Hash" do
    hsh = Hash.allocate
    hsh.size.should == 0
    hsh[:a] = 1
    hsh.should == { a: 1 }
  end
end
