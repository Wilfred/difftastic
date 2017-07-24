require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "ThreadGroup#enclose" do
  before :each do
    @chan1,@chan2 = Channel.new,Channel.new
    @thread = Thread.new { @chan1 << :go; @chan2.receive }
    @chan1.receive
  end

  after :each do
    @chan2 << :done
    @thread.join
  end

  it "raises a ThreadError if attempting to move a Thread from an enclosed ThreadGroup" do
    thread_group = ThreadGroup.new
    default_group = @thread.group
    thread_group.add(@thread)
    thread_group.enclose
    lambda do
      default_group.add(@thread)
    end.should raise_error(ThreadError)
  end
end
