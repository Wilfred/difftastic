require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/process/abort', __FILE__)

describe "Process.abort" do
  it_behaves_like :process_abort, :abort, Process
end
