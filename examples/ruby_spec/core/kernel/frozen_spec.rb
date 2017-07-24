require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#frozen?" do
  it "returns true if self is frozen" do
    o = mock('o')
    p = mock('p')
    p.freeze
    o.frozen?.should == false
    p.frozen?.should == true
  end

  describe "on true, false and nil" do
    it "returns true" do
      true.frozen?.should be_true
      false.frozen?.should be_true
      nil.frozen?.should be_true
    end
  end

  describe "on integers" do
    before :each do
      @fixnum = 1
      @bignum = bignum_value
    end

    it "returns true" do
      @fixnum.frozen?.should be_true
      @bignum.frozen?.should be_true
    end
  end

  describe "on a Float" do
    before :each do
      @float = 0.1
    end

    it "returns true" do
      @float.frozen?.should be_true
    end
  end

  describe "on a Symbol" do
    before :each do
      @symbol = :symbol
    end

    it "returns true" do
      @symbol.frozen?.should be_true
    end
  end
end
