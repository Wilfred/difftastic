require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/directory', __FILE__)

describe "FileTest.directory?" do
  it_behaves_like :file_directory, :directory?, FileTest
end

describe "FileTest.directory?" do
  it_behaves_like :file_directory_io, :directory?, FileTest
end
