require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/identical', __FILE__)

describe "File.identical?" do
  it_behaves_like :file_identical, :identical?, File
end
