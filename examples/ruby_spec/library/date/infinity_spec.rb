require 'date'
require File.expand_path('../../../spec_helper', __FILE__)

describe "Date::Infinity" do

  it "should be able to check whether Infinity is zero" do
    i = Date::Infinity.new
    i.zero?.should == false
  end

  it "should be able to check whether Infinity is finite" do
    i1 = Date::Infinity.new
    i1.finite?.should == false
    i2 = Date::Infinity.new(-1)
    i2.finite?.should == false
    i3 = Date::Infinity.new(0)
    i3.finite?.should == false
  end

  it "should be able to check whether Infinity is infinite" do
    i1 = Date::Infinity.new
    i1.infinite?.should == 1
    i2 = Date::Infinity.new(-1)
    i2.infinite?.should == -1
    i3 = Date::Infinity.new(0)
    i3.infinite?.should == nil
  end

  it "should be able to check whether Infinity is not a number" do
    i1 = Date::Infinity.new
    i1.nan?.should == false
    i2 = Date::Infinity.new(-1)
    i2.nan?.should == false
    i3 = Date::Infinity.new(0)
    i3.nan?.should == true
  end

  it "should be able to compare Infinity objects" do
    i1 = Date::Infinity.new
    i2 = Date::Infinity.new(-1)
    i3 = Date::Infinity.new(0)
    i4 = Date::Infinity.new
    (i4 <=> i1).should == 0
    (i3 <=> i1).should == -1
    (i2 <=> i1).should == -1
    (i3 <=> i2).should == 1
  end

  it "should be able to return plus Infinity for abs" do
    i1 = Date::Infinity.new
    i2 = Date::Infinity.new(-1)
    i3 = Date::Infinity.new(0)
    (i2.abs <=> i1).should == 0
    (i3.abs <=> i1).should == 0
  end

  it "should be able to use -@ and +@ for Date::Infinity" do
    (Date::Infinity.new <=> +Date::Infinity.new).should == 0
    (Date::Infinity.new(-1) <=> -Date::Infinity.new).should == 0
  end

  it "should be able to coerce a Date::Infinity object" do
    Date::Infinity.new.coerce(1).should == [-1, 1]
    Date::Infinity.new(0).coerce(2).should == [0, 0]
    Date::Infinity.new(-1).coerce(1.5).should == [1, -1]
  end
end
