require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/complex/Complex', __FILE__)

describe "Kernel.Complex()" do
  it_behaves_like :kernel_Complex, :Complex
end
