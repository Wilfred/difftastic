# -*- encoding: binary -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

require 'socket'

describe "Socket#gethostbyname" do
  it "returns broadcast address info for '<broadcast>'" do
    addr = Socket.gethostbyname('<broadcast>');
    addr.should == ["255.255.255.255", [], 2, "\377\377\377\377"]
  end

  it "returns broadcast address info for '<any>'" do
    addr = Socket.gethostbyname('<any>');
    addr.should == ["0.0.0.0", [], 2, "\000\000\000\000"]
  end
end
