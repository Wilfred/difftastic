describe :net_httpresponse_body, shared: true do
  before :each do
    @res = Net::HTTPUnknownResponse.new("1.0", "???", "test response")
    @socket = Net::BufferedIO.new(StringIO.new("test body"))
  end

  it "returns the read body" do
    @res.reading_body(@socket, true) do
      @res.send(@method).should == "test body"
    end
  end

  it "returns the previously read body if called a second time" do
    @res.reading_body(@socket, true) do
      @res.send(@method).should equal(@res.send(@method))
    end
  end
end
