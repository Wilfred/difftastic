require File.expand_path('../shared/name', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_VARIABLE#name" do
    it_behaves_like :win32ole_variable_new, :name

  end

end
