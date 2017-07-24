require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/new', __FILE__)

describe "IO.open" do
  it_behaves_like :io_new, :open
end

describe "IO.open" do
  it_behaves_like :io_new_errors, :open
end

# These specs use a special mock helper to avoid mock
# methods from preventing IO#close from running and
# which would prevent the file referenced by @fd from
# being deleted on Windows.

describe "IO.open" do
  before :each do
    @name = tmp("io_open.txt")
    @fd = new_fd @name
    ScratchPad.clear
  end

  after :each do
    rm_r @name
  end

  it "calls #close after yielding to the block" do
    IO.open(@fd, "w") do |io|
      IOSpecs.io_mock(io, :close) do
        super()
        ScratchPad.record :called
      end
      io.closed?.should be_false
    end
    ScratchPad.recorded.should == :called
  end

  it "propagates an exception raised by #close that is not a StandardError" do
    lambda do
      IO.open(@fd, "w") do |io|
        IOSpecs.io_mock(io, :close) do
          super()
          ScratchPad.record :called
          raise Exception
        end
      end
    end.should raise_error(Exception)
    ScratchPad.recorded.should == :called
  end

  it "propagates an exception raised by #close that is a StandardError" do
    lambda do
      IO.open(@fd, "w") do |io|
        IOSpecs.io_mock(io, :close) do
          super()
          ScratchPad.record :called
          raise StandardError
        end
      end
    end.should raise_error(StandardError)
    ScratchPad.recorded.should == :called
  end

  it "does not propagate a IOError with 'closed stream' message raised by #close" do
    IO.open(@fd, "w") do |io|
      IOSpecs.io_mock(io, :close) do
        super()
        ScratchPad.record :called
        raise IOError, 'closed stream'
      end
    end
    ScratchPad.recorded.should == :called
  end

  it "does not set last error when a IOError with 'closed stream' raised by #close" do
    IO.open(@fd, "w") do |io|
      IOSpecs.io_mock(io, :close) do
        super()
        raise IOError, 'closed stream'
      end
    end
    $!.should == nil
  end
end
