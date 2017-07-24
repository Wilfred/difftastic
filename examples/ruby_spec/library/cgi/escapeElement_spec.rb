require File.expand_path('../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI.escapeElement when passed String, elements, ..." do
  it "escapes only the tags of the passed elements in the passed String" do
    res = CGI.escapeElement('<BR><A HREF="url"></A>', "A", "IMG")
    res.should == "<BR>&lt;A HREF=&quot;url&quot;&gt;&lt;/A&gt;"

    res = CGI.escapeElement('<BR><A HREF="url"></A>', ["A", "IMG"])
    res.should == "<BR>&lt;A HREF=&quot;url&quot;&gt;&lt;/A&gt;"
  end

  it "is case-insensitive" do
    res = CGI.escapeElement('<BR><A HREF="url"></A>', "a", "img")
    res.should == '<BR>&lt;A HREF=&quot;url&quot;&gt;&lt;/A&gt;'

    res = CGI.escapeElement('<br><a href="url"></a>', "A", "IMG")
    res.should == '<br>&lt;a href=&quot;url&quot;&gt;&lt;/a&gt;'
  end
end
