require File.expand_path('../../fixtures/classes', __FILE__)

describe :io_binwrite, shared: true do
  before :each do
    @filename = tmp("IO_binwrite_file") + $$.to_s
    File.open(@filename, "w") do |file|
      file << "012345678901234567890123456789"
    end
  end

  after :each do
    rm_r @filename
  end

  it "coerces the argument to a string using to_s" do
    (obj = mock('test')).should_receive(:to_s).and_return('a string')
    IO.send(@method, @filename, obj)
  end

  it "returns the number of bytes written" do
    IO.send(@method, @filename, "abcde").should == 5
  end

  it "creates a file if missing" do
    fn = @filename + "xxx"
    begin
      File.exist?(fn).should be_false
      IO.send(@method, fn, "test")
      File.exist?(fn).should be_true
    ensure
      rm_r fn
    end
  end

  it "creates file if missing even if offset given" do
    fn = @filename + "xxx"
    begin
      File.exist?(fn).should be_false
      IO.send(@method, fn, "test", 0)
      File.exist?(fn).should be_true
    ensure
      rm_r fn
    end
  end

  it "truncates the file and writes the given string" do
    IO.send(@method, @filename, "hello, world!")
    File.read(@filename).should == "hello, world!"
  end

  it "doesn't truncate the file and writes the given string if an offset is given" do
    IO.send(@method, @filename, "hello, world!", 0)
    File.read(@filename).should == "hello, world!34567890123456789"
    IO.send(@method, @filename, "hello, world!", 20)
    File.read(@filename).should == "hello, world!3456789hello, world!"
  end

  it "doesn't truncate and writes at the given offset after passing empty opts" do
    IO.send(@method, @filename, "hello world!", 1, {})
    File.read(@filename).should == "0hello world!34567890123456789"
  end

  it "accepts a :mode option" do
    IO.send(@method, @filename, "hello, world!", mode: 'a')
    File.read(@filename).should == "012345678901234567890123456789hello, world!"
    IO.send(@method, @filename, "foo", 2, mode: 'w')
    File.read(@filename).should == "\0\0foo"
  end

  it "raises an error if readonly mode is specified" do
    lambda { IO.send(@method, @filename, "abcde", mode: "r") }.should raise_error(IOError)
  end

  it "truncates if empty :opts provided and offset skipped" do
    IO.send(@method, @filename, "hello, world!", {})
    File.read(@filename).should == "hello, world!"
  end
end
