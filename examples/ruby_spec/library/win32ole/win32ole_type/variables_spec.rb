platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_TYPE#variables for Shell Controls" do
    before :each do
      @ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
    end

    after :each do
      @ole_type = nil
    end

    it "returns an empty array" do
      @ole_type.variables.should == []
    end

  end
end
