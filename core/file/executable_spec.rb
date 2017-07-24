require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/executable', __FILE__)

describe "File.executable?" do
  it_behaves_like :file_executable, :executable?, File
  it_behaves_like :file_executable_missing, :executable?, File
end
