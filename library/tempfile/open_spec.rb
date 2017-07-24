require File.expand_path('../../../spec_helper', __FILE__)
require 'tempfile'

describe "Tempfile#open" do
  before :each do
    @tempfile = Tempfile.new("specs")
    @tempfile.puts("Test!")
  end

  after :each do
    @tempfile.close!
  end

  it "reopens self" do
    @tempfile.close
    @tempfile.open
    @tempfile.closed?.should be_false
  end

  it "reopens self in read and write mode and does not truncate" do
    @tempfile.open
    @tempfile.puts("Another Test!")

    @tempfile.open
    @tempfile.readline.should == "Another Test!\n"
  end
end

describe "Tempfile.open" do
  after :each do
    @tempfile.close! if @tempfile
  end

  it "returns a new, open Tempfile instance" do
    @tempfile = Tempfile.open("specs")
    # Delegation messes up .should be_an_instance_of(Tempfile)
    @tempfile.instance_of?(Tempfile).should be_true
  end

  it "is passed an array [base, suffix] as first argument" do
    Tempfile.open(["specs", ".tt"]) { |tempfile| @tempfile = tempfile }
    @tempfile.path.should =~ /specs.*\.tt$/
  end
end

describe "Tempfile.open when passed a block" do
  before :each do
    ScratchPad.clear
  end

  after :each do
    # Tempfile.open with block does not unlink
    @tempfile.close! if @tempfile
  end

  it "yields a new, open Tempfile instance to the block" do
    Tempfile.open("specs") do |tempfile|
      @tempfile = tempfile
      ScratchPad.record :yielded

      # Delegation messes up .should be_an_instance_of(Tempfile)
      tempfile.instance_of?(Tempfile).should be_true
      tempfile.closed?.should be_false
    end

    ScratchPad.recorded.should == :yielded
  end

  it "returns the value of the block" do
    value = Tempfile.open("specs") do |tempfile|
      @tempfile = tempfile
      "return"
    end
    value.should == "return"
  end

  it "closes the yielded Tempfile after the block" do
    Tempfile.open("specs") { |tempfile| @tempfile = tempfile }
    @tempfile.closed?.should be_true
  end
end

