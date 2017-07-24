describe :net_httpheader_size, shared: true do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "returns the number of header entries in self" do
    @headers.send(@method).should eql(0)

    @headers["a"] = "b"
    @headers.send(@method).should eql(1)

    @headers["b"] = "b"
    @headers.send(@method).should eql(2)

    @headers["c"] = "c"
    @headers.send(@method).should eql(3)
  end
end
