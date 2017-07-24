require File.expand_path('../../../../spec_helper', __FILE__)
require 'complex'
require File.expand_path('../shared/exp', __FILE__)

describe "Math#exp" do
  it_behaves_like :complex_math_exp, :_, IncludesMath.new

  it "is a private instance method" do
    IncludesMath.should have_private_instance_method(:exp)
  end
end

describe "Math.exp" do
  it_behaves_like :complex_math_exp, :_, CMath
end
