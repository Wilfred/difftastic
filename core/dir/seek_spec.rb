require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)
require File.expand_path('../shared/pos', __FILE__)

describe "Dir#seek" do
  before :all do
    DirSpecs.create_mock_dirs
  end

  after :all do
    DirSpecs.delete_mock_dirs
  end

  it "returns the Dir instance" do
    @dir.seek(@dir.pos).should == @dir
  end

  it_behaves_like :dir_pos_set, :seek
end
