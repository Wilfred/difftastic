require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/set_range', __FILE__)

describe "Net::HTTPHeader#set_range" do
  it_behaves_like :net_httpheader_set_range, :set_range
end
