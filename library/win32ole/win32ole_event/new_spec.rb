require File.expand_path('../../fixtures/classes', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_EVENT.new" do
    before :each do
      @ie = WIN32OLESpecs.new_ole('InternetExplorer.Application')
    end

    after :each do
      @ie.Quit if @ie
    end

    it "raises TypeError given invalid argument" do
      lambda { WIN32OLE_EVENT.new "A" }.should raise_error TypeError
    end

    it "raises RuntimeError if event does not exist" do
      lambda { WIN32OLE_EVENT.new(@ie, 'A') }.should raise_error RuntimeError
    end

    it "raises RuntimeError if OLE object has no events" do
      dict = WIN32OLESpecs.new_ole('Scripting.Dictionary')
      lambda { WIN32OLE_EVENT.new(dict) }.should raise_error RuntimeError
    end

    it "creates WIN32OLE_EVENT object" do
      ev = WIN32OLE_EVENT.new(@ie, 'DWebBrowserEvents')
      ev.should be_kind_of WIN32OLE_EVENT
    end
  end
end
