require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/size', __FILE__)

describe "Net::HTTPHeader#length" do
  it_behaves_like :net_httpheader_size, :length
end
