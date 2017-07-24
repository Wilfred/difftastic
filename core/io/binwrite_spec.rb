require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/binwrite', __FILE__)

describe "IO.binwrite" do
  it_behaves_like :io_binwrite, :binwrite

  it "needs to be reviewed for spec completeness"
end
