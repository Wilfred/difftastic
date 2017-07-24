require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTP.new" do
  describe "when passed address" do
    before :each do
      @http = Net::HTTP.new("localhost")
    end

    it "returns a Net::HTTP instance" do
      @http.proxy?.should be_false
      @http.instance_of?(Net::HTTP).should be_true
    end

    it "sets the new Net::HTTP instance's address to the passed address" do
      @http.address.should == "localhost"
    end

    it "sets the new Net::HTTP instance's port to the default HTTP port" do
      @http.port.should eql(Net::HTTP.default_port)
    end

    it "does not start the new Net::HTTP instance" do
      @http.started?.should be_false
    end
  end

  describe "when passed address, port" do
    before :each do
      @http = Net::HTTP.new("localhost", 3333)
    end

    it "returns a Net::HTTP instance" do
      @http.proxy?.should be_false
      @http.instance_of?(Net::HTTP).should be_true
    end

    it "sets the new Net::HTTP instance's address to the passed address" do
      @http.address.should == "localhost"
    end

    it "sets the new Net::HTTP instance's port to the passed port" do
      @http.port.should eql(3333)
    end

    it "does not start the new Net::HTTP instance" do
      @http.started?.should be_false
    end
  end

  describe "when passed address, port, *proxy_options" do
    it "returns a Net::HTTP instance" do
      http = Net::HTTP.new("localhost", 3333, "localhost")
      http.proxy?.should be_true
      http.instance_of?(Net::HTTP).should be_true
      http.should be_kind_of(Net::HTTP)
    end

    it "correctly sets the passed Proxy options" do
      http = Net::HTTP.new("localhost", 3333, "localhost")
      http.proxy_address.should == "localhost"
      http.proxy_port.should eql(80)
      http.proxy_user.should be_nil
      http.proxy_pass.should be_nil

      http = Net::HTTP.new("localhost", 3333, "localhost", 1234)
      http.proxy_address.should == "localhost"
      http.proxy_port.should eql(1234)
      http.proxy_user.should be_nil
      http.proxy_pass.should be_nil

      http = Net::HTTP.new("localhost", 3333, "localhost", 1234, "rubyspec")
      http.proxy_address.should == "localhost"
      http.proxy_port.should eql(1234)
      http.proxy_user.should == "rubyspec"
      http.proxy_pass.should be_nil

      http = Net::HTTP.new("localhost", 3333, "localhost", 1234, "rubyspec", "rocks")
      http.proxy_address.should == "localhost"
      http.proxy_port.should eql(1234)
      http.proxy_user.should == "rubyspec"
      http.proxy_pass.should == "rocks"
    end
  end

end
