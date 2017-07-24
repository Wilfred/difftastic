require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/peek.rb', __FILE__)
require 'strscan'

describe "StringScanner#peek" do
  it_behaves_like(:strscan_peek, :peek)
end

