describe :net_httpheader_set_content_type, shared: true do
  describe "when passed type, params" do
    before :each do
      @headers = NetHTTPHeaderSpecs::Example.new
    end

    it "sets the 'Content-Type' header entry based on the passed type and params" do
      @headers.send(@method, "text/html")
      @headers["Content-Type"].should == "text/html"

      @headers.send(@method, "text/html", "charset" => "utf-8")
      @headers["Content-Type"].should == "text/html; charset=utf-8"

      @headers.send(@method, "text/html", "charset" => "utf-8", "rubyspec" => "rocks")
      @headers["Content-Type"].split(/; /).sort.should == %w[charset=utf-8 rubyspec=rocks text/html]
    end
  end
end
