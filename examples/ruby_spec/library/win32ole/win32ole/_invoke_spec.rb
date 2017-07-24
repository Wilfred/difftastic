require File.expand_path('../../fixtures/classes', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE#_invoke" do
    before :each do
      @shell = WIN32OLESpecs.new_ole 'Shell.application'
    end

    it "raises ArgumentError if insufficient number of arguments are given" do
      lambda { @shell._invoke() }.should raise_error ArgumentError
      lambda { @shell._invoke(0) }.should raise_error ArgumentError
      lambda { @shell._invoke(0, []) }.should raise_error ArgumentError
    end

    it "dispatches the method bound to a specific ID" do
      @shell._invoke(0x60020002, [37], [WIN32OLE::VARIANT::VT_VARIANT]).title.should =~ /System32/i
    end

  end

end
