require File.expand_path('../../../spec_helper', __FILE__)

describe "Module#singleton_class?" do
  it "returns true for singleton classes" do
    xs = self.singleton_class
    xs.singleton_class?.should == true
  end

  it "returns false for other classes" do
    c = Class.new
    c.singleton_class?.should == false
  end

  describe "with singleton values" do
    it "returns false for nil's singleton class" do
      NilClass.singleton_class?.should == false
    end

    it "returns false for true's singleton class" do
      TrueClass.singleton_class?.should == false
    end

    it "returns false for false's singleton class" do
      FalseClass.singleton_class?.should == false
    end
  end
end
