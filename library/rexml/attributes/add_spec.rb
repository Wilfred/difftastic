require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/add', __FILE__)
require 'rexml/document'

describe "REXML::Attributes#add" do
 it_behaves_like :rexml_attribute_add, :add
end
