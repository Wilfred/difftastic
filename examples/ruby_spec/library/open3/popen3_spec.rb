require File.expand_path('../../../spec_helper', __FILE__)
require 'open3'

describe "Open3.popen3" do
  it "returns in, out, err and a thread waiting the process" do
    stdin, out, err, waiter = Open3.popen3(ruby_cmd("print :foo"))
    begin
      stdin.should be_kind_of IO
      out.should be_kind_of IO
      err.should be_kind_of IO
      waiter.should be_kind_of Thread

      out.read.should == "foo"
    ensure
      stdin.close
      out.close
      err.close
      waiter.join
    end
  end

  it "executes a process with a pipe to read stdout" do
    Open3.popen3(ruby_cmd("print :foo")) do |stdin, out, err|
      out.read.should == "foo"
    end
  end

  it "executes a process with a pipe to read stderr" do
    Open3.popen3(ruby_cmd("STDERR.print :foo")) do |stdin, out, err|
      err.read.should == "foo"
    end
  end

  it "executes a process with a pipe to write stdin" do
    Open3.popen3(ruby_cmd("print STDIN.read")) do |stdin, out, err|
      stdin.write("foo")
      stdin.close
      out.read.should == "foo"
    end
  end

  it "needs to be reviewed for spec completeness"
end
