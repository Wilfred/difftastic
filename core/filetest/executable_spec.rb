require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/executable', __FILE__)

describe "FileTest.executable?" do
  it_behaves_like :file_executable, :executable?, FileTest
  it_behaves_like :file_executable_missing, :executable?, FileTest
end
