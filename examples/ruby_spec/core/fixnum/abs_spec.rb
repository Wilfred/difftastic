require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/abs', __FILE__)

describe "Fixnum#abs" do
  it_behaves_like :fixnum_abs, :abs
end

