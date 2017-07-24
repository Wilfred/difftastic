require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/abs', __FILE__)

describe "Fixnum#magnitude" do
  it_behaves_like :fixnum_abs, :magnitude
end
