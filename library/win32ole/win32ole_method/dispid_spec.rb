platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_METHOD#dispid" do
    before :each do
      ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
      @m = WIN32OLE_METHOD.new(ole_type, "namespace")
    end

    it "raises ArgumentError if argument is given" do
      lambda { @m.dispid(0) }.should raise_error ArgumentError
    end

    it "returns expected dispatch ID for Shell's 'namespace' method" do
      @m.dispid.should == 1610743810 # value found in MRI's test
    end

  end

end
