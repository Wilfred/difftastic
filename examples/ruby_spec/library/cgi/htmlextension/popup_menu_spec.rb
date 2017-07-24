require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'
require File.expand_path('../fixtures/common', __FILE__)
require File.expand_path('../shared/popup_menu', __FILE__)

describe "CGI::HtmlExtension#popup_menu" do
  it_behaves_like :cgi_htmlextension_popup_menu, :popup_menu
end
