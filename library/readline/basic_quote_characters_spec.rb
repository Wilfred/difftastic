require File.expand_path('../spec_helper', __FILE__)

platform_is_not :darwin do
  with_feature :readline do
    describe "Readline.basic_quote_characters" do
      it "returns not nil" do
        Readline.basic_quote_characters.should_not be_nil
      end
    end

    describe "Readline.basic_quote_characters=" do
      it "returns the passed string" do
        Readline.basic_quote_characters = "test"
        Readline.basic_quote_characters.should == "test"
      end
    end
  end
end
