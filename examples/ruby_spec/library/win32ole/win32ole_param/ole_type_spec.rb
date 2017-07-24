platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_PARAM#ole_type" do
    before :each do
      ole_type = WIN32OLE_TYPE.new("Microsoft Scripting Runtime", "FileSystemObject")
      m_copyfile = WIN32OLE_METHOD.new(ole_type, "CopyFile")
      @param_overwritefiles = m_copyfile.params[2]
    end

    it "raises ArgumentError if argument is given" do
      lambda { @param_overwritefiles.ole_type(1) }.should raise_error ArgumentError
    end

    it "returns 'BOOL' for 3rd parameter of FileSystemObject's 'CopyFile' method" do
      @param_overwritefiles.ole_type.should == 'BOOL'
    end

  end

end
