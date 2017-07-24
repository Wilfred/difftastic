require File.expand_path('../../../../spec_helper', __FILE__)
require 'thread'
require File.expand_path('../../shared/queue/clear', __FILE__)

describe "Thread::SizedQueue#clear" do
  it_behaves_like :queue_clear, :clear, -> { SizedQueue.new(10) }

  # TODO: test for atomicity of Queue#clear
end
