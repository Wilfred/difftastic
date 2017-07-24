require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Numeric#truncate" do
  before :each do
    @obj = NumericSpecs::Subclass.new
  end

  it "converts self to a Float (using #to_f) and returns the #truncate'd result" do
    @obj.should_receive(:to_f).and_return(2.5555, -2.3333)
    @obj.truncate.should == 2
    @obj.truncate.should == -2
  end
end
