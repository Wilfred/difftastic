require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix.new" do
  it "is private" do
    Matrix.should have_private_method(:new)
  end
end
