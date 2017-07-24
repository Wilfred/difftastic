require File.expand_path('../../../spec_helper', __FILE__)
require 'getoptlong'

describe "GetoptLong#terminate" do
  before :each do
    @opts = GetoptLong.new(
      [ '--size', '-s',             GetoptLong::REQUIRED_ARGUMENT ],
      [ '--verbose', '-v',          GetoptLong::NO_ARGUMENT ],
      [ '--query', '-q',            GetoptLong::NO_ARGUMENT ],
      [ '--check', '--valid', '-c', GetoptLong::NO_ARGUMENT ]
    )
  end

  it "terminates option proccessing" do
    argv [ "--size", "10k", "-v", "-q", "a.txt", "b.txt" ] do
      @opts.get.should == [ "--size", "10k" ]
      @opts.terminate
      @opts.get.should == nil
    end
  end

  it "returns self when option processsing is terminated" do
    @opts.terminate.should == @opts
  end

  it "returns nil when option processing was already terminated" do
    @opts.terminate
    @opts.terminate.should == nil
  end
end
