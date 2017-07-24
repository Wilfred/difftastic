platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_METHOD#event_interface" do
    before :each do
      ole_type = WIN32OLE_TYPE.new("Microsoft Internet Controls", "WebBrowser")
      @navigate_method = WIN32OLE_METHOD.new(ole_type, "NavigateComplete")
      ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
      @namespace_method = WIN32OLE_METHOD.new(ole_type, "namespace")
    end

    it "raises ArgumentError if argument is given" do
      lambda { @navigate_method.event_interface(1) }.should raise_error ArgumentError
    end

    it "returns expected string for browser's 'NavigateComplete' method" do
      @navigate_method.event_interface.should == "DWebBrowserEvents"
    end

    it "returns nil if method has no event interface" do
      @namespace_method.event_interface.should be_nil
    end

  end

end
