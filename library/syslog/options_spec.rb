platform_is_not :windows do
  require File.expand_path('../../../spec_helper', __FILE__)
  require 'syslog'

  describe "Syslog.options" do
    platform_is_not :windows do

      before :each do
        Syslog.opened?.should be_false
      end

      after :each do
        Syslog.opened?.should be_false
      end

      it "returns the logging options" do
        Syslog.open("rubyspec", Syslog::LOG_PID)
        Syslog.options.should == Syslog::LOG_PID
        Syslog.close
      end

      it "returns nil when the log is closed" do
        Syslog.opened?.should be_false
        Syslog.options.should == nil
      end

      it "defaults to LOG_PID | LOG_CONS" do
        Syslog.open
        Syslog.options.should == Syslog::LOG_PID | Syslog::LOG_CONS
        Syslog.close
      end

      it "resets after each open call" do
        Syslog.open
        Syslog.options.should == Syslog::LOG_PID | Syslog::LOG_CONS

        Syslog.open!("rubyspec", Syslog::LOG_PID)
        Syslog.options.should == Syslog::LOG_PID
        Syslog.close

        Syslog.open
        Syslog.options.should == Syslog::LOG_PID | Syslog::LOG_CONS
        Syslog.close
      end
    end
  end
end
