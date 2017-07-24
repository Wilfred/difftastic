require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/comparison', __FILE__)
require File.expand_path('../shared/less_than', __FILE__)

ruby_version_is "2.3" do
  describe "Hash#<=" do
    it_behaves_like :hash_comparison, :<=
    it_behaves_like :hash_less_than, :<=

    it "returns true if both hashes are identical" do
      h = { a: 1, b: 2 }
      (h <= h).should be_true
    end
  end

  describe "Hash#<=" do
    before :each do
      @hash = {a:1, b:2}
      @bigger = {a:1, b:2, c:3}
      @unrelated = {c:3, d:4}
      @similar = {a:2, b:3}
    end

    it "returns false when receiver size is larger than argument" do
      (@bigger <= @hash).should == false
      (@bigger <= @unrelated).should == false
    end

    it "returns false when receiver size is the same as argument" do
      (@hash <= @unrelated).should == false
      (@unrelated <= @hash).should == false
    end

    it "returns true when receiver is a subset of argument or equals to argument" do
      (@hash <= @bigger).should == true
      (@hash <= @hash).should == true
    end

    it "returns false when keys match but values don't" do
      (@hash <= @similar).should == false
      (@similar <= @hash).should == false
    end
  end
end
