require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/writable', __FILE__)

describe "FileTest.writable?" do
  it_behaves_like :file_writable, :writable?, FileTest
  it_behaves_like :file_writable_missing, :writable?, FileTest
end
