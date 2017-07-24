require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/rectangular', __FILE__)

describe "Matrix#rectangular" do
  it_behaves_like(:matrix_rectangular, :rectangular)
end
