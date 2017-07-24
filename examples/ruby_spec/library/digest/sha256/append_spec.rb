require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)
require File.expand_path('../shared/update', __FILE__)

describe "Digest::SHA256#<<" do
 it_behaves_like(:sha256_update, :<<)
end
