require File.expand_path('../spec_helper', __FILE__)

load_extension('io')

describe "C-API IO function" do
  before :each do
    @o = CApiIOSpecs.new

    @name = tmp("c_api_rb_io_specs")
    touch @name

    @io = new_io @name, fmode("w:utf-8")
    @io.sync = true
  end

  after :each do
    @io.close unless @io.closed?
    rm_r @name
  end

  describe "rb_io_addstr" do
    it "calls #to_s to convert the object to a String" do
      obj = mock("rb_io_addstr string")
      obj.should_receive(:to_s).and_return("rb_io_addstr data")

      @o.rb_io_addstr(@io, obj)
      File.read(@name).should == "rb_io_addstr data"
    end

    it "writes the String to the IO" do
      @o.rb_io_addstr(@io, "rb_io_addstr data")
      File.read(@name).should == "rb_io_addstr data"
    end

    it "returns the io" do
      @o.rb_io_addstr(@io, "rb_io_addstr data").should eql(@io)
    end
  end

  describe "rb_io_printf" do
    it "calls #to_str to convert the format object to a String" do
      obj = mock("rb_io_printf format")
      obj.should_receive(:to_str).and_return("%s")

      @o.rb_io_printf(@io, [obj, "rb_io_printf"])
      File.read(@name).should == "rb_io_printf"
    end

    it "calls #to_s to convert the object to a String" do
      obj = mock("rb_io_printf string")
      obj.should_receive(:to_s).and_return("rb_io_printf")

      @o.rb_io_printf(@io, ["%s", obj])
      File.read(@name).should == "rb_io_printf"
    end

    it "writes the Strings to the IO" do
      @o.rb_io_printf(@io, ["%s_%s_%s", "rb", "io", "printf"])
      File.read(@name).should == "rb_io_printf"
    end
  end

  describe "rb_io_print" do
    it "calls #to_s to convert the object to a String" do
      obj = mock("rb_io_print string")
      obj.should_receive(:to_s).and_return("rb_io_print")

      @o.rb_io_print(@io, [obj])
      File.read(@name).should == "rb_io_print"
    end

    it "writes the Strings to the IO with no separator" do
      @o.rb_io_print(@io, ["rb_", "io_", "print"])
      File.read(@name).should == "rb_io_print"
    end
  end

  describe "rb_io_puts" do
    it "calls #to_s to convert the object to a String" do
      obj = mock("rb_io_puts string")
      obj.should_receive(:to_s).and_return("rb_io_puts")

      @o.rb_io_puts(@io, [obj])
      File.read(@name).should == "rb_io_puts\n"
    end

    it "writes the Strings to the IO separated by newlines" do
      @o.rb_io_puts(@io, ["rb", "io", "write"])
      File.read(@name).should == "rb\nio\nwrite\n"
    end
  end

  describe "rb_io_write" do
    it "calls #to_s to convert the object to a String" do
      obj = mock("rb_io_write string")
      obj.should_receive(:to_s).and_return("rb_io_write")

      @o.rb_io_write(@io, obj)
      File.read(@name).should == "rb_io_write"
    end

    it "writes the String to the IO" do
      @o.rb_io_write(@io, "rb_io_write")
      File.read(@name).should == "rb_io_write"
    end
  end
end

describe "C-API IO function" do
  before :each do
    @o = CApiIOSpecs.new

    @name = tmp("c_api_io_specs")
    touch @name

    @io = new_io @name, fmode("r:utf-8")
  end

  after :each do
    @io.close unless @io.closed?
    rm_r @name
  end

  describe "rb_io_close" do
    it "closes an IO object" do
      @io.closed?.should be_false
      @o.rb_io_close(@io)
      @io.closed?.should be_true
    end
  end

  describe "rb_io_check_io" do
    it "returns the IO object if it is valid" do
      @o.rb_io_check_io(@io).should == @io
    end

    it "returns nil for non IO objects" do
      @o.rb_io_check_io({}).should be_nil
    end
  end

  describe "rb_io_check_closed" do
    it "does not raise an exception if the IO is not closed" do
      # The MRI function is void, so we use should_not raise_error
      lambda { @o.rb_io_check_closed(@io) }.should_not raise_error
    end

    it "raises an error if the IO is closed" do
      @io.close
      lambda { @o.rb_io_check_closed(@io) }.should raise_error(IOError)
    end
  end

  # NOTE: unlike the name might suggest in MRI this function checks if an
  # object is frozen, *not* if it's tainted.
  describe "rb_io_taint_check" do
    it "does not raise an exception if the IO is not frozen" do
      lambda { @o.rb_io_taint_check(@io) }.should_not raise_error
    end

    it "raises an exception if the IO is frozen" do
      @io.freeze

      lambda { @o.rb_io_taint_check(@io) }.should raise_error(RuntimeError)
    end
  end

  describe "GetOpenFile" do
    it "allows access to the system fileno" do
      @o.GetOpenFile_fd($stdin).should == 0
      @o.GetOpenFile_fd($stdout).should == 1
      @o.GetOpenFile_fd($stderr).should == 2
      @o.GetOpenFile_fd(@io).should == @io.fileno
    end
  end

  describe "rb_io_binmode" do
    it "returns self" do
      @o.rb_io_binmode(@io).should == @io
    end

    it "sets binmode" do
      @o.rb_io_binmode(@io)
      @io.binmode?.should be_true
    end
  end
