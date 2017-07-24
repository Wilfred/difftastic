platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_PARAM#default" do
    before :each do
      ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
      m_browse_for_folder = WIN32OLE_METHOD.new(ole_type, "BrowseForFolder")
      @params = m_browse_for_folder.params

      ole_type = WIN32OLE_TYPE.new("Microsoft Scripting Runtime", "FileSystemObject")
      m_copyfile = WIN32OLE_METHOD.new(ole_type, "CopyFile")
      @param_overwritefiles = m_copyfile.params[2]
    end

    it "raises ArgumentError if argument is given" do
      lambda { @params[0].default(1) }.should raise_error ArgumentError
    end

    it "returns nil for each of WIN32OLE_PARAM for Shell's 'BrowseForFolder' method" do
      @params.each do |p|
        p.default.should be_nil
      end
    end

    it "returns true for 3rd parameter of FileSystemObject's 'CopyFile' method" do
      @param_overwritefiles.default.should == true # not be_true
    end

  end

end
