describe :syslog_reopen, shared: true do
  platform_is_not :windows do
    before :each do
      Syslog.opened?.should be_false
    end

    after :each do
      Syslog.opened?.should be_false
    end

    it "reopens the log" do
      Syslog.open
      lambda { Syslog.send(@method)}.should_not raise_error
      Syslog.opened?.should be_true
      Syslog.close
    end

    it "fails with RuntimeError if the log is closed" do
      lambda { Syslog.send(@method)}.should raise_error(RuntimeError)
    end

    it "receives the same parameters as Syslog.open" do
      Syslog.open
      Syslog.send(@method, "rubyspec", 3, 8) do |s|
        s.should == Syslog
        s.ident.should == "rubyspec"
        s.options.should == 3
        s.facility.should == Syslog::LOG_USER
        s.opened?.should be_true
      end
      Syslog.opened?.should be_false
    end

    it "returns the module" do
      Syslog.open
      Syslog.send(@method).should == Syslog
      Syslog.close
    end
  end
end
