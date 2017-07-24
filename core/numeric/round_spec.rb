require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Numeric#round" do
  before :each do
    @obj = NumericSpecs::Subclass.new
  end

  it "converts self to a Float (using #to_f) and returns the #round'ed result" do
    @obj.should_receive(:to_f).and_return(2 - TOLERANCE, TOLERANCE - 2)
    @obj.round.should == 2
    @obj.round.should == -2
  end
end
