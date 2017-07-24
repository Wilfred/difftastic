require 'socket'

module SocketSpecs
  # helper to get the hostname associated to 127.0.0.1
  def self.hostname
    # Calculate each time, without caching, since the result might
    # depend on things like do_not_reverse_lookup mode, which is
    # changing from test to test
    Socket.getaddrinfo("127.0.0.1", nil)[0][2]
  end

  def self.hostnamev6
    Socket.getaddrinfo("::1", nil)[0][2]
  end

  def self.addr(which=:ipv4)
    case which
    when :ipv4
      host = "127.0.0.1"
    when :ipv6
      host = "::1"
    end
    Socket.getaddrinfo(host, nil)[0][3]
  end

  def self.reserved_unused_port
    # https://en.wikipedia.org/wiki/List_of_TCP_and_UDP_port_numbers
    0
  end

  def self.sockaddr_in(port, host)
    Socket::SockAddr_In.new(Socket.sockaddr_in(port, host))
  end

  def self.socket_path
    path = tmp("unix.sock", false)
    # Check for too long unix socket path (max 108 bytes including \0 => 107)
    # Note that Linux accepts not null-terminated paths but the man page advises against it.
    if path.bytesize > 107
      path = "/tmp/unix_server_spec.socket"
    end
    rm_socket(path)
    path
  end

  def self.rm_socket(path)
    File.delete(path) if File.exist?(path)
  end

  # TCPServer echo server accepting one connection
  class SpecTCPServer
    attr_reader :hostname, :port

    def initialize
      @hostname = SocketSpecs.hostname
      @server = TCPServer.new @hostname, 0
      @port = @server.addr[1]

      log "SpecTCPServer starting on #{@hostname}:#{@port}"

      @thread = Thread.new do
        socket = @server.accept
        log "SpecTCPServer accepted connection: #{socket}"
        service socket
      end
    end

    def service(socket)
      begin
        data = socket.recv(1024)

        return if data.empty?
        log "SpecTCPServer received: #{data.inspect}"

        return if data == "QUIT"

        socket.send data, 0
      ensure
        socket.close
      end
    end

    def shutdown
      log "SpecTCPServer shutting down"
      @thread.join
      @server.close
    end

    def log(message)
      @logger.puts message if @logger
    end
  end
end
