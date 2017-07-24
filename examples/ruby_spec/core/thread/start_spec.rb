require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/start', __FILE__)

describe "Thread.start" do
  describe "Thread.start" do
    it_behaves_like :thread_start, :start
  end
end
