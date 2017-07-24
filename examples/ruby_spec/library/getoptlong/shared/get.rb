describe :getoptlong_get, shared: true do
  before :each do
    @opts = GetoptLong.new(
      [ '--size', '-s',             GetoptLong::REQUIRED_ARGUMENT ],
      [ '--verbose', '-v',          GetoptLong::NO_ARGUMENT ],
      [ '--query', '-q',            GetoptLong::NO_ARGUMENT ],
      [ '--check', '--valid', '-c', GetoptLong::NO_ARGUMENT ]
    )
    @opts.quiet = true # silence using $deferr
  end

  it "returns the next option name and its argument as an Array" do
    argv [ "--size", "10k", "-v", "-q", "a.txt", "b.txt" ] do
      @opts.send(@method).should == [ "--size", "10k" ]
      @opts.send(@method).should == [ "--verbose", "" ]
      @opts.send(@method).should == [ "--query", ""]
      @opts.send(@method).should == nil
    end
  end

  it "shifts ARGV on each call" do
    argv [ "--size", "10k", "-v", "-q", "a.txt", "b.txt" ] do
      @opts.send(@method)
      ARGV.should == [ "-v", "-q", "a.txt", "b.txt" ]

      @opts.send(@method)
      ARGV.should == [ "-q", "a.txt", "b.txt" ]

      @opts.send(@method)
      ARGV.should == [ "a.txt", "b.txt" ]

      @opts.send(@method)
      ARGV.should == [ "a.txt", "b.txt" ]
    end
  end

  it "terminates processing when encountering '--'" do
    argv [ "--size", "10k", "--", "-v", "-q", "a.txt", "b.txt" ] do
      @opts.send(@method)
      ARGV.should == ["--", "-v", "-q", "a.txt", "b.txt"]

      @opts.send(@method)
      ARGV.should ==  ["-v", "-q", "a.txt", "b.txt"]

      @opts.send(@method)
      ARGV.should ==  ["-v", "-q", "a.txt", "b.txt"]
    end
  end

  it "raises a if an argument was required, but none given" do
    argv [ "--size" ] do
      lambda { @opts.send(@method) }.should raise_error(GetoptLong::MissingArgument)
    end
  end
end
