module ProcessSpecs
  def self.use_system_ruby(context)
    if defined?(MSpecScript::SYSTEM_RUBY)
      context.send(:before, :all) do
        @ruby = ::RUBY_EXE
        Object.const_set(:RUBY_EXE, MSpecScript::SYSTEM_RUBY)
      end

      context.send(:after, :all) do
        Object.const_set(:RUBY_EXE, @ruby)
      end
    end
  end

  class Daemonizer
    attr_reader :input, :data

    def initialize
      # Fast feedback for implementations without Process.daemon
      raise NotImplementedError, "Process.daemon is not implemented" unless Process.respond_to? :daemon

      @script = fixture __FILE__, "daemon.rb"
      @input = tmp("process_daemon_input_file")
      @data = tmp("process_daemon_data_file")
      @args = []
    end

    def wait_for_daemon
      sleep 0.001 until File.exist?(@data) and File.size?(@data)
    end

    def invoke(behavior, arguments=[])
      args = Marshal.dump(arguments).unpack("H*")
      args << @input << @data << behavior

      ruby_exe @script, args: args

      wait_for_daemon

      return unless File.exist? @data

      File.open(@data, "rb") { |f| return f.read.chomp }
    end
  end

  class Signalizer
    attr_reader :pid_file, :pid

    def initialize(scenario=nil)
      platform_is :windows do
        fail "not supported on windows"
      end
      @script = fixture __FILE__, "kill.rb"
      @pid = nil
      @pid_file = tmp("process_kill_signal_file")
      rm_r @pid_file

      @thread = Thread.new do
        Thread.current.abort_on_exception = true
        args = [@pid_file]
        args << scenario if scenario
        @result = ruby_exe @script, args: args
      end
      Thread.pass while @thread.status and !File.exist?(@pid_file)
      while @thread.status && (@pid.nil? || @pid == 0)
        @pid = IO.read(@pid_file).chomp.to_i
      end
    end

    def wait_on_result
      @thread.join
    end

    def cleanup
      wait_on_result
      rm_r pid_file
    end

    def result
      wait_on_result
      @result.chomp if @result
    end
  end
end
