require File.expand_path('../../../spec_helper', __FILE__)
require "stringio"

describe "StringIO#gets when passed [separator]" do
  before :each do
    @io = StringIO.new("this>is>an>example")
  end

  it "returns the data read till the next occurence of the passed separator" do
    @io.gets(">").should == "this>"
    @io.gets(">").should == "is>"
    @io.gets(">").should == "an>"
    @io.gets(">").should == "example"
  end

  it "sets $_ to the read content" do
    @io.gets(">")
    $_.should == "this>"
    @io.gets(">")
    $_.should == "is>"
    @io.gets(">")
    $_.should == "an>"
    @io.gets(">")
    $_.should == "example"
    @io.gets(">")
    $_.should be_nil
  end

  it "accepts string as separator" do
    @io.gets("is>")
    $_.should == "this>"
    @io.gets("an>")
    $_.should == "is>an>"
    @io.gets("example")
    $_.should == "example"
    @io.gets("ple")
    $_.should be_nil
  end

  it "updates self's lineno by one" do
    @io.gets(">")
    @io.lineno.should eql(1)

    @io.gets(">")
    @io.lineno.should eql(2)

    @io.gets(">")
    @io.lineno.should eql(3)
  end

  it "returns the next paragraph when the passed separator is an empty String" do
    io = StringIO.new("this is\n\nan example")
    io.gets("").should == "this is\n\n"
    io.gets("").should == "an example"
  end

  it "returns the remaining content starting at the current position when passed nil" do
    io = StringIO.new("this is\n\nan example")
    io.pos = 5
    io.gets(nil).should == "is\n\nan example"
  end

  it "tries to convert the passed separator to a String using #to_str" do
    obj = mock('to_str')
    obj.should_receive(:to_str).and_return(">")
    @io.gets(obj).should == "this>"
  end
end

describe "StringIO#gets when passed no argument" do
  before :each do
    @io = StringIO.new("this is\nan example\nfor StringIO#gets")
  end

  it "returns the data read till the next occurence of $/ or till eof" do
    @io.gets.should == "this is\n"

    begin
      old_sep, $/ = $/, " "
      @io.gets.should == "an "
      @io.gets.should == "example\nfor "
      @io.gets.should == "StringIO#gets"
    ensure
      $/ = old_sep
    end
  end

  it "sets $_ to the read content" do
    @io.gets
    $_.should == "this is\n"
    @io.gets
    $_.should == "an example\n"
    @io.gets
    $_.should == "for StringIO#gets"
    @io.gets
    $_.should be_nil
  end

  it "updates self's position" do
    @io.gets
    @io.pos.should eql(8)

    @io.gets
    @io.pos.should eql(19)

    @io.gets
    @io.pos.should eql(36)
  end

  it "updates self's lineno" do
    @io.gets
    @io.lineno.should eql(1)

    @io.gets
    @io.lineno.should eql(2)

    @io.gets
    @io.lineno.should eql(3)
  end

  it "returns nil if self is at the end" do
    @io.pos = 36
    @io.gets.should be_nil
    @io.gets.should be_nil
  end
end

describe "StringIO#gets when passed [limit]" do
  before :each do
    @io = StringIO.new("this>is>an>example")
  end

  it "returns the data read until the limit is met" do
    @io.gets(4).should == "this"
    @io.gets(3).should == ">is"
    @io.gets(5).should == ">an>e"
    @io.gets(6).should == "xample"
  end

  it "sets $_ to the read content" do
    @io.gets(4)
    $_.should == "this"
    @io.gets(3)
    $_.should == ">is"
    @io.gets(5)
    $_.should == ">an>e"
    @io.gets(6)
    $_.should == "xample"
    @io.gets(3)
    $_.should be_nil
  end

  it "updates self's lineno by one" do
    @io.gets(3)
    @io.lineno.should eql(1)

    @io.gets(3)
    @io.lineno.should eql(2)

    @io.gets(3)
    @io.lineno.should eql(3)
  end

  it "tries to convert the passed limit to an Integer using #to_int" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(4)
    @io.gets(obj).should == "this"
  end

  it "returns a blank string when passed a limit of 0" do
    @io.gets(0).should == ""
  end
end

describe "StringIO#gets when passed [separator] and [limit]" do
  before :each do
    @io = StringIO.new("this>is>an>example")
  end

  it "returns the data read until the limit is consumed or the separator is met" do
    @io.gets('>', 8).should == "this>"
    @io.gets('>', 2).should == "is"
    @io.gets('>', 10).should == ">"
    @io.gets('>', 6).should == "an>"
    @io.gets('>', 5).should == "examp"
  end

  it "sets $_ to the read content" do
    @io.gets('>', 8)
    $_.should == "this>"
    @io.gets('>', 2)
    $_.should == "is"
    @io.gets('>', 10)
    $_.should == ">"
    @io.gets('>', 6)
    $_.should == "an>"
    @io.gets('>', 5)
    $_.should == "examp"
  end

  it "updates self's lineno by one" do
    @io.gets('>', 3)
    @io.lineno.should eql(1)

    @io.gets('>', 3)
    @io.lineno.should eql(2)

    @io.gets('>', 3)
    @io.lineno.should eql(3)
  end

  it "tries to convert the passed separator to a String using #to_str" do
    obj = mock('to_str')
    obj.should_receive(:to_str).and_return('>')
    @io.gets(obj, 5).should == "this>"
  end

  it "does not raise TypeError if passed separator is nil" do
    @io.gets(nil, 5).should == "this>"
  end

  it "tries to convert the passed limit to an Integer using #to_int" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(5)
    @io.gets('>', obj).should == "this>"
  end
end

describe "StringIO#gets when in write-only mode" do
  it "raises an IOError" do
    io = StringIO.new("xyz", "w")
    lambda { io.gets }.should raise_error(IOError)

    io = StringIO.new("xyz")
    io.close_read
    lambda { io.gets }.should raise_error(IOError)
  end
end
