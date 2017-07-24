require File.expand_path('../../../spec_helper', __FILE__)

ruby_version_is "2.4" do
  describe "Hash#transform_values" do
    before :each do
      @hash = { a: 1, b: 2, c: 3 }
    end

    it "returns new hash" do
      ret = @hash.transform_values(&:succ)
      ret.should_not equal(@hash)
      ret.should be_an_instance_of(Hash)
    end

    it "sets the result as transformed values with the given block" do
      @hash.transform_values(&:succ).should ==  { a: 2, b: 3, c: 4 }
    end

    context "when no block is given" do
      it "returns a sized Enumerator" do
        enumerator = @hash.transform_values
        enumerator.should be_an_instance_of(Enumerator)
        enumerator.size.should == @hash.size
        enumerator.each(&:succ).should == { a: 2, b: 3, c: 4 }
      end
    end
  end

  describe "Hash#transform_values!" do
    before :each do
      @hash = { a: 1, b: 2, c: 3 }
      @initial_pairs = @hash.dup
    end

    it "returns self" do
      @hash.transform_values!(&:succ).should equal(@hash)
    end

    it "updates self as transformed values with the given block" do
      @hash.transform_values!(&:succ)
      @hash.should ==  { a: 2, b: 3, c: 4 }
    end

    context "when no block is given" do
      it "returns a sized Enumerator" do
        enumerator = @hash.transform_values!
        enumerator.should be_an_instance_of(Enumerator)
        enumerator.size.should == @hash.size
        enumerator.each(&:succ)
        @hash.should == { a: 2, b: 3, c: 4 }
      end
    end

    describe "on frozen instance" do
      before :each do
        @hash.freeze
      end

      it "keeps pairs and raises a RuntimeError" do
        ->{ @hash.transform_values!(&:succ) }.should raise_error(RuntimeError)
        @hash.should == @initial_pairs
      end

      context "when no block is given" do
        it "does not raise an exception" do
          @hash.transform_values!.should be_an_instance_of(Enumerator)
        end
      end
    end
  end
end
