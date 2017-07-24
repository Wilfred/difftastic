require File.expand_path('../../../spec_helper', __FILE__)
require 'getoptlong'

describe "GetoptLong#error_message" do
  it "returns nil if no error occurred" do
    opts = GetoptLong.new
    opts.error_message.should == nil
  end

  it "returns the error message of the last error that occurred" do
    argv [] do
      opts = GetoptLong.new
      opts.quiet = true
      opts.get
      -> {
        opts.ordering = GetoptLong::PERMUTE
      }.should raise_error(ArgumentError) { |e|
        e.message.should == "argument error"
        opts.error_message.should == "argument error"
      }
    end
  end
end
