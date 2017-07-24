require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash#initialize" do
  it "is private" do
    Hash.should have_private_instance_method("initialize")
  end

  it "can be used to reset default_proc" do
    h = { "foo" => 1, "bar" => 2 }
    h.default_proc.should == nil
    h.instance_eval { initialize { |_, k| k * 2 } }
    h.default_proc.should_not == nil
    h["a"].should == "aa"
  end

  it "receives the arguments passed to Hash#new" do
    HashSpecs::NewHash.new(:one, :two)[0].should == :one
    HashSpecs::NewHash.new(:one, :two)[1].should == :two
  end

  it "returns self" do
    h = Hash.new
    h.send(:initialize).should equal(h)
  end

  it "raises a RuntimeError if called on a frozen instance" do
    block = lambda { HashSpecs.frozen_hash.instance_eval { initialize() }}
    block.should raise_error(RuntimeError)

    block = lambda { HashSpecs.frozen_hash.instance_eval { initialize(nil) }  }
    block.should raise_error(RuntimeError)

    block = lambda { HashSpecs.frozen_hash.instance_eval { initialize(5) }    }
    block.should raise_error(RuntimeError)

    block = lambda { HashSpecs.frozen_hash.instance_eval { initialize { 5 } } }
    block.should raise_error(RuntimeError)
  end
end
