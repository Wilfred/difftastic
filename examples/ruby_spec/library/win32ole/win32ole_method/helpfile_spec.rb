platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_METHOD#helpfile" do
    before :each do
      ole_type = WIN32OLE_TYPE.new("Microsoft Scripting Runtime", "File")
      @m_file_name = WIN32OLE_METHOD.new(ole_type, "name")
    end

    it "raises ArgumentError if argument is given" do
      lambda { @m_file_name.helpfile(1) }.should raise_error ArgumentError
    end

    it "returns expected value for Scripting Runtime's 'File' method" do
      @m_file_name.helpfile.should =~ /VBENLR.*\.CHM$/i
    end

  end

end
