describe :cgi_query_extension_has_key_p, shared: true do
  before :each do
    ENV['REQUEST_METHOD'], @old_request_method = "GET", ENV['REQUEST_METHOD']
    ENV['QUERY_STRING'], @old_query_string = "one=a&two=b", ENV['QUERY_STRING']

    @cgi = CGI.new
  end

  after :each do
    ENV['REQUEST_METHOD'] = @old_request_method
    ENV['QUERY_STRING']   = @old_query_string
  end

  it "returns true when the passed key exists in the HTTP Query" do
    @cgi.send(@method, "one").should be_true
    @cgi.send(@method, "two").should be_true
    @cgi.send(@method, "three").should be_false
  end
end
