require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/owned', __FILE__)

describe "FileTest.owned?" do
  it_behaves_like :file_owned, :owned?, FileTest
end

describe "FileTest.owned?" do
  it "needs to be reviewed for spec completeness"
end
