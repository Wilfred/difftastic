require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/eos.rb', __FILE__)
require 'strscan'

describe "StringScanner#empty?" do
  it_behaves_like(:strscan_eos, :empty?)

  it "warns in verbose mode that the method is obsolete" do
    s = StringScanner.new("abc")
    lambda {
      $VERBOSE = true
      s.empty?
    }.should complain(/empty?.*obsolete.*eos?/)

    lambda {
      $VERBOSE = false
      s.empty?
    }.should_not complain
  end
end
