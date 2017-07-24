platform_is :windows do
  require 'win32ole'

  describe :win32ole_param_name, shared: true do
    before :each do
      ole_type_detail = WIN32OLE_TYPE.new("Microsoft Scripting Runtime", "FileSystemObject")
      m_copyfile = WIN32OLE_METHOD.new(ole_type_detail, "CopyFile")
      @param_overwritefiles = m_copyfile.params[2]
    end

    it "raises ArgumentError if argument is given" do
      lambda { @param_overwritefiles.send(@method, 1) }.should raise_error ArgumentError
    end

    it "returns expected value for Scripting Runtime's 'name' method" do
      @param_overwritefiles.send(@method).should == 'OverWriteFiles' # note the capitalization
    end

  end

end
