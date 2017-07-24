require File.expand_path('../../../spec_helper', __FILE__)
require 'getoptlong'

describe "GetoptLong#ordering=" do
  it "raises an ArgumentError if called after processing has started" do
    argv [ "--size", "10k", "--verbose" ] do
      opts = GetoptLong.new([ '--size', GetoptLong::REQUIRED_ARGUMENT ],
        [ '--verbose', GetoptLong::NO_ARGUMENT ])
      opts.quiet = true
      opts.get

      lambda {
        opts.ordering = GetoptLong::PERMUTE
      }.should raise_error(ArgumentError)
    end
  end

  it "raises an ArgumentError if given an invalid value" do
    opts = GetoptLong.new

    lambda {
      opts.ordering = 12345
    }.should raise_error(ArgumentError)
  end

  it "does not allow changing ordering to PERMUTE if ENV['POSIXLY_CORRECT'] is set" do
    begin
      old_env_value = ENV['POSIXLY_CORRECT']
      ENV['POSIXLY_CORRECT'] = ""

      opts = GetoptLong.new
      opts.ordering = GetoptLong::PERMUTE
      opts.ordering.should == GetoptLong::REQUIRE_ORDER
    ensure
      ENV['POSIXLY_CORRECT'] = old_env_value
    end
  end
end
