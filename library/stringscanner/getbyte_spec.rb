require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/get_byte', __FILE__)
require File.expand_path('../shared/extract_range', __FILE__)
require 'strscan'

describe "StringScanner#getbyte" do
  it_behaves_like :strscan_get_byte, :getbyte

  it "warns in verbose mode that the method is obsolete" do
    s = StringScanner.new("abc")
    lambda {
      $VERBOSE = true
      s.getbyte
    }.should complain(/getbyte.*obsolete.*get_byte/)

    lambda {
      $VERBOSE = false
      s.getbyte
    }.should_not complain
  end

  it_behaves_like :extract_range, :getbyte
end
