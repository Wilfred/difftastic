require File.expand_path('../../../../spec_helper', __FILE__)
require 'thread'
require File.expand_path('../../shared/queue/num_waiting', __FILE__)

describe "Thread::SizedQueue#num_waiting" do
  it_behaves_like :queue_num_waiting, :num_waiting, -> { SizedQueue.new(10) }

  it "reports the number of threads waiting to push" do
    q = SizedQueue.new(1)
    q.push(1)
    t = Thread.new { q.push(2) }
    sleep 0.05 until t.stop?
    q.num_waiting.should == 1

    q.pop
    t.join
  end
end
