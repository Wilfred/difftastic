require File.expand_path('../../../spec_helper', __FILE__)

describe "Range#size" do
  it "returns the number of elements in the range" do
    (1..16).size.should == 16
    (1...16).size.should == 15

    (1.0..16.0).size.should == 16
    (1.0...16.0).size.should == 15
    (1.0..15.9).size.should == 15
    (1.1..16.0).size.should == 15
    (1.1..15.9).size.should == 15
  end

  it "returns 0 if last is less than first" do
    (16..0).size.should == 0
    (16.0..0.0).size.should == 0
    (Float::INFINITY..0).size.should == 0
  end

  it 'returns Float::INFINITY for increasing, infinite ranges' do
    (0..Float::INFINITY).size.should == Float::INFINITY
    (-Float::INFINITY..0).size.should == Float::INFINITY
    (-Float::INFINITY..Float::INFINITY).size.should == Float::INFINITY
  end

  it "returns nil if first and last are not Numeric" do
    (:a..:z).size.should be_nil
    ('a'..'z').size.should be_nil
  end
end
