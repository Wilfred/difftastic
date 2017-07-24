require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/symlink', __FILE__)

describe "FileTest.symlink?" do
  it_behaves_like :file_symlink, :symlink?, FileTest
end

describe "FileTest.symlink?" do
  it_behaves_like :file_symlink_nonexistent, :symlink?, File
end
