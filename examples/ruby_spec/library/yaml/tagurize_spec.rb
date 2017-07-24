require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

ruby_version_is ''...'2.5' do
  describe "YAML.tagurize" do
    it "converts a type_id to a taguri" do
      YAML.tagurize('wtf').should == "tag:yaml.org,2002:wtf"
      YAML.tagurize(1).should == 1
    end
  end
end
