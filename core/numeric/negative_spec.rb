require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

ruby_version_is "2.3" do
  describe "Numeric#negative?" do
    describe "on positive numbers" do
      it "returns false" do
        1.negative?.should be_false
        0.1.negative?.should be_false
      end
    end

    describe "on zero" do
      it "returns false" do
        0.negative?.should be_false
        0.0.negative?.should be_false
      end
    end

    describe "on negative numbers" do
      it "returns true" do
        -1.negative?.should be_true
        -0.1.negative?.should be_true
      end
    end
  end

  describe "Numeric#negative?" do
    before(:each) do
      @obj = NumericSpecs::Subclass.new
    end

    it "returns true if self is less than 0" do
      @obj.should_receive(:<).with(0).and_return(true)
      @obj.negative?.should == true
    end

    it "returns false if self is greater than 0" do
      @obj.should_receive(:<).with(0).and_return(false)
      @obj.negative?.should == false
    end
  end
end
