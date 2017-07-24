require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#puts" do
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

  it "is a private method" do
    Kernel.should have_private_instance_method(:puts)
  end

  it "delegates to $stdout.puts" do
    $stdout.should_receive(:puts).with(:arg)
    puts :arg
  end
end

describe "Kernel.puts" do
  it "needs to be reviewed for spec completeness"
end
