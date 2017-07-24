platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_TYPE#helpstring for Shell Controls" do
    before :each do
      @ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
    end

    after :each do
      @ole_type = nil
    end

    it "returns expected string" do
      @ole_type.helpstring.should == "Shell Object Type Information"
    end

  end
end
