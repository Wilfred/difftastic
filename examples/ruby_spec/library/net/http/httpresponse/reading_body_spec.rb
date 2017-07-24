require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require "stringio"

describe "Net::HTTPResponse#reading_body" do
  before :each do
    @res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    @socket = Net::BufferedIO.new(StringIO.new("test body"))
  end

  describe "when body_allowed is true" do
    it "reads and returns the response body for self from the passed socket" do
      @res.reading_body(@socket, true) {}.should == "test body"
      @res.body.should == "test body"
    end

    it "yields the passed block before reading the body" do
      yielded = false

      @res.reading_body(@socket, true) do
        @res.inspect.should == "#<Net::HTTPUnknownResponse ??? test response readbody=false>"
        yielded = true
      end

      yielded.should be_true
    end

    describe "but the response type is not allowed to have a body" do
      before :each do
        @res = Net::HTTPInformation.new("1.0", "???", "test response")
      end

      it "returns nil" do
        @res.reading_body(@socket, false) {}.should be_nil
        @res.body.should be_nil
      end

      it "yields the passed block" do
        yielded = false
        @res.reading_body(@socket, true) { yielded = true }
        yielded.should be_true
      end
    end
  end

  describe "when body_allowed is false" do
    it "returns nil" do
      @res.reading_body(@socket, false) {}.should be_nil
      @res.body.should be_nil
    end

    it "yields the passed block" do
      yielded = false
      @res.reading_body(@socket, true) { yielded = true }
      yielded.should be_true
    end
  end
end
