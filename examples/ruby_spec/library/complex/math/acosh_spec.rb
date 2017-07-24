require File.expand_path('../../../../spec_helper', __FILE__)
require 'complex'
require File.expand_path('../shared/acosh', __FILE__)

describe "Math#acosh" do
  it_behaves_like :complex_math_acosh, :_, IncludesMath.new

  it "is a private instance method" do
    IncludesMath.should have_private_instance_method(:acosh)
  end
end

describe "Math.acosh" do
  it_behaves_like :complex_math_acosh, :_, CMath
end
