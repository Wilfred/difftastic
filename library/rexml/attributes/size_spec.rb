require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/length', __FILE__)
require 'rexml/document'

describe "REXML::Attributes#size" do
 it_behaves_like :rexml_attribute_length, :size
end
