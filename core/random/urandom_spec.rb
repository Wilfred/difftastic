# -*- encoding: binary -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/urandom', __FILE__)

ruby_version_is "2.3"..."2.5" do
  describe "Random.raw_seed" do
    it_behaves_like :random_urandom, :raw_seed
  end
end
