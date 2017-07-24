platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_TYPE#helpfile for Shell Controls" do
    before :each do
      @ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
    end

    after :each do
      @ole_type = nil
    end

    it "returns an empty string" do
      @ole_type.helpfile.should be_empty
    end

  end
end
