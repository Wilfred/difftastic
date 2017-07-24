platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_TYPE#guid for Shell Controls" do
    before :each do
      @ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
    end

    after :each do
      @ole_type = nil
    end

    it "returns String with expected format" do
      @ole_type.guid.should =~ /\A\{[0-9A-F]{8}-[0-9A-F]{4}-[0-9A-F]{4}-[0-9A-F]{4}-[0-9A-F]{12}\}\z/
    end

  end
end
