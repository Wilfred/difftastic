require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#select" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:select)
  end
end

describe "Kernel.select" do
  it "needs to be reviewed for spec completeness"

  it 'does not block when timeout is 0' do
    IO.pipe do |read, write|
      IO.select([read], [], [], 0).should == nil
      write.write 'data'
      IO.select([read], [], [], 0).should == [[read], [], []]
    end
  end
end
