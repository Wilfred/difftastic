require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../shared/body', __FILE__)

describe "Net::HTTPResponse#body" do
  it_behaves_like :net_httpresponse_body, :body
end
