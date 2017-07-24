platform_is_not :windows do
  require File.expand_path('../../../spec_helper', __FILE__)
  require 'syslog'

  describe "Syslog.facility" do
    platform_is_not :windows do

      before :each do
        Syslog.opened?.should be_false
      end

      after :each do
        Syslog.opened?.should be_false
      end

      it "returns the logging facility" do
        Syslog.open("rubyspec", 3, Syslog::LOG_MAIL)
        Syslog.facility.should == Syslog::LOG_MAIL
        Syslog.close
      end

      it "returns nil if the log is closed" do
        Syslog.opened?.should be_false
        Syslog.facility.should == nil
      end

      it "defaults to LOG_USER" do
        Syslog.open
        Syslog.facility.should == Syslog::LOG_USER
        Syslog.close
      end

      it "resets after each open call" do
        Syslog.open
        Syslog.facility.should == Syslog::LOG_USER

        Syslog.open!("rubyspec", 3, Syslog::LOG_MAIL)
        Syslog.facility.should == Syslog::LOG_MAIL
        Syslog.close

        Syslog.open
        Syslog.facility.should == Syslog::LOG_USER
        Syslog.close
      end
    end
  end
end
