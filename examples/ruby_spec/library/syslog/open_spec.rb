platform_is_not :windows do
  require File.expand_path('../../../spec_helper', __FILE__)
  require File.expand_path('../shared/reopen', __FILE__)
  require 'syslog'

  describe "Syslog.open" do
    platform_is_not :windows do

      before :each do
        Syslog.opened?.should be_false
      end

      after :each do
        Syslog.opened?.should be_false
      end

      it "returns the module" do
        Syslog.open.should == Syslog
        Syslog.close
        Syslog.open("Test", 5, 9).should == Syslog
        Syslog.close
      end

      it "receives an identity as first argument" do
        Syslog.open("rubyspec")
        Syslog.ident.should == "rubyspec"
        Syslog.close
      end

      it "defaults the identity to $0" do
        Syslog.open
        Syslog.ident.should == $0
        Syslog.close
      end

      it "receives the logging options as second argument" do
        Syslog.open("rubyspec", Syslog::LOG_PID)
        Syslog.options.should == Syslog::LOG_PID
        Syslog.close
      end

      it "defaults the logging options to LOG_PID | LOG_CONS" do
        Syslog.open
        Syslog.options.should == Syslog::LOG_PID | Syslog::LOG_CONS
        Syslog.close
      end

      it "receives a facility as third argument" do
        Syslog.open("rubyspec", Syslog::LOG_PID, 0)
        Syslog.facility.should == 0
        Syslog.close
      end

      it "defaults the facility to LOG_USER" do
        Syslog.open
        Syslog.facility.should == Syslog::LOG_USER
        Syslog.close
      end

      it "receives a block and calls it with the module" do
        Syslog.open("rubyspec", 3, 8) do |s|
          s.should == Syslog
          s.ident.should == "rubyspec"
          s.options.should == 3
          s.facility.should == Syslog::LOG_USER
        end
      end

      it "closes the log if after it receives a block" do
        Syslog.open{ }
        Syslog.opened?.should be_false
      end

      it "raises an error if the log is opened" do
        Syslog.open
        lambda { Syslog.open}.should raise_error
        lambda { Syslog.close; Syslog.open }.should_not raise_error
        Syslog.close
      end
    end
  end

  describe "Syslog.open!" do
    it_behaves_like :syslog_reopen, :open!
  end
end
