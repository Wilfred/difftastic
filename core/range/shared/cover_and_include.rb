# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)

describe :range_cover_and_include, shared: true do
  it "returns true if other is an element of self" do
    (0..5).send(@method, 2).should == true
    (-5..5).send(@method, 0).should == true
    (-1...1).send(@method, 10.5).should == false
    (-10..-2).send(@method, -2.5).should == true
    ('C'..'X').send(@method, 'M').should == true
    ('C'..'X').send(@method, 'A').should == false
    ('B'...'W').send(@method, 'W').should == false
    ('B'...'W').send(@method, 'Q').should == true
    (0xffff..0xfffff).send(@method, 0xffffd).should == true
    (0xffff..0xfffff).send(@method, 0xfffd).should == false
    (0.5..2.4).send(@method, 2).should == true
    (0.5..2.4).send(@method, 2.5).should == false
    (0.5..2.4).send(@method, 2.4).should == true
    (0.5...2.4).send(@method, 2.4).should == false
  end

  it "compares values using <=>" do
    rng = (1..5)
    m = mock("int")
    m.should_receive(:coerce).and_return([1, 2])
    m.should_receive(:<=>).and_return(1)

    rng.send(@method, m).should be_false
  end

  it "raises an ArgumentError without exactly one argument" do
    lambda{ (1..2).send(@method) }.should raise_error(ArgumentError)
    lambda{ (1..2).send(@method, 1, 2) }.should raise_error(ArgumentError)
  end

  it "returns true if argument is equal to the first value of the range" do
    (0..5).send(@method, 0).should be_true
    ('f'..'s').send(@method, 'f').should be_true
  end

  it "returns true if argument is equal to the last value of the range" do
    (0..5).send(@method, 5).should be_true
    (0...5).send(@method, 4).should be_true
    ('f'..'s').send(@method, 's').should be_true
  end

  it "returns true if argument is less than the last value of the range and greater than the first value" do
    (20..30).send(@method, 28).should be_true
    ('e'..'h').send(@method, 'g').should be_true
    ("\u{999}".."\u{9999}").send @method, "\u{9995}"
  end

  it "returns true if argument is sole element in the range" do
    (30..30).send(@method, 30).should be_true
  end

  it "returns false if range is empty" do
    (30...30).send(@method, 30).should be_false
    (30...30).send(@method, nil).should be_false
  end

  it "returns false if the range does not contain the argument" do
    ('A'..'C').send(@method, 20.9).should be_false
    ('A'...'C').send(@method, 'C').should be_false
  end
end
