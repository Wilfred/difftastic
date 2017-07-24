require File.expand_path('../../../../spec_helper', __FILE__)
require 'complex'
require File.expand_path('../shared/sin', __FILE__)

describe "Math#sin" do
  it_behaves_like :complex_math_sin, :_, IncludesMath.new

  it "is a private instance method" do
    IncludesMath.should have_private_instance_method(:sin)
  end
end

describe "Math.sin" do
  it_behaves_like :complex_math_sin, :_, CMath
end
