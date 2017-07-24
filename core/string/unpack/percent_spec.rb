require File.expand_path('../../../../spec_helper', __FILE__)

describe "String#unpack with format '%'" do
  it "raises an Argument Error" do
    lambda { "abc".unpack("%") }.should raise_error(ArgumentError)
  end
end
