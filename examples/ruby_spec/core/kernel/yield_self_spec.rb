require File.expand_path('../../../spec_helper', __FILE__)

has_yield_self = VersionGuard.new("2.5").match? || PlatformGuard.implementation?(:truffleruby)

if has_yield_self
  describe "Kernel#yield_self" do
    it "yields self" do
      object = Object.new
      object.yield_self { |o| o.should equal object }
    end

    it "returns the block return value" do
      object = Object.new
      object.yield_self { 42 }.should equal 42
    end

    it "returns a sized Enumerator when no block given" do
      object = Object.new
      enum = object.yield_self
      enum.should be_an_instance_of Enumerator
      enum.size.should equal 1
      enum.peek.should equal object
      enum.first.should equal object
    end
  end
end
