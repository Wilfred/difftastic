require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../../../shared/process/exit', __FILE__)

describe "Kernel#exit" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:exit)
  end

  it_behaves_like :process_exit, :exit, KernelSpecs::Method.new
end

describe "Kernel#exit!" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:exit!)
  end

  it_behaves_like :process_exit!, :exit!, KernelSpecs::Method.new
end

describe "Kernel.exit" do
  it_behaves_like :process_exit, :exit, Kernel
end

describe "Kernel.exit!" do
  it_behaves_like :process_exit!, :exit!, Kernel
end
