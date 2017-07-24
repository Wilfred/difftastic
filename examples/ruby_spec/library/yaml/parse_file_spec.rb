require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "YAML#parse_file" do
  quarantine! do
    it "returns a YAML::Syck::Map object after parsing a YAML file" do
      YAML.parse_file($test_parse_file).should be_kind_of(YAML::Syck::Map)
    end
  end
end
