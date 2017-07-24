require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "ThreadGroup#add" do
  before :each do
    @chan1,@chan2 = Channel.new,Channel.new
    @thread = Thread.new { @chan1 << :go; @chan2.receive }
    @chan1.receive
  end

  after :each do
    @chan2 << :done
    @thread.join
  end

  it "adds the given thread to a group and returns self" do
    @thread.group.should_not == nil

    tg = ThreadGroup.new
    tg.add(@thread).should == tg
    @thread.group.should == tg
    tg.list.include?(@thread).should == true
  end

  it "removes itself from any other threadgroup" do
    tg1 = ThreadGroup.new
    tg2 = ThreadGroup.new

    tg1.add(@thread)
    @thread.group.should == tg1
    tg2.add(@thread)
    @thread.group.should == tg2
    tg2.list.include?(@thread).should == true
    tg1.list.include?(@thread).should == false
  end
end
