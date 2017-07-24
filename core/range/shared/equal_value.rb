require File.expand_path('../../fixtures/classes', __FILE__)

describe :range_eql, shared: true do
  it "returns true if other has same begin, end, and exclude_end? values" do
    (0..2).send(@method, 0..2).should == true
    ('G'..'M').send(@method,'G'..'M').should == true
    (0.5..2.4).send(@method, 0.5..2.4).should == true
    (5..10).send(@method, Range.new(5,10)).should == true
    ('D'..'V').send(@method, Range.new('D','V')).should == true
    (0.5..2.4).send(@method, Range.new(0.5, 2.4)).should == true
    (0xffff..0xfffff).send(@method, 0xffff..0xfffff).should == true
    (0xffff..0xfffff).send(@method, Range.new(0xffff,0xfffff)).should == true

    a = RangeSpecs::Xs.new(3)..RangeSpecs::Xs.new(5)
    b = Range.new(RangeSpecs::Xs.new(3), RangeSpecs::Xs.new(5))
    a.send(@method, b).should == true
  end

  it "returns false if one of the attributes differs" do
    ('Q'..'X').send(@method, 'A'..'C').should == false
    ('Q'...'X').send(@method, 'Q'..'W').should == false
    ('Q'..'X').send(@method, 'Q'...'X').should == false
    (0.5..2.4).send(@method, 0.5...2.4).should == false
    (1482..1911).send(@method, 1482...1911).should == false
    (0xffff..0xfffff).send(@method, 0xffff...0xfffff).should == false

    a = RangeSpecs::Xs.new(3)..RangeSpecs::Xs.new(5)
    b = Range.new(RangeSpecs::Ys.new(3), RangeSpecs::Ys.new(5))
    a.send(@method, b).should == false
  end

  it "returns false if other is not a Range" do
    (1..10).send(@method, 1).should == false
    (1..10).send(@method, 'a').should == false
    (1..10).send(@method, mock('x')).should == false
  end

  it "returns true for subclasses of Range" do
    Range.new(1, 2).send(@method, RangeSpecs::MyRange.new(1, 2)).should == true

    a = Range.new(RangeSpecs::Xs.new(3), RangeSpecs::Xs.new(5))
    b = RangeSpecs::MyRange.new(RangeSpecs::Xs.new(3), RangeSpecs::Xs.new(5))
    a.send(@method, b).should == true
  end
end
