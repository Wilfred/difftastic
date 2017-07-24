require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/modulo', __FILE__)

describe "Fixnum#%" do
  it_behaves_like(:fixnum_modulo, :%)
end

describe "Fixnum#modulo" do
  it_behaves_like(:fixnum_modulo, :modulo)
end
