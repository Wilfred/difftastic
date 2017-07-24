require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.to_s" do
  it "returns \"ENV\"" do
    ENV.to_s.should == "ENV"
  end
end
