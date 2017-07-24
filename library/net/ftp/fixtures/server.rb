module NetFTPSpecs
  class DummyFTP
    attr_accessor :connect_message
    attr_reader :login_user, :login_pass, :login_acct

    # hostname or IP address
    attr_reader :hostname
    # port number
    attr_reader :server_port

    def initialize
      @hostname = "localhost"
      @server = TCPServer.new(@hostname, 0)
      @server_port = @server.addr[1]

      @handlers = {}
      @commands = []
      @connect_message = nil
    end

    def serve_once
      @thread = Thread.new do
        @socket = @server.accept
        @socket.setsockopt(Socket::SOL_SOCKET, Socket::SO_OOBINLINE, 1)
        begin
          handle_request
        ensure
          @socket.close
        end
      end
    end

    def handle_request
      # Send out the welcome message.
      response @connect_message || "220 Dummy FTP Server ready!"

      begin
        while command = @socket.recv(1024)
          command, argument = command.chomp.split(" ", 2)

          if command == "QUIT"
            self.response("221 OK, bye")
            break
          elsif proc_handler = @handlers[command.downcase.to_sym]
            if argument.nil?
              proc_handler.call(self)
            else
              proc_handler.call(self, argument)
            end
          else
            if argument.nil?
              self.send(command.downcase.to_sym)
            else
              self.send(command.downcase.to_sym, argument)
            end
          end
        end
      rescue => e
        self.error_response("Exception: #{e} #{e.backtrace.inspect}")
      end
    end

    def error_response(text)
      self.response("451 #{text}")
    end

    def response(text)
      @socket.puts(text) unless @socket.closed?
    end

    def stop
      @datasocket.close unless @datasocket.nil? || @datasocket.closed?
      @server.close
      @thread.join
    end


    ##
    def handle(sym, &block)
      @handlers[sym] = block
    end

    def should_receive(method)
      @handler_for = method
      self
    end

    def and_respond(text)
      @handlers[@handler_for] = lambda { |s, *args| s.response(text) }
    end

    ##
    # FTP methods
    ##

    def abor
      self.response("226 Closing data connection. (ABOR)")
    end

    def acct(account)
      @login_acct = account
      self.response("230 User '#{account}' logged in, proceed. (ACCT)")
    end

    def cdup
      self.response("200 Command okay. (CDUP)")
    end

    def cwd(dir)
      self.response("200 Command okay. (CWD #{dir})")
    end

    def dele(file)
      self.response("250 Requested file action okay, completed. (DELE #{file})")
    end

    def eprt(arg)
      _, _, host, port = arg.split("|")

      @datasocket = TCPSocket.new(host, port)
      self.response("200 port opened")
    end

    def help(param = :default)
      if param == :default
        self.response("211 System status, or system help reply. (HELP)")
      else
        self.response("211 System status, or system help reply. (HELP #{param})")
      end
    end

    def list(folder)
      self.response("150 opening ASCII connection for file list")
      @datasocket.puts("-rw-r--r--  1 spec  staff  507 17 Jul 18:41 last_response_code.rb")
      @datasocket.puts("-rw-r--r--  1 spec  staff   50 17 Jul 18:41 list.rb")
      @datasocket.puts("-rw-r--r--  1 spec  staff   48 17 Jul 18:41 pwd.rb")
      @datasocket.close()
      self.response("226 transfer complete (LIST #{folder})")
    end

    def mdtm(filename)
      self.response("213 19980705132316")
    end

    def mkd(foldername)
      self.response(%Q{257 "#{foldername.gsub('"', '""')}" created.})
    end

    def nlst(folder = nil)
      self.response("150 opening ASCII connection for file list")
      @datasocket.puts("last_response_code.rb")
      @datasocket.puts("list.rb")
      @datasocket.puts("pwd.rb")
      @datasocket.close()
      self.response("226 transfer complete (NLST#{folder ? " #{folder}" : ""})")
    end

    def noop
      self.response("200 Command okay. (NOOP)")
    end

    def pass(password)
      @login_pass = password
      self.response("230 User logged in, proceed. (PASS #{password})")
    end

    def port(arg)
      nums = arg.split(",")

      if nums[0] == "::1"
        # IPv6
        port = nums[1].to_i * 256 + nums[2].to_i
        host = nums[0]
      else
        # IPv4
        port = nums[4].to_i * 256 + nums[5].to_i
        host = nums[0..3].join(".")
      end

      @datasocket = TCPSocket.new(host, port)
      self.response("200 port opened")
    end

    def pwd
      self.response('257 "/some/dir/" - current directory')
    end

    def retr(file)
      self.response("125 Data transfer starting")
      if @restart_at && @restart_at == 20
        @datasocket.puts("of the file named '#{file}'.")
        @restart_at = nil
      else
        @datasocket.puts("This is the content")
        @datasocket.puts("of the file named '#{file}'.")
      end
      @datasocket.close()
      self.response("226 Closing data connection. (RETR #{file})")
    end

    def rest(at_bytes)
      @restart_at = at_bytes.to_i
      self.response("350 Requested file action pending further information. (REST)")
    end

    def rmd(folder)
      self.response("250 Requested file action okay, completed. (RMD #{folder})")
    end

    def rnfr(from)
      @rename_from = from
      self.response("350 Requested file action pending further information.")
    end

    def rnto(to)
      self.response("250 Requested file action okay, completed. (Renamed #{@rename_from} to #{to})")
      @rename_from = nil
    end

    def site(param)
      self.response("200 Command okay. (SITE #{param})")
    end

    def size(filename)
      if filename == "binary"
        self.response("213 24")
      else
        self.response("213 1024")
      end
    end

    def stat
      self.response("211 System status, or system help reply. (STAT)")
    end

    def stor(file)
      tmp_file = tmp("#{file}file", false)

      self.response("125 Data transfer starting.")

      mode = @restart_at ? "a" : "w"

      File.open(tmp_file, mode + "b") do |f|
        loop do
          data = @datasocket.recv(1024)
          break if !data || data.empty?
          f << data
        end
      end

      #@datasocket.close()
      self.response("200 OK, Data received. (STOR #{file})")
    end

    def appe(file)
      @restart_at = true
      stor(file)
    end

    def syst
      self.response("215 FTP Dummy Server (SYST)")
    end

    def type(type)
      self.response("200 TYPE switched to #{type}")
    end

    def user(name)
      @login_user = name
      self.response("230 User logged in, proceed. (USER #{name})")
    end
  end
end
