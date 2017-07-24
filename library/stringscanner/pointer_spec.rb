require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/pos.rb', __FILE__)
require 'strscan'

describe "StringScanner#pointer" do
  it_behaves_like(:strscan_pos, :pointer)
end

describe "StringScanner#pointer=" do
  it_behaves_like(:strscan_pos_set, :pointer=)
end
