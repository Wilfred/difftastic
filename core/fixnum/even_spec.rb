require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#even?" do
  it "is true for zero" do
    0.even?.should be_true
  end

  it "is true for even positive Fixnums" do
    4.even?.should be_true
  end

  it "is true for even negative Fixnums" do
    (-4).even?.should be_true
  end

  it "is false for odd positive Fixnums" do
    5.even?.should be_false
  end

  it "is false for odd negative Fixnums" do
    (-5).even?.should be_false
  end
end
