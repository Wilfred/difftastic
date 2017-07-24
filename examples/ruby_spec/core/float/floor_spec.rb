require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#floor" do
  it "returns the largest Integer less than or equal to self" do
    -1.2.floor.should eql( -2)
    -1.0.floor.should eql( -1)
    0.0.floor.should  eql( 0 )
    1.0.floor.should  eql( 1 )
    5.9.floor.should  eql( 5 )
    -9223372036854775808.1.floor.should eql(-9223372036854775808)
    +9223372036854775808.1.floor.should eql(+9223372036854775808)
  end
end
