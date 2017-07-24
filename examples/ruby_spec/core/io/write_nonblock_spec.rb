require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/write', __FILE__)

# See https://bugs.ruby-lang.org/issues/5954#note-5
platform_is_not :windows do
  describe "IO#write_nonblock on a file" do
    before :each do
      @filename = tmp("IO_syswrite_file") + $$.to_s
      File.open(@filename, "w") do |file|
        file.write_nonblock("012345678901234567890123456789")
      end
      @file = File.open(@filename, "r+")
      @readonly_file = File.open(@filename)
    end

    after :each do
      @file.close if @file
      @readonly_file.close if @readonly_file
      rm_r @filename
    end

    it "writes all of the string's bytes but does not buffer them" do
      written = @file.write_nonblock("abcde")
      written.should == 5
      File.open(@filename) do |file|
        file.sysread(10).should == "abcde56789"
        file.seek(0)
        @file.fsync
        file.sysread(10).should == "abcde56789"
      end
    end

    it "checks if the file is writable if writing zero bytes" do
      lambda { @readonly_file.write_nonblock("") }.should raise_error
    end
  end

  describe "IO#write_nonblock" do
    it_behaves_like :io_write, :write_nonblock
  end
end

describe 'IO#write_nonblock' do
  before do
    @read, @write = IO.pipe
  end

  after do
    @read.close
    @write.close
  end

  it "raises an exception extending IO::WaitWritable when the write would block" do
    lambda {
      loop { @write.write_nonblock('a' * 10_000) }
    }.should raise_error(IO::WaitWritable) { |e|
      platform_is_not :windows do
        e.should be_kind_of(Errno::EAGAIN)
      end
      platform_is :windows do
        e.should be_kind_of(Errno::EWOULDBLOCK)
      end
    }
  end

  ruby_version_is "2.3" do
    context "when exception option is set to false" do
      it "returns :wait_writable when the operation would block" do
        loop { break if @write.write_nonblock("a" * 10_000, exception: false) == :wait_writable }
        1.should == 1
      end
    end
  end

end
