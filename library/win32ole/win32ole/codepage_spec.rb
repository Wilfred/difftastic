require File.expand_path('../../fixtures/classes', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE.codepage=" do
    it "sets codepage" do
      cp = WIN32OLE.codepage
      WIN32OLE.codepage = WIN32OLE::CP_UTF8
      WIN32OLE.codepage.should == WIN32OLE::CP_UTF8
      WIN32OLE.codepage = cp
    end
  end

end
