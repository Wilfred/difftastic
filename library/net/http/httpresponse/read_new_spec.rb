require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTPResponse.read_new" do
  it "creates a HTTPResponse object based on the response read from the passed socket" do
    socket = Net::BufferedIO.new(StringIO.new(<<EOS))
HTTP/1.1 200 OK
Content-Type: text/html; charset=utf-8

test-body
EOS
    response = Net::HTTPResponse.read_new(socket)

    response.should be_kind_of(Net::HTTPOK)
    response.code.should == "200"
    response["Content-Type"].should == "text/html; charset=utf-8"

    response.reading_body(socket, true) do
      response.body.should == "test-body\n"
    end
  end
end
