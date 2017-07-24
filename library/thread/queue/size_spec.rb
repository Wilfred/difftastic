require File.expand_path('../../../../spec_helper', __FILE__)
require 'thread'
require File.expand_path('../../shared/queue/length', __FILE__)

describe "Thread::Queue#size" do
  it_behaves_like :queue_length, :size, -> { Queue.new }
end
