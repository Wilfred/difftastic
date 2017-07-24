require File.expand_path('../../spec_helper', __FILE__)

with_feature :readline do
  require File.expand_path('../shared/size', __FILE__)

  describe "Readline::HISTORY.length" do
    it_behaves_like :readline_history_size, :length
  end
end
