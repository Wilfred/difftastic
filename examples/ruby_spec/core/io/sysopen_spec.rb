require File.expand_path('../../../spec_helper', __FILE__)

describe "IO.sysopen" do
  before :each do
    @filename = tmp("rubinius-spec-io-sysopen-#{$$}.txt")
    @fd = nil
  end

  after :each do
    IO.for_fd(@fd).close if @fd
    rm_r @filename
  end

  it "returns the file descriptor for a given path" do
    @fd = IO.sysopen(@filename, "w")
    @fd.should be_kind_of(Fixnum)
    @fd.should_not equal(0)
  end

  # opening a directory is not supported on Windows
  platform_is_not :windows do
    it "works on directories" do
      @fd = IO.sysopen(tmp(""))    # /tmp
      @fd.should be_kind_of(Fixnum)
      @fd.should_not equal(0)
    end
  end

  it "calls #to_path to convert an object to a path" do
    path = mock('sysopen to_path')
    path.should_receive(:to_path).and_return(@filename)
    @fd = IO.sysopen(path, 'w')
  end

  it "accepts a mode as second argument" do
    lambda { @fd = IO.sysopen(@filename, "w") }.should_not raise_error
    @fd.should_not equal(0)
  end

  it "accepts permissions as third argument" do
    @fd = IO.sysopen(@filename, "w", 777)
    @fd.should_not equal(0)
  end

  it "accepts mode & permission that are nil" do
    touch @filename # create the file
    @fd = IO.sysopen(@filename, nil, nil)
    @fd.should_not equal(0)
  end
end
