require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/writable_real', __FILE__)

describe "FileTest.writable_real?" do
  it_behaves_like :file_writable_real, :writable_real?, FileTest
  it_behaves_like :file_writable_real_missing, :writable_real?, FileTest
end
