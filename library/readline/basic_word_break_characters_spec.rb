require File.expand_path('../spec_helper', __FILE__)

with_feature :readline do
  describe "Readline.basic_word_break_characters" do
    it "returns not nil" do
      Readline.basic_word_break_characters.should_not be_nil
    end
  end

  describe "Readline.basic_word_break_characters=" do
    it "returns the passed string" do
      Readline.basic_word_break_characters = "test"
      Readline.basic_word_break_characters.should == "test"
    end
  end
end
