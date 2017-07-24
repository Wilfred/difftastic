describe :uri_parse, shared: true do
  it "returns a URI::HTTP object when parsing an HTTP URI" do
    @object.parse("http://www.example.com/").should be_kind_of(URI::HTTP)
  end

  it "populates the components of a parsed URI::HTTP, setting the port to 80 by default" do
    # general case
    URISpec.components(@object.parse("http://user:pass@example.com/path/?query=val&q2=val2#fragment")).should == {
      scheme: "http",
      userinfo: "user:pass",
      host: "example.com",
      port: 80,
      path: "/path/",
      query: "query=val&q2=val2",
      fragment: "fragment"
    }

    # multiple paths
    URISpec.components(@object.parse("http://a/b/c/d;p?q")).should == {
      scheme: "http",
      userinfo: nil,
      host: "a",
      port: 80,
      path: "/b/c/d;p",
      query: "q",
      fragment: nil
    }

    # multi-level domain
    URISpec.components(@object.parse('http://www.math.uio.no/faq/compression-faq/part1.html')).should == {
      scheme: "http",
      userinfo: nil,
      host: "www.math.uio.no",
      port: 80,
      path: "/faq/compression-faq/part1.html",
      query: nil,
      fragment: nil
    }
  end

  it "parses out the port number of a URI, when given" do
    @object.parse("http://example.com:8080/").port.should == 8080
  end

  it "returns a URI::HTTPS object when parsing an HTTPS URI" do
    @object.parse("https://important-intern-net.net").should be_kind_of(URI::HTTPS)
  end

  it "sets the port of a parsed https URI to 443 by default" do
    @object.parse("https://example.com/").port.should == 443
  end

  it "populates the components of a parsed URI::FTP object" do
    # generic, empty password.
    url = @object.parse("ftp://anonymous@ruby-lang.org/pub/ruby/1.8/ruby-1.8.6.tar.bz2;type=i")
    url.should be_kind_of(URI::FTP)
    URISpec.components(url).should == {
      scheme: "ftp",
      userinfo: "anonymous",
      host: "ruby-lang.org",
      port: 21,
      path: "pub/ruby/1.8/ruby-1.8.6.tar.bz2",
      typecode: "i"
    }

    # multidomain, no user or password
    url = @object.parse('ftp://ftp.is.co.za/rfc/rfc1808.txt')
    url.should be_kind_of(URI::FTP)
    URISpec.components(url).should == {
      scheme: "ftp",
      userinfo: nil,
      host: "ftp.is.co.za",
      port: 21,
      path: "rfc/rfc1808.txt",
      typecode: nil
    }

    # empty user
    url = @object.parse('ftp://:pass@localhost/')
    url.should be_kind_of(URI::FTP)
    URISpec.components(url).should == {
      scheme: "ftp",
      userinfo: ":pass",
      host: "localhost",
      port: 21,
      path: "",
      typecode: nil
    }
    url.password.should == "pass"
  end

  it "returns a URI::LDAP object when parsing an LDAP URI" do
    #taken from http://www.faqs.org/rfcs/rfc2255.html 'cause I don't really know what an LDAP url looks like
    ldap_uris = %w{ ldap:///o=University%20of%20Michigan,c=US ldap://ldap.itd.umich.edu/o=University%20of%20Michigan,c=US ldap://ldap.itd.umich.edu/o=University%20of%20Michigan,c=US?postalAddress ldap://host.com:6666/o=University%20of%20Michigan,c=US??sub?(cn=Babs%20Jensen) ldap://ldap.itd.umich.edu/c=GB?objectClass?one ldap://ldap.question.com/o=Question%3f,c=US?mail ldap://ldap.netscape.com/o=Babsco,c=US??(int=%5c00%5c00%5c00%5c04) ldap:///??sub??bindname=cn=Manager%2co=Foo ldap:///??sub??!bindname=cn=Manager%2co=Foo }
    ldap_uris.each do |ldap_uri|
      @object.parse(ldap_uri).should be_kind_of(URI::LDAP)
    end
  end

  it "populates the components of a parsed URI::LDAP object" do
    URISpec.components(@object.parse("ldap://ldap.itd.umich.edu/o=University%20of%20Michigan,c=US?postalAddress?scope?filter?extensions")).should == {
      scheme: "ldap",
      host: "ldap.itd.umich.edu",
      port: 389,
      dn: "o=University%20of%20Michigan,c=US",
      attributes: "postalAddress",
      scope: "scope",
      filter: "filter",
      extensions: "extensions"
    }
  end

  it "returns a URI::MailTo object when passed a mailto URI" do
    @object.parse("mailto:spam@mailinator.com").should be_kind_of(URI::MailTo)
  end

  it "populates the components of a parsed URI::MailTo object" do
    URISpec.components(@object.parse("mailto:spam@mailinator.com?subject=Discounts%20On%20Imported%20methods!!!&body=Exciting%20offer")).should == {
      scheme: "mailto",
      to: "spam@mailinator.com",
      headers: [["subject","Discounts%20On%20Imported%20methods!!!"],
                   ["body", "Exciting%20offer"]]
    }
  end

  # TODO
  # Test registry
  it "does its best to extract components from URI::Generic objects" do
    # generic
    URISpec.components(URI("scheme://userinfo@host/path?query#fragment")).should == {
      scheme: "scheme",
      userinfo: "userinfo",
      host: "host",
      port: nil,
      path: "/path",
      query: "query",
      fragment: "fragment",
      registry: nil,
      opaque: nil
    }

    # gopher
    gopher = @object.parse('gopher://spinaltap.micro.umn.edu/00/Weather/California/Los%20Angeles')
    gopher.should be_kind_of(URI::Generic)

    URISpec.components(gopher).should == {
      scheme: "gopher",
      userinfo: nil,
      host: "spinaltap.micro.umn.edu",
      port: nil,
      path: "/00/Weather/California/Los%20Angeles",
      query: nil,
      fragment: nil,
      registry: nil,
      opaque: nil
    }

    # news
    news = @object.parse('news:comp.infosystems.www.servers.unix')
    news.should be_kind_of(URI::Generic)
    URISpec.components(news).should == {
      scheme: "news",
      userinfo: nil,
      host: nil,
      port: nil,
      path: nil,
      query: nil,
      fragment: nil,
      registry: nil,
      opaque: "comp.infosystems.www.servers.unix"
    }

    # telnet
    telnet = @object.parse('telnet://melvyl.ucop.edu/')
    telnet.should be_kind_of(URI::Generic)
    URISpec.components(telnet).should == {
      scheme: "telnet",
      userinfo: nil,
      host: "melvyl.ucop.edu",
      port: nil,
      path: "/",
      query: nil,
      fragment: nil,
      registry: nil,
      opaque: nil
    }

    # files
    file_l = @object.parse('file:///foo/bar.txt')
    file_l.should be_kind_of(URI::Generic)
    file = @object.parse('file:/foo/bar.txt')
    file.should be_kind_of(URI::Generic)
  end

  it "raises errors on malformed URIs" do
    lambda { @object.parse('http://a_b:80/') }.should raise_error(URI::InvalidURIError)
    lambda { @object.parse('http://a_b/') }.should raise_error(URI::InvalidURIError)
  end
end
