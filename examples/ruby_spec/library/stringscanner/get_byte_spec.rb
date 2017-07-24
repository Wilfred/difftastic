require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/get_byte', __FILE__)
require 'strscan'

describe "StringScanner#get_byte" do
  it_behaves_like :strscan_get_byte, :get_byte
end
