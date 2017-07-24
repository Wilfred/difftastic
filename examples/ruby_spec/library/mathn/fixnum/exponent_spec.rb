require File.expand_path('../../../../spec_helper', __FILE__)

ruby_version_is ''...'2.5' do
  require 'mathn'

  describe "Fixnum#**" do
    it "returns self raised to other (positive) power" do
      (2 ** 4).should == 16
      (2 ** 1.2).should be_close(2.2973967, TOLERANCE)
    end

    it "returns a complex number when negative and raised to a fractional power" do
      ((-8) ** (1/3)).should be_close(Complex(1, 1.73205), TOLERANCE)
      ((-8) ** (1.0/3)).should be_close(Complex(1, 1.73205), TOLERANCE)
    end
  end
end
