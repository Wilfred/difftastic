require File.expand_path('../../spec_helper', __FILE__)

with_feature :readline do
  describe "Readline::HISTORY.delete_at" do
    it "deletes and returns the history entry at the specified index" do
      Readline::HISTORY.push("1", "2", "3")

      Readline::HISTORY.delete_at(1).should == "2"
      Readline::HISTORY.size.should == 2

      Readline::HISTORY.delete_at(1).should == "3"
      Readline::HISTORY.size.should == 1

      Readline::HISTORY.delete_at(0).should == "1"
      Readline::HISTORY.size.should == 0


      Readline::HISTORY.push("1", "2", "3", "4")

      Readline::HISTORY.delete_at(-2).should == "3"
      Readline::HISTORY.size.should == 3

      Readline::HISTORY.delete_at(-2).should == "2"
      Readline::HISTORY.size.should == 2

      Readline::HISTORY.delete_at(0).should == "1"
      Readline::HISTORY.size.should == 1

      Readline::HISTORY.delete_at(0).should == "4"
      Readline::HISTORY.size.should == 0
    end

    it "raises an IndexError when the given index is greater than the history size" do
      lambda { Readline::HISTORY.delete_at(10) }.should raise_error(IndexError)
      lambda { Readline::HISTORY.delete_at(-10) }.should raise_error(IndexError)
    end

    it "taints the returned strings" do
      Readline::HISTORY.push("1", "2", "3")
      Readline::HISTORY.delete_at(0).tainted?.should be_true
      Readline::HISTORY.delete_at(0).tainted?.should be_true
      Readline::HISTORY.delete_at(0).tainted?.should be_true
    end
  end
end
