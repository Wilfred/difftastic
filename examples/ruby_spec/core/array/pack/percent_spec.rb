require File.expand_path('../../../../spec_helper', __FILE__)

describe "Array#pack with format '%'" do
  it "raises an Argument Error" do
    lambda { [1].pack("%") }.should raise_error(ArgumentError)
  end
end
