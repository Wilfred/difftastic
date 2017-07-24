require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/readable', __FILE__)

describe "FileTest.readable?" do
  it_behaves_like :file_readable, :readable?, FileTest
  it_behaves_like :file_readable_missing, :readable?, FileTest
end
