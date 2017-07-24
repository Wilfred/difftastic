require File.expand_path('../../../spec_helper', __FILE__)

describe "Process.exec" do
  it "raises Errno::ENOENT for an empty string" do
    lambda { Process.exec "" }.should raise_error(Errno::ENOENT)
  end

  it "raises Errno::ENOENT for a command which does not exist" do
    lambda { Process.exec "bogus-noent-script.sh" }.should raise_error(Errno::ENOENT)
  end

  it "raises an ArgumentError if the command includes a null byte" do
    lambda { Process.exec "\000" }.should raise_error(ArgumentError)
  end

  unless File.executable?(__FILE__) # Some FS (e.g. vboxfs) locate all files executable
    platform_is_not :windows do
      it "raises Errno::EACCES when the file does not have execute permissions" do
        lambda { Process.exec __FILE__ }.should raise_error(Errno::EACCES)
      end
    end

    platform_is :windows do
      it "raises Errno::EACCES or Errno::ENOEXEC when the file is not an executable file" do
        lambda { Process.exec __FILE__ }.should raise_error(SystemCallError) { |e|
          [Errno::EACCES, Errno::ENOEXEC].should include(e.class)
        }
      end
    end
  end

  platform_is_not :openbsd do
    it "raises Errno::EACCES when passed a directory" do
      lambda { Process.exec File.dirname(__FILE__) }.should raise_error(Errno::EACCES)
    end
  end

  platform_is :openbsd do
    it "raises Errno::EISDIR when passed a directory" do
      lambda { Process.exec File.dirname(__FILE__) }.should raise_error(Errno::EISDIR)
    end
  end

  it "runs the specified command, replacing current process" do
    ruby_exe('Process.exec "echo hello"; puts "fail"', escape: true).should == "hello\n"
  end

  it "sets the current directory when given the :chdir option" do
    tmpdir = tmp("")[0..-2]
    platform_is_not :windows do
      ruby_exe("Process.exec(\"pwd\", chdir: #{tmpdir.inspect})", escape: true).should == "#{tmpdir}\n"
    end
    platform_is :windows do
      ruby_exe("Process.exec(\"cd\", chdir: #{tmpdir.inspect})", escape: true).tr('\\', '/').should == "#{tmpdir}\n"
    end
  end

  it "flushes STDOUT upon exit when it's not set to sync" do
    ruby_exe("STDOUT.sync = false; STDOUT.write 'hello'").should == "hello"
  end

  it "flushes STDERR upon exit when it's not set to sync" do
    ruby_exe("STDERR.sync = false; STDERR.write 'hello'", args: "2>&1").should == "hello"
  end

  describe "with a single argument" do
    before :each do
      @dir = tmp("exec_with_dir", false)
      Dir.mkdir @dir

      @name = "some_file"
      @path = tmp("exec_with_dir/#{@name}", false)
      touch @path
    end

    after :each do
      rm_r @path
      rm_r @dir
    end

    platform_is_not :windows do
      it "subjects the specified command to shell expansion" do
        result = Dir.chdir(@dir) do
          ruby_exe('Process.exec "echo *"', escape: true)
        end
        result.chomp.should == @name
      end

      it "creates an argument array with shell parsing semantics for whitespace" do
        ruby_exe('Process.exec "echo a b  c   d"', escape: true).should == "a b c d\n"
      end
    end

    platform_is :windows do
      # There is no shell expansion on Windows
      it "does not subject the specified command to shell expansion on Windows" do
        result = Dir.chdir(@dir) do
          ruby_exe('Process.exec "echo *"', escape: true)
        end
        result.should == "*\n"
      end

      it "does not create an argument array with shell parsing semantics for whitespace on Windows" do
        ruby_exe('Process.exec "echo a b  c   d"', escape: true).should == "a b  c   d\n"
      end
    end

  end

  describe "with multiple arguments" do
    it "does not subject the arguments to shell expansion" do
      cmd = '"echo", "*"'
      platform_is :windows do
        cmd = '"cmd.exe", "/C", "echo", "*"'
      end
      ruby_exe("Process.exec #{cmd}", escape: true).should == "*\n"
    end
  end

  describe "(environment variables)" do
    before :each do
      ENV["FOO"] = "FOO"
    end

    after :each do
      ENV["FOO"] = nil
    end

    var = '$FOO'
    platform_is :windows do
      var = '%FOO%'
    end

    it "sets environment variables in the child environment" do
      ruby_exe('Process.exec({"FOO" => "BAR"}, "echo ' + var + '")', escape: true).should == "BAR\n"
    end

    it "unsets environment variables whose value is nil" do
      platform_is_not :windows do
        ruby_exe('Process.exec({"FOO" => nil}, "echo ' + var + '")', escape: true).should == "\n"
      end
      platform_is :windows do
        # On Windows, echo-ing a non-existent env var is treated as echo-ing any other string of text
        ruby_exe('Process.exec({"FOO" => nil}, "echo ' + var + '")', escape: true).should == var + "\n"
      end
    end

    it "coerces environment argument using to_hash" do
      ruby_exe('o = Object.new; def o.to_hash; {"FOO" => "BAR"}; end; Process.exec(o, "echo ' + var + '")', escape: true).should == "BAR\n"
    end

    it "unsets other environment variables when given a true :unsetenv_others option" do
      platform_is_not :windows do
        ruby_exe('Process.exec("echo ' + var + '", unsetenv_others: true)', escape: true).should == "\n"
      end
      platform_is :windows do
        ruby_exe('Process.exec("' + ENV['COMSPEC'].gsub('\\', '\\\\\\') + ' /C echo ' + var + '", unsetenv_others: true)', escape: true).should == var + "\n"
      end
    end
  end

  describe "with a command array" do
    it "uses the first element as the command name and the second as the argv[0] value" do
      platform_is_not :windows do
        ruby_exe('Process.exec(["/bin/sh", "argv_zero"], "-c", "echo $0")', escape: true).should == "argv_zero\n"
      end
      platform_is :windows do
        ruby_exe('Process.exec(["cmd.exe", "/C"], "/C", "echo", "argv_zero")', escape: true).should == "argv_zero\n"
      end
    end

    it "coerces the argument using to_ary" do
      platform_is_not :windows do
        ruby_exe('o = Object.new; def o.to_ary; ["/bin/sh", "argv_zero"]; end; Process.exec(o, "-c", "echo $0")', escape: true).should == "argv_zero\n"
      end
      platform_is :windows do
        ruby_exe('o = Object.new; def o.to_ary; ["cmd.exe", "/C"]; end; Process.exec(o, "/C", "echo", "argv_zero")', escape: true).should == "argv_zero\n"
      end
    end

    it "raises an ArgumentError if the Array does not have exactly two elements" do
      lambda { Process.exec([]) }.should raise_error(ArgumentError)
      lambda { Process.exec([:a]) }.should raise_error(ArgumentError)
      lambda { Process.exec([:a, :b, :c]) }.should raise_error(ArgumentError)
    end
  end

  platform_is_not :windows do
    describe "with an options Hash" do
      describe "with Integer option keys" do
        before :each do
          @name = tmp("exec_fd_map.txt")
          @child_fd_file = tmp("child_fd_file.txt")
        end

        after :each do
          rm_r @name, @child_fd_file
        end

        it "maps the key to a file descriptor in the child that inherits the file descriptor from the parent specified by the value" do
          map_fd_fixture = fixture __FILE__, "map_fd.rb"
          cmd = <<-EOC
            f = File.open("#{@name}", "w+")
            child_fd = f.fileno + 1
            File.open("#{@child_fd_file}", "w") { |io| io.print child_fd }
            Process.exec "#{ruby_cmd(map_fd_fixture)} \#{child_fd}", { child_fd => f }
            EOC

          ruby_exe(cmd, escape: true)
          child_fd = IO.read(@child_fd_file).to_i
          child_fd.to_i.should > STDERR.fileno

          File.read(@name).should == "writing to fd: #{child_fd}"
        end
      end
    end
  end
end
