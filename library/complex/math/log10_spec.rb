require File.expand_path('../../../../spec_helper', __FILE__)
require 'complex'
require File.expand_path('../shared/log10', __FILE__)

describe "Math#log10" do
  it_behaves_like :complex_math_log10, :_, IncludesMath.new

  it "is a private instance method" do
    IncludesMath.should have_private_instance_method(:log10)
  end
end

describe "Math.log10" do
  it_behaves_like :complex_math_log10, :_, CMath
end
