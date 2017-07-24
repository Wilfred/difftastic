require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

# These specs only run a basic usage of #spawn.
# Process.spawn has more complete specs and they are not
# run here as it is redundant and takes too long for little gain.
describe "Kernel#spawn" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:spawn)
  end

  it "executes the given command" do
    lambda {
      Process.wait spawn("echo spawn")
    }.should output_to_fd("spawn\n")
  end
end

describe "Kernel.spawn" do
  it "executes the given command" do
    lambda {
      Process.wait Kernel.spawn("echo spawn")
    }.should output_to_fd("spawn\n")
  end
end
