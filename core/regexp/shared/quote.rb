# -*- encoding: ascii-8bit -*-

describe :regexp_quote, shared: true do
  it "escapes any characters with special meaning in a regular expression" do
    Regexp.send(@method, '\*?{}.+^[]()- ').should == '\\\\\*\?\{\}\.\+\^\[\]\(\)\-\\ '
    Regexp.send(@method, "\*?{}.+^[]()- ").should == '\\*\\?\\{\\}\\.\\+\\^\\[\\]\\(\\)\\-\\ '
    Regexp.send(@method, '\n\r\f\t').should == '\\\\n\\\\r\\\\f\\\\t'
    Regexp.send(@method, "\n\r\f\t").should == '\\n\\r\\f\\t'
  end

  it "works with symbols" do
    Regexp.send(@method, :symbol).should == 'symbol'
  end

  it "sets the encoding of the result to US-ASCII if there are only US-ASCII characters present in the input String" do
    str = "abc".force_encoding("euc-jp")
    Regexp.send(@method, str).encoding.should == Encoding::US_ASCII
  end

  it "sets the encoding of the result to the encoding of the String if any non-US-ASCII characters are present in an input String with valid encoding" do
    str = "ありがとう".force_encoding("utf-8")
    str.valid_encoding?.should be_true
    Regexp.send(@method, str).encoding.should == Encoding::UTF_8
  end

  it "sets the encoding of the result to ASCII-8BIT if any non-US-ASCII characters are present in an input String with invalid encoding" do
    str = "\xff".force_encoding "us-ascii"
    str.valid_encoding?.should be_false
    Regexp.send(@method, "\xff").encoding.should == Encoding::ASCII_8BIT
  end
end
