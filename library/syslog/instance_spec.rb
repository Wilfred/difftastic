platform_is_not :windows do
  require File.expand_path('../../../spec_helper', __FILE__)
  require 'syslog'

  describe "Syslog.instance" do
    platform_is_not :windows do
      it "returns the module" do
        Syslog.instance.should == Syslog
      end
    end
  end
end
