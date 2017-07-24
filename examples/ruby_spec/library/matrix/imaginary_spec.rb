require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/imaginary', __FILE__)

describe "Matrix#imaginary" do
  it_behaves_like(:matrix_imaginary, :imaginary)
end
