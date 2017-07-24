require File.expand_path('../../../../spec_helper', __FILE__)
require 'thread'
require File.expand_path('../../shared/queue/length', __FILE__)

describe "Thread::SizedQueue#size" do
  it_behaves_like :queue_length, :size, -> { SizedQueue.new(10) }
end
