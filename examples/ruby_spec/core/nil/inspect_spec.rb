require File.expand_path('../../../spec_helper', __FILE__)

describe "NilClass#inspect" do
  it "returns the string 'nil'" do
    nil.inspect.should == "nil"
  end
end
