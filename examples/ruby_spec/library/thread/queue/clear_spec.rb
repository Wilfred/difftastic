require File.expand_path('../../../../spec_helper', __FILE__)
require 'thread'
require File.expand_path('../../shared/queue/clear', __FILE__)

describe "Thread::Queue#clear" do
  it_behaves_like :queue_clear, :clear, -> { Queue.new }

  # TODO: test for atomicity of Queue#clear
end
