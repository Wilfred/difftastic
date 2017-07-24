require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/exist', __FILE__)

describe "FileTest.exists?" do
  it_behaves_like :file_exist, :exists?, FileTest
end
