require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../shared/has_key', __FILE__)

describe "CGI::QueryExtension#key?" do
  it_behaves_like :cgi_query_extension_has_key_p, :key?
end
