require File.expand_path('../../spec_helper', __FILE__)

describe "The -d command line option" do
  before :each do
    @script = fixture __FILE__, "debug.rb"
  end

  it "sets $DEBUG to true" do
    ruby_exe(@script, options: "-d",
                      args: "0 2> #{File::NULL}").chomp.should == "$DEBUG true"
  end

  it "sets $VERBOSE to true" do
    ruby_exe(@script, options: "-d",
                      args: "1 2> #{File::NULL}").chomp.should == "$VERBOSE true"
  end

  it "sets $-d to true" do
    ruby_exe(@script, options: "-d",
                      args: "2 2> #{File::NULL}").chomp.should == "$-d true"
  end
end
