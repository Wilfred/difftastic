require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

require File.expand_path('../shared/wakeup', __FILE__)

describe "Thread#run" do
  it_behaves_like :thread_wakeup, :run
end

