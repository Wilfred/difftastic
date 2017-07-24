require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/readable', __FILE__)

describe "File.readable?" do
  it_behaves_like :file_readable, :readable?, File
  it_behaves_like :file_readable_missing, :readable?, File
end
