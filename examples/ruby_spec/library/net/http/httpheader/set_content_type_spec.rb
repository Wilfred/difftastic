require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/set_content_type', __FILE__)

describe "Net::HTTPHeader#set_content_type" do
  it_behaves_like :net_httpheader_set_content_type, :set_content_type
end
