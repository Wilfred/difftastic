require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../../../shared/process/abort', __FILE__)

describe "Kernel#abort" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:abort)
  end

  it_behaves_like :process_abort, :abort, KernelSpecs::Method.new
end

describe "Kernel.abort" do
  it_behaves_like :process_abort, :abort, Kernel
end
