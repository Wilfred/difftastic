require File.expand_path('../../../spec_helper', __FILE__)

describe "Hash#any?" do
  describe 'with no block given' do
    it "checks if there are any members of a Hash" do
      empty_hash = {}
      empty_hash.any?.should == false

      hash_with_members = { 'key' => 'value' }
      hash_with_members.any?.should == true
    end
  end

  describe 'with a block given' do
    it 'is false if the hash is empty' do
      empty_hash = {}
      empty_hash.any? {|k,v| 1 == 1 }.should == false
    end

    it 'is true if the block returns true for any member of the hash' do
      hash_with_members = { 'a' => false, 'b' => false, 'c' => true, 'd' => false }
      hash_with_members.any? {|k,v| v == true}.should == true
    end

    it 'is false if the block returns false for all members of the hash' do
      hash_with_members = { 'a' => false, 'b' => false, 'c' => true, 'd' => false }
      hash_with_members.any? {|k,v| v == 42}.should == false
    end
  end
end
