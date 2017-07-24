require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/socket', __FILE__)

describe "FileTest.socket?" do
  it_behaves_like :file_socket, :socket?, FileTest
end

describe "FileTest.socket?" do
  it "needs to be reviewed for spec completeness"
end
