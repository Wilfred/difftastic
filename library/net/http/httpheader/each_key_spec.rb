require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/each_name', __FILE__)

describe "Net::HTTPHeader#each_key" do
  it_behaves_like :net_httpheader_each_name, :each_key
end
