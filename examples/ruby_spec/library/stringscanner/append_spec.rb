require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/concat.rb', __FILE__)
require 'strscan'

describe "StringScanner#<<" do
  it_behaves_like :strscan_concat, :<<
end

describe "StringScanner#<< when passed a Fixnum" do
  it_behaves_like :strscan_concat_fixnum, :<<
end
