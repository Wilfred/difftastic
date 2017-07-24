require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/exit', __FILE__)

describe "Thread#kill" do
  it_behaves_like :thread_exit, :kill
end

describe "Thread#kill!" do
  it "needs to be reviewed for spec completeness"
end

describe "Thread.kill" do
  it "causes the given thread to exit" do
    thread = Thread.new { sleep }
    Thread.pass while thread.status and thread.status != "sleep"
    Thread.kill(thread).should == thread
    thread.join
    thread.status.should be_false
  end
end
