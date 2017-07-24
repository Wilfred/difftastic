require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_to_f, shared: true do
  it "returns self converted to a Float" do
    Rational(3, 4).to_f.should eql(0.75)
    Rational(3, -4).to_f.should eql(-0.75)
    Rational(-1, 4).to_f.should eql(-0.25)
    Rational(-1, -4).to_f.should eql(0.25)
  end
end
