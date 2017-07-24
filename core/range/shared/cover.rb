# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe :range_cover, shared: true do
  it "uses the range element's <=> to make the comparison" do
    a = mock('a')
    a.should_receive(:<=>).twice.and_return(-1,-1)
    (a..'z').send(@method, 'b').should be_true
  end

  it "uses a continuous inclusion test" do
    ('a'..'f').send(@method, 'aa').should be_true
    ('a'..'f').send(@method, 'babe').should be_true
    ('a'..'f').send(@method, 'baby').should be_true
    ('a'..'f').send(@method, 'ga').should be_false
    (-10..-2).send(@method, -2.5).should be_true
  end

  describe "on string elements" do
    it "returns true if other is matched by element.succ" do
      ('a'..'c').send(@method, 'b').should be_true
      ('a'...'c').send(@method, 'b').should be_true
    end

    it "returns true if other is not matched by element.succ" do
      ('a'..'c').send(@method, 'bc').should be_true
      ('a'...'c').send(@method, 'bc').should be_true
    end
  end

  describe "with weird succ" do
    describe "when included end value" do
      before :each do
        @range = RangeSpecs::TenfoldSucc.new(1)..RangeSpecs::TenfoldSucc.new(99)
      end

      it "returns false if other is less than first element" do
        @range.send(@method, RangeSpecs::TenfoldSucc.new(0)).should be_false
      end

      it "returns true if other is equal as first element" do
        @range.send(@method, RangeSpecs::TenfoldSucc.new(1)).should be_true
      end

      it "returns true if other is matched by element.succ" do
        @range.send(@method, RangeSpecs::TenfoldSucc.new(10)).should be_true
      end

      it "returns true if other is not matched by element.succ" do
        @range.send(@method, RangeSpecs::TenfoldSucc.new(2)).should be_true
      end

      it "returns true if other is equal as last element but not matched by element.succ" do
        @range.send(@method, RangeSpecs::TenfoldSucc.new(99)).should be_true
      end

      it "returns false if other is greater than last element but matched by element.succ" do
        @range.send(@method, RangeSpecs::TenfoldSucc.new(100)).should be_false
      end
    end

    describe "when excluded end value" do
      before :each do
        @range = RangeSpecs::TenfoldSucc.new(1)...RangeSpecs::TenfoldSucc.new(99)
      end

      it "returns false if other is less than first element" do
        @range.send(@method, RangeSpecs::TenfoldSucc.new(0)).should be_false
      end

      it "returns true if other is equal as first element" do
        @range.send(@method, RangeSpecs::TenfoldSucc.new(1)).should be_true
      end

      it "returns true if other is matched by element.succ" do
        @range.send(@method, RangeSpecs::TenfoldSucc.new(10)).should be_true
      end

      it "returns true if other is not matched by element.succ" do
        @range.send(@method, RangeSpecs::TenfoldSucc.new(2)).should be_true
      end

      it "returns false if other is equal as last element but not matched by element.succ" do
        @range.send(@method, RangeSpecs::TenfoldSucc.new(99)).should be_false
      end

      it "returns false if other is greater than last element but matched by element.succ" do
        @range.send(@method, RangeSpecs::TenfoldSucc.new(100)).should be_false
      end
    end
  end
end
