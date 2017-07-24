platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_METHOD#helpcontext" do
    before :each do
      ole_type = WIN32OLE_TYPE.new("Microsoft Internet Controls", "WebBrowser")
      @navigate_method = WIN32OLE_METHOD.new(ole_type, "NavigateComplete")
      ole_type = WIN32OLE_TYPE.new("Microsoft Scripting Runtime", "File")
      @m_file_name = WIN32OLE_METHOD.new(ole_type, "name")
    end

    it "raises ArgumentError if argument is given" do
      lambda { @navigate_method.helpcontext(1) }.should raise_error ArgumentError
    end

    it "returns expected value for browser's 'NavigateComplete' method" do
      @navigate_method.helpcontext.should == 0
    end

    it "returns expected value for Scripting Runtime's 'name' method" do
      @m_file_name.helpcontext.should == 2181996 # value indicated in MRI's test
    end

  end

end
