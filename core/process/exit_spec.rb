require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/process/exit', __FILE__)

describe "Process.exit" do
  it_behaves_like :process_exit, :exit, Process
end

describe "Process.exit!" do
  it_behaves_like :process_exit!, :exit!, Process
end
