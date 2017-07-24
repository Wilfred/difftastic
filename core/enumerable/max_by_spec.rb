require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/enumerable_enumeratorized', __FILE__)

describe "Enumerable#max_by" do
  it "returns an enumerator if no block" do
    EnumerableSpecs::Numerous.new(42).max_by.should be_an_instance_of(Enumerator)
  end

  it "returns nil if #each yields no objects" do
    EnumerableSpecs::Empty.new.max_by {|o| o.nonesuch }.should == nil
  end

  it "returns the object for whom the value returned by block is the largest" do
    EnumerableSpecs::Numerous.new(*%w[1 2 3]).max_by {|obj| obj.to_i }.should == '3'
    EnumerableSpecs::Numerous.new(*%w[three five]).max_by {|obj| obj.length }.should == 'three'
  end

  it "returns the object that appears first in #each in case of a tie" do
    a, b, c = '1', '2', '2'
    EnumerableSpecs::Numerous.new(a, b, c).max_by {|obj| obj.to_i }.should equal(b)
  end

  it "uses max.<=>(current) to determine order" do
    a, b, c = (1..3).map{|n| EnumerableSpecs::ReverseComparable.new(n)}

    # Just using self here to avoid additional complexity
    EnumerableSpecs::Numerous.new(a, b, c).max_by {|obj| obj }.should == a
  end

  it "is able to return the maximum for enums that contain nils" do
    enum = EnumerableSpecs::Numerous.new(nil, nil, true)
    enum.max_by {|o| o.nil? ? 0 : 1 }.should == true
    enum.max_by {|o| o.nil? ? 1 : 0 }.should == nil
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    multi.max_by {|e| e.size}.should == [6, 7, 8, 9]
  end

  it_behaves_like :enumerable_enumeratorized_with_origin_size, :max_by

  context "when called with an argument n" do
    before :each do
      @enum = EnumerableSpecs::Numerous.new(101, 55, 1, 20, 33, 500, 60)
    end

    context "without a block" do
      it "returns an enumerator" do
        @enum.max_by(2).should be_an_instance_of(Enumerator)
      end
    end

    context "with a block" do
      it "returns an array containing the maximum n elements based on the block's value" do
        result = @enum.max_by(3) { |i| i.to_s }
        result.should == [60, 55, 500]
      end

      context "on a enumerable of length x where x < n" do
        it "returns an array containing the maximum n elements of length n" do
          result = @enum.max_by(500) { |i| i.to_s }
          result.length.should == 7
        end
      end

      context "when n is negative" do
        it "raises an ArgumentError" do
          lambda { @enum.max_by(-1) { |i| i.to_s } }.should raise_error(ArgumentError)
        end
      end
    end

    context "when n is nil" do
      it "returns the maximum element" do
        @enum.max_by(nil) { |i| i.to_s }.should == 60
      end
    end
  end
end
