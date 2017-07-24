require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

newline = "\n"
platform_is :windows do
  newline = "\r\n"
end

describe :process_spawn_does_not_close_std_streams, shared: true do
  platform_is_not :windows do
    it "does not close STDIN" do
      code = "STDOUT.puts STDIN.read(0).inspect"
      cmd = "Process.wait Process.spawn(#{ruby_cmd(code).inspect}, #{@options.inspect})"
      ruby_exe(cmd, args: "> #{@output}")
      File.binread(@output).should == %[""#{newline}]
    end

    it "does not close STDOUT" do
      code = "STDOUT.puts 'hello'"
      cmd = "Process.wait Process.spawn(#{ruby_cmd(code).inspect}, #{@options.inspect})"
      ruby_exe(cmd, args: "> #{@output}")
      File.binread(@output).should == "hello#{newline}"
    end

    it "does not close STDERR" do
      code = "STDERR.puts 'hello'"
      cmd = "Process.wait Process.spawn(#{ruby_cmd(code).inspect}, #{@options.inspect})"
      ruby_exe(cmd, args: "2> #{@output}")
      File.binread(@output).should == "hello#{newline}"
    end
  end
end

describe "Process.spawn" do
  ProcessSpecs.use_system_ruby(self)

  before :each do
    @name = tmp("process_spawn.txt")
    @var = "$FOO"
    platform_is :windows do
      @var = "%FOO%"
    end
  end

  after :each do
    rm_r @name
  end

  it "executes the given command" do
    lambda { Process.wait Process.spawn("echo spawn") }.should output_to_fd("spawn\n")
  end

  it "returns the process ID of the new process as a Fixnum" do
    pid = Process.spawn(*ruby_exe, "-e", "exit")
    Process.wait pid
    pid.should be_an_instance_of(Fixnum)
  end

  it "returns immediately" do
    start = Time.now
    pid = Process.spawn(*ruby_exe, "-e", "sleep 10")
    (Time.now - start).should < 5
    Process.kill :KILL, pid
    Process.wait pid
  end

  # argv processing

  describe "with a single argument" do
    platform_is_not :windows do
      it "subjects the specified command to shell expansion" do
        lambda { Process.wait Process.spawn("echo *") }.should_not output_to_fd("*\n")
      end

      it "creates an argument array with shell parsing semantics for whitespace" do
        lambda { Process.wait Process.spawn("echo a b  c   d") }.should output_to_fd("a b c d\n")
      end
    end

    platform_is :windows do
      # There is no shell expansion on Windows
      it "does not subject the specified command to shell expansion on Windows" do
        lambda { Process.wait Process.spawn("echo *") }.should output_to_fd("*\n")
      end

      it "does not create an argument array with shell parsing semantics for whitespace on Windows" do
        lambda { Process.wait Process.spawn("echo a b  c   d") }.should output_to_fd("a b  c   d\n")
      end
    end

    it "calls #to_str to convert the argument to a String" do
      o = mock("to_str")
      o.should_receive(:to_str).and_return("echo foo")
      lambda { Process.wait Process.spawn(o) }.should output_to_fd("foo\n")
    end

    it "raises an ArgumentError if the command includes a null byte" do
      lambda { Process.spawn "\000" }.should raise_error(ArgumentError)
    end

    it "raises a TypeError if the argument does not respond to #to_str" do
      lambda { Process.spawn :echo }.should raise_error(TypeError)
    end
  end

  describe "with multiple arguments" do
    it "does not subject the arguments to shell expansion" do
      lambda { Process.wait Process.spawn("echo", "*") }.should output_to_fd("*\n")
    end

    it "preserves whitespace in passed arguments" do
      out = "a b  c   d\n"
      platform_is :windows do
        # The echo command on Windows takes quotes literally
        out = "\"a b  c   d\"\n"
      end
      lambda { Process.wait Process.spawn("echo", "a b  c   d") }.should output_to_fd(out)
    end

    it "calls #to_str to convert the arguments to Strings" do
      o = mock("to_str")
      o.should_receive(:to_str).and_return("foo")
      lambda { Process.wait Process.spawn("echo", o) }.should output_to_fd("foo\n")
    end

    it "raises an ArgumentError if an argument includes a null byte" do
      lambda { Process.spawn "echo", "\000" }.should raise_error(ArgumentError)
    end

    it "raises a TypeError if an argument does not respond to #to_str" do
      lambda { Process.spawn "echo", :foo }.should raise_error(TypeError)
    end
  end

  describe "with a command array" do
    it "uses the first element as the command name and the second as the argv[0] value" do
      platform_is_not :windows do
        lambda { Process.wait Process.spawn(["/bin/sh", "argv_zero"], "-c", "echo $0") }.should output_to_fd("argv_zero\n")
      end
      platform_is :windows do
        lambda { Process.wait Process.spawn(["cmd.exe", "/C"], "/C", "echo", "argv_zero") }.should output_to_fd("argv_zero\n")
      end
    end

    it "does not subject the arguments to shell expansion" do
      lambda { Process.wait Process.spawn(["echo", "echo"], "*") }.should output_to_fd("*\n")
    end

    it "preserves whitespace in passed arguments" do
      out = "a b  c   d\n"
      platform_is :windows do
        # The echo command on Windows takes quotes literally
        out = "\"a b  c   d\"\n"
      end
      lambda { Process.wait Process.spawn(["echo", "echo"], "a b  c   d") }.should output_to_fd(out)
    end

    it "calls #to_ary to convert the argument to an Array" do
      o = mock("to_ary")
      platform_is_not :windows do
        o.should_receive(:to_ary).and_return(["/bin/sh", "argv_zero"])
        lambda { Process.wait Process.spawn(o, "-c", "echo $0") }.should output_to_fd("argv_zero\n")
      end
      platform_is :windows do
        o.should_receive(:to_ary).and_return(["cmd.exe", "/C"])
        lambda { Process.wait Process.spawn(o, "/C", "echo", "argv_zero") }.should output_to_fd("argv_zero\n")
      end
    end

    it "calls #to_str to convert the first element to a String" do
      o = mock("to_str")
      o.should_receive(:to_str).and_return("echo")
      lambda { Process.wait Process.spawn([o, "echo"], "foo") }.should output_to_fd("foo\n")
    end

    it "calls #to_str to convert the second element to a String" do
      o = mock("to_str")
      o.should_receive(:to_str).and_return("echo")
      lambda { Process.wait Process.spawn(["echo", o], "foo") }.should output_to_fd("foo\n")
    end

    it "raises an ArgumentError if the Array does not have exactly two elements" do
      lambda { Process.spawn([]) }.should raise_error(ArgumentError)
      lambda { Process.spawn([:a]) }.should raise_error(ArgumentError)
      lambda { Process.spawn([:a, :b, :c]) }.should raise_error(ArgumentError)
    end

    it "raises an ArgumentError if the Strings in the Array include a null byte" do
      lambda { Process.spawn ["\000", "echo"] }.should raise_error(ArgumentError)
      lambda { Process.spawn ["echo", "\000"] }.should raise_error(ArgumentError)
    end

    it "raises a TypeError if an element in the Array does not respond to #to_str" do
      lambda { Process.spawn ["echo", :echo] }.should raise_error(TypeError)
      lambda { Process.spawn [:echo, "echo"] }.should raise_error(TypeError)
    end
  end

  # env handling

  after :each do
    ENV.delete("FOO")
  end

  it "sets environment variables in the child environment" do
    Process.wait Process.spawn({"FOO" => "BAR"}, "echo #{@var}>#{@name}")
    File.read(@name).should == "BAR\n"
  end

  it "unsets environment variables whose value is nil" do
    ENV["FOO"] = "BAR"
    Process.wait Process.spawn({"FOO" => nil}, "echo #{@var}>#{@name}")
    expected = "\n"
    platform_is :windows do
      # Windows does not expand the variable if it is unset
      expected = "#{@var}\n"
    end
    File.read(@name).should == expected
  end

  it "calls #to_hash to convert the environment" do
    o = mock("to_hash")
    o.should_receive(:to_hash).and_return({"FOO" => "BAR"})
    Process.wait Process.spawn(o, "echo #{@var}>#{@name}")
    File.read(@name).should == "BAR\n"
  end

  it "calls #to_str to convert the environment keys" do
    o = mock("to_str")
    o.should_receive(:to_str).and_return("FOO")
    Process.wait Process.spawn({o => "BAR"}, "echo #{@var}>#{@name}")
    File.read(@name).should == "BAR\n"
  end

  it "calls #to_str to convert the environment values" do
    o = mock("to_str")
    o.should_receive(:to_str).and_return("BAR")
    Process.wait Process.spawn({"FOO" => o}, "echo #{@var}>#{@name}")
    File.read(@name).should == "BAR\n"
  end

  it "raises an ArgumentError if an environment key includes an equals sign" do
    lambda do
      Process.spawn({"FOO=" => "BAR"}, "echo #{@var}>#{@name}")
    end.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if an environment key includes a null byte" do
    lambda do
      Process.spawn({"\000" => "BAR"}, "echo #{@var}>#{@name}")
    end.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if an environment value includes a null byte" do
    lambda do
      Process.spawn({"FOO" => "\000"}, "echo #{@var}>#{@name}")
    end.should raise_error(ArgumentError)
  end

  # :unsetenv_others

  before :each do
    @minimal_env = {
      "PATH" => ENV["PATH"],
      "HOME" => ENV["HOME"]
    }
    @common_env_spawn_args = [@minimal_env, "echo #{@var}>#{@name}"]
  end

  platform_is_not :windows do
    it "unsets other environment variables when given a true :unsetenv_others option" do
      ENV["FOO"] = "BAR"
      Process.wait Process.spawn(*@common_env_spawn_args, unsetenv_others: true)
      $?.success?.should be_true
      File.read(@name).should == "\n"
    end
  end

  it "does not unset other environment variables when given a false :unsetenv_others option" do
    ENV["FOO"] = "BAR"
    Process.wait Process.spawn(*@common_env_spawn_args, unsetenv_others: false)
    $?.success?.should be_true
    File.read(@name).should == "BAR\n"
  end

  platform_is_not :windows do
    it "does not unset environment variables included in the environment hash" do
      env = @minimal_env.merge({"FOO" => "BAR"})
      Process.wait Process.spawn(env, "echo #{@var}>#{@name}", unsetenv_others: true)
      $?.success?.should be_true
      File.read(@name).should == "BAR\n"
    end
  end

  # :pgroup

  platform_is_not :windows do
    it "joins the current process group by default" do
      lambda do
        Process.wait Process.spawn(ruby_cmd("print Process.getpgid(Process.pid)"))
      end.should output_to_fd(Process.getpgid(Process.pid).to_s)
    end

    it "joins the current process if pgroup: false" do
      lambda do
        Process.wait Process.spawn(ruby_cmd("print Process.getpgid(Process.pid)"), pgroup: false)
      end.should output_to_fd(Process.getpgid(Process.pid).to_s)
    end

    it "joins the current process if pgroup: nil" do
      lambda do
        Process.wait Process.spawn(ruby_cmd("print Process.getpgid(Process.pid)"), pgroup: nil)
      end.should output_to_fd(Process.getpgid(Process.pid).to_s)
    end

    it "joins a new process group if pgroup: true" do
      process = lambda do
        Process.wait Process.spawn(ruby_cmd("print Process.getpgid(Process.pid)"), pgroup: true)
      end

      process.should_not output_to_fd(Process.getpgid(Process.pid).to_s)
      process.should output_to_fd(/\d+/)
    end

    it "joins a new process group if pgroup: 0" do
      process = lambda do
        Process.wait Process.spawn(ruby_cmd("print Process.getpgid(Process.pid)"), pgroup: 0)
      end

      process.should_not output_to_fd(Process.getpgid(Process.pid).to_s)
      process.should output_to_fd(/\d+/)
    end

    it "joins the specified process group if pgroup: pgid" do
      pgid = Process.getpgid(Process.pid)
      lambda do
        Process.wait Process.spawn(ruby_cmd("print Process.getpgid(Process.pid)"), pgroup: pgid)
      end.should output_to_fd(pgid.to_s)
    end

    it "raises an ArgumentError if given a negative :pgroup option" do
      lambda { Process.spawn("echo", pgroup: -1) }.should raise_error(ArgumentError)
    end

    it "raises a TypeError if given a symbol as :pgroup option" do
      lambda { Process.spawn("echo", pgroup: :true) }.should raise_error(TypeError)
    end
  end

  platform_is :windows do
    it "raises an ArgumentError if given :pgroup option" do
      lambda { Process.spawn("echo", pgroup: false) }.should raise_error(ArgumentError)
    end
  end

  # :rlimit_core
  # :rlimit_cpu
  # :rlimit_data

  # :chdir

  it "uses the current working directory as its working directory" do
    lambda do
      Process.wait Process.spawn(ruby_cmd("print Dir.pwd"))
    end.should output_to_fd(Dir.pwd)
  end

  describe "when passed :chdir" do
    before do
      @dir = tmp("spawn_chdir", false)
      Dir.mkdir @dir
    end

    after do
      rm_r @dir
    end

    it "changes to the directory passed for :chdir" do
      lambda do
        Process.wait Process.spawn(ruby_cmd("print Dir.pwd"), chdir: @dir)
      end.should output_to_fd(@dir)
    end

    it "calls #to_path to convert the :chdir value" do
      dir = mock("spawn_to_path")
      dir.should_receive(:to_path).and_return(@dir)

      lambda do
        Process.wait Process.spawn(ruby_cmd("print Dir.pwd"), chdir: dir)
      end.should output_to_fd(@dir)
    end
  end

  # :umask

  it "uses the current umask by default" do
    lambda do
      Process.wait Process.spawn(ruby_cmd("print File.umask"))
    end.should output_to_fd(File.umask.to_s)
  end

  platform_is_not :windows do
    it "sets the umask if given the :umask option" do
      lambda do
        Process.wait Process.spawn(ruby_cmd("print File.umask"), umask: 146)
      end.should output_to_fd("146")
    end
  end

  # redirection

  it "redirects STDOUT to the given file descriptior if out: Fixnum" do
    File.open(@name, 'w') do |file|
      lambda do
        Process.wait Process.spawn("echo glark", out: file.fileno)
      end.should output_to_fd("glark\n", file)
    end
  end

  it "redirects STDOUT to the given file if out: IO" do
    File.open(@name, 'w') do |file|
      lambda do
        Process.wait Process.spawn("echo glark", out: file)
      end.should output_to_fd("glark\n", file)
    end
  end

  it "redirects STDOUT to the given file if out: String" do
    Process.wait Process.spawn("echo glark", out: @name)
    File.read(@name).should == "glark\n"
  end

  it "redirects STDOUT to the given file if out: [String name, String mode]" do
    Process.wait Process.spawn("echo glark", out: [@name, 'w'])
    File.read(@name).should == "glark\n"
  end

  it "redirects STDERR to the given file descriptior if err: Fixnum" do
    File.open(@name, 'w') do |file|
      lambda do
        Process.wait Process.spawn("echo glark>&2", err: file.fileno)
      end.should output_to_fd("glark\n", file)
    end
  end

  it "redirects STDERR to the given file descriptor if err: IO" do
    File.open(@name, 'w') do |file|
      lambda do
        Process.wait Process.spawn("echo glark>&2", err: file)
      end.should output_to_fd("glark\n", file)
    end
  end

  it "redirects STDERR to the given file if err: String" do
    Process.wait Process.spawn("echo glark>&2", err: @name)
    File.read(@name).should == "glark\n"
  end

  it "redirects STDERR to child STDOUT if :err => [:child, :out]" do
    File.open(@name, 'w') do |file|
      lambda do
        Process.wait Process.spawn("echo glark>&2", :out => file, :err => [:child, :out])
      end.should output_to_fd("glark\n", file)
    end
  end

  it "redirects both STDERR and STDOUT to the given file descriptior" do
    File.open(@name, 'w') do |file|
      lambda do
        Process.wait Process.spawn(ruby_cmd("print(:glark); STDOUT.flush; STDERR.print(:bang)"),
                                   [:out, :err] => file.fileno)
      end.should output_to_fd("glarkbang", file)
    end
  end

  it "redirects both STDERR and STDOUT to the given IO" do
    File.open(@name, 'w') do |file|
      lambda do
        Process.wait Process.spawn(ruby_cmd("print(:glark); STDOUT.flush; STDERR.print(:bang)"),
                                   [:out, :err] => file)
      end.should output_to_fd("glarkbang", file)
    end
  end

  it "redirects both STDERR and STDOUT at the time to the given name" do
    touch @name
    Process.wait Process.spawn(ruby_cmd("print(:glark); STDOUT.flush; STDERR.print(:bang)"), [:out, :err] => @name)
    File.read(@name).should == "glarkbang"
  end

  context "when passed close_others: true" do
    before :each do
      @output = tmp("spawn_close_others_true")
      @options = { close_others: true }
    end

    after :each do
      rm_r @output
    end

    it "closes file descriptors >= 3 in the child process" do
      IO.pipe do |r, w|
        begin
          pid = Process.spawn(ruby_cmd("while File.exist? '#{@name}'; sleep 0.1; end"), @options)
          w.close
          lambda { r.read_nonblock(1) }.should raise_error(EOFError)
        ensure
          rm_r @name
          Process.wait(pid) if pid
        end
      end
    end

    it_should_behave_like :process_spawn_does_not_close_std_streams
  end

  context "when passed close_others: false" do
    before :each do
      @output = tmp("spawn_close_others_false")
      @options = { close_others: false }
    end

    after :each do
      rm_r @output
    end

    it "closes file descriptors >= 3 in the child process because they are set close_on_exec by default" do
      IO.pipe do |r, w|
        begin
          pid = Process.spawn(ruby_cmd("while File.exist? '#{@name}'; sleep 0.1; end"), @options)
          w.close
          lambda { r.read_nonblock(1) }.should raise_error(EOFError)
        ensure
          rm_r @name
          Process.wait(pid) if pid
        end
      end
    end

    platform_is_not :windows do
      it "does not close file descriptors >= 3 in the child process if fds are set close_on_exec=false" do
        IO.pipe do |r, w|
          r.close_on_exec = false
          w.close_on_exec = false
          begin
            pid = Process.spawn(ruby_cmd("while File.exist? '#{@name}'; sleep 0.1; end"), @options)
            w.close
            lambda { r.read_nonblock(1) }.should raise_error(Errno::EAGAIN)
          ensure
            rm_r @name
            Process.wait(pid) if pid
          end
        end
      end
    end

    it_should_behave_like :process_spawn_does_not_close_std_streams
  end

  # error handling

  it "raises an ArgumentError if passed no command arguments" do
    lambda { Process.spawn }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if passed env or options but no command arguments" do
    lambda { Process.spawn({}) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if passed env and options but no command arguments" do
    lambda { Process.spawn({}, {}) }.should raise_error(ArgumentError)
  end

  it "raises an Errno::ENOENT for an empty string" do
    lambda { Process.spawn "" }.should raise_error(Errno::ENOENT)
  end

  it "raises an Errno::ENOENT if the command does not exist" do
    lambda { Process.spawn "nonesuch" }.should raise_error(Errno::ENOENT)
  end

  unless File.executable?(__FILE__) # Some FS (e.g. vboxfs) locate all files executable
    platform_is_not :windows do
      it "raises an Errno::EACCES when the file does not have execute permissions" do
        lambda { Process.spawn __FILE__ }.should raise_error(Errno::EACCES)
      end
    end

    platform_is :windows do
      it "raises Errno::EACCES or Errno::ENOEXEC when the file is not an executable file" do
        lambda { Process.spawn __FILE__ }.should raise_error(SystemCallError) { |e|
          [Errno::EACCES, Errno::ENOEXEC].should include(e.class)
        }
      end
    end
  end

  it "raises an Errno::EACCES when passed a directory" do
    lambda { Process.spawn File.dirname(__FILE__) }.should raise_error(Errno::EACCES)
  end

  it "raises an ArgumentError when passed a string key in options" do
    lambda { Process.spawn("echo", "chdir" => Dir.pwd) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when passed an unknown option key" do
    lambda { Process.spawn("echo", nonesuch: :foo) }.should raise_error(ArgumentError)
  end

  platform_is_not :windows do
    describe "with Integer option keys" do
      before :each do
        @name = tmp("spawn_fd_map.txt")
        @io = new_io @name, "w+"
        @io.sync = true
      end

      after :each do
        @io.close unless @io.closed?
        rm_r @name
      end

      it "maps the key to a file descriptor in the child that inherits the file descriptor from the parent specified by the value" do
        child_fd = @io.fileno + 1
        args = ruby_cmd(fixture(__FILE__, "map_fd.rb"), args: [child_fd.to_s])
        pid = Process.spawn(*args, { child_fd => @io })
        Process.waitpid pid
        @io.rewind

        @io.read.should == "writing to fd: #{child_fd}"
      end
    end
  end
end
