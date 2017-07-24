require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/pos.rb', __FILE__)
require 'strscan'

describe "StringScanner#pos" do
  it_behaves_like(:strscan_pos, :pos)
end

describe "StringScanner#pos=" do
  it_behaves_like(:strscan_pos_set, :pos=)
end
