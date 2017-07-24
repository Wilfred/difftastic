platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_METHOD#size_params" do
    before :each do
      ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
      @m_browse_for_folder = WIN32OLE_METHOD.new(ole_type, "BrowseForFolder")
    end

    it "raises ArgumentError if argument is given" do
      lambda { @m_browse_for_folder.size_params(1) }.should raise_error ArgumentError
    end

    it "returns expected value for Shell Control's 'BrowseForFolder' method" do
      @m_browse_for_folder.size_params.should == 4
    end

  end

end
