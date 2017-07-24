require File.expand_path('../../spec_helper', __FILE__)

with_feature :readline do
  describe "Readline::HISTORY.to_s" do
    it "returns 'HISTORY'" do
      Readline::HISTORY.to_s.should == "HISTORY"
    end
  end
end
