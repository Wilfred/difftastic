require File.expand_path('../spec_helper', __FILE__)

load_extension("float")

describe "CApiFloatSpecs" do
  before :each do
    @f = CApiFloatSpecs.new
  end

  describe "rb_float_new" do
    it "creates a new float" do
      ((@f.new_zero - 0).abs < 0.000001).should == true
      ((@f.new_point_five - 0.555).abs < 0.000001).should == true
    end
  end

  describe "RFLOAT_VALUE" do
    it "returns the C double value of the Float" do
      @f.RFLOAT_VALUE(2.3).should == 2.3
    end
  end

  describe "rb_Float" do
    it "creates a new Float from a String" do
      f = @f.rb_Float("101.99")
      f.should be_kind_of(Float)
      f.should eql(101.99)
    end
  end
end
