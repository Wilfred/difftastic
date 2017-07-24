require File.expand_path('../../../../spec_helper', __FILE__)
require 'complex'
require File.expand_path('../shared/asinh', __FILE__)

describe "Math#asinh" do
  it_behaves_like :complex_math_asinh, :_, IncludesMath.new

  it "is a private instance method" do
    IncludesMath.should have_private_instance_method(:asinh)
  end
end

describe "Math.asinh" do
  it_behaves_like :complex_math_asinh, :_, CMath
end
