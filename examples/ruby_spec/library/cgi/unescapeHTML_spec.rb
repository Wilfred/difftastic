require File.expand_path('../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI.unescapeHTML" do
  it "unescapes '&amp; &lt; &gt; &quot;' to '& < > \"'" do
    input = '&amp; &lt; &gt; &quot;'
    expected = '& < > "'
    CGI.unescapeHTML(input).should == expected
  end

  it "doesn't unescape other html entities such as '&copy;' or '&heart'" do
    input = '&copy;&heart;'
    expected = input
    CGI.unescapeHTML(input).should == expected
  end

  it "unescapes '&#99' format entities" do
    input = '&#34;&#38;&#39;&#60;&#62;'
    expected = '"&\'<>'
    CGI.unescapeHTML(input).should == expected
  end

  it "unescapes '&#x9999' format entities" do
    input = '&#x0022;&#x0026;&#x0027;&#x003c;&#x003E;'
    expected = '"&\'<>'
    CGI.unescapeHTML(input).should == expected
  end

  it "leaves invalid formatted strings" do
    input = '&&lt;&amp&gt;&quot&abcdefghijklmn'
    expected = '&<&amp>&quot&abcdefghijklmn'
    CGI.unescapeHTML(input).should == expected
  end

  it "leaves partial invalid &# at end of string" do
    input = "fooooooo&#"
    CGI.unescapeHTML(input).should == input
  end
end
