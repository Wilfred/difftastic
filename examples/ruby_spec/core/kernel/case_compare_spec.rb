require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)


module Specs
  module Kernel

    class HasNone
    end

    class HasOpEqual
      def ==(other)
        other.kind_of? HasOpEqual
      end
    end

    class HasEqual
      def equal?(other)
        false
      end
    end

    class HasOppoOpEqual
      def ==(other)
        false
      end

      def equal?(other)
        false
      end
    end
  end
end


describe "Kernel#=== for a class with default #== and #equal?" do
  before :each do
    @o1 = Specs::Kernel::HasNone.new
    @o2 = @o1.dup
  end

  it "returns true if other object has same object id" do
    @o1.object_id.should == @o1.object_id
    (@o1 === @o1).should == true
  end

  it "returns false if other object does not have same object id" do
    @o1.object_id.should_not == @o2.object_id
    (@o1 === @o2).should == false
  end
end

describe "Kernel#=== for a class with #== overridden to consider other object's class" do
  before :each do
    @o  = Object.new
    @o1 = Specs::Kernel::HasOpEqual.new
    @o2 = @o1.dup
  end

  it "returns true if #== returns true even if #equal? is false" do
    @o1.should_not equal(@o2)
    (@o1 == @o2).should == true
    (@o1 === @o2).should == true
  end

  it "returns true if #equal? returns true" do
    @o1.should equal(@o1)
    (@o1 === @o1).should == true
  end

  it "returns false if neither #== nor #equal? returns true" do
    @o1.should_not equal(@o)
    (@o1 == @o).should == false
    (@o1 === @o).should == false
  end
end

describe "Kernel#=== for a class with #equal? overridden to always be false" do
  before :each do
    @o  = Object.new
    @o1 = Specs::Kernel::HasEqual.new
    @o2 = @o1.dup
  end

  it "returns true if #== returns true even if #equal? is false" do
    @o1.should_not equal(@o1)
    (@o1 == @o1).should == true
    (@o1 === @o1).should == true
  end

  it "returns false if neither #== nor #equal? returns true" do
    @o1.should_not equal(@o)
    (@o1 == @o).should == false
    (@o1 === @o).should == false
  end
end

describe "Kernel#=== for a class with #== and #equal? overridden to always be false" do
  before :each do
    @o  = Object.new
    @o1 = Specs::Kernel::HasOppoOpEqual.new
    @o2 = @o1.dup
  end

  it "returns true if the object id is the same even if both #== and #equal? return false" do
    @o1.object_id.should == @o1.object_id

    @o1.should_not equal(@o1)
    (@o1 == @o1).should == false

    (@o1 === @o1).should == true
  end

  it "returns false if the object id is not the same and both #== and #equal? return false" do
    @o1.object_id.should_not == @o2.object_id

    @o1.should_not equal(@o2)
    (@o1 == @o2).should == false

    (@o1 === @o2).should == false
  end
end

describe "Kernel#=== does not call #object_id nor #equal?" do
  before :each do
    @o1 = Object.new
    @o1.should_not_receive(:object_id)
    @o1.should_not_receive(:equal?)
  end

  it "but still returns true for #== or #=== on the same object" do
    (@o1 == @o1).should == true
    (@o1 === @o1).should == true
  end
end
