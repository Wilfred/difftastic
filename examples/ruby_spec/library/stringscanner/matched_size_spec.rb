require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/matched_size.rb', __FILE__)
require 'strscan'

describe "StringScanner#matched_size" do
  it_behaves_like(:strscan_matched_size, :matched_size)
end
