require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#path" do
  it "is not defined" do
    lambda { StringIO.new("path").path }.should raise_error(NoMethodError)
  end
end
