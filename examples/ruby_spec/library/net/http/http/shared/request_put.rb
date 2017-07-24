describe :net_ftp_request_put, shared: true do
  before :each do
    NetHTTPSpecs.start_server
    @http = Net::HTTP.start("localhost", NetHTTPSpecs.port)
  end

  after :each do
    @http.finish if @http.started?
    NetHTTPSpecs.stop_server
  end

  describe "when passed no block" do
    it "sends a put request to the passed path and returns the response" do
      response = @http.send(@method, "/request", "test=test")
      response.body.should == "Request type: PUT"
    end

    it "returns a Net::HTTPResponse object" do
      response = @http.send(@method, "/request", "test=test")
      response.should be_kind_of(Net::HTTPResponse)
    end
  end

  describe "when passed a block" do
    it "sends a put request to the passed path and returns the response" do
      response = @http.send(@method, "/request", "test=test") {}
      response.body.should == "Request type: PUT"
    end

    it "yields the response to the passed block" do
      @http.send(@method, "/request", "test=test") do |response|
        response.body.should == "Request type: PUT"
      end
    end

    it "returns a Net::HTTPResponse object" do
      response = @http.send(@method, "/request", "test=test") {}
      response.should be_kind_of(Net::HTTPResponse)
    end
  end
end
