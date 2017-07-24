require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/rational/Rational', __FILE__)

describe "Kernel.Rational" do
  it_behaves_like :kernel_Rational, :Rational
end
