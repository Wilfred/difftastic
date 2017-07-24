require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/setgid', __FILE__)

describe "FileTest.setgid?" do
  it_behaves_like :file_setgid, :setgid?, FileTest
end

describe "FileTest.setgid?" do
  it "needs to be reviewed for spec completeness"
end
