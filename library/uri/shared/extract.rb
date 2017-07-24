describe :uri_extract, shared: true do
  it "behaves according to its documentation" do
    @object.extract("text here http://foo.example.org/bla and here mailto:test@example.com and here also.").should == ["http://foo.example.org/bla", "mailto:test@example.com"]
  end

  it "treats contiguous URIs as a single URI" do
    @object.extract('http://example.jphttp://example.jp').should == ['http://example.jphttp://example.jp']
  end

  it "treats pretty much anything with a colon as a URI" do
    @object.extract('From: XXX [mailto:xxx@xxx.xxx.xxx]').should == ['From:', 'mailto:xxx@xxx.xxx.xxx]']
  end

  it "wraps a URI string in an array" do
    @object.extract("http://github.com/brixen/rubyspec/tree/master").should == ["http://github.com/brixen/rubyspec/tree/master"]
  end

  it "pulls a variety of protocol URIs from a string" do
    @object.extract("this is a string, it has http://rubini.us/ in it").should == ["http://rubini.us/"]
    @object.extract("mailto:spambait@example.com").should == ["mailto:spambait@example.com"]
    @object.extract("ftp://ruby-lang.org/").should == ["ftp://ruby-lang.org/"]
    @object.extract("https://mail.google.com").should == ["https://mail.google.com"]
    @object.extract("anything://example.com/").should == ["anything://example.com/"]
  end

  it "pulls all URIs within a string in order into an array when a block is not given" do
    @object.extract("1.3. Example URI

       The following examples illustrate URI that are in common use.

       ftp://ftp.is.co.za/rfc/rfc1808.txt
          -- ftp scheme for File Transfer Protocol services

       gopher://spinaltap.micro.umn.edu/00/Weather/California/Los%20Angeles
          -- gopher scheme for Gopher and Gopher+ Protocol services

       http://www.math.uio.no/faq/compression-faq/part1.html
          -- http scheme for Hypertext Transfer Protocol services

       mailto:mduerst@ifi.unizh.ch
          -- mailto scheme for electronic mail addresses

       news:comp.infosystems.www.servers.unix
          -- news scheme for USENET news groups and articles

       telnet://melvyl.ucop.edu/
          -- telnet scheme for interactive services via the TELNET Protocol
    ").should == ["ftp://ftp.is.co.za/rfc/rfc1808.txt","gopher://spinaltap.micro.umn.edu/00/Weather/California/Los%20Angeles","http://www.math.uio.no/faq/compression-faq/part1.html","mailto:mduerst@ifi.unizh.ch","news:comp.infosystems.www.servers.unix","telnet://melvyl.ucop.edu/"]
  end

  it "yields each URI in the given string in order to a block, if given, and returns nil" do
    results = ["http://foo.example.org/bla", "mailto:test@example.com"]
    @object.extract("text here http://foo.example.org/bla and here mailto:test@example.com and here also.") {|uri|
      uri.should == results.shift
    }.should == nil
    results.should == []
  end

  it "allows the user to specify a list of acceptable protocols of URIs to scan for" do
    @object.extract("1.3. Example URI

       The following examples illustrate URI that are in common use.

       ftp://ftp.is.co.za/rfc/rfc1808.txt
          -- ftp scheme for File Transfer Protocol services

       gopher://spinaltap.micro.umn.edu/00/Weather/California/Los%20Angeles
          -- gopher scheme for Gopher and Gopher+ Protocol services

       http://www.math.uio.no/faq/compression-faq/part1.html
          -- http scheme for Hypertext Transfer Protocol services

       mailto:mduerst@ifi.unizh.ch
          -- mailto scheme for electronic mail addresses

       news:comp.infosystems.www.servers.unix
          -- news scheme for USENET news groups and articles

       telnet://melvyl.ucop.edu/
          -- telnet scheme for interactive services via the TELNET Protocol
    ", ["http","ftp","mailto"]).should == ["ftp://ftp.is.co.za/rfc/rfc1808.txt","http://www.math.uio.no/faq/compression-faq/part1.html","mailto:mduerst@ifi.unizh.ch"]
  end
end
