require File.expand_path('../../../../spec_helper', __FILE__)

ruby_version_is ''...'2.5' do
  require 'mathn'

  describe "Bignum#**" do
    before :each do
      @bignum = bignum_value(47)
    end

    it "returns self raised to other (positive) power" do
      (@bignum ** 4).should == 7237005577332262361485077344629993318496048279512298547155833600056910050625
      (@bignum ** 1.2).should be_close(57262152889751597425762.57804, TOLERANCE)
    end

    it "returns a complex number when negative and raised to a fractional power" do
      ((-@bignum) ** (1/3)).should be_close(Complex(1048576,1816186.907597341), TOLERANCE)
      ((-@bignum) ** (1.0/3)).should be_close(Complex(1048576,1816186.907597341), TOLERANCE)
    end
  end
end
