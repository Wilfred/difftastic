require File.expand_path('../../../../spec_helper', __FILE__)
require 'thread'
require File.expand_path('../../shared/queue/closed', __FILE__)

ruby_version_is "2.3" do
  describe "SizedQueue#closed?" do
    it_behaves_like :queue_closed?, :closed?, -> { SizedQueue.new(10) }
  end
end
