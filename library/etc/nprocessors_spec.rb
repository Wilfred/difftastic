require File.expand_path('../../../spec_helper', __FILE__)
require 'etc'

ruby_version_is "2.2" do
  describe "Etc.nprocessors" do
    it "returns the number of online processors" do
      Etc.nprocessors.should be_kind_of(Integer)
      Etc.nprocessors.should >= 1
    end
  end
end
