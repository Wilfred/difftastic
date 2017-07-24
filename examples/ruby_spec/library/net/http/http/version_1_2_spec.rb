require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../shared/version_1_2', __FILE__)

describe "Net::HTTP.version_1_2" do
  it "turns on net/http 1.2 features" do
    Net::HTTP.version_1_2

    Net::HTTP.version_1_2?.should be_true
    Net::HTTP.version_1_1?.should be_false
  end

  it "returns true" do
    Net::HTTP.version_1_2.should be_true
  end
end

describe "Net::HTTP.version_1_2?" do
  it_behaves_like :net_http_version_1_2_p, :version_1_2?
end
