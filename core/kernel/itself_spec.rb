require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#itself" do
  it "returns the receiver itself" do
    foo = Object.new
    foo.itself.should equal foo
  end
end
