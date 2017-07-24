require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#iterator?" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:iterator?)
  end
end

describe "Kernel.iterator?" do
  it "needs to be reviewed for spec completeness"
end
