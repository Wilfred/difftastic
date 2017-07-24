require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

ruby_version_is "2.4" do
  describe "Hash#compact" do
    before :each do
      @hash = { truthy: true, false: false, nil: nil, nil => true }
      @initial_pairs = @hash.dup
      @compact = { truthy: true, false: false, nil => true }
    end

    it "returns new object that rejects pair has nil value" do
      ret = @hash.compact
      ret.should_not equal(@hash)
      ret.should == @compact
    end

    it "keeps own pairs" do
      @hash.compact
      @hash.should == @initial_pairs
    end
  end

  describe "Hash#compact!" do
    before :each do
      @hash = { truthy: true, false: false, nil: nil, nil => true }
      @initial_pairs = @hash.dup
      @compact = { truthy: true, false: false, nil => true }
    end

    it "returns self" do
      @hash.compact!.should equal(@hash)
    end

    it "rejects own pair has nil value" do
      @hash.compact!
      @hash.should == @compact
    end

    context "when each pair does not have nil value" do
      before :each do
        @hash.compact!
      end

      it "returns nil" do
        @hash.compact!.should be_nil
      end
    end

    describe "on frozen instance" do
      before :each do
        @hash.freeze
      end

      it "keeps pairs and raises a RuntimeError" do
        ->{ @hash.compact! }.should raise_error(RuntimeError)
        @hash.should == @initial_pairs
      end
    end
  end
end
