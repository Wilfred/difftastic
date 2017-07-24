require File.expand_path('../../../spec_helper', __FILE__)

describe "GC.count" do
  it "returns an integer" do
    GC.count.should be_kind_of(Integer)
  end
end
