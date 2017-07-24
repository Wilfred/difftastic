require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/sticky', __FILE__)

describe "FileTest.sticky?" do
  it_behaves_like :file_sticky, :sticky?, FileTest
  it_behaves_like :file_sticky_missing, :sticky?, FileTest
end
