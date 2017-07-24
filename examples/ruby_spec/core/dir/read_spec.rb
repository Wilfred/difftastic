require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)
require File.expand_path('../shared/closed', __FILE__)

describe "Dir#read" do
  before :all do
    DirSpecs.create_mock_dirs
  end

  after :all do
    DirSpecs.delete_mock_dirs
  end

  it "returns the file name in the current seek position" do
    # an FS does not necessarily impose order
    ls = Dir.entries DirSpecs.mock_dir
    dir = Dir.open DirSpecs.mock_dir
    ls.should include(dir.read)
    dir.close
  end

  it "returns nil when there are no more entries" do
    dir = Dir.open DirSpecs.mock_dir
    DirSpecs.expected_paths.size.times do
      dir.read.should_not == nil
    end
    dir.read.should == nil
    dir.close
  end

  it "returns each entry successively" do
    dir = Dir.open DirSpecs.mock_dir
    entries = []
    while entry = dir.read
      entries << entry
    end
    dir.close

    entries.sort.should == DirSpecs.expected_paths
  end

  it_behaves_like :dir_closed, :read
end
