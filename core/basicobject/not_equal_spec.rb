require File.expand_path('../../../spec_helper', __FILE__)

describe "BasicObject#!=" do
  it "is a public instance method" do
    BasicObject.should have_public_instance_method(:'!=')
  end

  it "returns true if other is not identical to self" do
    a = BasicObject.new
    b = BasicObject.new
    (a != b).should be_true
  end

  it "returns true if other is an Object" do
    a = BasicObject.new
    b = Object.new
    (a != b).should be_true
  end

  it "returns false if other is identical to self" do
    a = BasicObject.new
    (a != a).should be_false
  end

  it "dispatches to #==" do
    a = mock("not_equal")
    b = BasicObject.new
    a.should_receive(:==).and_return(true)

    (a != b).should be_false
  end

  describe "when invoked using Kernel#send" do
    it "returns true if other is not identical to self" do
      a = Object.new
      b = Object.new
      a.send(:!=, b).should be_true
    end

    it "returns false if other is identical to self" do
      a = Object.new
      a.send(:!=, a).should be_false
    end

    it "dispatches to #==" do
      a = mock("not_equal")
      b = Object.new
      a.should_receive(:==).and_return(true)

      a.send(:!=, b).should be_false
    end
  end
end
