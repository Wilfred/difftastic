require File.expand_path('../../../spec_helper', __FILE__)

describe "Integer#downto [stop] when self and stop are Fixnums" do
  it "does not yield when stop is greater than self" do
    result = []
    5.downto(6) { |x| result << x }
    result.should == []
  end

  it "yields once when stop equals self" do
    result = []
    5.downto(5) { |x| result << x }
    result.should == [5]
  end

  it "yields while decreasing self until it is less than stop" do
    result = []
    5.downto(2) { |x| result << x }
    result.should == [5, 4, 3, 2]
  end

  it "yields while decreasing self until it less than ceil for a Float endpoint" do
    result = []
    9.downto(1.3) {|i| result << i}
    3.downto(-1.3) {|i| result << i}
    result.should == [9, 8, 7, 6, 5, 4, 3, 2, 3, 2, 1, 0, -1]
  end

  it "raises an ArgumentError for invalid endpoints" do
    lambda {1.downto("A") {|x| p x } }.should raise_error(ArgumentError)
    lambda {1.downto(nil) {|x| p x } }.should raise_error(ArgumentError)
  end

  describe "when no block is given" do
    it "returns an Enumerator" do
      result = []

      enum = 5.downto(2)
      enum.each { |i| result << i }

      result.should == [5, 4, 3, 2]
    end

    describe "returned Enumerator" do
      describe "size" do
        it "raises an ArgumentError for invalid endpoints" do
          enum = 1.downto("A")
          lambda { enum.size }.should raise_error(ArgumentError)
          enum = 1.downto(nil)
          lambda { enum.size }.should raise_error(ArgumentError)
        end

        it "returns self - stop + 1" do
          10.downto(5).size.should == 6
          10.downto(1).size.should == 10
          10.downto(0).size.should == 11
          0.downto(0).size.should == 1
          -3.downto(-5).size.should == 3
        end

        it "returns 0 when stop > self" do
          4.downto(5).size.should == 0
          -5.downto(0).size.should == 0
          -5.downto(-3).size.should == 0
        end
      end
    end
  end
end
