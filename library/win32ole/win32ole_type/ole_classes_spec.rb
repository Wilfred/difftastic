platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_TYPE.ole_classes for Shell Controls" do
    before :each do
      @ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
    end

    after :each do
      @ole_type = nil
    end

    it "returns array of WIN32OLE_TYPEs" do
      WIN32OLE_TYPE.ole_classes("Microsoft Shell Controls And Automation").all? {|e| e.kind_of? WIN32OLE_TYPE }.should be_true
    end

  end
end
