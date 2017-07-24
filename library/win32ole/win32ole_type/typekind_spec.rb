platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_TYPE#typekind for Shell Controls" do
    before :each do
      @ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
    end

    after :each do
      @ole_type = nil
    end

    it "returns an Integer" do
      @ole_type.typekind.should be_kind_of Integer
    end

  end
end
