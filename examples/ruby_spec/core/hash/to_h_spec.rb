require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash#to_h" do
  it "returns self for Hash instances" do
    h = {}
    h.to_h.should equal(h)
  end

  describe "when called on a subclass of Hash" do
    before :each do
      @h = HashSpecs::MyHash.new
      @h[:foo] = :bar
    end

    it "returns a new Hash instance" do
      @h.to_h.should be_an_instance_of(Hash)
      @h.to_h.should == @h
      @h[:foo].should == :bar
    end

    it "copies the default" do
      @h.default = 42
      @h.to_h.default.should == 42
      @h[:hello].should == 42
    end

    it "copies the default_proc" do
      @h.default_proc = prc = Proc.new{ |h, k| h[k] = 2 * k }
      @h.to_h.default_proc.should == prc
      @h[42].should == 84
    end
  end
end
