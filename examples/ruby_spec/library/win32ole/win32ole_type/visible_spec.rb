platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_TYPE#visible? for Shell Controls" do
    before :each do
      @ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
    end

    after :each do
      @ole_type = nil
    end

    it "returns true" do
      @ole_type.visible?.should be_true
    end

  end
end
