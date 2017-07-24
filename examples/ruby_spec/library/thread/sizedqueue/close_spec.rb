require File.expand_path('../../../../spec_helper', __FILE__)
require 'thread'
require File.expand_path('../../shared/queue/close', __FILE__)

ruby_version_is "2.3" do
  describe "SizedQueue#close" do
    it_behaves_like :queue_close, :close, -> { SizedQueue.new(10) }
  end
end
