describe :net_httpheader_each_capitalized, shared: true do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
    @headers["my-header"] = "test"
    @headers.add_field("my-Other-Header", "a")
    @headers.add_field("My-Other-header", "b")
  end

  describe "when passed a block" do
    it "yields each header entry to the passed block (capitalized keys, values joined)" do
      res = []
      @headers.send(@method) do |key, value|
        res << [key, value]
      end
      res.sort.should == [["My-Header", "test"], ["My-Other-Header", "a, b"]]
    end
  end

  describe "when passed no block" do
    it "returns an Enumerator" do
      enumerator = @headers.send(@method)
      enumerator.should be_an_instance_of(Enumerator)

      res = []
      enumerator.each do |*key|
        res << key
      end
      res.sort.should == [["My-Header", "test"], ["My-Other-Header", "a, b"]]
    end
  end
end
