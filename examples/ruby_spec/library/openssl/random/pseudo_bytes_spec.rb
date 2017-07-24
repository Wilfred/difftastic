require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/random_bytes.rb', __FILE__)

if defined?(OpenSSL::Random.pseudo_bytes)
  describe "OpenSSL::Random.pseudo_bytes" do
    it_behaves_like :openssl_random_bytes, :pseudo_bytes
  end
end
