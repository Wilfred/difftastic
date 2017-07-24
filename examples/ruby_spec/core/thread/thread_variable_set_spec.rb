require File.expand_path('../../../spec_helper', __FILE__)

describe "Thread#thread_variable_set" do
  before :each do
    @t = Thread.new { }
  end

  after :each do
    @t.join
  end

  it "returns the value set" do
    (@t.thread_variable_set :a, 2).should == 2
  end

  it "sets a value that will be returned by #thread_variable_get" do
    @t.thread_variable_set :a, 49
    @t.thread_variable_get(:a).should == 49
  end

  it "sets a value private to self" do
    @t.thread_variable_set :thread_variable_get_spec, 82
    @t.thread_variable_get(:thread_variable_get_spec).should == 82
    Thread.current.thread_variable_get(:thread_variable_get_spec).should be_nil
  end
end
