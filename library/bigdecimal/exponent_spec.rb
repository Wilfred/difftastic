require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/power', __FILE__)
require 'bigdecimal'

describe "BigDecimal#**" do
  it_behaves_like(:bigdecimal_power, :**)
end

describe "BigDecimal#exponent" do

  it "returns an Integer" do
    BigDecimal("2E100000000").exponent.kind_of?(Integer).should == true
    BigDecimal("2E-999").exponent.kind_of?(Integer).should == true
  end

  it "is n if number can be represented as 0.xxx*10**n" do
    BigDecimal("2E1000").exponent.should == 1001
    BigDecimal("1234567E10").exponent.should == 17
  end

# commenting this spec out after discussion with Defiler, since it seems to be an MRI bug, not a real feature
=begin
  platform_is wordsize: 32 do
    # TODO: write specs for both 32 and 64 bit
    it "returns 0 if exponent can't be represented as Fixnum" do
      BigDecimal("2E1000000000000000").exponent.should == 0
      BigDecimal("-5E-999999999999999").exponent.should == 0
    end
  end
=end

  it "returns 0 if self is 0" do
    BigDecimal("0").exponent.should == 0
    BigDecimal("+0").exponent.should == 0
    BigDecimal("-0").exponent.should == 0
  end

end
