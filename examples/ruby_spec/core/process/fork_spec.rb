require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/process/fork', __FILE__)

describe "Process.fork" do
  it_behaves_like :process_fork, :fork, Process
end
