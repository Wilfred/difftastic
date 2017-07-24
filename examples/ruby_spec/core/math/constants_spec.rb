require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Math::PI" do
  it "approximates the value of pi" do
    Math::PI.should be_close(3.14159_26535_89793_23846, TOLERANCE)
  end

  it "is accessible to a class that includes Math" do
    IncludesMath::PI.should == Math::PI
  end
end

describe "Math::E" do
  it "approximates the value of Napier's constant" do
    Math::E.should be_close(2.71828_18284_59045_23536, TOLERANCE)
  end

  it "is accessible to a class that includes Math" do
    IncludesMath::E.should == Math::E
  end
end
