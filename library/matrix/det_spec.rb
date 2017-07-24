require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/determinant', __FILE__)
require 'matrix'

describe "Matrix#det" do
  it_behaves_like(:determinant, :det)
end
