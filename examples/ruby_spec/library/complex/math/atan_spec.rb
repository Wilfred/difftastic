require File.expand_path('../../../../spec_helper', __FILE__)
require 'complex'
require File.expand_path('../shared/atan', __FILE__)

describe "Math#atan" do
  it_behaves_like :complex_math_atan, :_, IncludesMath.new

  it "is a private instance method" do
    IncludesMath.should have_private_instance_method(:atan)
  end
end

describe "Math.atan" do
  it_behaves_like :complex_math_atan, :_, CMath
end
