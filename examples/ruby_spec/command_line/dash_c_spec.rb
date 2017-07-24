require File.expand_path('../../spec_helper', __FILE__)

describe "The -c command line option" do
  it "checks syntax in given file" do
    ruby_exe(nil, args: "-c #{__FILE__}").chomp.should == "Syntax OK"
  end

  it "checks syntax in -e strings" do
    ruby_exe(nil, args: "-c -e 'puts 1' -e 'hello world'").chomp.should == "Syntax OK"
  end

  #Also needs spec for reading from STDIN
end
