require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)
require 'find'

describe "Find.find" do
  before :each do
    FindDirSpecs.create_mock_dirs
  end

  after :each do
    FindDirSpecs.delete_mock_dirs
  end

  describe "when called without a block" do
    it "returns an Enumerator" do
      Find.find(FindDirSpecs.mock_dir).should be_an_instance_of(Enumerator)
      Find.find(FindDirSpecs.mock_dir).to_a.sort.should == FindDirSpecs.expected_paths
    end
  end

  it "should recursively yield every file in the directory" do
    a = []

    Find.find(FindDirSpecs.mock_dir) do |file|
      a << file
    end

    a.sort.should == FindDirSpecs.expected_paths
  end
end
