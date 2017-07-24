platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_TYPE#ole_type for Shell Controls" do
    before :each do
      @ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
    end

    after :each do
      @ole_type = nil
    end

    it "returns string 'Class'" do
      @ole_type.ole_type.should == "Class"
    end

  end
end
