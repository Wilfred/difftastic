require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/directory', __FILE__)

describe "File.directory?" do
  it_behaves_like :file_directory, :directory?, File
end

describe "File.directory?" do
  it_behaves_like :file_directory_io, :directory?, File
end
