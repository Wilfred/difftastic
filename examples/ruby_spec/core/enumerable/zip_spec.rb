require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerable#zip" do

  it "combines each element of the receiver with the element of the same index in arrays given as arguments" do
    EnumerableSpecs::Numerous.new(1,2,3).zip([4,5,6],[7,8,9]).should == [[1,4,7],[2,5,8],[3,6,9]]
    EnumerableSpecs::Numerous.new(1,2,3).zip.should == [[1],[2],[3]]
  end

  it "passes each element of the result array to a block and return nil if a block is given" do
    expected = [[1,4,7],[2,5,8],[3,6,9]]
    EnumerableSpecs::Numerous.new(1,2,3).zip([4,5,6],[7,8,9]) do |result_component|
      result_component.should == expected.shift
    end.should == nil
    expected.size.should == 0
  end

  it "fills resulting array with nils if an argument array is too short" do
    EnumerableSpecs::Numerous.new(1,2,3).zip([4,5,6], [7,8]).should == [[1,4,7],[2,5,8],[3,6,nil]]
  end

  it "converts arguments to arrays using #to_ary" do
    convertable = EnumerableSpecs::ArrayConvertable.new(4,5,6)
    EnumerableSpecs::Numerous.new(1,2,3).zip(convertable).should == [[1,4],[2,5],[3,6]]
    convertable.called.should == :to_ary
  end

  it "converts arguments to enums using #to_enum" do
    convertable = EnumerableSpecs::EnumConvertable.new(4..6)
    EnumerableSpecs::Numerous.new(1,2,3).zip(convertable).should == [[1,4],[2,5],[3,6]]
    convertable.called.should == :to_enum
    convertable.sym.should == :each
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    multi.zip(multi).should == [[[1, 2], [1, 2]], [[3, 4, 5], [3, 4, 5]], [[6, 7, 8, 9], [6, 7, 8, 9]]]
  end

end

