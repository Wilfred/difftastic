require File.expand_path('../../../spec_helper', __FILE__)

describe "Thread#thread_variable_get" do
  before :each do
    @t = Thread.new { }
  end

  after :each do
    @t.join
  end

  it "returns nil if the variable is not set" do
    @t.thread_variable_get(:a).should be_nil
  end

  it "returns the value previously set by #[]=" do
    @t.thread_variable_set :a, 49
    @t.thread_variable_get(:a).should == 49
  end

  it "returns a value private to self" do
    @t.thread_variable_set :thread_variable_get_spec, 82
    Thread.current.thread_variable_get(:thread_variable_get_spec).should be_nil
  end
end
