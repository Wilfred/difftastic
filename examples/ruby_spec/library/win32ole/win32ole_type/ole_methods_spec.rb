platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_TYPE#ole_methods for Shell Controls" do
    before :each do
      @ole_type = WIN32OLE_TYPE.new("Microsoft Shell Controls And Automation", "Shell")
    end

    after :each do
      @ole_type = nil
    end

    it "returns an Integer" do
      @ole_type.ole_methods.all? { |m| m.kind_of? WIN32OLE_METHOD }.should be_true
    end

  end
end
