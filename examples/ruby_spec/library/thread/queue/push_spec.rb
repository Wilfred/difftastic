require File.expand_path('../../../../spec_helper', __FILE__)
require 'thread'
require File.expand_path('../../shared/queue/enque', __FILE__)

describe "Thread::Queue#push" do
  it_behaves_like :queue_enq, :push, -> { Queue.new }
end
