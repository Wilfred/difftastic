require File.expand_path('../../fixtures/classes', __FILE__)

describe :io_tty, shared: true do
  platform_is_not :windows do
    it "returns true if this stream is a terminal device (TTY)" do
      begin
        # check to enabled tty
        File.open('/dev/tty') {}
      rescue Errno::ENXIO
        # workaround for not configured environment like OS X
        1.should == 1
      else
        File.open('/dev/tty') { |f| f.send(@method) }.should == true
      end
    end
  end

  it "returns false if this stream is not a terminal device (TTY)" do
    File.open(__FILE__) { |f| f.send(@method) }.should == false
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.send @method }.should raise_error(IOError)
  end
end
