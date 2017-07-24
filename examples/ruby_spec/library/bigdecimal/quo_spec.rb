require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/quo', __FILE__)
require 'bigdecimal'

describe "BigDecimal#quo" do
  it_behaves_like :bigdecimal_quo, :quo, []

  it "returns NaN if NaN is involved" do
    BigDecimal("1").quo(BigDecimal("NaN")).nan?.should == true
    BigDecimal("NaN").quo(BigDecimal("1")).nan?.should == true
  end
end

