require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/exit', __FILE__)

describe "Thread#exit!" do
  it "needs to be reviewed for spec completeness"
end

describe "Thread.exit" do
  it "causes the current thread to exit" do
    thread = Thread.new { Thread.exit; sleep }
    thread.join
    thread.status.should be_false
  end
end
