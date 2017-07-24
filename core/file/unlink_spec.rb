require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/unlink', __FILE__)

describe "File.unlink" do
  it_behaves_like(:file_unlink, :unlink)
end
