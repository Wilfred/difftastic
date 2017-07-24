require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/enumerable_enumeratorized', __FILE__)

describe "Enumerable#min_by" do
  it "returns an enumerator if no block" do
    EnumerableSpecs::Numerous.new(42).min_by.should be_an_instance_of(Enumerator)
  end

  it "returns nil if #each yields no objects" do
    EnumerableSpecs::Empty.new.min_by {|o| o.nonesuch }.should == nil
  end

  it "returns the object for whom the value returned by block is the smallest" do
    EnumerableSpecs::Numerous.new(*%w[3 2 1]).min_by {|obj| obj.to_i }.should == '1'
    EnumerableSpecs::Numerous.new(*%w[five three]).min_by {|obj| obj.length }.should == 'five'
  end

  it "returns the object that appears first in #each in case of a tie" do
    a, b, c = '2', '1', '1'
    EnumerableSpecs::Numerous.new(a, b, c).min_by {|obj| obj.to_i }.should equal(b)
  end

  it "uses min.<=>(current) to determine order" do
    a, b, c = (1..3).map{|n| EnumerableSpecs::ReverseComparable.new(n)}

    # Just using self here to avoid additional complexity
    EnumerableSpecs::Numerous.new(a, b, c).min_by {|obj| obj }.should == c
  end

  it "is able to return the minimum for enums that contain nils" do
    enum = EnumerableSpecs::Numerous.new(nil, nil, true)
    enum.min_by {|o| o.nil? ? 0 : 1 }.should == nil
    enum.min_by {|o| o.nil? ? 1 : 0 }.should == true
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    multi.min_by {|e| e.size}.should == [1, 2]
  end

  it_behaves_like :enumerable_enumeratorized_with_origin_size, :min_by

  context "when called with an argument n" do
    before :each do
      @enum = EnumerableSpecs::Numerous.new(101, 55, 1, 20, 33, 500, 60)
    end

    context "without a block" do
      it "returns an enumerator" do
        @enum.min_by(2).should be_an_instance_of(Enumerator)
      end
    end

    context "with a block" do
      it "returns an array containing the minimum n elements based on the block's value" do
        result = @enum.min_by(3) { |i| i.to_s }
        result.should == [1, 101, 20]
      end

      context "on a enumerable of length x where x < n" do
        it "returns an array containing the minimum n elements of length n" do
          result = @enum.min_by(500) { |i| i.to_s }
          result.length.should == 7
        end
      end

      context "when n is negative" do
        it "raises an ArgumentError" do
          lambda { @enum.min_by(-1) { |i| i.to_s } }.should raise_error(ArgumentError)
        end
      end
    end

    context "when n is nil" do
      it "returns the minimum element" do
        @enum.min_by(nil) { |i| i.to_s }.should == 1
      end
    end
  end
end
