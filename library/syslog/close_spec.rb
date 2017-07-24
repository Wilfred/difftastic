platform_is_not :windows do
  require File.expand_path('../../../spec_helper', __FILE__)
  require 'syslog'

  describe "Syslog.close" do
    platform_is_not :windows do

      before :each do
        Syslog.opened?.should be_false
      end

      after :each do
        Syslog.opened?.should be_false
      end

      it "closes the log" do
        Syslog.opened?.should be_false
        Syslog.open
        Syslog.opened?.should be_true
        Syslog.close
        Syslog.opened?.should be_false
      end

      it "raises a RuntimeError if the log's already closed" do
        lambda { Syslog.close }.should raise_error(RuntimeError)
      end

      it "it does not work inside blocks" do
        lambda {
          Syslog.open { |s| s.close }
        }.should raise_error(RuntimeError)
        Syslog.opened?.should == false
      end

      it "sets the identity to nil" do
        Syslog.open("rubyspec")
        Syslog.ident.should == "rubyspec"
        Syslog.close
        Syslog.ident.should be_nil
      end

      it "sets the options to nil" do
        Syslog.open("rubyspec", Syslog::LOG_PID)
        Syslog.options.should == Syslog::LOG_PID
        Syslog.close
        Syslog.options.should == nil
      end

      it "sets the facility to nil" do
        Syslog.open
        Syslog.facility.should == 8
        Syslog.close
        Syslog.facility.should == nil
      end
    end
  end
end
