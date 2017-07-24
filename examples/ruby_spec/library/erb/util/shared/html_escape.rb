describe :erb_util_html_escape, shared: true do
  it "escape (& < > \" ') to (&amp; &lt; &gt; &quot; &#39;)" do
    input = '& < > " \''
    expected = '&amp; &lt; &gt; &quot; &#39;'
    ERB::Util.__send__(@method, input).should == expected
  end

  it "not escape characters except (& < > \" ')" do
    input = (0x20..0x7E).to_a.collect {|ch| ch.chr}.join('')
    expected = input.
      gsub(/&/,'&amp;').
      gsub(/</,'&lt;').
      gsub(/>/,'&gt;').
      gsub(/'/,'&#39;').
      gsub(/"/,'&quot;')
    ERB::Util.__send__(@method, input).should == expected
  end

  it "return empty string when argument is nil" do
    input = nil
    expected = ''
    ERB::Util.__send__(@method, input).should == expected
  end

  it "returns string when argument is number" do
    input = 123
    expected = '123'
    ERB::Util.__send__(@method, input).should == expected
    input = 3.14159
    expected = '3.14159'
    ERB::Util.__send__(@method, input).should == expected
  end

  it "returns string when argument is boolean" do
    input = true
    expected = 'true'
    ERB::Util.__send__(@method, input).should == expected
    input = false
    expected = 'false'
    ERB::Util.__send__(@method, input).should == expected
  end
end
