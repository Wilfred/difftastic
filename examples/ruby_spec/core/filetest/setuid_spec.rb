require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/setuid', __FILE__)

describe "FileTest.setuid?" do
  it_behaves_like :file_setuid, :setuid?, FileTest
end

describe "FileTest.setuid?" do
  it "needs to be reviewed for spec completeness"
end
