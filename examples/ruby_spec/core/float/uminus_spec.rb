require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#-@" do
  it "negates self" do
    (2.221.send(:-@)).should be_close(-2.221, TOLERANCE)
    -2.01.should be_close(-2.01,TOLERANCE)
    -2_455_999_221.5512.should be_close(-2455999221.5512, TOLERANCE)
    (--5.5).should be_close(5.5, TOLERANCE)
    -8.551.send(:-@).should be_close(8.551, TOLERANCE)
  end

  it "negates self at Float boundaries" do
    Float::MAX.send(:-@).should be_close(0.0 - Float::MAX, TOLERANCE)
    Float::MIN.send(:-@).should be_close(0.0 - Float::MIN, TOLERANCE)
  end

  it "returns negative infinity for positive infinity" do
    infinity_value.send(:-@).infinite?.should == -1
  end

  it "returns positive infinity for negative infinity" do
    (-infinity_value).send(:-@).infinite?.should == 1
  end

  it "returns NaN for NaN" do
    nan_value.send(:-@).nan?.should == true
  end
end
