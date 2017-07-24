require File.expand_path('../spec_helper', __FILE__)

platform_is_not :darwin do
  with_feature :readline do
    describe "Readline.vi_editing_mode" do
      it "returns nil" do
        Readline.vi_editing_mode.should be_nil
      end
    end
  end
end
