require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../shared/inverse', __FILE__)

describe "Matrix#inv" do
  it_behaves_like(:inverse, :inv)
end