end

describe "C-API IO function" do
  before :each do
    @o = CApiIOSpecs.new
    @r_io, @w_io = IO.pipe

    @name = tmp("c_api_io_specs")
    touch @name
    @rw_io = new_io @name, fmode("w+")
  end

  after :each do
    @r_io.close unless @r_io.closed?
    @w_io.close unless @w_io.closed?
    @rw_io.close unless @rw_io.closed?
    rm_r @name
  end

  describe "rb_io_check_readable" do
    it "does not raise an exception if the IO is opened for reading" do
      # The MRI function is void, so we use should_not raise_error
      lambda { @o.rb_io_check_readable(@r_io) }.should_not raise_error
    end

    it "does not raise an exception if the IO is opened for read and write" do
      lambda { @o.rb_io_check_readable(@rw_io) }.should_not raise_error
    end

    it "raises an IOError if the IO is not opened for reading" do
      lambda { @o.rb_io_check_readable(@w_io) }.should raise_error(IOError)
    end

  end

  describe "rb_io_check_writable" do
    it "does not raise an exeption if the IO is opened for writing" do
      # The MRI function is void, so we use should_not raise_error
      lambda { @o.rb_io_check_writable(@w_io) }.should_not raise_error
    end

    it "does not raise an exception if the IO is opened for read and write" do
      lambda { @o.rb_io_check_writable(@rw_io) }.should_not raise_error
    end

    it "raises an IOError if the IO is not opened for reading" do
      lambda { @o.rb_io_check_writable(@r_io) }.should raise_error(IOError)
    end
  end

  describe "rb_io_wait_writeable" do
    it "returns false if there is no error condition" do
      @o.rb_io_wait_writable(@w_io).should be_false
    end

    it "raises an IOError if the IO is closed" do
      @w_io.close
      lambda { @o.rb_io_wait_writable(@w_io) }.should raise_error(IOError)
    end
  end

  describe "rb_thread_fd_writable" do
    it "waits til an fd is ready for writing" do
      @o.rb_thread_fd_writable(@w_io).should be_nil
    end
  end

  platform_is_not :windows do
    describe "rb_io_wait_readable" do
      it "returns false if there is no error condition" do
        @o.rb_io_wait_readable(@r_io, false).should be_false
      end

      it "raises and IOError if passed a closed stream" do
        @r_io.close
        lambda {
          @o.rb_io_wait_readable(@r_io, false)
        }.should raise_error(IOError)
      end

      it "blocks until the io is readable and returns true" do
        @o.instance_variable_set :@write_data, false
        thr = Thread.new do
          Thread.pass until @o.instance_variable_get(:@write_data)
          @w_io.write "rb_io_wait_readable"
        end

        @o.rb_io_wait_readable(@r_io, true).should be_true
        @o.instance_variable_get(:@read_data).should == "rb_io_wait_re"

        thr.join
      end
    end
  end

  describe "rb_thread_wait_fd" do
    it "waits til an fd is ready for reading" do
      start = false
      thr = Thread.new do
        start = true
        sleep 0.05
        @w_io.write "rb_io_wait_readable"
      end

      Thread.pass until start

      @o.rb_thread_wait_fd(@r_io).should be_nil

      thr.join
    end
  end

end

describe "rb_fd_fix_cloexec" do

  before :each do
    @o = CApiIOSpecs.new

    @name = tmp("c_api_rb_io_specs")
    touch @name

    @io = new_io @name, fmode("w:utf-8")
    @io.close_on_exec = false
    @io.sync = true
  end

  after :each do
    @io.close unless @io.closed?
    rm_r @name
  end

  it "sets close_on_exec on the IO" do
    @o.rb_fd_fix_cloexec(@io)
    @io.close_on_exec?.should be_true
  end

end

describe "rb_cloexec_open" do
  before :each do
    @o = CApiIOSpecs.new
    @name = tmp("c_api_rb_io_specs")
    touch @name

    @io = nil
  end

  after :each do
    @io.close unless @io.nil? || @io.closed?
    rm_r @name
  end

  it "sets close_on_exec on the newly-opened IO" do
    @io = @o.rb_cloexec_open(@name, 0, 0)
    @io.close_on_exec?.should be_true
  end
end
