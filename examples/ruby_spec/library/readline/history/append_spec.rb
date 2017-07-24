require File.expand_path('../../spec_helper', __FILE__)

with_feature :readline do
  describe "Readline::HISTORY.<<" do
    it "appends the given Object to the history" do
      Readline::HISTORY << "1"
      Readline::HISTORY.size.should == 1

      Readline::HISTORY << "2"
      Readline::HISTORY.size.should == 2

      Readline::HISTORY.pop.should == "2"
      Readline::HISTORY.pop.should == "1"
    end

    it "tries to convert the passed Object to a String using #to_str" do
      obj = mock("Converted to String")
      obj.should_receive(:to_str).and_return("converted")

      Readline::HISTORY << obj
      Readline::HISTORY.pop.should == "converted"
    end

    it "raises a TypeError when the passed Object can't be converted to a String" do
      lambda { Readline::HISTORY << mock("Object") }.should raise_error(TypeError)
    end
  end
end
