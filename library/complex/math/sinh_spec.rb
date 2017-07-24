require File.expand_path('../../../../spec_helper', __FILE__)
require 'complex'
require File.expand_path('../shared/sinh', __FILE__)

describe "Math#sinh" do
  it_behaves_like :complex_math_sinh, :_, IncludesMath.new

  it "is a private instance method" do
    IncludesMath.should have_private_instance_method(:sinh)
  end
end

describe "Math.sinh" do
  it_behaves_like :complex_math_sinh, :_, CMath
end
