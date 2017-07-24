require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#printf" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:printf)
  end
end

describe "Kernel.printf" do

  before :each do
    @stdout = $stdout
    @name = tmp("kernel_puts.txt")
    $stdout = new_io @name
  end

  after :each do
    $stdout.close
    $stdout = @stdout
    rm_r @name
  end

  it "writes to stdout when a string is the first argument" do
    $stdout.should_receive(:write).with("string")
    Kernel.printf("%s", "string")
  end

  it "calls write on the first argument when it is not a string" do
    object = mock('io')
    object.should_receive(:write).with("string")
    Kernel.printf(object, "%s", "string")
  end
end
