require File.expand_path('../../spec_helper', __FILE__)

with_feature :readline do
  describe "Readline::HISTORY.pop" do
    it "returns nil when the history is empty" do
      Readline::HISTORY.pop.should be_nil
    end

    it "returns and removes the last item from the history" do
      Readline::HISTORY.push("1", "2", "3")
      Readline::HISTORY.size.should == 3

      Readline::HISTORY.pop.should == "3"
      Readline::HISTORY.size.should == 2

      Readline::HISTORY.pop.should == "2"
      Readline::HISTORY.size.should == 1

      Readline::HISTORY.pop.should == "1"
      Readline::HISTORY.size.should == 0
    end

    it "taints the returned strings" do
      Readline::HISTORY.push("1", "2", "3")
      Readline::HISTORY.pop.tainted?.should be_true
      Readline::HISTORY.pop.tainted?.should be_true
      Readline::HISTORY.pop.tainted?.should be_true
    end
  end
end
