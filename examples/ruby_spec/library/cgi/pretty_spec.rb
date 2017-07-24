require File.expand_path('../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI.pretty when passed html" do
  it "indents the passed html String with two spaces" do
    CGI.pretty("<HTML><BODY></BODY></HTML>").should == <<-EOS
<HTML>
  <BODY>
  </BODY>
</HTML>
EOS
  end
end

describe "CGI.pretty when passed html, indentation_unit" do
  it "indents the passed html String with the passed indentation_unit" do
    CGI.pretty("<HTML><BODY></BODY></HTML>", "\t").should == <<-EOS
<HTML>
\t<BODY>
\t</BODY>
</HTML>
EOS
  end
end
