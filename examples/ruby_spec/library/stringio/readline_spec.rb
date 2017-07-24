require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)


describe "StringIO#readline when passed [separator]" do
  before :each do
    @io = StringIO.new("this>is>an>example")
  end

  it "returns the data read till the next occurence of the passed separator" do
    @io.readline(">").should == "this>"
    @io.readline(">").should == "is>"
    @io.readline(">").should == "an>"
    @io.readline(">").should == "example"
  end

  it "sets $_ to the read content" do
    @io.readline(">")
    $_.should == "this>"
    @io.readline(">")
    $_.should == "is>"
    @io.readline(">")
    $_.should == "an>"
    @io.readline(">")
    $_.should == "example"
  end

  it "updates self's lineno by one" do
    @io.readline(">")
    @io.lineno.should eql(1)

    @io.readline(">")
    @io.lineno.should eql(2)

    @io.readline(">")
    @io.lineno.should eql(3)
  end

  it "returns the next paragraph when the passed separator is an empty String" do
    io = StringIO.new("this is\n\nan example")
    io.readline("").should == "this is\n\n"
    io.readline("").should == "an example"
  end

  it "returns the remaining content starting at the current position when passed nil" do
    io = StringIO.new("this is\n\nan example")
    io.pos = 5
    io.readline(nil).should == "is\n\nan example"
  end

  it "tries to convert the passed separator to a String using #to_str" do
    obj = mock('to_str')
    obj.should_receive(:to_str).and_return(">")
    @io.readline(obj).should == "this>"
  end
end

describe "StringIO#readline when passed no argument" do
  before :each do
    @io = StringIO.new("this is\nan example\nfor StringIO#readline")
  end

  it "returns the data read till the next occurence of $/ or till eof" do
    @io.readline.should == "this is\n"

    begin
      old_sep, $/ = $/, " "
      @io.readline.should == "an "
      @io.readline.should == "example\nfor "
      @io.readline.should == "StringIO#readline"
    ensure
      $/ = old_sep
    end
  end

  it "sets $_ to the read content" do
    @io.readline
    $_.should == "this is\n"
    @io.readline
    $_.should == "an example\n"
    @io.readline
    $_.should == "for StringIO#readline"
  end

  it "updates self's position" do
    @io.readline
    @io.pos.should eql(8)

    @io.readline
    @io.pos.should eql(19)

    @io.readline
    @io.pos.should eql(40)
  end

  it "updates self's lineno" do
    @io.readline
    @io.lineno.should eql(1)

    @io.readline
    @io.lineno.should eql(2)

    @io.readline
    @io.lineno.should eql(3)
  end

  it "raises an IOError if self is at the end" do
    @io.pos = 40
    lambda { @io.readline }.should raise_error(IOError)
  end
end

describe "StringIO#readline when in write-only mode" do
  it "raises an IOError" do
    io = StringIO.new("xyz", "w")
    lambda { io.readline }.should raise_error(IOError)

    io = StringIO.new("xyz")
    io.close_read
    lambda { io.readline }.should raise_error(IOError)
  end
end
