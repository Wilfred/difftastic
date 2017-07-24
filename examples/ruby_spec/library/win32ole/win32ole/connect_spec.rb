require File.expand_path('../../fixtures/classes', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE.connect" do
    it "creates WIN32OLE object given valid argument" do
      obj = WIN32OLE.connect("winmgmts:")
      obj.should be_kind_of WIN32OLE
    end

    it "raises TypeError when given invalid argument" do
      lambda { WIN32OLE.connect 1 }.should raise_error TypeError
    end

  end
end
