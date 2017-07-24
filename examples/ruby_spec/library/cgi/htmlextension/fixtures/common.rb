module CGISpecs
  def self.cgi_new(html = "html4")
    old_request_method = ENV['REQUEST_METHOD']
    ENV['REQUEST_METHOD'] = "GET"
    begin
      CGI.new(tag_maker: html)
    ensure
      ENV['REQUEST_METHOD'] = old_request_method
    end
  end

  def self.split(string)
    string.split("<").reject { |x| x.empty? }.map { |x| "<#{x}" }
  end
end
