require File.expand_path('../spec_helper', __FILE__)

with_feature :readline do
  describe "Readline.completer_quote_characters" do
    it "returns nil" do
      Readline.completer_quote_characters.should be_nil
    end
  end

  describe "Readline.completer_quote_characters=" do
    it "returns the passed string" do
      Readline.completer_quote_characters = "test"
      Readline.completer_quote_characters.should == "test"
    end
  end
end
