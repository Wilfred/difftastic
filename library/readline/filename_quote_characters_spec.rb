require File.expand_path('../spec_helper', __FILE__)

platform_is_not :darwin do
  with_feature :readline do
    describe "Readline.filename_quote_characters" do
      it "returns nil" do
        Readline.filename_quote_characters.should be_nil
      end
    end

    describe "Readline.filename_quote_characters=" do
      it "returns the passed string" do
        Readline.filename_quote_characters = "test"
        Readline.filename_quote_characters.should == "test"
      end
    end
  end
end
