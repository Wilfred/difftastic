require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)
require File.expand_path('../shared/glob', __FILE__)

describe "Dir.[]" do
  it_behaves_like :dir_glob, :[]
end

describe "Dir.[]" do
  it_behaves_like :dir_glob_recursive, :[]
end

describe "Dir.[]" do
  before :all do
    DirSpecs.create_mock_dirs
    @cwd = Dir.pwd
    Dir.chdir DirSpecs.mock_dir
  end

  after :all do
    Dir.chdir @cwd
    DirSpecs.delete_mock_dirs
  end

  it "calls #to_path to convert multiple patterns" do
    pat1 = mock('file_one.ext')
    pat1.should_receive(:to_path).and_return('file_one.ext')
    pat2 = mock('file_two.ext')
    pat2.should_receive(:to_path).and_return('file_two.ext')

    Dir[pat1, pat2].should == %w[file_one.ext file_two.ext]
  end
end
