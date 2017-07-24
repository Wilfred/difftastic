require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../fixtures/math/common', __FILE__)
require File.expand_path('../../../shared/math/atanh', __FILE__)

describe "Math.atanh" do
  it_behaves_like :math_atanh_base, :atanh, Math
  it_behaves_like :math_atanh_no_complex, :atanh, Math
end

describe "Math#atanh" do
  it_behaves_like :math_atanh_private, :atanh
  it_behaves_like :math_atanh_base, :atanh, IncludesMath.new
  it_behaves_like :math_atanh_no_complex, :atanh, IncludesMath.new
end
