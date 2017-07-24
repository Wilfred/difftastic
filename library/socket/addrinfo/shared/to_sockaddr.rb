describe :socket_addrinfo_to_sockaddr, :shared => true do

  describe "for an ipv4 socket" do
    before :each do
      @addrinfo = Addrinfo.tcp("127.0.0.1", 80)
    end

    it "returns a sockaddr packed structure" do
      @addrinfo.send(@method).should be_kind_of(String)
    end
  end

  describe "for an ipv6 socket" do
    before :each do
      @addrinfo = Addrinfo.tcp("::1", 80)
    end

    it "returns a sockaddr packed structure" do
      @addrinfo.send(@method).should be_kind_of(String)
    end
  end

  platform_is_not :windows do
    describe "for a unix socket" do
      before :each do
        @addrinfo = Addrinfo.unix("/tmp/sock")
      end

      it "returns a sockaddr packed structure" do
        @addrinfo.send(@method).should be_kind_of(String)
      end
    end
  end

end
