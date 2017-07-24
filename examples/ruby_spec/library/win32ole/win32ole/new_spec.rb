require File.expand_path('../../fixtures/classes', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLESpecs.new_ole" do
    it "creates a WIN32OLE object from OLE server name" do
      shell = WIN32OLESpecs.new_ole 'Shell.Application'
      shell.should be_kind_of WIN32OLE
    end

    it "creates a WIN32OLE object from valid CLSID" do
      shell = WIN32OLESpecs.new_ole("{13709620-C279-11CE-A49E-444553540000}")
      shell.should be_kind_of WIN32OLE
    end

    it "raises TypeError if argument cannot be converted to String" do
      lambda { WIN32OLESpecs.new_ole(42) }.should raise_error( TypeError )
    end

    it "raises WIN32OLERuntimeError if invalid string is given" do
      lambda { WIN32OLESpecs.new_ole('foo') }.should raise_error( WIN32OLERuntimeError )
    end

  end

end
