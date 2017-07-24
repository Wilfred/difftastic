require File.expand_path('../../../../spec_helper', __FILE__)
require 'complex'
require File.expand_path('../shared/acos', __FILE__)

describe "Math#acos" do
  it_behaves_like :complex_math_acos, :_, IncludesMath.new

  it "is a private instance method" do
    IncludesMath.should have_private_instance_method(:acos)
  end
end

describe "Math.acos" do
  it_behaves_like :complex_math_acos, :_, CMath
end
