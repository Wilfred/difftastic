require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Exception#backtrace" do
  before :each do
    @backtrace = ExceptionSpecs::Backtrace.backtrace
  end

  it "returns nil if no backtrace was set" do
    Exception.new.backtrace.should be_nil
  end

  it "returns an Array" do
    @backtrace.should be_an_instance_of(Array)
  end

  it "sets each element to a String" do
    @backtrace.each {|l| l.should be_an_instance_of(String)}
  end

  it "includes the filename of the location where self raised in the first element" do
    @backtrace.first.should =~ /common\.rb/
  end

  it "includes the line number of the location where self raised in the first element" do
    @backtrace.first.should =~ /:7:in /
  end

  it "includes the name of the method from where self raised in the first element" do
    @backtrace.first.should =~ /in `backtrace'/
  end

  it "includes the filename of the location immediately prior to where self raised in the second element" do
    @backtrace[1].should =~ /backtrace_spec\.rb/
  end

  it "includes the line number of the location immediately prior to where self raised in the second element" do
    @backtrace[1].should =~ /:6(:in )?/
  end

  it "contains lines of the same format for each prior position in the stack" do
    @backtrace[2..-1].each do |line|
      # This regexp is deliberately imprecise to account for the need to abstract out
      # the paths of the included mspec files and the desire to avoid specifying in any
      # detail what the in `...' portion looks like.
      line.should =~ /^[^ ]+\:\d+(:in `[^`]+')?$/
    end
  end

  it "produces a backtrace for an exception captured using $!" do
    exception = begin
      raise
    rescue RuntimeError
      $!
    end

    exception.backtrace.first.should =~ /backtrace_spec/
  end

  it "returns an Array that can be updated" do
    begin
      raise
    rescue RuntimeError => e
      e.backtrace.unshift "backtrace first"
      e.backtrace[0].should == "backtrace first"
    end
  end
end
