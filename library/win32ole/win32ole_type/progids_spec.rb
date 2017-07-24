platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_TYPE.progids" do
    it "raises ArgumentError if an argument is given" do
      lambda { WIN32OLE_TYPE.progids(1) }.should raise_error ArgumentError
    end

    it "returns an array containing 'Shell.Explorer'" do
      WIN32OLE_TYPE.progids().include?('Shell.Explorer').should be_true
    end

  end
end
