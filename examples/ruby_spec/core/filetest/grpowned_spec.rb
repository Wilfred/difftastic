require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/grpowned', __FILE__)

describe "FileTest.grpowned?" do
  it_behaves_like :file_grpowned, :grpowned?, FileTest

  it "returns false if the file doesn't exist" do
    FileTest.grpowned?("xxx-tmp-doesnt_exist-blah").should be_false
  end
end
