require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Comparable#==" do
  a = b = nil
  before :each do
    a = ComparableSpecs::Weird.new(0)
    b = ComparableSpecs::Weird.new(10)
  end

  it "returns true if other is the same as self" do
    (a == a).should == true
    (b == b).should == true
  end

  it "calls #<=> on self with other and returns true if #<=> returns 0" do
    a.should_receive(:<=>).once.and_return(0)
    (a == b).should == true
  end

  it "calls #<=> on self with other and returns true if #<=> returns 0.0" do
    a.should_receive(:<=>).once.and_return(0.0)
    (a == b).should == true
  end

  it "returns false if calling #<=> on self returns a positive Integer" do
    a.should_receive(:<=>).once.and_return(1)
    (a == b).should == false
  end

  it "returns false if calling #<=> on self returns a negative Integer" do
    a.should_receive(:<=>).once.and_return(-1)
    (a == b).should == false
  end

  context "when #<=> returns nil" do
    before :each do
      a.should_receive(:<=>).once.and_return(nil)
    end

    it "returns false" do
      (a == b).should be_false
    end
  end

  context "when #<=> returns nor nil neither an Integer" do
    before :each do
      a.should_receive(:<=>).once.and_return("abc")
    end

    ruby_version_is ""..."2.3" do
      it "returns false" do
        (a == b).should be_false
      end
    end

    ruby_version_is "2.3" do
      it "raises an ArgumentError" do
        lambda { (a == b) }.should raise_error(ArgumentError)
      end
    end
  end

  context "when #<=> raises an exception" do
    context "if it is a StandardError" do
      before :each do
        a.should_receive(:<=>).once.and_raise(StandardError)
      end

      ruby_version_is ""..."2.3" do
        # Behaviour confirmed by MRI test suite
        it "returns false" do
          (a == b).should be_false
        end
      end

      ruby_version_is "2.3" do
        it "lets it go through" do
          lambda { (a == b) }.should raise_error(StandardError)
        end
      end
    end

    context "if it is a subclass of StandardError" do
      # TypeError < StandardError
      before :each do
        a.should_receive(:<=>).once.and_raise(TypeError)
      end

      ruby_version_is ""..."2.3" do
        it "returns false" do
          (a == b).should be_false
        end
      end

      ruby_version_is "2.3" do
        it "lets it go through" do
          lambda { (a == b) }.should raise_error(TypeError)
        end
      end
    end

    it "lets it go through if it is not a StandardError" do
      a.should_receive(:<=>).once.and_raise(Exception)
      lambda { (a == b) }.should raise_error(Exception)
    end
  end

  context "when #<=> is not defined" do
    before :each do
      @a = ComparableSpecs::WithoutCompareDefined.new
      @b = ComparableSpecs::WithoutCompareDefined.new
    end

    it "returns true for identical objects" do
      @a.should == @a
    end

    it "returns false and does not recurse infinitely" do
      @a.should_not == @b
    end
  end

  context "when #<=> calls super" do
    before :each do
      @a = ComparableSpecs::CompareCallingSuper.new
      @b = ComparableSpecs::CompareCallingSuper.new
    end

    it "returns true for identical objects" do
      @a.should == @a
    end

    it "calls the defined #<=> only once for different objects" do
      @a.should_not == @b
      @a.calls.should == 1
    end
  end
end
