require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash#compare_by_identity" do
  before :each do
    @h = {}
    @idh = {}.compare_by_identity
  end

  it "causes future comparisons on the receiver to be made by identity" do
    @h[[1]] = :a
    @h[[1]].should == :a
    @h.compare_by_identity
    @h[[1].dup].should be_nil
  end

  it "rehashes internally so that old keys can be looked up" do
    h = {}
    (1..10).each { |k| h[k] = k }
    o = Object.new
    def o.hash; 123; end
    h[o] = 1
    h.compare_by_identity
    h[o].should == 1
  end

  it "returns self" do
    h = {}
    h[:foo] = :bar
    h.compare_by_identity.should equal h
  end

  it "has no effect on an already compare_by_identity hash" do
    @idh[:foo] = :bar
    @idh.compare_by_identity.should equal @idh
    @idh.compare_by_identity?.should == true
    @idh[:foo].should == :bar
  end

  it "uses the semantics of BasicObject#equal? to determine key identity" do
    [1].should_not equal([1])
    @idh[[1]] = :c
    @idh[[1]] = :d
    :bar.should equal(:bar)
    @idh[:bar] = :e
    @idh[:bar] = :f
    @idh.values.should == [:c, :d, :f]
  end

  it "uses #equal? semantics, but doesn't actually call #equal? to determine identity" do
    obj = mock('equal')
    obj.should_not_receive(:equal?)
    @idh[:foo] = :glark
    @idh[obj] = :a
    @idh[obj].should == :a
  end

  it "does not call #hash on keys" do
    key = HashSpecs::ByIdentityKey.new
    @idh[key] = 1
    @idh[key].should == 1
  end

  it "regards #dup'd objects as having different identities" do
    key = ['foo']
    @idh[key.dup] = :str
    @idh[key].should be_nil
  end

  it "regards #clone'd objects as having different identities" do
    key = ['foo']
    @idh[key.clone] = :str
    @idh[key].should be_nil
  end

  it "regards references to the same object as having the same identity" do
    o = Object.new
    @h[o] = :o
    @h[:a] = :a
    @h[o].should == :o
  end

  it "raises a RuntimeError on frozen hashes" do
    @h = @h.freeze
    lambda { @h.compare_by_identity }.should raise_error(RuntimeError)
  end

  # Behaviour confirmed in bug #1871
  it "persists over #dups" do
    @idh['foo'] = :bar
    @idh['foo'] = :glark
    @idh.dup.should == @idh
    @idh.dup.size.should == @idh.size
  end

  it "persists over #clones" do
    @idh['foo'] = :bar
    @idh['foo'] = :glark
    @idh.clone.should == @idh
    @idh.clone.size.should == @idh.size
  end

  it "does not copy string keys" do
    foo = 'foo'
    @idh[foo] = true
    @idh[foo] = true
    @idh.size.should == 1
    @idh.keys.first.object_id.should == foo.object_id
  end

  ruby_bug "#12855", "2.2.0"..."2.4.1" do
    it "gives different identity for string literals" do
      @idh['foo'] = 1
      @idh['foo'] = 2
      @idh.values.should == [1, 2]
      @idh.size.should == 2
    end
  end
end

describe "Hash#compare_by_identity?" do
  it "returns false by default" do
    h = {}
    h.compare_by_identity?.should be_false
  end

  it "returns true once #compare_by_identity has been invoked on self" do
    h = {}
    h.compare_by_identity
    h.compare_by_identity?.should be_true
  end

  it "returns true when called multiple times on the same ident hash" do
    h = {}
    h.compare_by_identity
    h.compare_by_identity?.should be_true
    h.compare_by_identity?.should be_true
    h.compare_by_identity?.should be_true
  end
end
