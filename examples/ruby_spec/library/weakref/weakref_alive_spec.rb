require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "WeakRef#weakref_alive?" do
  it "returns true if the object is reachable" do
    obj = Object.new
    ref = WeakRef.new(obj)
    ref.weakref_alive?.should == true
  end

  it "returns a falsey value if the object is no longer reachable" do
    ref = WeakRefSpec.make_dead_weakref
    [false, nil].should include(ref.weakref_alive?)
  end
end
