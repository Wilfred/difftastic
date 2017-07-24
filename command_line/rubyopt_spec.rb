require File.expand_path('../../spec_helper', __FILE__)

describe "Processing RUBYOPT" do
  before (:each) do
    @rubyopt, ENV["RUBYOPT"] = ENV["RUBYOPT"], nil
  end

  after (:each) do
    ENV["RUBYOPT"] = @rubyopt
  end

  it "adds the -I path to $LOAD_PATH" do
    ENV["RUBYOPT"] = "-Ioptrubyspecincl"
    result = ruby_exe("puts $LOAD_PATH.grep(/byspecin/)", escape: true)
    result.chomp[-15..-1].should == "optrubyspecincl"
  end

  it "sets $DEBUG to true for '-d'" do
    ENV["RUBYOPT"] = '-d'
    command = %[puts "value of $DEBUG is \#{$DEBUG}"]
    result = ruby_exe(command, escape: true, args: "2>&1")
    result.should =~ /value of \$DEBUG is true/
  end

  it "prints the version number for '-v'" do
    ENV["RUBYOPT"] = '-v'
    ruby_exe("")[/\A.*/].should == RUBY_DESCRIPTION
  end

  it "sets $VERBOSE to true for '-w'" do
    ENV["RUBYOPT"] = '-w'
    ruby_exe("p $VERBOSE", escape: true).chomp.should == "true"
  end

  it "sets $VERBOSE to true for '-W'" do
    ENV["RUBYOPT"] = '-W'
    ruby_exe("p $VERBOSE", escape: true).chomp.should == "true"
  end

  it "sets $VERBOSE to nil for '-W0'" do
    ENV["RUBYOPT"] = '-W0'
    ruby_exe("p $VERBOSE", escape: true).chomp.should == "nil"
  end

  it "sets $VERBOSE to false for '-W1'" do
    ENV["RUBYOPT"] = '-W1'
    ruby_exe("p $VERBOSE", escape: true).chomp.should == "false"
  end

  it "sets $VERBOSE to true for '-W2'" do
    ENV["RUBYOPT"] = '-W2'
    ruby_exe("p $VERBOSE", escape: true).chomp.should == "true"
  end

  it "requires the file for '-r'" do
    f = fixture __FILE__, "rubyopt"
    ENV["RUBYOPT"] = "-r#{f}"
    ruby_exe("0", args: '2>&1').should =~ /^rubyopt.rb required/
  end

  it "raises a RuntimeError for '-a'" do
    ENV["RUBYOPT"] = '-a'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-p'" do
    ENV["RUBYOPT"] = '-p'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-n'" do
    ENV["RUBYOPT"] = '-n'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-y'" do
    ENV["RUBYOPT"] = '-y'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-c'" do
    ENV["RUBYOPT"] = '-c'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-s'" do
    ENV["RUBYOPT"] = '-s'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-h'" do
    ENV["RUBYOPT"] = '-h'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '--help'" do
    ENV["RUBYOPT"] = '--help'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-l'" do
    ENV["RUBYOPT"] = '-l'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-S'" do
    ENV["RUBYOPT"] = '-S irb'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-e'" do
    ENV["RUBYOPT"] = '-e0'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-i'" do
    ENV["RUBYOPT"] = '-i.bak'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-x'" do
    ENV["RUBYOPT"] = '-x'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-C'" do
    ENV["RUBYOPT"] = '-C'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-X'" do
    ENV["RUBYOPT"] = '-X.'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-F'" do
    ENV["RUBYOPT"] = '-F'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '-0'" do
    ENV["RUBYOPT"] = '-0'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '--copyright'" do
    ENV["RUBYOPT"] = '--copyright'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '--version'" do
    ENV["RUBYOPT"] = '--version'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end

  it "raises a RuntimeError for '--yydebug'" do
    ENV["RUBYOPT"] = '--yydebug'
    ruby_exe("", args: '2>&1').should =~ /RuntimeError/
  end
end
