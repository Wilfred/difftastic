platform_is_not :windows do
  require File.expand_path('../../../spec_helper', __FILE__)
  require 'syslog'

  describe "Syslog::Constants" do
    platform_is_not :windows, :solaris, :aix do
      before :all do
        @constants = %w(LOG_AUTHPRIV LOG_USER LOG_LOCAL2 LOG_NOTICE LOG_NDELAY
                      LOG_SYSLOG LOG_ALERT LOG_FTP LOG_LOCAL5 LOG_ERR LOG_AUTH
                      LOG_LOCAL1 LOG_ODELAY LOG_NEWS LOG_DAEMON LOG_LOCAL4
                      LOG_CRIT LOG_INFO LOG_PERROR LOG_LOCAL0 LOG_CONS LOG_LPR
                      LOG_LOCAL7 LOG_WARNING LOG_CRON LOG_LOCAL3 LOG_EMERG
                      LOG_NOWAIT LOG_UUCP LOG_PID LOG_KERN LOG_MAIL LOG_LOCAL6
                      LOG_DEBUG)
      end

      it "includes the Syslog constants" do
        @constants.each do |c|
          Syslog::Constants.should have_constant(c)
        end
      end
    end

    # The masks are defined in <syslog.h>

    describe "Syslog::Constants.LOG_MASK" do
      it "returns the mask value for a priority" do
        Syslog::Constants.LOG_MASK(Syslog::LOG_DEBUG).should == 128
        Syslog::Constants.LOG_MASK(Syslog::LOG_WARNING).should == 16
      end
    end

    describe "Syslog::Constants.LOG_UPTO" do
      it "returns a mask for the priorities up to a given argument" do
        Syslog::Constants.LOG_UPTO(Syslog::LOG_ALERT).should == 3
        Syslog::Constants.LOG_UPTO(Syslog::LOG_DEBUG).should == 255
      end
    end
  end
end
