require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../../../shared/io/putc', __FILE__)

describe "Kernel#putc" do
  it "is a private instance method" do
    Kernel.should have_private_instance_method(:putc)
  end
end

describe "Kernel.putc" do
  before :each do
    @name = tmp("kernel_putc.txt")
    @io = new_io @name
    @io_object = @object
    @stdout, $stdout = $stdout, @io
  end

  after :each do
    $stdout = @stdout
  end

  it_behaves_like :io_putc, :putc_method, KernelSpecs
end

describe "Kernel#putc" do
  before :each do
    @name = tmp("kernel_putc.txt")
    @io = new_io @name
    @io_object = @object
    @stdout, $stdout = $stdout, @io
  end

  after :each do
    $stdout = @stdout
  end

  it_behaves_like :io_putc, :putc_function, KernelSpecs
end
