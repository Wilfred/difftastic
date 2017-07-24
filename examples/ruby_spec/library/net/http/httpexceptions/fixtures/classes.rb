module NetHTTPExceptionsSpecs
  class Simple < StandardError
    include Net::HTTPExceptions
  end
end
