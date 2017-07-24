require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/unlink', __FILE__)

describe "File.delete" do
  it_behaves_like(:file_unlink, :delete)
end
