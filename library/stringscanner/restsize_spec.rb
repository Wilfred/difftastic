require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/rest_size.rb', __FILE__)
require 'strscan'

describe "StringScanner#restsize" do
  it_behaves_like(:strscan_rest_size, :restsize)

  it "warns in verbose mode that the method is obsolete" do
    s = StringScanner.new("abc")
    lambda {
      $VERBOSE = true
      s.restsize
    }.should complain(/restsize.*obsolete.*rest_size/)

    lambda {
      $VERBOSE = false
      s.restsize
    }.should_not complain
  end
end
