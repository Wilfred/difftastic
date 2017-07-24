require File.expand_path('../../../spec_helper', __FILE__)
require 'matrix'

describe "Matrix#hash" do

  it "returns a Fixnum" do
    Matrix[ [1,2] ].hash.should be_an_instance_of(Fixnum)
  end

  it "returns the same value for the same matrix" do
    data = [ [40,5], [2,7] ]
    Matrix[ *data ].hash.should == Matrix[ *data ].hash
  end

end
