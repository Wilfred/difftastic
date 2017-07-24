require File.expand_path('../../../shared/rational/to_r', __FILE__)

describe "Rational#to_r" do
  it_behaves_like(:rational_to_r, :to_r)

  it "raises TypeError trying to convert BasicObject" do
    obj = BasicObject.new
    lambda { Rational(obj) }.should raise_error(TypeError)
  end
end
