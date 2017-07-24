platform_is_not :windows do
  require File.expand_path('../../../spec_helper', __FILE__)
  require File.expand_path('../shared/reopen', __FILE__)
  require 'syslog'

  describe "Syslog.reopen" do
    it_behaves_like :syslog_reopen, :reopen
  end
end
