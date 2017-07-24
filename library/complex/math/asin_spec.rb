require File.expand_path('../../../../spec_helper', __FILE__)
require 'complex'
require File.expand_path('../shared/asin', __FILE__)

describe "Math#asin" do
  it_behaves_like :complex_math_asin, :_, IncludesMath.new

  it "is a private instance method" do
    IncludesMath.should have_private_instance_method(:asin)
  end
end

describe "Math.asin" do
  it_behaves_like :complex_math_asin, :_, CMath
end
