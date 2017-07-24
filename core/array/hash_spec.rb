require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#hash" do
  it "returns the same fixnum for arrays with the same content" do
    [].respond_to?(:hash).should == true

    [[], [1, 2, 3]].each do |ary|
      ary.hash.should == ary.dup.hash
      ary.hash.should be_an_instance_of(Fixnum)
    end
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    lambda { empty.hash }.should_not raise_error

    array = ArraySpecs.recursive_array
    lambda { array.hash }.should_not raise_error
  end

  it "returns the same hash for equal recursive arrays" do
    rec = []; rec << rec
    rec.hash.should == [rec].hash
    rec.hash.should == [[rec]].hash
    # This is because rec.eql?([[rec]])
    # Remember that if two objects are eql?
    # then the need to have the same hash
    # Check the Array#eql? specs!
  end

  it "returns the same hash for equal recursive arrays through hashes" do
    h = {} ; rec = [h] ; h[:x] = rec
    rec.hash.should == [h].hash
    rec.hash.should == [{x: rec}].hash
    # Like above, this is because rec.eql?([{x: rec}])
  end

  it "calls to_int on result of calling hash on each element" do
    ary = Array.new(5) do
      obj = mock('0')
      obj.should_receive(:hash).and_return(obj)
      obj.should_receive(:to_int).and_return(0)
      obj
    end

    ary.hash


    hash = mock('1')
    hash.should_receive(:to_int).and_return(1.hash)

    obj = mock('@hash')
    obj.instance_variable_set(:@hash, hash)
    def obj.hash() @hash end

    [obj].hash.should == [1].hash
  end

  it "ignores array class differences" do
    ArraySpecs::MyArray[].hash.should == [].hash
    ArraySpecs::MyArray[1, 2].hash.should == [1, 2].hash
  end

  it "returns same hash code for arrays with the same content" do
    a = [1, 2, 3, 4]
    a.fill 'a', 0..3
    b = %w|a a a a|
    a.hash.should == b.hash
  end

  it "returns the same value if arrays are #eql?" do
    a = [1, 2, 3, 4]
    a.fill 'a', 0..3
    b = %w|a a a a|
    a.hash.should == b.hash
    a.should eql(b)
  end

  it "produces different hashes for nested arrays with different values and empty terminator" do
    [1, [1, []]].hash.should_not == [2, [2, []]].hash
  end
end
