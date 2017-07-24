require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#close" do
  before :each do
    @name = tmp('io_close.txt')
    @io = new_io @name
  end

  after :each do
    @io.close unless @io.closed?
    rm_r @name
  end

  it "closes the stream" do
    @io.close
    @io.closed?.should == true
  end

  it "returns nil" do
    @io.close.should == nil
  end

  it "raises an IOError reading from a closed IO" do
    @io.close
    lambda { @io.read }.should raise_error(IOError)
  end

  it "raises an IOError writing to a closed IO" do
    @io.close
    lambda { @io.write "data" }.should raise_error(IOError)
  end

  ruby_version_is ''...'2.3' do
    it "raises an IOError if closed" do
      @io.close
      lambda { @io.close }.should raise_error(IOError)
    end
  end

  ruby_version_is "2.3" do
    it "does nothing if already closed" do
      @io.close

      @io.close.should be_nil
    end
  end
end

describe "IO#close on an IO.popen stream" do

  it "clears #pid" do
    io = IO.popen ruby_cmd('r = loop{puts "y"; 0} rescue 1; exit r'), 'r'

    io.pid.should_not == 0

    io.close

    lambda { io.pid }.should raise_error(IOError)
  end

  it "sets $?" do
    io = IO.popen ruby_cmd('exit 0'), 'r'
    io.close

    $?.exitstatus.should == 0

    io = IO.popen ruby_cmd('exit 1'), 'r'
    io.close

    $?.exitstatus.should == 1
  end

  it "waits for the child to exit" do
    io = IO.popen ruby_cmd('r = loop{puts "y"; 0} rescue 1; exit r'), 'r'
    io.close

    $?.exitstatus.should_not == 0
  end

end

