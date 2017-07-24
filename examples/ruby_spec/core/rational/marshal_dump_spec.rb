require File.expand_path('../../../spec_helper', __FILE__)

describe "Rational#marshal_dump" do
  it "is a private method" do
    Rational.should have_private_instance_method(:marshal_dump, false)
  end

  it "dumps numerator and denominator" do
    Rational(1, 2).send(:marshal_dump).should == [1, 2]
  end
end
