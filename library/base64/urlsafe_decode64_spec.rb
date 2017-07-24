require File.expand_path('../../../spec_helper', __FILE__)

require 'base64'

describe "Base64#urlsafe_decode64" do
  it "uses '_' instead of '/'" do
    decoded = Base64.urlsafe_decode64("V2hlcmUgYW0gST8gV2hvIGFtIEk_IEFtIEk_IEk_")
    decoded.should == 'Where am I? Who am I? Am I? I?'
  end

  it "uses '-' instead of '+'" do
    decoded = Base64.urlsafe_decode64('IkJlaW5nIGRpc2ludGVncmF0ZWQgbWFrZXMgbWUgdmUtcnkgYW4tZ3J5ISIgPGh1ZmYsIGh1ZmY-')
    decoded.should == '"Being disintegrated makes me ve-ry an-gry!" <huff, huff>'
  end

  ruby_version_is ""..."2.3" do
    it "requires padding" do
      lambda { Base64.urlsafe_decode64("MQ") }.should raise_error(ArgumentError)
    end
  end

  ruby_version_is "2.3" do
    it "does not require padding" do
      Base64.urlsafe_decode64("MQ").should == "1"
    end
  end
end
