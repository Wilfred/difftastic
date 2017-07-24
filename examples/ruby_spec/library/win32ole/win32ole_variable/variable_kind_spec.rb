platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_VARIABLE#variable_kind" do
    # not sure how WIN32OLE_VARIABLE objects are supposed to be generated
    # WIN32OLE_VARIABLE.new even seg faults in some cases
    before :each do
      ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "ShellSpecialFolderConstants")
      @var = ole_type.variables[0]
    end

    it "returns a String" do
      @var.variable_kind.should be_kind_of String
      @var.variable_kind.should == 'CONSTANT'
    end

  end

end
