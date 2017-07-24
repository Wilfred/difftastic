describe :enumeratorized_with_unknown_size, shared: true do
  describe "when no block is given" do
    describe "returned Enumerator" do
      it "size returns nil" do
        @object.send(*@method).size.should == nil
      end
    end
  end
end

describe :enumeratorized_with_origin_size, shared: true do
  describe "when no block is given" do
    describe "returned Enumerator" do
      it "size returns the enumerable size" do
        @object.send(*@method).size.should == @object.size
      end
    end
  end
end

describe :enumeratorized_with_cycle_size, shared: true do
  describe "when no block is given" do
    describe "returned Enumerator" do
      describe "size" do
        it "should be the result of multiplying the enumerable size by the argument passed" do
          @object.cycle(2).size.should == @object.size * 2
          @object.cycle(7).size.should == @object.size * 7
          @object.cycle(0).size.should == 0
          @empty_object.cycle(2).size.should == 0
        end

        it "should be zero when the argument passed is 0 or less" do
          @object.cycle(-1).size.should == 0
        end

        it "should be Float::INFINITY when no argument is passed" do
          @object.cycle.size.should == Float::INFINITY
        end
      end
    end
  end
end
