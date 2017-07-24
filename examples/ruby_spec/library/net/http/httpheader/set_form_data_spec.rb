require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/set_form_data', __FILE__)

describe "Net::HTTPHeader#set_form_data" do
  it_behaves_like :net_httpheader_set_form_data, :set_form_data
end
