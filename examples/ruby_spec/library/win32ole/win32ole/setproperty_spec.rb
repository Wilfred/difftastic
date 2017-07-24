require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/setproperty', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE#setproperty" do
    it_behaves_like :win32ole_setproperty, :setproperty

  end

end
