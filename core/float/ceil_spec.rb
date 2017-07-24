require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#ceil" do
  it "returns the smallest Integer greater than or equal to self" do
    -1.2.ceil.should eql( -1)
    -1.0.ceil.should eql( -1)
    0.0.ceil.should  eql( 0 )
    1.3.ceil.should  eql( 2 )
    3.0.ceil.should  eql( 3 )
    -9223372036854775808.1.ceil.should eql(-9223372036854775808)
    +9223372036854775808.1.ceil.should eql(+9223372036854775808)
  end
end
