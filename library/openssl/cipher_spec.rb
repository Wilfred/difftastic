require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/constants', __FILE__)
require 'openssl'

describe "OpenSSL::Cipher's CipherError" do
  it "exists under OpenSSL::Cipher namespace" do
    OpenSSL::Cipher.should have_constant :CipherError
  end
end
