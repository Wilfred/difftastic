require File.expand_path('../../fixtures/classes', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE.locale" do
    it "gets locale" do
      WIN32OLE.locale.should == WIN32OLE::LOCALE_SYSTEM_DEFAULT
    end
  end

  describe "WIN32OLE.locale=" do
    it "sets locale to Japanese, if available" do
      begin
        begin
          WIN32OLE.locale = 1041
        rescue WIN32OLERuntimeError
          STDERR.puts("\n#{__FILE__}:#{__LINE__}:#{self.class.name}.test_s_locale_set is skipped(Japanese locale is not installed)")
          return
        end

        WIN32OLE.locale.should == 1041
        WIN32OLE.locale = WIN32OLE::LOCALE_SYSTEM_DEFAULT
        lambda { WIN32OLE.locale = 111 }.should raise_error WIN32OLERuntimeError
        WIN32OLE.locale.should == WIN32OLE::LOCALE_SYSTEM_DEFAULT
      ensure
        WIN32OLE.locale.should == WIN32OLE::LOCALE_SYSTEM_DEFAULT
      end
    end
  end
end
