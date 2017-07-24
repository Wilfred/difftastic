module ProcessSpecs
  class Daemon
    def initialize(argv)
      args, @input, @data, @behavior = argv
      @args = Marshal.load [args].pack("H*")
      @no_at_exit = false
    end

    def run
      send @behavior

      # Exit without running any at_exit handlers
      exit!(0) if @no_at_exit
    end

    def write(data)
      File.open(@data, "wb") { |f| f.puts data }
    end

    def daemonizing_at_exit
      at_exit do
        write "running at_exit"
      end

      @no_at_exit = true
      Process.daemon
      write "not running at_exit"
    end

    def return_value
      write Process.daemon.to_s
    end

    def pid
      parent = Process.pid
      Process.daemon
      daemon = Process.pid
      write "#{parent}:#{daemon}"
    end

    def process_group
      parent = Process.getpgrp
      Process.daemon
      daemon = Process.getpgrp
      write "#{parent}:#{daemon}"
    end

    def daemon_at_exit
      at_exit do
        write "running at_exit"
      end

      Process.daemon
    end

    def stay_in_dir
      Process.daemon(*@args)
      write Dir.pwd
    end

    def keep_stdio_open_false_stdout
      Process.daemon(*@args)
      $stdout.write "writing to stdout"
      write ""
    end

    def keep_stdio_open_false_stderr
      Process.daemon(*@args)
      $stderr.write "writing to stderr"
      write ""
    end

    def keep_stdio_open_false_stdin
      Process.daemon(*@args)

      # Reading from /dev/null will return right away. If STDIN were not
      # /dev/null, reading would block and the spec would hang. This is not a
      # perfect way to spec the behavior but it works.
      write $stdin.read
    end

    def keep_stdio_open_true_stdout
      $stdout.reopen @data
      Process.daemon(*@args)
      $stdout.write "writing to stdout"
    end

    def keep_stdio_open_true_stderr
      $stderr.reopen @data
      Process.daemon(*@args)
      $stderr.write "writing to stderr"
    end

    def keep_stdio_open_true_stdin
      File.open(@input, "w") { |f| f.puts "reading from stdin" }

      $stdin.reopen @input, "r"
      Process.daemon(*@args)
      write $stdin.read
    end

    def keep_stdio_open_files
      file = File.open @input, "w"

      Process.daemon(*@args)
      write file.closed?
    end
  end
end

ProcessSpecs::Daemon.new(ARGV).run
