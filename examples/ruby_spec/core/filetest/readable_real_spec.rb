require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/readable_real', __FILE__)

describe "FileTest.readable_real?" do
  it_behaves_like :file_readable_real, :readable_real?, FileTest
  it_behaves_like :file_readable_real_missing, :readable_real?, FileTest
end
