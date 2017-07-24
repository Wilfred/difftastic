require 'erb'
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/url_encode', __FILE__)

describe "ERB::Util.url_encode" do
  it_behaves_like :erb_util_url_encode, :url_encode
end
