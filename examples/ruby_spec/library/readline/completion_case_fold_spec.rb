require File.expand_path('../spec_helper', __FILE__)

with_feature :readline do
  describe "Readline.completion_case_fold" do
    it "returns nil" do
      Readline.completion_case_fold.should be_nil
    end
  end

  describe "Readline.completion_case_fold=" do
    it "returns the passed boolean" do
      Readline.completion_case_fold = true
      Readline.completion_case_fold.should == true
      Readline.completion_case_fold = false
      Readline.completion_case_fold.should == false
    end
  end
end
