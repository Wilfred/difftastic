require File.expand_path('../../../fixtures/classes', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe :win32ole_ole_method, shared: true do
    before :each do
      @ie = WIN32OLESpecs.new_ole('InternetExplorer.Application')
    end

    after :each do
      @ie.Quit
    end

    it "raises ArgumentError if no argument is given" do
      lambda { @ie.send(@method) }.should raise_error ArgumentError
    end

    it "returns the WIN32OLE_METHOD 'Quit' if given 'Quit'" do
      result = @ie.send(@method, "Quit")
      result.kind_of?(WIN32OLE_METHOD).should be_true
      result.name.should == 'Quit'
    end
  end
end
