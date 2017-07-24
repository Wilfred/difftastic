platform_is :windows do
  require 'win32ole'

  describe :win32ole_variable_new, shared: true do
    # not sure how WIN32OLE_VARIABLE objects are supposed to be generated
    # WIN32OLE_VARIABLE.new even seg faults in some cases
    before :each do
      ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "ShellSpecialFolderConstants")
      @var = ole_type.variables[0]
    end

    it "returns a String" do
      @var.send(@method).should be_kind_of String
    end

  end

end
