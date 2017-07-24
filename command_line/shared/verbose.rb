describe :command_line_verbose, shared: true do
  before :each do
    @script = fixture __FILE__, "verbose.rb"
  end

  it "sets $VERBOSE to true" do
    ruby_exe(@script, options: @method).chomp.split.last.should == "true"
  end
end
