require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/each', __FILE__)

describe "StringIO#fileno" do
  it "returns nil" do
    StringIO.new("nuffin").fileno.should be_nil
  end
end
