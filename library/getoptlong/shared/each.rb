describe :getoptlong_each, shared: true do
  before :each do
    @opts = GetoptLong.new(
      [ '--size', '-s',             GetoptLong::REQUIRED_ARGUMENT ],
      [ '--verbose', '-v',          GetoptLong::NO_ARGUMENT ],
      [ '--query', '-q',            GetoptLong::NO_ARGUMENT ],
      [ '--check', '--valid', '-c', GetoptLong::NO_ARGUMENT ]
    )
  end

  it "passes each argument/value pair to the block" do
    argv [ "--size", "10k", "-v", "-q", "a.txt", "b.txt" ] do
      pairs = []
      @opts.send(@method) { |arg, val| pairs << [ arg, val ] }
      pairs.should == [ [ "--size", "10k" ], [ "--verbose", "" ], [ "--query", ""] ]
    end
  end
end
