require File.expand_path('../../spec_helper', __FILE__)

with_feature :readline do
  describe "Readline::HISTORY.[]=" do
    before :each do
      Readline::HISTORY.push("1", "2", "3")
    end

    after :each do
      Readline::HISTORY.pop
      Readline::HISTORY.pop
      Readline::HISTORY.pop
    end

    it "returns the new value for the passed index" do
      (Readline::HISTORY[1] = "second test").should == "second test"
    end

    it "raises an IndexError when there is no item at the passed positive index" do
      lambda { Readline::HISTORY[10] = "test" }.should raise_error(IndexError)
    end

    it "sets the item at the given index" do
      Readline::HISTORY[0] = "test"
      Readline::HISTORY[0].should == "test"

      Readline::HISTORY[1] = "second test"
      Readline::HISTORY[1].should == "second test"
    end

    it "raises an IndexError when there is no item at the passed negative index" do
      lambda { Readline::HISTORY[10] = "test" }.should raise_error(IndexError)
    end
  end
end
