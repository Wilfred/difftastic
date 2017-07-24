require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/blockdev', __FILE__)

describe "File.blockdev?" do
  it_behaves_like :file_blockdev, :blockdev?, File
end
