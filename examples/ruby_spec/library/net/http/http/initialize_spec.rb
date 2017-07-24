require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTP#initialize" do
  it "is private" do
    Net::HTTP.should have_private_instance_method(:initialize)
  end

  describe "when passed address" do
    before :each do
      @net = Net::HTTP.allocate
      @net.send(:initialize, "localhost")
    end

    it "sets the new Net::HTTP instance's address to the passed address" do
      @net.address.should == "localhost"
    end

    it "sets the new Net::HTTP instance's port to the default HTTP port" do
      @net.port.should eql(Net::HTTP.default_port)
    end

    it "does not start the new Net::HTTP instance" do
      @net.started?.should be_false
    end
  end

  describe "when passed address, port" do
    before :each do
      @net = Net::HTTP.allocate
      @net.send(:initialize, "localhost", 3333)
    end

    it "sets the new Net::HTTP instance's address to the passed address" do
      @net.address.should == "localhost"
    end

    it "sets the new Net::HTTP instance's port to the passed port" do
      @net.port.should eql(3333)
    end

    it "does not start the new Net::HTTP instance" do
      @net.started?.should be_false
    end
  end
end
