require File.expand_path('../../../spec_helper', __FILE__)

describe "IOError" do
  it "is a superclass of EOFError" do
    IOError.should be_ancestor_of(EOFError)
  end
end

describe "IO::EAGAINWaitReadable" do
  it "combines Errno::EAGAIN and IO::WaitReadable" do
    IO::EAGAINWaitReadable.superclass.should == Errno::EAGAIN
    IO::EAGAINWaitReadable.ancestors.should include IO::WaitReadable
  end

  it "is the same as IO::EWOULDBLOCKWaitReadable if Errno::EAGAIN is the same as Errno::EWOULDBLOCK" do
    if Errno::EAGAIN.equal? Errno::EWOULDBLOCK
      IO::EAGAINWaitReadable.should equal IO::EWOULDBLOCKWaitReadable
    else
      IO::EAGAINWaitReadable.should_not equal IO::EWOULDBLOCKWaitReadable
    end
  end
end

describe "IO::EWOULDBLOCKWaitReadable" do
  it "combines Errno::EWOULDBLOCK and IO::WaitReadable" do
    IO::EWOULDBLOCKWaitReadable.superclass.should == Errno::EWOULDBLOCK
    IO::EAGAINWaitReadable.ancestors.should include IO::WaitReadable
  end
end

describe "IO::EAGAINWaitWritable" do
  it "combines Errno::EAGAIN and IO::WaitWritable" do
    IO::EAGAINWaitWritable.superclass.should == Errno::EAGAIN
    IO::EAGAINWaitWritable.ancestors.should include IO::WaitWritable
  end

  it "is the same as IO::EWOULDBLOCKWaitWritable if Errno::EAGAIN is the same as Errno::EWOULDBLOCK" do
    if Errno::EAGAIN.equal? Errno::EWOULDBLOCK
      IO::EAGAINWaitWritable.should equal IO::EWOULDBLOCKWaitWritable
    else
      IO::EAGAINWaitWritable.should_not equal IO::EWOULDBLOCKWaitWritable
    end
  end
end

describe "IO::EWOULDBLOCKWaitWritable" do
  it "combines Errno::EWOULDBLOCK and IO::WaitWritable" do
    IO::EWOULDBLOCKWaitWritable.superclass.should == Errno::EWOULDBLOCK
    IO::EAGAINWaitWritable.ancestors.should include IO::WaitWritable
  end
end
