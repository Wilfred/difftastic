require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/imaginary', __FILE__)

describe "Matrix#imag" do
  it_behaves_like(:matrix_imaginary, :imag)
end
