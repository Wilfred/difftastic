require File.expand_path('../shared/name', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_METHOD#name" do
    it_behaves_like :win32ole_method_name, :name

  end

end
