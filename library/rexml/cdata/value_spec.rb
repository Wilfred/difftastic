require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/to_s', __FILE__)
require 'rexml/document'

describe "REXML::CData#value" do
  it_behaves_like :rexml_cdata_to_s, :value
end
