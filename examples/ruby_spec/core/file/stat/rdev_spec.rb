require File.expand_path('../../../../spec_helper', __FILE__)

describe "File::Stat#rdev" do
  before :each do
    @name = tmp("file.txt")
    touch(@name)
  end
  after :each do
    rm_r @name
  end

  it "returns the number of the device this file represents which the file exists" do
    File.stat(@name).rdev.should be_kind_of(Integer)
  end
end
