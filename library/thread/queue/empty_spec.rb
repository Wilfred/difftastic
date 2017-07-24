require File.expand_path('../../../../spec_helper', __FILE__)
require 'thread'
require File.expand_path('../../shared/queue/empty', __FILE__)

describe "Thread::Queue#empty?" do
  it_behaves_like :queue_empty?, :empty?, -> { Queue.new }
end
