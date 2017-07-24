require File.expand_path('../../../spec_helper', __FILE__)

describe "Regexp#inspect" do
  it "returns a formatted string that would eval to the same regexp" do
    not_supported_on :opal do
      /ab+c/ix.inspect.should == "/ab+c/ix"
      /a(.)+s/n.inspect.should =~ %r|/a(.)+s/n?|  # Default 'n' may not appear
    end
    # 1.9 doesn't round-trip the encoding flags, such as 'u'. This is
    # seemingly by design.
    /a(.)+s/m.inspect.should == "/a(.)+s/m"     # But a specified one does
  end

  it "returns options in the order 'mixn'" do
    //nixm.inspect.should == "//mixn"
  end

  it "does not include the 'o' option" do
    //o.inspect.should == "//"
  end

  it "does not include a character set code" do
    //u.inspect.should == "//"
    //s.inspect.should == "//"
    //e.inspect.should == "//"
  end

  it "correctly escapes forward slashes /" do
    Regexp.new("/foo/bar").inspect.should == "/\\/foo\\/bar/"
    Regexp.new("/foo/bar[/]").inspect.should == "/\\/foo\\/bar[\\/]/"
  end

  it "doesn't over escape forward slashes" do
    /\/foo\/bar/.inspect.should == '/\/foo\/bar/'
  end

  it "escapes 2 slashes in a row properly" do
    Regexp.new("//").inspect.should == '/\/\//'
  end

  it "does not over escape" do
    Regexp.new('\\\/').inspect.should == "/\\\\\\//"
  end
end
