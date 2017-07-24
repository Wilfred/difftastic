require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/rest_size.rb', __FILE__)
require 'strscan'

describe "StringScanner#rest_size" do
  it_behaves_like(:strscan_rest_size, :rest_size)
end
