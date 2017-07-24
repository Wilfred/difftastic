require File.expand_path('../../../spec_helper', __FILE__)

describe "File#inspect" do
  before :each do
    @name = tmp("file_inspect.txt")
    @file = File.open @name, "w"
  end

  after :each do
    @file.close unless @file.closed?
    rm_r @name
  end

  it "returns a String" do
    @file.inspect.should be_an_instance_of(String)
  end
end
