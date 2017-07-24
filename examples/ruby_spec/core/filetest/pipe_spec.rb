require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/pipe', __FILE__)

describe "FileTest.pipe?" do
  it_behaves_like :file_pipe, :pipe?, FileTest
end

describe "FileTest.pipe?" do
  it "needs to be reviewed for spec completeness"
end
