module NetHTTPHeaderSpecs
  class Example
    include Net::HTTPHeader

    attr_accessor :body

    def initialize
      initialize_http_header({})
    end
  end
end
