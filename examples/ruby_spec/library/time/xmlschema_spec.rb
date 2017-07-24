require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/xmlschema', __FILE__)
require 'time'

describe "Time.xmlschema" do
  it_behaves_like :time_xmlschema, :xmlschema
end
