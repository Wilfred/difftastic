require File.expand_path('../../../spec_helper', __FILE__)
require 'cgi'

require File.expand_path('../shared/http_header', __FILE__)

describe "CGI#http_header" do
  it_behaves_like(:cgi_http_header, :http_header)
end
