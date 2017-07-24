require File.expand_path('../../spec_helper', __FILE__)

describe "The -I command line option" do
  before :each do
    @script = fixture __FILE__, "loadpath.rb"
  end

  it "adds the path to the load path ($:)" do
    ruby_exe(@script, options: "-I fixtures").should include("fixtures")
  end
end
