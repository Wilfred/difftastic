require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/ole_method', __FILE__)

platform_is :windows do
  require 'win32ole'

  describe "WIN32OLE#ole_method" do
    it_behaves_like :win32ole_ole_method, :ole_method

  end

end
