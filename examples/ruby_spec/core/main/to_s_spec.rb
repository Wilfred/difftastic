require File.expand_path('../../../spec_helper', __FILE__)

describe "main#to_s" do
  it "returns 'main'" do
    eval('to_s', TOPLEVEL_BINDING).should == "main"
  end
end
