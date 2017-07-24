require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/grpowned', __FILE__)

describe "File.grpowned?" do
  it_behaves_like :file_grpowned, :grpowned?, File

  it "returns false if file the does not exist" do
    File.grpowned?("i_am_a_bogus_file").should == false
  end
end
