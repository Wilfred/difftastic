require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash#to_hash" do
  it "returns self for Hash instances" do
    h = {}
    h.to_hash.should equal(h)
  end

  it "returns self for instances of subclasses of Hash" do
    h = HashSpecs::MyHash.new
    h.to_hash.should equal(h)
  end
end
