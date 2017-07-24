platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_METHOD#event?" do
    before :each do
      ole_type = WIN32OLE_TYPE.new("Microsoft Internet Controls", "WebBrowser")
      @navigate_method = WIN32OLE_METHOD.new(ole_type, "NavigateComplete")
    end

    it "raises ArgumentError if argument is given" do
      lambda { @navigate_method.event?(1) }.should raise_error ArgumentError
    end

    it "returns true for browser's 'NavigateComplete' method" do
      @navigate_method.event?.should be_true
    end

  end

end
