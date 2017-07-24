require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#type_params" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "returns additional 'Content-Type' information as a Hash" do
    @headers["Content-Type"] = "text/html;charset=utf-8"
    @headers.type_params.should == {"charset" => "utf-8"}

    @headers["Content-Type"] = "text/html; charset=utf-8; rubyspec=rocks"
    @headers.type_params.should == {"charset" => "utf-8", "rubyspec" => "rocks"}
  end

  it "returns an empty Hash when no additional 'Content-Type' information is set" do
    @headers.type_params.should == {}

    @headers["Content-Type"] = "text/html"
    @headers.type_params.should == {}
  end
end
