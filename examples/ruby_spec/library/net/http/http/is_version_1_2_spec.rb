require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../shared/version_1_2', __FILE__)

describe "Net::HTTP.is_version_1_2?" do
  it_behaves_like :net_http_version_1_2_p, :is_version_1_2?
end
