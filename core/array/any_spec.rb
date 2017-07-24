require File.expand_path('../../../spec_helper', __FILE__)

describe "Array#any?" do
  describe 'with no block given (a default block of { |x| x } is implicit)' do
    it "is false if the array is empty" do
      empty_array = []
      empty_array.any?.should == false
    end

    it "is false if the array is not empty, but all the members of the array are falsy" do
      falsy_array = [false, nil, false]
      falsy_array.any?.should == false
    end

    it "is true if the array has any truthy members" do
      not_empty_array = ['anything', nil]
      not_empty_array.any?.should == true
    end
  end

  describe 'with a block given' do
    it 'is false if the array is empty' do
      empty_array = []
      empty_array.any? {|v| 1 == 1 }.should == false
    end

    it 'is true if the block returns true for any member of the array' do
      array_with_members = [false, false, true, false]
      array_with_members.any? {|v| v == true }.should == true
    end

    it 'is false if the block returns false for all members of the array' do
      array_with_members = [false, false, true, false]
      array_with_members.any? {|v| v == 42 }.should == false
    end
  end
end
