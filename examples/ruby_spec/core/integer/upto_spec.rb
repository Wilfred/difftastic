require File.expand_path('../../../spec_helper', __FILE__)

describe "Integer#upto [stop] when self and stop are Fixnums" do
  it "does not yield when stop is less than self" do
    result = []
    5.upto(4) { |x| result << x }
    result.should == []
  end

  it "yields once when stop equals self" do
    result = []
    5.upto(5) { |x| result << x }
    result.should == [5]
  end

  it "yields while increasing self until it is less than stop" do
    result = []
    2.upto(5) { |x| result << x }
    result.should == [2, 3, 4, 5]
  end

  it "yields while increasing self until it is greater than floor of a Float endpoint" do
    result = []
    9.upto(13.3) {|i| result << i}
    -5.upto(-1.3) {|i| result << i}
    result.should == [9,10,11,12,13,-5,-4,-3,-2]
  end

  it "raises an ArgumentError for non-numeric endpoints" do
    lambda { 1.upto("A") {|x| p x} }.should raise_error(ArgumentError)
    lambda { 1.upto(nil) {|x| p x} }.should raise_error(ArgumentError)
  end

  describe "when no block is given" do
    it "returns an Enumerator" do
      result = []

      enum = 2.upto(5)
      enum.each { |i| result << i }

      result.should == [2, 3, 4, 5]
    end

    describe "returned Enumerator" do
      describe "size" do
        it "raises an ArgumentError for non-numeric endpoints" do
          enum = 1.upto("A")
          lambda { enum.size }.should raise_error(ArgumentError)
          enum = 1.upto(nil)
          lambda { enum.size }.should raise_error(ArgumentError)
        end

        it "returns stop - self + 1" do
          5.upto(10).size.should == 6
          1.upto(10).size.should == 10
          0.upto(10).size.should == 11
          0.upto(0).size.should == 1
          -5.upto(-3).size.should == 3
        end

        it "returns 0 when stop < self" do
          5.upto(4).size.should == 0
          0.upto(-5).size.should == 0
          -3.upto(-5).size.should == 0
        end
      end
    end
  end
end
