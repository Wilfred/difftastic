require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Numeric#<=>" do
  before :each do
    @obj = NumericSpecs::Subclass.new
  end

  it "returns 0 if self equals other" do
    (@obj <=> @obj).should == 0
  end

  it "returns nil if self does not equal other" do
    (@obj <=> NumericSpecs::Subclass.new).should == nil
    (@obj <=> 10).should == nil
    (@obj <=> -3.5).should == nil
    (@obj <=> bignum_value).should == nil
  end

  describe "with subclasses of Numeric" do
    before :each do
      @a = NumericSpecs::Comparison.new
      @b = NumericSpecs::Comparison.new

      ScratchPad.clear
    end

    it "is called when instances are compared with #<" do
      (@a < @b).should be_false
      ScratchPad.recorded.should == :numeric_comparison
    end

    it "is called when instances are compared with #<=" do
      (@a <= @b).should be_false
      ScratchPad.recorded.should == :numeric_comparison
    end

    it "is called when instances are compared with #>" do
      (@a > @b).should be_true
      ScratchPad.recorded.should == :numeric_comparison
    end

    it "is called when instances are compared with #>=" do
      (@a >= @b).should be_true
      ScratchPad.recorded.should == :numeric_comparison
    end
  end
end
