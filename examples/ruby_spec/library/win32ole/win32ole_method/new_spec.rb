platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_METHOD.new" do
    before :each do
      @ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
    end

    it "raises TypeError when given non-strings" do
      lambda { WIN32OLE_METHOD.new(1, 2) }.should raise_error TypeError
    end

    it "raises ArgumentError if only 1 arugment is given" do
      lambda { WIN32OLE_METHOD.new("hello") }.should raise_error ArgumentError
      lambda { WIN32OLE_METHOD.new(@ole_type) }.should raise_error ArgumentError
    end

    it "returns a valid WIN32OLE_METHOD object" do
      WIN32OLE_METHOD.new(@ole_type, "Open").should be_kind_of WIN32OLE_METHOD
      WIN32OLE_METHOD.new(@ole_type, "open").should be_kind_of WIN32OLE_METHOD
    end

    it "raises WIN32OLERuntimeError if the method does not exist" do
      lambda { WIN32OLE_METHOD.new(@ole_type, "NonexistentMethod") }.should raise_error WIN32OLERuntimeError
    end

    it "raises TypeError if second argument is not a String" do
      lambda { WIN32OLE_METHOD.new(@ole_type, 5) }.should raise_error TypeError
    end

  end

end
