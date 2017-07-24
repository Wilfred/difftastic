require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Numeric#divmod" do
  before :each do
    @obj = NumericSpecs::Subclass.new
  end

  it "returns [quotient, modulus], with quotient being obtained as in Numeric#div then #floor and modulus being obtained by calling self#- with quotient * other" do
    @obj.should_receive(:/).twice.with(10).and_return(13 - TOLERANCE, 13 - TOLERANCE)
    @obj.should_receive(:-).with(120).and_return(3)

    @obj.divmod(10).should == [12, 3]
  end
end
