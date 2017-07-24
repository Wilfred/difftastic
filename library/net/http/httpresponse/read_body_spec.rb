require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPResponse#read_body" do
  before :each do
    @res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    @socket = Net::BufferedIO.new(StringIO.new("test body"))
  end

  describe "when passed no arguments" do
    it "returns the read body" do
      @res.reading_body(@socket, true) do
        @res.read_body.should == "test body"
      end
    end

    it "returns the previously read body if called a second time" do
      @res.reading_body(@socket, true) do
        @res.read_body.should equal(@res.read_body)
      end
    end
  end

  describe "when passed a buffer" do
    it "reads the body to the passed buffer" do
      @res.reading_body(@socket, true) do
        buffer = ""
        @res.read_body(buffer)
        buffer.should == "test body"
      end
    end

    it "returns the passed buffer" do
      @res.reading_body(@socket, true) do
        buffer = ""
        @res.read_body(buffer).should equal(buffer)
      end
    end

    it "raises an IOError if called a second time" do
      @res.reading_body(@socket, true) do
        @res.read_body("")
        lambda { @res.read_body("") }.should raise_error(IOError)
      end
    end
  end

  describe "when passed a block" do
    it "reads the body and yields it to the passed block (in chunks)" do
      @res.reading_body(@socket, true) do
        yielded = false

        buffer = ""
        @res.read_body do |body|
          yielded = true
          buffer << body
        end

        yielded.should be_true
        buffer.should == "test body"
      end
    end

    it "returns the ReadAdapter" do
      @res.reading_body(@socket, true) do
        @res.read_body { nil }.should be_kind_of(Net::ReadAdapter)
      end
    end

    it "raises an IOError if called a second time" do
      @res.reading_body(@socket, true) do
        @res.read_body {}
        lambda { @res.read_body {} }.should raise_error(IOError)
      end
    end
  end

  describe "when passed buffer and block" do
    it "rauses an ArgumentError" do
      @res.reading_body(@socket, true) do
        lambda { @res.read_body("") {} }.should raise_error(ArgumentError)
      end
    end
  end
end

