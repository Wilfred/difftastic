describe :process_abort, shared: true do
  before :each do
    @stderr, $stderr = $stderr, IOStub.new
  end

  after :each do
    $stderr = @stderr
  end

  it "raises a SystemExit exception" do
    lambda { @object.abort }.should raise_error(SystemExit)
  end

  it "sets the exception message to the given message" do
    lambda { @object.abort "message" }.should raise_error { |e| e.message.should == "message" }
  end

  it "sets the exception status code of 1" do
    lambda { @object.abort }.should raise_error { |e| e.status.should == 1 }
  end

  it "prints the specified message to STDERR" do
    lambda { @object.abort "a message" }.should raise_error(SystemExit)
    $stderr.should =~ /a message/
  end

  it "coerces the argument with #to_str" do
    str = mock('to_str')
    str.should_receive(:to_str).any_number_of_times.and_return("message")
    lambda { @object.abort str }.should raise_error(SystemExit, "message")
  end

  it "raises TypeError when given a non-String object" do
    lambda { @object.abort 123 }.should raise_error(TypeError)
  end
end
