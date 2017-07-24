require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/http_server', __FILE__)
require File.expand_path('../shared/request_get', __FILE__)

describe "Net::HTTP#request_get" do
  it_behaves_like :net_ftp_request_get, :get2
end
