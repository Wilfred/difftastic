require File.expand_path('../shared/name', __FILE__)

with_feature :encoding do
  describe "Encoding#name" do
    it_behaves_like(:encoding_name, :name)
  end
end
