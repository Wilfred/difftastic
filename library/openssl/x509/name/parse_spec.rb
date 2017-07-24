require File.expand_path('../../../../../spec_helper', __FILE__)
require 'openssl'

describe "OpenSSL::X509::Name.parse" do
  it "parses a /-delimited string of key-value pairs into a Name" do
    dn = "/DC=org/DC=ruby-lang/CN=www.ruby-lang.org"
    name = OpenSSL::X509::Name.parse(dn)

    name.to_s.should == dn

    ary = name.to_a

    ary[0][0].should == "DC"
    ary[1][0].should == "DC"
    ary[2][0].should == "CN"
    ary[0][1].should == "org"
    ary[1][1].should == "ruby-lang"
    ary[2][1].should == "www.ruby-lang.org"
    ary[0][2].should == OpenSSL::ASN1::IA5STRING
    ary[1][2].should == OpenSSL::ASN1::IA5STRING
    ary[2][2].should == OpenSSL::ASN1::UTF8STRING
  end

  it "parses a comma-delimited string of key-value pairs into a name" do
    dn = "DC=org, DC=ruby-lang, CN=www.ruby-lang.org"
    name = OpenSSL::X509::Name.parse(dn)

    name.to_s.should == "/DC=org/DC=ruby-lang/CN=www.ruby-lang.org"

    ary = name.to_a

    ary[0][1].should == "org"
    ary[1][1].should == "ruby-lang"
    ary[2][1].should == "www.ruby-lang.org"
  end

  it "raises TypeError if the given string contains no key/value pairs" do
    lambda do
      OpenSSL::X509::Name.parse("hello")
    end.should raise_error(TypeError)
  end

  it "raises OpenSSL::X509::NameError if the given string contains invalid keys" do
    lambda do
      OpenSSL::X509::Name.parse("hello=goodbye")
    end.should raise_error(OpenSSL::X509::NameError)
  end
end
