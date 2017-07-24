require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/test_server', __FILE__)
require 'drb'

describe "DRb.start_service" do
  before :each do
    @server = DRb.start_service("druby://localhost:0", TestServer.new)
  end

  after :each do
    DRb.stop_service if @server
  end

  it "runs a basic remote call" do
    DRb.current_server.should == @server
    obj = DRbObject.new(nil, @server.uri)
    obj.add(1,2,3).should == 6
  end

  it "runs a basic remote call passing a block" do
    DRb.current_server.should == @server
    obj = DRbObject.new(nil, @server.uri)
    obj.add_yield(2) do |i|
      i.should == 2
      i+1
    end.should == 4
  end
end
