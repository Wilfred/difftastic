require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Dir#initialize" do
  before :each do
    DirSpecs.create_mock_dirs
  end

  after :each do
    DirSpecs.delete_mock_dirs
  end

  it "calls #to_path on non-String arguments" do
    p = mock('path')
    p.stub!(:to_path).and_return(DirSpecs.mock_dir)
    dir = Dir.new(p)
    begin
      dir.path.should == DirSpecs.mock_dir
    ensure
      dir.close
    end
  end
end
