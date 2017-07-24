require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_to_i, shared: true do
  it "converts self to an Integer by truncation" do
    Rational(7, 4).to_i.should eql(1)
    Rational(11, 4).to_i.should eql(2)
  end

  it "converts self to an Integer by truncation" do
    Rational(-7, 4).to_i.should eql(-1)
  end
end
