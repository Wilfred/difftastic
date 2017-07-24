require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Numeric#zero?" do
  before :each do
    @obj = NumericSpecs::Subclass.new
  end

  it "returns true if self is 0" do
    @obj.should_receive(:==).with(0).and_return(true)
    @obj.zero?.should == true
  end

  it "returns false if self is not 0" do
    @obj.should_receive(:==).with(0).and_return(false)
    @obj.zero?.should == false
  end
end
