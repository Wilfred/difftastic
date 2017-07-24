require File.expand_path('../../fixtures/classes', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE class" do
    it "defines constant CP_ACP" do
      WIN32OLE::CP_ACP.should == 0
    end

    it "defines constant CP_OEMCP" do
      WIN32OLE::CP_OEMCP.should == 1
    end

    it "defines constant CP_MACCP" do
      WIN32OLE::CP_MACCP.should == 2
    end

    it "defines constant CP_THREAD_ACP" do
      WIN32OLE::CP_THREAD_ACP.should == 3
    end

    it "defines constant CP_SYMBOL" do
      WIN32OLE::CP_SYMBOL.should == 42
    end

    it "defines constant CP_UTF7" do
      WIN32OLE::CP_UTF7.should == 65000
    end

    it "defines constant CP_UTF8" do
      WIN32OLE::CP_UTF8.should == 65001
    end

    it "defines constant LOCALE_SYSTEM_DEFAULT" do
      WIN32OLE::LOCALE_SYSTEM_DEFAULT.should == 0x0800
    end

    it "defines constant LOCALE_USER_DEFAULT" do
      WIN32OLE::LOCALE_USER_DEFAULT.should == 0x0400
    end
  end

end
