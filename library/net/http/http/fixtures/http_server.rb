require 'webrick'
require 'webrick/httpservlet/abstract'

module NetHTTPSpecs
  class NullWriter
    def <<(s) end
    def puts(*args) end
    def print(*args) end
    def printf(*args) end
  end

  class SpecServlet < WEBrick::HTTPServlet::AbstractServlet
    def handle(req, res)
      reply(req, res)
    end

    %w{ do_GET do_HEAD do_POST do_PUT do_PROPPATCH do_LOCK do_UNLOCK
        do_OPTIONS do_PROPFIND do_DELETE do_MOVE do_COPY
        do_MKCOL do_TRACE }.each do |method|
      alias_method method.to_sym, :handle
    end
  end

  class RequestServlet < SpecServlet
    def reply(req, res)
      res.content_type = "text/plain"
      res.body = "Request type: #{req.request_method}"
    end
  end

  class RequestBodyServlet < SpecServlet
    def reply(req, res)
      res.content_type = "text/plain"
      res.body = req.body
    end
  end

  class RequestHeaderServlet < SpecServlet
    def reply(req, res)
      res.content_type = "text/plain"
      res.body = req.header.inspect
    end
  end

  class << self
    @server = nil
    @server_thread = nil

    def port
      raise "server not started" unless @server
      @server.config[:Port]
    end

    def start_server
      server_config = {
        BindAddress: "localhost",
        Port: 0,
        Logger: WEBrick::Log.new(NullWriter.new),
        AccessLog: [],
        ServerType: Thread
      }

      @server = WEBrick::HTTPServer.new(server_config)

      @server.mount_proc('/') do |req, res|
        res.content_type = "text/plain"
        res.body = "This is the index page."
      end
      @server.mount('/request', RequestServlet)
      @server.mount("/request/body", RequestBodyServlet)
      @server.mount("/request/header", RequestHeaderServlet)

      @server_thread = @server.start
    end

    def stop_server
      if @server
        begin
          @server.shutdown
        rescue Errno::EPIPE
          # Because WEBrick is not thread-safe and only catches IOError
        end
        @server = nil
      end
      if @server_thread
        @server_thread.join
        @server_thread = nil
      end
      timeout = WEBrick::Utils::TimeoutHandler
      timeout.terminate if timeout.respond_to?(:terminate)
    end
  end
end
