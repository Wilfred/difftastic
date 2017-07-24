require File.expand_path('../../../../spec_helper', __FILE__)
require 'complex'
require File.expand_path('../shared/sqrt', __FILE__)

describe "Math#sqrt" do
  it_behaves_like :complex_math_sqrt, :_, IncludesMath.new

  it "is a private instance method" do
    IncludesMath.should have_private_instance_method(:sqrt)
  end
end

describe "Math.sqrt" do
  it_behaves_like :complex_math_sqrt, :_, CMath
end
