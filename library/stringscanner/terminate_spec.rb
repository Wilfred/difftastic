require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/terminate.rb', __FILE__)
require 'strscan'

describe "StringScanner#terminate" do
    it_behaves_like(:strscan_terminate, :terminate)
end
