describe :net_httpheader_set_range, shared: true do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  describe "when passed nil" do
    it "returns nil" do
      @headers.send(@method, nil).should be_nil
    end

    it "deletes the 'Range' header entry" do
      @headers["Range"] = "bytes 0-499/1234"
      @headers.send(@method, nil)
      @headers["Range"].should be_nil
    end
  end

  describe "when passed Numeric" do
    it "sets the 'Range' header entry based on the passed Numeric" do
      @headers.send(@method, 10)
      @headers["Range"].should == "bytes=0-9"

      @headers.send(@method, -10)
      @headers["Range"].should == "bytes=-10"

      @headers.send(@method, 10.9)
      @headers["Range"].should == "bytes=0-9"
    end
  end

  describe "when passed Range" do
    it "sets the 'Range' header entry based on the passed Range" do
      @headers.send(@method, 10..200)
      @headers["Range"].should == "bytes=10-200"

      @headers.send(@method, 1..5)
      @headers["Range"].should == "bytes=1-5"

      @headers.send(@method, 1...5)
      @headers["Range"].should == "bytes=1-4"

      @headers.send(@method, 234..567)
      @headers["Range"].should == "bytes=234-567"

      @headers.send(@method, -5..-1)
      @headers["Range"].should == "bytes=-5"

      @headers.send(@method, 1..-1)
      @headers["Range"].should == "bytes=1-"
    end

    it "raises a Net::HTTPHeaderSyntaxError when the first Range element is negative" do
      lambda { @headers.send(@method, -10..5) }.should raise_error(Net::HTTPHeaderSyntaxError)
    end

    it "raises a Net::HTTPHeaderSyntaxError when the last Range element is negative" do
      lambda { @headers.send(@method, 10..-5) }.should raise_error(Net::HTTPHeaderSyntaxError)
    end

    it "raises a Net::HTTPHeaderSyntaxError when the last Range element is smaller than the first" do
      lambda { @headers.send(@method, 10..5) }.should raise_error(Net::HTTPHeaderSyntaxError)
    end
  end

  describe "when passed start, end" do
    it "sets the 'Range' header entry based on the passed start and length values" do
      @headers.send(@method, 10, 200)
      @headers["Range"].should == "bytes=10-209"

      @headers.send(@method, 1, 5)
      @headers["Range"].should == "bytes=1-5"

      @headers.send(@method, 234, 567)
      @headers["Range"].should == "bytes=234-800"
    end

    it "raises a Net::HTTPHeaderSyntaxError when start is negative" do
      lambda { @headers.send(@method, -10, 5) }.should raise_error(Net::HTTPHeaderSyntaxError)
    end

    it "raises a Net::HTTPHeaderSyntaxError when start + length is negative" do
      lambda { @headers.send(@method, 10, -15) }.should raise_error(Net::HTTPHeaderSyntaxError)
    end

    it "raises a Net::HTTPHeaderSyntaxError when length is negative" do
      lambda { @headers.send(@method, 10, -4) }.should raise_error(Net::HTTPHeaderSyntaxError)
    end
  end
end
