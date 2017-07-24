require File.expand_path('../../../../spec_helper', __FILE__)
require 'complex'
require File.expand_path('../shared/tanh', __FILE__)

describe "Math#tanh" do
  it_behaves_like :complex_math_tanh, :_, IncludesMath.new

  it "is a private instance method" do
    IncludesMath.should have_private_instance_method(:tanh)
  end
end

describe "Math.tanh" do
  it_behaves_like :complex_math_tanh, :_, CMath
end
