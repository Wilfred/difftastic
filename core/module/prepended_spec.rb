# -*- encoding: us-ascii -*-

require File.expand_path('../../../spec_helper', __FILE__)

describe "Module#prepended" do
  before :each do
    ScratchPad.clear
  end

  it "is a private method" do
    Module.should have_private_instance_method(:prepended, true)
  end

  it "is invoked when self is prepended to another module or class" do
    m = Module.new do
      def self.prepended(o)
        ScratchPad.record o
      end
    end

    c = Class.new { prepend m }

    ScratchPad.recorded.should == c
  end
end
