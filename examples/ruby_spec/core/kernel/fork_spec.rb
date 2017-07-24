require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../../../shared/process/fork', __FILE__)

describe "Kernel#fork" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:fork)
  end

  it_behaves_like :process_fork, :fork, KernelSpecs::Method.new
end

describe "Kernel.fork" do
  it_behaves_like :process_fork, :fork, Kernel
end
