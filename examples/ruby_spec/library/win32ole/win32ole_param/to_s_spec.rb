require File.expand_path('../shared/name', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE_PARAM#to_s" do
    it_behaves_like :win32ole_param_name, :to_s

  end

end
