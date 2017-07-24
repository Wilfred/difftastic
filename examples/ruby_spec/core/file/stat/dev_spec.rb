require File.expand_path('../../../../spec_helper', __FILE__)

describe "File::Stat#dev" do
  before :each do
    @name = tmp("file.txt")
    touch(@name)
  end
  after :each do
    rm_r @name
  end

  it "returns the number of the device on which the file exists" do
    File.stat(@name).dev.should be_kind_of(Integer)
  end
end
