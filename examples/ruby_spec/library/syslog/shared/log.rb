describe :syslog_log, shared: true do
  platform_is_not :windows, :darwin, :solaris, :aix do
    before :each do
      Syslog.opened?.should be_false
    end

    after :each do
      Syslog.opened?.should be_false
    end

    it "logs a message" do
      lambda {
        Syslog.open("rubyspec", Syslog::LOG_PERROR) do
          Syslog.send(@method, "Hello")
        end
      }.should output_to_fd("rubyspec: Hello\n", $stderr)
    end

    it "accepts sprintf arguments" do
      lambda {
        Syslog.open("rubyspec", Syslog::LOG_PERROR) do
          Syslog.send(@method, "Hello %s", "world")
          Syslog.send(@method, "%d dogs", 2)
        end
      }.should output_to_fd("rubyspec: Hello world\nrubyspec: 2 dogs\n", $stderr)
    end

    it "works as an alias for Syslog.log" do
      level = Syslog.const_get "LOG_#{@method.to_s.upcase}"
      response = "rubyspec: Hello\n"
      lambda {
        Syslog.open("rubyspec", Syslog::LOG_PERROR) do
          Syslog.send(@method, "Hello")
          Syslog.log(level, "Hello")
        end
        # make sure the same thing is written to $stderr.
      }.should output_to_fd(response * 2, $stderr)
    end
  end
end
