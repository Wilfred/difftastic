require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/mult', __FILE__)
require 'bigdecimal'

describe "BigDecimal#*" do
  it_behaves_like :bigdecimal_mult, :*, []
end

describe "BigDecimal#*" do
  before :each do
    @e3_minus = BigDecimal("3E-20001")
    @e3_plus = BigDecimal("3E20001")
    @e = BigDecimal("1.00000000000000000000123456789")
    @one = BigDecimal("1")
  end

  it "multiply self with other" do
    (@one * @one).should == @one
    (@e3_minus * @e3_plus).should == BigDecimal("9")
    # Can't do this till we implement **
    # (@e3_minus * @e3_minus).should == @e3_minus ** 2
    # So let's rewrite it as:
    (@e3_minus * @e3_minus).should == BigDecimal("9E-40002")
    (@e * @one).should == @e
  end
end
