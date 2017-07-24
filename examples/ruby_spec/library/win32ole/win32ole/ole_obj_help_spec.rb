require File.expand_path('../../fixtures/classes', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE#ole_obj_help" do
    before :each do
      @ie = WIN32OLESpecs.new_ole('InternetExplorer.Application')
    end

    after :each do
      @ie.Quit
    end

    it "raises ArgumentError if argument is given" do
      lambda { @ie.ole_obj_help(1) }.should raise_error ArgumentError
    end

    it "returns an instance of WIN32OLE_TYPE" do
      @ie.ole_obj_help.kind_of?(WIN32OLE_TYPE).should be_true
    end
  end
end
