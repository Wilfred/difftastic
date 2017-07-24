# -*- encoding: binary -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/urandom', __FILE__)

ruby_version_is "2.5" do
  describe "Random.urandom" do
    it_behaves_like :random_urandom, :urandom
  end
end
