require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/bol.rb', __FILE__)
require 'strscan'

describe "StringScanner#beginning_of_line?" do
  it_behaves_like(:strscan_bol, :beginning_of_line?)
end
