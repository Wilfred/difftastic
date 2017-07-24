require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/http_server', __FILE__)
require File.expand_path('../shared/started', __FILE__)

describe "Net::HTTP#active?" do
  it_behaves_like :net_http_started_p, :active?
end
