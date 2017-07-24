platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_PARAM#retval?" do
    before :each do
      ole_type_detail = WIN32OLE_TYPE.new("Microsoft Scripting Runtime", "FileSystemObject")
      m_copyfile = WIN32OLE_METHOD.new(ole_type_detail, "CopyFile")
      @param_overwritefiles = m_copyfile.params[2]
    end

    it "raises ArgumentError if argument is given" do
      lambda { @param_overwritefiles.retval?(1) }.should raise_error ArgumentError
    end

    it "returns false for 3rd parameter of FileSystemObject's 'CopyFile' method" do
      @param_overwritefiles.retval?.should be_false
    end

  end

end
