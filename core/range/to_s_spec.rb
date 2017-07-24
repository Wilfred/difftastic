require File.expand_path('../../../spec_helper', __FILE__)

describe "Range#to_s" do
  it "provides a printable form of self" do
    (0..21).to_s.should == "0..21"
    (-8..0).to_s.should ==  "-8..0"
    (-411..959).to_s.should == "-411..959"
    ('A'..'Z').to_s.should == 'A..Z'
    ('A'...'Z').to_s.should == 'A...Z'
    (0xfff..0xfffff).to_s.should == "4095..1048575"
    (0.5..2.4).to_s.should == "0.5..2.4"
  end

  it "returns a tainted string if either end is tainted" do
    (("a".taint)..."c").to_s.tainted?.should be_true
    ("a"...("c".taint)).to_s.tainted?.should be_true
    ("a"..."c").taint.to_s.tainted?.should be_true
  end

  it "returns a untrusted string if either end is untrusted" do
    (("a".untrust)..."c").to_s.untrusted?.should be_true
    ("a"...("c".untrust)).to_s.untrusted?.should be_true
    ("a"..."c").untrust.to_s.untrusted?.should be_true
  end
end
