require File.expand_path('../../../../spec_helper', __FILE__)
require 'thread'
require File.expand_path('../../shared/queue/deque', __FILE__)

describe "Thread::SizedQueue#shift" do
  it_behaves_like :queue_deq, :shift, -> { SizedQueue.new(10) }
end
