require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../../shared/parse', __FILE__)

describe "URI::Parser#parse" do
  it_behaves_like :uri_parse, :parse, URI::Parser.new
end
